/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* NGUITools$$get_soundVolume @ 0x72c59c
 * float NGUITools__get_soundVolume (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$get_soundVolume
   float NGUITools__get_soundVolume (const MethodInfo* method); */

undefined4 native_NGUITools__get_soundVolume_72c59c(void)

{
  long lVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  if ((bRam000000000133f580 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&StringLiteral_Sound_12f0f18);
    bRam000000000133f580 = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  pcVar2 = (char *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x10);
  lVar1 = _NGUITools_TypeInfo_12d53c8;
  if (*pcVar2 == '\0') {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
      pcVar2 = (char *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x10);
    }
    *pcVar2 = '\x01';
    uVar3 = native_UnityEngine_PlayerPrefs__GetFloat_761e58
                      (0x3f800000,_StringLiteral_Sound_12f0f18,0);
    lVar1 = _NGUITools_TypeInfo_12d53c8;
    *(undefined4 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x14) = uVar3;
  }
  if (((*(byte *)(lVar1 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar1 + 0xe0) == 0)) {
    native_sub_4327ec();
    lVar1 = _NGUITools_TypeInfo_12d53c8;
  }
  return *(undefined4 *)(*(long *)(lVar1 + 0xb8) + 0x14);
}



/* NGUITools$$set_soundVolume @ 0x72c67c
 * void NGUITools__set_soundVolume (float value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$set_soundVolume
   void NGUITools__set_soundVolume (float value, const MethodInfo* method); */

void native_NGUITools__set_soundVolume_72c67c(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
  if ((bRam000000000133f581 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&StringLiteral_Sound_12f0f18);
    bRam000000000133f581 = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  plVar4 = (long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8);
  lVar5 = *plVar4;
  if (*(float *)(lVar5 + 0x14) != (float)param_1) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
      plVar4 = (long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8);
      lVar5 = *plVar4;
    }
    *(undefined1 *)(lVar5 + 0x10) = 1;
    *(float *)(*plVar4 + 0x14) = (float)param_1;
    uVar2 = _StringLiteral_Sound_12f0f18;
    if (pcRam000000000133f770 == (code *)0x0) {
      pcRam000000000133f770 = (code *)native_sub_4326f0(&UNK_00e27a16,0);
    }
    uVar1 = (*pcRam000000000133f770)(param_1,uVar2);
    if ((uVar1 & 1) != 0) {
      return;
    }
    native_sub_432740(&UnityEngine_PlayerPrefsException_TypeInfo_12d56f8);
    uVar2 = native_sub_432808();
    uVar3 = native_sub_432740(&StringLiteral_Could_not_store_preference_value_12ed488);
    native_UnityEngine_PlayerPrefsException___ctor_761cf8(uVar2,uVar3);
    uVar3 = native_sub_432740(&Method_UnityEngine_PlayerPrefs_SetFloat___12e5de0);
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar2,uVar3);
  }
  return;
}



/* NGUITools$$get_fileAccess @ 0x72c754
 * bool NGUITools__get_fileAccess (const MethodInfo* method); */

/* NGUITools$$get_fileAccess
   bool NGUITools__get_fileAccess (const MethodInfo* method); */

bool native_NGUITools__get_fileAccess_72c754(void)

{
  int iVar1;
  
  iVar1 = native_UnityEngine_Application__get_platform_8d6250(0);
  return iVar1 != 0x11;
}



/* NGUITools$$PlaySound @ 0x72c774
 * UnityEngine_AudioSource_o* NGUITools__PlaySound (UnityEngine_AudioClip_o* clip, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$PlaySound
   UnityEngine_AudioSource_o* NGUITools__PlaySound (UnityEngine_AudioClip_o* clip, const MethodInfo*
   method); */

undefined8 native_NGUITools__PlaySound_72c774(undefined8 param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  float fVar7;
  
  if ((bRam000000000133f582 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f582 = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f584 & 1) == 0) {
    native_sub_43273c(&UnityEngine_AudioListener___TypeInfo_12d3020);
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
  fVar7 = (float)native_UnityEngine_Time__get_unscaledTime_770860(0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = *(undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,param_1,0);
  if ((uVar1 & 1) != 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    if (fVar7 < *(float *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x18) + 0.1) {
      return 0;
    }
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  puVar2 = (undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x20);
  *puVar2 = param_1;
  native_sub_4326e0(puVar2,param_1);
  *(float *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x18) = fVar7;
  fVar7 = (float)native_NGUITools__get_soundVolume_72c59c();
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(param_1,0,0);
  if (fVar7 * 1.0 <= 0.01) {
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
          uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar6,0);
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
          native_UnityEngine_AudioSource__set_pitch_dc0fe8(0x3f800000,lVar3,0);
          lVar3 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
          if (lVar3 != 0) {
            native_UnityEngine_AudioSource__PlayOneShot_dc10cc(fVar7 * 1.0,lVar3,param_1,0);
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



/* NGUITools$$PlaySound @ 0x72cfb0
 * UnityEngine_AudioSource_o* NGUITools__PlaySound (UnityEngine_AudioClip_o* clip, float volume, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$PlaySound
   UnityEngine_AudioSource_o* NGUITools__PlaySound (UnityEngine_AudioClip_o* clip, float volume,
   const MethodInfo* method); */

undefined8 native_NGUITools__PlaySound_72cfb0(float param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  float fVar7;
  
  if ((bRam000000000133f583 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f583 = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f584 & 1) == 0) {
    native_sub_43273c(&UnityEngine_AudioListener___TypeInfo_12d3020);
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
  fVar7 = (float)native_UnityEngine_Time__get_unscaledTime_770860(0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = *(undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,param_2,0);
  if ((uVar1 & 1) != 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    if (fVar7 < *(float *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x18) + 0.1) {
      return 0;
    }
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  puVar2 = (undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x20);
  *puVar2 = param_2;
  native_sub_4326e0(puVar2,param_2);
  *(float *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x18) = fVar7;
  fVar7 = (float)native_NGUITools__get_soundVolume_72c59c();
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(param_2,0,0);
  if (fVar7 * param_1 <= 0.01) {
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
          uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar6,0);
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
          native_UnityEngine_AudioSource__set_pitch_dc0fe8(0x3f800000,lVar3,0);
          lVar3 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
          if (lVar3 != 0) {
            native_UnityEngine_AudioSource__PlayOneShot_dc10cc(fVar7 * param_1,lVar3,param_2,0);
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



/* NGUITools$$PlaySound @ 0x72c7dc
 * UnityEngine_AudioSource_o* NGUITools__PlaySound (UnityEngine_AudioClip_o* clip, float volume, float pitch, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$PlaySound
   UnityEngine_AudioSource_o* NGUITools__PlaySound (UnityEngine_AudioClip_o* clip, float volume,
   float pitch, const MethodInfo* method); */

undefined8 native_NGUITools__PlaySound_72c7dc(float param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  float fVar7;
  
  if ((bRam000000000133f584 & 1) == 0) {
    native_sub_43273c(&UnityEngine_AudioListener___TypeInfo_12d3020);
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
  fVar7 = (float)native_UnityEngine_Time__get_unscaledTime_770860(0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = *(undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,param_3,0);
  if ((uVar1 & 1) != 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    if (fVar7 < *(float *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x18) + 0.1) {
      return 0;
    }
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  puVar2 = (undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x20);
  *puVar2 = param_3;
  native_sub_4326e0(puVar2,param_3);
  *(float *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x18) = fVar7;
  fVar7 = (float)native_NGUITools__get_soundVolume_72c59c();
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(param_3,0,0);
  if (fVar7 * param_1 <= 0.01) {
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
          uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar6,0);
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
          native_UnityEngine_AudioSource__set_pitch_dc0fe8(param_2,lVar3,0);
          lVar3 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 8);
          if (lVar3 != 0) {
            native_UnityEngine_AudioSource__PlayOneShot_dc10cc(fVar7 * param_1,lVar3,param_3,0);
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



/* NGUITools$$RandomRange @ 0x72d160
 * int32_t NGUITools__RandomRange (int32_t min, int32_t max, const MethodInfo* method); */

/* NGUITools$$RandomRange
   int32_t NGUITools__RandomRange (int32_t min, int32_t max, const MethodInfo* method); */

void native_NGUITools__RandomRange_72d160(int param_1,int param_2)

{
  if (param_1 == param_2) {
    return;
  }
  if (pcRam000000000133f828 == (code *)0x0) {
    pcRam000000000133f828 = (code *)native_sub_4326f0(&UNK_00e28082);
  }
                    /* WARNING: Could not recover jumptable at 0x007630f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000133f828)(param_1,param_2 + 1);
  return;
}



/* NGUITools$$GetHierarchy @ 0x72d178
 * System_String_o* NGUITools__GetHierarchy (UnityEngine_GameObject_o* obj, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$GetHierarchy
   System_String_o* NGUITools__GetHierarchy (UnityEngine_GameObject_o* obj, const MethodInfo*
   method); */

undefined8 native_NGUITools__GetHierarchy_72d178(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133f585 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral___12f33a8);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam000000000133f585 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(param_1,0,0);
  if ((uVar1 & 1) != 0) {
    return _StringLiteral__12eaac0;
  }
  if (param_1 != 0) {
    uVar2 = native_UnityEngine_Object__get_name_8e8098(param_1,0);
    lVar3 = native_UnityEngine_GameObject__get_transform_8de5c8(param_1,0);
    while (lVar3 != 0) {
      uVar4 = native_UnityEngine_Transform__get_parent_765eb0(lVar3,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
      if ((uVar1 & 1) == 0) {
        return uVar2;
      }
      lVar3 = native_UnityEngine_GameObject__get_transform_8de5c8(param_1,0);
      if (((lVar3 == 0) ||
          (lVar3 = native_UnityEngine_Transform__get_parent_765eb0(lVar3,0), lVar3 == 0)) ||
         (param_1 = native_UnityEngine_Component__get_gameObject_8da66c(lVar3,0), param_1 == 0))
      break;
      uVar4 = native_UnityEngine_Object__get_name_8e8098(param_1,0);
      uVar2 = native_System_String__Concat_afc654(uVar4,_StringLiteral___12f33a8,uVar2,0);
      lVar3 = native_UnityEngine_GameObject__get_transform_8de5c8(param_1,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$FindCameraForLayer @ 0x72d2e8
 * UnityEngine_Camera_o* NGUITools__FindCameraForLayer (int32_t layer, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$FindCameraForLayer
   UnityEngine_Camera_o* NGUITools__FindCameraForLayer (int32_t layer, const MethodInfo* method); */

long native_NGUITools__FindCameraForLayer_72d2e8(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  if ((bRam000000000133f586 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Camera___TypeInfo_12d3078);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam000000000133f586 = 1;
  }
  uVar3 = 0;
  uVar1 = 1 << (ulong)(param_1 & 0x1f);
  while( true ) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar9 = **(long **)(_UICamera_TypeInfo_12d6410 + 0xb8);
    if (lVar9 == 0) goto LAB_0072d548;
    if (*(int *)(lVar9 + 0x18) <= (int)uVar3) break;
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar9 = **(long **)(_UICamera_TypeInfo_12d6410 + 0xb8);
      if (lVar9 == 0) goto LAB_0072d548;
    }
    lVar9 = *(long *)(lVar9 + 0x10);
    if (lVar9 == 0) goto LAB_0072d548;
    if (*(uint *)(lVar9 + 0x18) <= uVar3) goto LAB_0072d54c;
    lVar9 = *(long *)(lVar9 + (long)(int)uVar3 * 8 + 0x20);
    if (lVar9 == 0) goto LAB_0072d548;
    lVar9 = native_UICamera__get_cachedCamera_c95254(lVar9,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar6 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar9,0);
    if ((uVar6 & 1) != 0) {
      if (lVar9 == 0) goto LAB_0072d548;
      uVar2 = native_UnityEngine_Camera__get_cullingMask_8d88b0(lVar9,0);
      if ((uVar2 & uVar1) != 0) {
        return lVar9;
      }
    }
    uVar3 = uVar3 + 1;
  }
  lVar9 = native_UnityEngine_Camera__get_main_8d93c0(0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar6 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar9,0);
  if ((uVar6 & 1) != 0) {
    if (lVar9 == 0) goto LAB_0072d548;
    uVar3 = native_UnityEngine_Camera__get_cullingMask_8d88b0(lVar9,0);
    if ((uVar3 & uVar1) != 0) {
      return lVar9;
    }
  }
  uVar4 = native_UnityEngine_Camera__get_allCamerasCount_8d949c(0);
  lVar9 = native_sub_432750(_UnityEngine_Camera___TypeInfo_12d3078,uVar4);
  iVar5 = native_UnityEngine_Camera__GetAllCameras_8d94d0(lVar9,0);
  if (0 < iVar5) {
    if (lVar9 == 0) {
LAB_0072d548:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar6 = 0;
    do {
      if (*(uint *)(lVar9 + 0x18) <= uVar6) {
LAB_0072d54c:
        uVar8 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar8,0);
      }
      lVar10 = *(long *)(lVar9 + 0x20 + uVar6 * 8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar7 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar10,0);
      if ((uVar7 & 1) != 0) {
        if (lVar10 == 0) goto LAB_0072d548;
        uVar7 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar10,0);
        if (((uVar7 & 1) != 0) &&
           (uVar3 = native_UnityEngine_Camera__get_cullingMask_8d88b0(lVar10,0),
           (uVar3 & uVar1) != 0)) {
          return lVar10;
        }
      }
      uVar6 = uVar6 + 1;
    } while ((long)uVar6 < (long)iVar5);
  }
  return 0;
}



/* NGUITools$$AddWidgetCollider @ 0x72d558
 * void NGUITools__AddWidgetCollider (UnityEngine_GameObject_o* go, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$AddWidgetCollider
   void NGUITools__AddWidgetCollider (UnityEngine_GameObject_o* go, const MethodInfo* method); */

void native_NGUITools__AddWidgetCollider_72d558
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  undefined4 uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam000000000133f587 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f587 = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f588 & 1) == 0) {
    native_sub_43273c(&UnityEngine_BoxCollider_TypeInfo_12d3bf0);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_BoxCollider2D____12e47c0);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_BoxCollider____12e47b8);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_BoxCollider2D____12e4948);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_Collider____12e4978);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam000000000133f588 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(param_5,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (param_5 == 0) goto LAB_0072d9c4;
  plVar3 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                             (param_5,
                              _Method_UnityEngine_GameObject_GetComponent_Collider____12e4978);
  if (plVar3 == (long *)0x0) {
LAB_0072d6cc:
    plVar4 = (long *)0x0;
  }
  else {
    if (*(byte *)(*plVar3 + 300) < *(byte *)(_UnityEngine_BoxCollider_TypeInfo_12d3bf0 + 300))
    goto LAB_0072d6cc;
    plVar4 = plVar3;
    if (*(long *)(*(long *)(*plVar3 + 200) +
                  (ulong)*(byte *)(_UnityEngine_BoxCollider_TypeInfo_12d3bf0 + 300) * 8 + -8) !=
        _UnityEngine_BoxCollider_TypeInfo_12d3bf0) {
      plVar4 = (long *)0x0;
    }
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar4,0,0);
  if ((uVar2 & 1) == 0) {
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar3,0,0);
    if ((uVar2 & 1) != 0) {
      return;
    }
    lVar5 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (param_5,_Method_UnityEngine_GameObject_GetComponent_BoxCollider2D____12e4948)
    ;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
    if ((uVar2 & 1) != 0) {
LAB_0072d7d8:
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      if ((bRam000000000133f58f & 1) == 0) {
        native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
        native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
        native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        native_sub_43273c(&StringLiteral_last_change_12f5390);
        bRam000000000133f58f = 1;
      }
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_80 = 0;
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      if ((lVar5 != 0) &&
         (lVar6 = native_UnityEngine_Component__get_gameObject_8da66c(lVar5,0), lVar6 != 0)) {
        plVar3 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                   (lVar6,
                                    _Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8)
        ;
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar3,0,0);
        if ((uVar2 & 1) == 0) {
          uVar11 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar6,0);
          if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
            native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
          }
          native_NGUIMath__CalculateRelativeWidgetBounds_805d80(&uStack_98,uVar11,0,0);
          uStack_70 = uStack_88;
          uStack_78 = uStack_90;
          uStack_80 = uStack_98;
          native_UnityEngine_Bounds__get_center_8d7d98(&uStack_80,0);
          native_UnityEngine_Collider2D__set_offset_db8bcc(lVar5,0);
          uVar11 = native_UnityEngine_Bounds__get_size_8d7ed8(&uStack_80,0);
          native_UnityEngine_Bounds__get_size_8d7ed8(&uStack_80,0);
          native_UnityEngine_BoxCollider2D__set_size_db8a30(uVar11,lVar5,0);
          return;
        }
        if (plVar3 != (long *)0x0) {
          lVar6 = *plVar3;
          if ((((*(float *)((long)plVar3 + 0x104) != 0.0) || (*(float *)(plVar3 + 0x21) != 0.0)) ||
              (param_2 = *(float *)((long)plVar3 + 0x10c), param_2 != 1.0)) ||
             (param_2 = *(float *)(plVar3 + 0x22), param_2 != 1.0)) {
            fVar7 = (float)(**(code **)(lVar6 + 0x2f8))(plVar3,*(undefined8 *)(lVar6 + 0x300));
            uVar2 = (ulong)(uint)(param_3 - fVar7);
            fVar12 = (fVar7 + param_3) * 0.5;
            fVar8 = (param_2 + param_4) * 0.5;
            param_4 = param_4 - param_2;
            fVar9 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar5,0);
            fVar9 = fVar12 - fVar9;
            param_2 = fVar8 - param_2;
            param_2 = param_2 * param_2;
            if ((fVar9 * fVar9 + param_2 < 9.9999994e-11) &&
               (fVar9 = (float)native_UnityEngine_BoxCollider2D__get_size_db8988(lVar5,0),
               fVar9 = (param_3 - fVar7) - fVar9,
               fVar9 * fVar9 + (param_4 - param_2) * (param_4 - param_2) < 9.9999994e-11)) {
              return;
            }
            native_UnityEngine_Collider2D__set_offset_db8bcc(fVar12,fVar8,lVar5,0);
LAB_0072e024:
            native_UnityEngine_BoxCollider2D__set_size_db8a30(uVar2,param_4,lVar5,0);
            if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
              return;
            }
            if (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) != 0) {
              return;
            }
            native_sub_4327ec();
            return;
          }
          lVar6 = (**(code **)(lVar6 + 0x1d8))(plVar3,*(undefined8 *)(lVar6 + 0x1e0));
          if (lVar6 != 0) {
            if ((*(uint *)(lVar6 + 0x18) != 0) && (2 < *(uint *)(lVar6 + 0x18))) {
              uVar11 = *(undefined8 *)(lVar6 + 0x20);
              uVar13 = *(undefined8 *)(lVar6 + 0x38);
              fVar7 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
              if (2 < *(uint *)(lVar6 + 0x18)) {
                uVar10 = *(undefined8 *)(lVar6 + 0x38);
                fVar9 = (float)uVar11;
                fVar12 = (float)((ulong)uVar11 >> 0x20);
                fVar9 = fVar9 + ((float)uVar13 - fVar9) * fVar7;
                fVar12 = fVar12 + ((float)((ulong)uVar13 >> 0x20) - fVar12) * fVar7;
                uVar11 = CONCAT44(fVar12,fVar9);
                fVar8 = (float)uVar10 - (float)*(undefined8 *)(lVar6 + 0x20);
                param_4 = (float)((ulong)uVar10 >> 0x20) -
                          (float)((ulong)*(undefined8 *)(lVar6 + 0x20) >> 0x20);
                uVar2 = CONCAT44(param_4,fVar8);
                fVar7 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar5,0);
                fVar9 = fVar9 - fVar7;
                fVar7 = fVar12 - (float)uVar10;
                if ((fVar9 * fVar9 + fVar7 * fVar7 < 9.9999994e-11) &&
                   (uVar13 = uVar11,
                   fVar7 = (float)native_UnityEngine_BoxCollider2D__get_size_db8988(lVar5,0),
                   fVar8 = fVar8 - fVar7, fVar7 = param_4 - (float)uVar13,
                   fVar8 * fVar8 + fVar7 * fVar7 < 9.9999994e-11)) {
                  return;
                }
                native_UnityEngine_Collider2D__set_offset_db8bcc(uVar11,fVar12,lVar5,0);
                goto LAB_0072e024;
              }
            }
            uVar11 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar11,0);
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar1 = native_UnityEngine_GameObject__get_layer_8de608(param_5,0);
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec(_UICamera_TypeInfo_12d6410);
    }
    lVar5 = native_UICamera__FindCameraForLayer_c96d2c(uVar1,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
    if ((uVar2 & 1) != 0) {
      if (lVar5 == 0) goto LAB_0072d9c4;
      if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 2) {
        lVar5 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                          (param_5,
                           _Method_UnityEngine_GameObject_AddComponent_BoxCollider2D____12e47c0);
        if (lVar5 == 0) goto LAB_0072d9c4;
        native_UnityEngine_Collider2D__set_isTrigger_db8ad4(lVar5,1,0);
        lVar6 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                          (param_5,_Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar6,0,0);
        if ((uVar2 & 1) != 0) {
          if (lVar6 == 0) goto LAB_0072d9c4;
          *(undefined1 *)(lVar6 + 0xd8) = 1;
        }
        goto LAB_0072d7d8;
      }
    }
    plVar4 = (long *)native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                               (param_5,
                                _Method_UnityEngine_GameObject_AddComponent_BoxCollider____12e47b8);
    if (plVar4 == (long *)0x0) {
LAB_0072d9c4:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_UnityEngine_Collider__set_isTrigger_dbacdc(plVar4,1,0);
    lVar5 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (param_5,_Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
    if ((uVar2 & 1) != 0) {
      if (lVar5 == 0) goto LAB_0072d9c4;
      *(undefined1 *)(lVar5 + 0xd8) = 1;
    }
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
  }
  else if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
          (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f58b & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f58b = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar4,0,0);
  if ((uVar2 & 1) != 0) {
    if ((plVar4 == (long *)0x0) ||
       (lVar5 = native_UnityEngine_Component__get_gameObject_8da66c(plVar4,0), lVar5 == 0)) {
LAB_0072dca4:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    plVar3 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                               (lVar5,
                                _Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar3,0,0);
    if ((uVar2 & 1) == 0) {
      uVar11 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar5,0);
      if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
      }
      native_NGUIMath__CalculateRelativeWidgetBounds_805d80(&uStack_88,uVar11,0,0);
      uStack_68 = uStack_80;
      uStack_70 = uStack_88;
      native_UnityEngine_Bounds__get_center_8d7d98(&uStack_70,0);
      native_UnityEngine_BoxCollider__set_center_dbaa0c(plVar4,0);
      uVar2 = native_UnityEngine_Bounds__get_size_8d7ed8(&uStack_70,0);
      native_UnityEngine_Bounds__get_size_8d7ed8(&uStack_70,0);
    }
    else {
      if (plVar3 == (long *)0x0) goto LAB_0072dca4;
      lVar5 = *plVar3;
      if ((((*(float *)((long)plVar3 + 0x104) == 0.0) && (*(float *)(plVar3 + 0x21) == 0.0)) &&
          (param_2 = *(float *)((long)plVar3 + 0x10c), param_2 == 1.0)) &&
         (param_2 = *(float *)(plVar3 + 0x22), param_2 == 1.0)) {
        lVar5 = (**(code **)(lVar5 + 0x1d8))(plVar3,*(undefined8 *)(lVar5 + 0x1e0));
        if (lVar5 == 0) goto LAB_0072dca4;
        if ((*(uint *)(lVar5 + 0x18) == 0) || (*(uint *)(lVar5 + 0x18) < 3)) {
LAB_0072dca8:
          uVar11 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar11,0);
        }
        uVar11 = *(undefined8 *)(lVar5 + 0x20);
        fVar12 = *(float *)(lVar5 + 0x28);
        uVar13 = *(undefined8 *)(lVar5 + 0x38);
        fVar14 = *(float *)(lVar5 + 0x40);
        fVar7 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
        fVar8 = (float)uVar11;
        fVar9 = (float)((ulong)uVar11 >> 0x20);
        fVar9 = fVar9 + ((float)((ulong)uVar13 >> 0x20) - fVar9) * fVar7;
        native_UnityEngine_BoxCollider__set_center_dbaa0c
                  (CONCAT44(fVar9,fVar8 + ((float)uVar13 - fVar8) * fVar7),fVar9,
                   fVar12 + (fVar14 - fVar12) * fVar7,plVar4,0);
        if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_0072dca8;
        uVar2 = CONCAT44((float)((ulong)*(undefined8 *)(lVar5 + 0x38) >> 0x20) -
                         (float)((ulong)*(undefined8 *)(lVar5 + 0x20) >> 0x20),
                         (float)*(undefined8 *)(lVar5 + 0x38) - (float)*(undefined8 *)(lVar5 + 0x20)
                        );
      }
      else {
        fVar7 = (float)(**(code **)(lVar5 + 0x2f8))(plVar3,*(undefined8 *)(lVar5 + 0x300));
        native_UnityEngine_BoxCollider__set_center_dbaa0c
                  ((fVar7 + param_3) * 0.5,(param_2 + param_4) * 0.5,0,plVar4,0);
        uVar2 = (ulong)(uint)(param_3 - fVar7);
      }
    }
    native_UnityEngine_BoxCollider__set_size_dbab64(uVar2,plVar4,0);
  }
  return;
}



/* NGUITools$$AddWidgetCollider @ 0x72d5bc
 * void NGUITools__AddWidgetCollider (UnityEngine_GameObject_o* go, bool considerInactive, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$AddWidgetCollider
   void NGUITools__AddWidgetCollider (UnityEngine_GameObject_o* go, bool considerInactive, const
   MethodInfo* method); */

void native_NGUITools__AddWidgetCollider_72d5bc
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
               uint param_6)

{
  undefined4 uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam000000000133f588 & 1) == 0) {
    native_sub_43273c(&UnityEngine_BoxCollider_TypeInfo_12d3bf0);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_BoxCollider2D____12e47c0);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_BoxCollider____12e47b8);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_BoxCollider2D____12e4948);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_Collider____12e4978);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam000000000133f588 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(param_5,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (param_5 == 0) goto LAB_0072d9c4;
  plVar3 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                             (param_5,
                              _Method_UnityEngine_GameObject_GetComponent_Collider____12e4978);
  if (plVar3 == (long *)0x0) {
LAB_0072d6cc:
    plVar4 = (long *)0x0;
  }
  else {
    if (*(byte *)(*plVar3 + 300) < *(byte *)(_UnityEngine_BoxCollider_TypeInfo_12d3bf0 + 300))
    goto LAB_0072d6cc;
    plVar4 = plVar3;
    if (*(long *)(*(long *)(*plVar3 + 200) +
                  (ulong)*(byte *)(_UnityEngine_BoxCollider_TypeInfo_12d3bf0 + 300) * 8 + -8) !=
        _UnityEngine_BoxCollider_TypeInfo_12d3bf0) {
      plVar4 = (long *)0x0;
    }
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar4,0,0);
  if ((uVar2 & 1) == 0) {
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar3,0,0);
    if ((uVar2 & 1) != 0) {
      return;
    }
    lVar5 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (param_5,_Method_UnityEngine_GameObject_GetComponent_BoxCollider2D____12e4948)
    ;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
    if ((uVar2 & 1) != 0) {
LAB_0072d7d8:
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      if ((bRam000000000133f58f & 1) == 0) {
        native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
        native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
        native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        native_sub_43273c(&StringLiteral_last_change_12f5390);
        bRam000000000133f58f = 1;
      }
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_80 = 0;
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      if ((lVar5 != 0) &&
         (lVar6 = native_UnityEngine_Component__get_gameObject_8da66c(lVar5,0), lVar6 != 0)) {
        plVar3 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                   (lVar6,
                                    _Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8)
        ;
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar3,0,0);
        if ((uVar2 & 1) == 0) {
          uVar11 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar6,0);
          if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
            native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
          }
          native_NGUIMath__CalculateRelativeWidgetBounds_805d80(&uStack_98,uVar11,param_6 & 1,0);
          uStack_70 = uStack_88;
          uStack_78 = uStack_90;
          uStack_80 = uStack_98;
          native_UnityEngine_Bounds__get_center_8d7d98(&uStack_80,0);
          native_UnityEngine_Collider2D__set_offset_db8bcc(lVar5,0);
          uVar11 = native_UnityEngine_Bounds__get_size_8d7ed8(&uStack_80,0);
          native_UnityEngine_Bounds__get_size_8d7ed8(&uStack_80,0);
          native_UnityEngine_BoxCollider2D__set_size_db8a30(uVar11,lVar5,0);
          return;
        }
        if (plVar3 != (long *)0x0) {
          lVar6 = *plVar3;
          if ((((*(float *)((long)plVar3 + 0x104) != 0.0) || (*(float *)(plVar3 + 0x21) != 0.0)) ||
              (param_2 = *(float *)((long)plVar3 + 0x10c), param_2 != 1.0)) ||
             (param_2 = *(float *)(plVar3 + 0x22), param_2 != 1.0)) {
            fVar7 = (float)(**(code **)(lVar6 + 0x2f8))(plVar3,*(undefined8 *)(lVar6 + 0x300));
            uVar2 = (ulong)(uint)(param_3 - fVar7);
            fVar12 = (fVar7 + param_3) * 0.5;
            fVar8 = (param_2 + param_4) * 0.5;
            param_4 = param_4 - param_2;
            fVar9 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar5,0);
            fVar9 = fVar12 - fVar9;
            param_2 = fVar8 - param_2;
            param_2 = param_2 * param_2;
            if ((fVar9 * fVar9 + param_2 < 9.9999994e-11) &&
               (fVar9 = (float)native_UnityEngine_BoxCollider2D__get_size_db8988(lVar5,0),
               fVar9 = (param_3 - fVar7) - fVar9,
               fVar9 * fVar9 + (param_4 - param_2) * (param_4 - param_2) < 9.9999994e-11)) {
              return;
            }
            native_UnityEngine_Collider2D__set_offset_db8bcc(fVar12,fVar8,lVar5,0);
LAB_0072e024:
            native_UnityEngine_BoxCollider2D__set_size_db8a30(uVar2,param_4,lVar5,0);
            if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
              return;
            }
            if (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) != 0) {
              return;
            }
            native_sub_4327ec();
            return;
          }
          lVar6 = (**(code **)(lVar6 + 0x1d8))(plVar3,*(undefined8 *)(lVar6 + 0x1e0));
          if (lVar6 != 0) {
            if ((*(uint *)(lVar6 + 0x18) != 0) && (2 < *(uint *)(lVar6 + 0x18))) {
              uVar11 = *(undefined8 *)(lVar6 + 0x20);
              uVar13 = *(undefined8 *)(lVar6 + 0x38);
              fVar7 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
              if (2 < *(uint *)(lVar6 + 0x18)) {
                uVar10 = *(undefined8 *)(lVar6 + 0x38);
                fVar9 = (float)uVar11;
                fVar12 = (float)((ulong)uVar11 >> 0x20);
                fVar9 = fVar9 + ((float)uVar13 - fVar9) * fVar7;
                fVar12 = fVar12 + ((float)((ulong)uVar13 >> 0x20) - fVar12) * fVar7;
                uVar11 = CONCAT44(fVar12,fVar9);
                fVar8 = (float)uVar10 - (float)*(undefined8 *)(lVar6 + 0x20);
                param_4 = (float)((ulong)uVar10 >> 0x20) -
                          (float)((ulong)*(undefined8 *)(lVar6 + 0x20) >> 0x20);
                uVar2 = CONCAT44(param_4,fVar8);
                fVar7 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar5,0);
                fVar9 = fVar9 - fVar7;
                fVar7 = fVar12 - (float)uVar10;
                if ((fVar9 * fVar9 + fVar7 * fVar7 < 9.9999994e-11) &&
                   (uVar13 = uVar11,
                   fVar7 = (float)native_UnityEngine_BoxCollider2D__get_size_db8988(lVar5,0),
                   fVar8 = fVar8 - fVar7, fVar7 = param_4 - (float)uVar13,
                   fVar8 * fVar8 + fVar7 * fVar7 < 9.9999994e-11)) {
                  return;
                }
                native_UnityEngine_Collider2D__set_offset_db8bcc(uVar11,fVar12,lVar5,0);
                goto LAB_0072e024;
              }
            }
            uVar11 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar11,0);
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar1 = native_UnityEngine_GameObject__get_layer_8de608(param_5,0);
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec(_UICamera_TypeInfo_12d6410);
    }
    lVar5 = native_UICamera__FindCameraForLayer_c96d2c(uVar1,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
    if ((uVar2 & 1) != 0) {
      if (lVar5 == 0) goto LAB_0072d9c4;
      if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 2) {
        lVar5 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                          (param_5,
                           _Method_UnityEngine_GameObject_AddComponent_BoxCollider2D____12e47c0);
        if (lVar5 == 0) goto LAB_0072d9c4;
        native_UnityEngine_Collider2D__set_isTrigger_db8ad4(lVar5,1,0);
        lVar6 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                          (param_5,_Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar6,0,0);
        if ((uVar2 & 1) != 0) {
          if (lVar6 == 0) goto LAB_0072d9c4;
          *(undefined1 *)(lVar6 + 0xd8) = 1;
        }
        goto LAB_0072d7d8;
      }
    }
    plVar4 = (long *)native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                               (param_5,
                                _Method_UnityEngine_GameObject_AddComponent_BoxCollider____12e47b8);
    if (plVar4 == (long *)0x0) {
LAB_0072d9c4:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_UnityEngine_Collider__set_isTrigger_dbacdc(plVar4,1,0);
    lVar5 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (param_5,_Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
    if ((uVar2 & 1) != 0) {
      if (lVar5 == 0) goto LAB_0072d9c4;
      *(undefined1 *)(lVar5 + 0xd8) = 1;
    }
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
  }
  else if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
          (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f58b & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f58b = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar4,0,0);
  if ((uVar2 & 1) != 0) {
    if ((plVar4 == (long *)0x0) ||
       (lVar5 = native_UnityEngine_Component__get_gameObject_8da66c(plVar4,0), lVar5 == 0)) {
LAB_0072dca4:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    plVar3 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                               (lVar5,
                                _Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar3,0,0);
    if ((uVar2 & 1) == 0) {
      uVar11 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar5,0);
      if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
      }
      native_NGUIMath__CalculateRelativeWidgetBounds_805d80(&uStack_88,uVar11,param_6 & 1,0);
      uStack_68 = uStack_80;
      uStack_70 = uStack_88;
      native_UnityEngine_Bounds__get_center_8d7d98(&uStack_70,0);
      native_UnityEngine_BoxCollider__set_center_dbaa0c(plVar4,0);
      uVar2 = native_UnityEngine_Bounds__get_size_8d7ed8(&uStack_70,0);
      native_UnityEngine_Bounds__get_size_8d7ed8(&uStack_70,0);
    }
    else {
      if (plVar3 == (long *)0x0) goto LAB_0072dca4;
      lVar5 = *plVar3;
      if ((((*(float *)((long)plVar3 + 0x104) == 0.0) && (*(float *)(plVar3 + 0x21) == 0.0)) &&
          (param_2 = *(float *)((long)plVar3 + 0x10c), param_2 == 1.0)) &&
         (param_2 = *(float *)(plVar3 + 0x22), param_2 == 1.0)) {
        lVar5 = (**(code **)(lVar5 + 0x1d8))(plVar3,*(undefined8 *)(lVar5 + 0x1e0));
        if (lVar5 == 0) goto LAB_0072dca4;
        if ((*(uint *)(lVar5 + 0x18) == 0) || (*(uint *)(lVar5 + 0x18) < 3)) {
LAB_0072dca8:
          uVar11 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar11,0);
        }
        uVar11 = *(undefined8 *)(lVar5 + 0x20);
        fVar12 = *(float *)(lVar5 + 0x28);
        uVar13 = *(undefined8 *)(lVar5 + 0x38);
        fVar14 = *(float *)(lVar5 + 0x40);
        fVar7 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
        fVar8 = (float)uVar11;
        fVar9 = (float)((ulong)uVar11 >> 0x20);
        fVar9 = fVar9 + ((float)((ulong)uVar13 >> 0x20) - fVar9) * fVar7;
        native_UnityEngine_BoxCollider__set_center_dbaa0c
                  (CONCAT44(fVar9,fVar8 + ((float)uVar13 - fVar8) * fVar7),fVar9,
                   fVar12 + (fVar14 - fVar12) * fVar7,plVar4,0);
        if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_0072dca8;
        uVar2 = CONCAT44((float)((ulong)*(undefined8 *)(lVar5 + 0x38) >> 0x20) -
                         (float)((ulong)*(undefined8 *)(lVar5 + 0x20) >> 0x20),
                         (float)*(undefined8 *)(lVar5 + 0x38) - (float)*(undefined8 *)(lVar5 + 0x20)
                        );
      }
      else {
        fVar7 = (float)(**(code **)(lVar5 + 0x2f8))(plVar3,*(undefined8 *)(lVar5 + 0x300));
        native_UnityEngine_BoxCollider__set_center_dbaa0c
                  ((fVar7 + param_3) * 0.5,(param_2 + param_4) * 0.5,0,plVar4,0);
        uVar2 = (ulong)(uint)(param_3 - fVar7);
      }
    }
    native_UnityEngine_BoxCollider__set_size_dbab64(uVar2,plVar4,0);
  }
  return;
}



/* NGUITools$$UpdateWidgetCollider @ 0x72e07c
 * void NGUITools__UpdateWidgetCollider (UnityEngine_GameObject_o* go, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$UpdateWidgetCollider
   void NGUITools__UpdateWidgetCollider (UnityEngine_GameObject_o* go, const MethodInfo* method); */

void native_NGUITools__UpdateWidgetCollider_72e07c
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam000000000133f589 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f589 = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f58a & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_BoxCollider2D____12e4948);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_BoxCollider____12e4940);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f58a = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(param_5,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                    (param_5,_Method_UnityEngine_GameObject_GetComponent_BoxCollider____12e4940);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar4,0,0);
  if ((uVar3 & 1) == 0) {
    lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (param_5,_Method_UnityEngine_GameObject_GetComponent_BoxCollider2D____12e4948)
    ;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar4,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if ((bRam000000000133f58f & 1) == 0) {
      native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
      native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
      native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
      native_sub_43273c(&StringLiteral_last_change_12f5390);
      bRam000000000133f58f = 1;
    }
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar4,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if ((lVar4 != 0) &&
       (lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0), lVar1 != 0)) {
      plVar2 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                 (lVar1,
                                  _Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar2,0,0);
      if ((uVar3 & 1) == 0) {
        uVar9 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar1,0);
        if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
        native_NGUIMath__CalculateRelativeWidgetBounds_805d80(&uStack_98,uVar9,0,0);
        uStack_70 = uStack_88;
        uStack_78 = uStack_90;
        uStack_80 = uStack_98;
        native_UnityEngine_Bounds__get_center_8d7d98(&uStack_80,0);
        native_UnityEngine_Collider2D__set_offset_db8bcc(lVar4,0);
        uVar9 = native_UnityEngine_Bounds__get_size_8d7ed8(&uStack_80,0);
        native_UnityEngine_Bounds__get_size_8d7ed8(&uStack_80,0);
        native_UnityEngine_BoxCollider2D__set_size_db8a30(uVar9,lVar4,0);
        return;
      }
      if (plVar2 != (long *)0x0) {
        lVar1 = *plVar2;
        if ((((*(float *)((long)plVar2 + 0x104) != 0.0) || (*(float *)(plVar2 + 0x21) != 0.0)) ||
            (param_2 = *(float *)((long)plVar2 + 0x10c), param_2 != 1.0)) ||
           (param_2 = *(float *)(plVar2 + 0x22), param_2 != 1.0)) {
          fVar5 = (float)(**(code **)(lVar1 + 0x2f8))(plVar2,*(undefined8 *)(lVar1 + 0x300));
          uVar3 = (ulong)(uint)(param_3 - fVar5);
          fVar10 = (fVar5 + param_3) * 0.5;
          fVar6 = (param_2 + param_4) * 0.5;
          param_4 = param_4 - param_2;
          fVar7 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar4,0);
          fVar7 = fVar10 - fVar7;
          param_2 = fVar6 - param_2;
          param_2 = param_2 * param_2;
          if ((fVar7 * fVar7 + param_2 < 9.9999994e-11) &&
             (fVar7 = (float)native_UnityEngine_BoxCollider2D__get_size_db8988(lVar4,0),
             fVar7 = (param_3 - fVar5) - fVar7,
             fVar7 * fVar7 + (param_4 - param_2) * (param_4 - param_2) < 9.9999994e-11)) {
            return;
          }
          native_UnityEngine_Collider2D__set_offset_db8bcc(fVar10,fVar6,lVar4,0);
LAB_0072e024:
          native_UnityEngine_BoxCollider2D__set_size_db8a30(uVar3,param_4,lVar4,0);
          if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
            return;
          }
          if (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) != 0) {
            return;
          }
          native_sub_4327ec();
          return;
        }
        lVar1 = (**(code **)(lVar1 + 0x1d8))(plVar2,*(undefined8 *)(lVar1 + 0x1e0));
        if (lVar1 != 0) {
          if ((*(uint *)(lVar1 + 0x18) != 0) && (2 < *(uint *)(lVar1 + 0x18))) {
            uVar9 = *(undefined8 *)(lVar1 + 0x20);
            uVar11 = *(undefined8 *)(lVar1 + 0x38);
            fVar5 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
            if (2 < *(uint *)(lVar1 + 0x18)) {
              uVar8 = *(undefined8 *)(lVar1 + 0x38);
              fVar7 = (float)uVar9;
              fVar10 = (float)((ulong)uVar9 >> 0x20);
              fVar7 = fVar7 + ((float)uVar11 - fVar7) * fVar5;
              fVar10 = fVar10 + ((float)((ulong)uVar11 >> 0x20) - fVar10) * fVar5;
              uVar9 = CONCAT44(fVar10,fVar7);
              fVar6 = (float)uVar8 - (float)*(undefined8 *)(lVar1 + 0x20);
              param_4 = (float)((ulong)uVar8 >> 0x20) -
                        (float)((ulong)*(undefined8 *)(lVar1 + 0x20) >> 0x20);
              uVar3 = CONCAT44(param_4,fVar6);
              fVar5 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar4,0);
              fVar7 = fVar7 - fVar5;
              fVar5 = fVar10 - (float)uVar8;
              if ((fVar7 * fVar7 + fVar5 * fVar5 < 9.9999994e-11) &&
                 (uVar11 = uVar9,
                 fVar5 = (float)native_UnityEngine_BoxCollider2D__get_size_db8988(lVar4,0),
                 fVar6 = fVar6 - fVar5, fVar5 = param_4 - (float)uVar11,
                 fVar6 * fVar6 + fVar5 * fVar5 < 9.9999994e-11)) {
                return;
              }
              native_UnityEngine_Collider2D__set_offset_db8bcc(uVar9,fVar10,lVar4,0);
              goto LAB_0072e024;
            }
          }
          uVar9 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar9,0);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f58b & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f58b = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar4,0,0);
  if ((uVar3 & 1) != 0) {
    if ((lVar4 == 0) ||
       (lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0), lVar1 == 0)) {
LAB_0072dca4:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    plVar2 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                               (lVar1,
                                _Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar2,0,0);
    if ((uVar3 & 1) == 0) {
      uVar9 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar1,0);
      if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
      }
      native_NGUIMath__CalculateRelativeWidgetBounds_805d80(&uStack_88,uVar9,0,0);
      uStack_68 = uStack_80;
      uStack_70 = uStack_88;
      native_UnityEngine_Bounds__get_center_8d7d98(&uStack_70,0);
      native_UnityEngine_BoxCollider__set_center_dbaa0c(lVar4,0);
      uVar3 = native_UnityEngine_Bounds__get_size_8d7ed8(&uStack_70,0);
      native_UnityEngine_Bounds__get_size_8d7ed8(&uStack_70,0);
    }
    else {
      if (plVar2 == (long *)0x0) goto LAB_0072dca4;
      lVar1 = *plVar2;
      if ((((*(float *)((long)plVar2 + 0x104) == 0.0) && (*(float *)(plVar2 + 0x21) == 0.0)) &&
          (param_2 = *(float *)((long)plVar2 + 0x10c), param_2 == 1.0)) &&
         (param_2 = *(float *)(plVar2 + 0x22), param_2 == 1.0)) {
        lVar1 = (**(code **)(lVar1 + 0x1d8))(plVar2,*(undefined8 *)(lVar1 + 0x1e0));
        if (lVar1 == 0) goto LAB_0072dca4;
        if ((*(uint *)(lVar1 + 0x18) == 0) || (*(uint *)(lVar1 + 0x18) < 3)) {
LAB_0072dca8:
          uVar9 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar9,0);
        }
        uVar9 = *(undefined8 *)(lVar1 + 0x20);
        fVar10 = *(float *)(lVar1 + 0x28);
        uVar11 = *(undefined8 *)(lVar1 + 0x38);
        fVar12 = *(float *)(lVar1 + 0x40);
        fVar5 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
        fVar6 = (float)uVar9;
        fVar7 = (float)((ulong)uVar9 >> 0x20);
        fVar7 = fVar7 + ((float)((ulong)uVar11 >> 0x20) - fVar7) * fVar5;
        native_UnityEngine_BoxCollider__set_center_dbaa0c
                  (CONCAT44(fVar7,fVar6 + ((float)uVar11 - fVar6) * fVar5),fVar7,
                   fVar10 + (fVar12 - fVar10) * fVar5,lVar4,0);
        if (*(uint *)(lVar1 + 0x18) < 3) goto LAB_0072dca8;
        uVar3 = CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x38) >> 0x20) -
                         (float)((ulong)*(undefined8 *)(lVar1 + 0x20) >> 0x20),
                         (float)*(undefined8 *)(lVar1 + 0x38) - (float)*(undefined8 *)(lVar1 + 0x20)
                        );
      }
      else {
        fVar5 = (float)(**(code **)(lVar1 + 0x2f8))(plVar2,*(undefined8 *)(lVar1 + 0x300));
        native_UnityEngine_BoxCollider__set_center_dbaa0c
                  ((fVar5 + param_3) * 0.5,(param_2 + param_4) * 0.5,0,lVar4,0);
        uVar3 = (ulong)(uint)(param_3 - fVar5);
      }
    }
    native_UnityEngine_BoxCollider__set_size_dbab64(uVar3,lVar4,0);
  }
  return;
}



/* NGUITools$$UpdateWidgetCollider @ 0x72e0e0
 * void NGUITools__UpdateWidgetCollider (UnityEngine_GameObject_o* go, bool considerInactive, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$UpdateWidgetCollider
   void NGUITools__UpdateWidgetCollider (UnityEngine_GameObject_o* go, bool considerInactive, const
   MethodInfo* method); */

void native_NGUITools__UpdateWidgetCollider_72e0e0
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
               uint param_6)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam000000000133f58a & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_BoxCollider2D____12e4948);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_BoxCollider____12e4940);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f58a = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(param_5,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                    (param_5,_Method_UnityEngine_GameObject_GetComponent_BoxCollider____12e4940);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar4,0,0);
  if ((uVar3 & 1) == 0) {
    lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (param_5,_Method_UnityEngine_GameObject_GetComponent_BoxCollider2D____12e4948)
    ;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar4,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if ((bRam000000000133f58f & 1) == 0) {
      native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
      native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
      native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
      native_sub_43273c(&StringLiteral_last_change_12f5390);
      bRam000000000133f58f = 1;
    }
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar4,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if ((lVar4 != 0) &&
       (lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0), lVar1 != 0)) {
      plVar2 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                 (lVar1,
                                  _Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar2,0,0);
      if ((uVar3 & 1) == 0) {
        uVar9 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar1,0);
        if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
        native_NGUIMath__CalculateRelativeWidgetBounds_805d80(&uStack_98,uVar9,param_6 & 1,0);
        uStack_70 = uStack_88;
        uStack_78 = uStack_90;
        uStack_80 = uStack_98;
        native_UnityEngine_Bounds__get_center_8d7d98(&uStack_80,0);
        native_UnityEngine_Collider2D__set_offset_db8bcc(lVar4,0);
        uVar9 = native_UnityEngine_Bounds__get_size_8d7ed8(&uStack_80,0);
        native_UnityEngine_Bounds__get_size_8d7ed8(&uStack_80,0);
        native_UnityEngine_BoxCollider2D__set_size_db8a30(uVar9,lVar4,0);
        return;
      }
      if (plVar2 != (long *)0x0) {
        lVar1 = *plVar2;
        if ((((*(float *)((long)plVar2 + 0x104) != 0.0) || (*(float *)(plVar2 + 0x21) != 0.0)) ||
            (param_2 = *(float *)((long)plVar2 + 0x10c), param_2 != 1.0)) ||
           (param_2 = *(float *)(plVar2 + 0x22), param_2 != 1.0)) {
          fVar5 = (float)(**(code **)(lVar1 + 0x2f8))(plVar2,*(undefined8 *)(lVar1 + 0x300));
          uVar3 = (ulong)(uint)(param_3 - fVar5);
          fVar10 = (fVar5 + param_3) * 0.5;
          fVar6 = (param_2 + param_4) * 0.5;
          param_4 = param_4 - param_2;
          fVar7 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar4,0);
          fVar7 = fVar10 - fVar7;
          param_2 = fVar6 - param_2;
          param_2 = param_2 * param_2;
          if ((fVar7 * fVar7 + param_2 < 9.9999994e-11) &&
             (fVar7 = (float)native_UnityEngine_BoxCollider2D__get_size_db8988(lVar4,0),
             fVar7 = (param_3 - fVar5) - fVar7,
             fVar7 * fVar7 + (param_4 - param_2) * (param_4 - param_2) < 9.9999994e-11)) {
            return;
          }
          native_UnityEngine_Collider2D__set_offset_db8bcc(fVar10,fVar6,lVar4,0);
LAB_0072e024:
          native_UnityEngine_BoxCollider2D__set_size_db8a30(uVar3,param_4,lVar4,0);
          if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
            return;
          }
          if (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) != 0) {
            return;
          }
          native_sub_4327ec();
          return;
        }
        lVar1 = (**(code **)(lVar1 + 0x1d8))(plVar2,*(undefined8 *)(lVar1 + 0x1e0));
        if (lVar1 != 0) {
          if ((*(uint *)(lVar1 + 0x18) != 0) && (2 < *(uint *)(lVar1 + 0x18))) {
            uVar9 = *(undefined8 *)(lVar1 + 0x20);
            uVar11 = *(undefined8 *)(lVar1 + 0x38);
            fVar5 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
            if (2 < *(uint *)(lVar1 + 0x18)) {
              uVar8 = *(undefined8 *)(lVar1 + 0x38);
              fVar7 = (float)uVar9;
              fVar10 = (float)((ulong)uVar9 >> 0x20);
              fVar7 = fVar7 + ((float)uVar11 - fVar7) * fVar5;
              fVar10 = fVar10 + ((float)((ulong)uVar11 >> 0x20) - fVar10) * fVar5;
              uVar9 = CONCAT44(fVar10,fVar7);
              fVar6 = (float)uVar8 - (float)*(undefined8 *)(lVar1 + 0x20);
              param_4 = (float)((ulong)uVar8 >> 0x20) -
                        (float)((ulong)*(undefined8 *)(lVar1 + 0x20) >> 0x20);
              uVar3 = CONCAT44(param_4,fVar6);
              fVar5 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar4,0);
              fVar7 = fVar7 - fVar5;
              fVar5 = fVar10 - (float)uVar8;
              if ((fVar7 * fVar7 + fVar5 * fVar5 < 9.9999994e-11) &&
                 (uVar11 = uVar9,
                 fVar5 = (float)native_UnityEngine_BoxCollider2D__get_size_db8988(lVar4,0),
                 fVar6 = fVar6 - fVar5, fVar5 = param_4 - (float)uVar11,
                 fVar6 * fVar6 + fVar5 * fVar5 < 9.9999994e-11)) {
                return;
              }
              native_UnityEngine_Collider2D__set_offset_db8bcc(uVar9,fVar10,lVar4,0);
              goto LAB_0072e024;
            }
          }
          uVar9 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar9,0);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f58b & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f58b = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar4,0,0);
  if ((uVar3 & 1) != 0) {
    if ((lVar4 == 0) ||
       (lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0), lVar1 == 0)) {
LAB_0072dca4:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    plVar2 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                               (lVar1,
                                _Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar2,0,0);
    if ((uVar3 & 1) == 0) {
      uVar9 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar1,0);
      if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
      }
      native_NGUIMath__CalculateRelativeWidgetBounds_805d80(&uStack_88,uVar9,param_6 & 1,0);
      uStack_68 = uStack_80;
      uStack_70 = uStack_88;
      native_UnityEngine_Bounds__get_center_8d7d98(&uStack_70,0);
      native_UnityEngine_BoxCollider__set_center_dbaa0c(lVar4,0);
      uVar3 = native_UnityEngine_Bounds__get_size_8d7ed8(&uStack_70,0);
      native_UnityEngine_Bounds__get_size_8d7ed8(&uStack_70,0);
    }
    else {
      if (plVar2 == (long *)0x0) goto LAB_0072dca4;
      lVar1 = *plVar2;
      if ((((*(float *)((long)plVar2 + 0x104) == 0.0) && (*(float *)(plVar2 + 0x21) == 0.0)) &&
          (param_2 = *(float *)((long)plVar2 + 0x10c), param_2 == 1.0)) &&
         (param_2 = *(float *)(plVar2 + 0x22), param_2 == 1.0)) {
        lVar1 = (**(code **)(lVar1 + 0x1d8))(plVar2,*(undefined8 *)(lVar1 + 0x1e0));
        if (lVar1 == 0) goto LAB_0072dca4;
        if ((*(uint *)(lVar1 + 0x18) == 0) || (*(uint *)(lVar1 + 0x18) < 3)) {
LAB_0072dca8:
          uVar9 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar9,0);
        }
        uVar9 = *(undefined8 *)(lVar1 + 0x20);
        fVar10 = *(float *)(lVar1 + 0x28);
        uVar11 = *(undefined8 *)(lVar1 + 0x38);
        fVar12 = *(float *)(lVar1 + 0x40);
        fVar5 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
        fVar6 = (float)uVar9;
        fVar7 = (float)((ulong)uVar9 >> 0x20);
        fVar7 = fVar7 + ((float)((ulong)uVar11 >> 0x20) - fVar7) * fVar5;
        native_UnityEngine_BoxCollider__set_center_dbaa0c
                  (CONCAT44(fVar7,fVar6 + ((float)uVar11 - fVar6) * fVar5),fVar7,
                   fVar10 + (fVar12 - fVar10) * fVar5,lVar4,0);
        if (*(uint *)(lVar1 + 0x18) < 3) goto LAB_0072dca8;
        uVar3 = CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x38) >> 0x20) -
                         (float)((ulong)*(undefined8 *)(lVar1 + 0x20) >> 0x20),
                         (float)*(undefined8 *)(lVar1 + 0x38) - (float)*(undefined8 *)(lVar1 + 0x20)
                        );
      }
      else {
        fVar5 = (float)(**(code **)(lVar1 + 0x2f8))(plVar2,*(undefined8 *)(lVar1 + 0x300));
        native_UnityEngine_BoxCollider__set_center_dbaa0c
                  ((fVar5 + param_3) * 0.5,(param_2 + param_4) * 0.5,0,lVar4,0);
        uVar3 = (ulong)(uint)(param_3 - fVar5);
      }
    }
    native_UnityEngine_BoxCollider__set_size_dbab64(uVar3,lVar4,0);
  }
  return;
}



/* NGUITools$$UpdateWidgetCollider @ 0x72d9c8
 * void NGUITools__UpdateWidgetCollider (UnityEngine_BoxCollider_o* box, bool considerInactive, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$UpdateWidgetCollider
   void NGUITools__UpdateWidgetCollider (UnityEngine_BoxCollider_o* box, bool considerInactive,
   const MethodInfo* method); */

void native_NGUITools__UpdateWidgetCollider_72d9c8
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
               uint param_6)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  if ((bRam000000000133f58b & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f58b = 1;
  }
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(param_5,0,0);
  if ((uVar1 & 1) != 0) {
    if ((param_5 == 0) ||
       (lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_5,0), lVar2 == 0)) {
LAB_0072dca4:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    plVar3 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                               (lVar2,
                                _Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar3,0,0);
    if ((uVar1 & 1) == 0) {
      uVar7 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar2,0);
      if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
      }
      native_NGUIMath__CalculateRelativeWidgetBounds_805d80(&uStack_88,uVar7,param_6 & 1,0);
      uStack_60 = uStack_78;
      uStack_68 = uStack_80;
      uStack_70 = uStack_88;
      native_UnityEngine_Bounds__get_center_8d7d98(&uStack_70,0);
      native_UnityEngine_BoxCollider__set_center_dbaa0c(param_5,0);
      uVar1 = native_UnityEngine_Bounds__get_size_8d7ed8(&uStack_70,0);
      native_UnityEngine_Bounds__get_size_8d7ed8(&uStack_70,0);
    }
    else {
      if (plVar3 == (long *)0x0) goto LAB_0072dca4;
      lVar2 = *plVar3;
      if ((((*(float *)((long)plVar3 + 0x104) == 0.0) && (*(float *)(plVar3 + 0x21) == 0.0)) &&
          (param_2 = *(float *)((long)plVar3 + 0x10c), param_2 == 1.0)) &&
         (param_2 = *(float *)(plVar3 + 0x22), param_2 == 1.0)) {
        lVar2 = (**(code **)(lVar2 + 0x1d8))(plVar3,*(undefined8 *)(lVar2 + 0x1e0));
        if (lVar2 == 0) goto LAB_0072dca4;
        if ((*(uint *)(lVar2 + 0x18) == 0) || (*(uint *)(lVar2 + 0x18) < 3)) {
LAB_0072dca8:
          uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar7,0);
        }
        uVar7 = *(undefined8 *)(lVar2 + 0x20);
        fVar8 = *(float *)(lVar2 + 0x28);
        uVar9 = *(undefined8 *)(lVar2 + 0x38);
        fVar10 = *(float *)(lVar2 + 0x40);
        fVar4 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
        fVar6 = (float)uVar7;
        fVar5 = (float)((ulong)uVar7 >> 0x20);
        fVar5 = fVar5 + ((float)((ulong)uVar9 >> 0x20) - fVar5) * fVar4;
        native_UnityEngine_BoxCollider__set_center_dbaa0c
                  (CONCAT44(fVar5,fVar6 + ((float)uVar9 - fVar6) * fVar4),fVar5,
                   fVar8 + (fVar10 - fVar8) * fVar4,param_5,0);
        if (*(uint *)(lVar2 + 0x18) < 3) goto LAB_0072dca8;
        uVar1 = CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 0x38) >> 0x20) -
                         (float)((ulong)*(undefined8 *)(lVar2 + 0x20) >> 0x20),
                         (float)*(undefined8 *)(lVar2 + 0x38) - (float)*(undefined8 *)(lVar2 + 0x20)
                        );
      }
      else {
        fVar4 = (float)(**(code **)(lVar2 + 0x2f8))(plVar3,*(undefined8 *)(lVar2 + 0x300));
        native_UnityEngine_BoxCollider__set_center_dbaa0c
                  ((fVar4 + param_3) * 0.5,(param_2 + param_4) * 0.5,0,param_5,0);
        uVar1 = (ulong)(uint)(param_3 - fVar4);
      }
    }
    native_UnityEngine_BoxCollider__set_size_dbab64(uVar1,param_5,0);
  }
  return;
}



/* NGUITools$$UpdateWidgetCollider @ 0x72e288
 * void NGUITools__UpdateWidgetCollider (UIWidget_o* w, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00432c1c) */
/* WARNING: Removing unreachable block (ram,0x003cc494) */
/* WARNING: Removing unreachable block (ram,0x003cc4b8) */
/* WARNING: Removing unreachable block (ram,0x003cc4d4) */
/* WARNING: Removing unreachable block (ram,0x003cc4dc) */
/* WARNING: Removing unreachable block (ram,0x003cc4f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$UpdateWidgetCollider
   void NGUITools__UpdateWidgetCollider (UIWidget_o* w, const MethodInfo* method); */

void native_NGUITools__UpdateWidgetCollider_72e288
               (undefined1 param_1 [16],float param_2,undefined8 param_3,float param_4,long *param_5
               )

{
  int *piVar1;
  int *piVar2;
  long *plVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  float fVar14;
  ulong uVar15;
  float fVar17;
  undefined8 uVar16;
  ulong uVar18;
  undefined8 uVar19;
  float fVar20;
  ulong uVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  
  if ((bRam000000000133f58c & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BoxCollider2D____12e2998);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BoxCollider____12e2990);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f58c = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar8 = native_UnityEngine_Object__op_Equality_8e9a3c(param_5,0,0);
  if ((uVar8 & 1) != 0) {
    return;
  }
  if (param_5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar9 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_5,_Method_UnityEngine_Component_GetComponent_BoxCollider____12e2990);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar8 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar9,0,0);
  if ((uVar8 & 1) == 0) {
    lVar9 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_5,_Method_UnityEngine_Component_GetComponent_BoxCollider2D____12e2998);
    fVar14 = (float)param_3;
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    if ((bRam000000000133f58e & 1) == 0) {
      native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
      native_sub_43273c(&StringLiteral_last_change_12f5390);
      bRam000000000133f58e = 1;
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar8 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar9,0,0);
    if ((uVar8 & 1) == 0) {
      return;
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar8 = native_UnityEngine_Object__op_Inequality_8d76fc(param_5,0,0);
    if ((uVar8 & 1) == 0) {
      return;
    }
    if (param_5 == (long *)0x0) {
LAB_0072ea2c:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    lVar12 = *param_5;
    if ((((*(float *)((long)param_5 + 0x104) == 0.0) && (*(float *)(param_5 + 0x21) == 0.0)) &&
        (param_2 = *(float *)((long)param_5 + 0x10c), param_2 == 1.0)) &&
       (param_2 = *(float *)(param_5 + 0x22), param_2 == 1.0)) {
      lVar12 = (**(code **)(lVar12 + 0x1d8))(param_5,*(undefined8 *)(lVar12 + 0x1e0));
      if (lVar12 == 0) goto LAB_0072ea2c;
      if ((*(uint *)(lVar12 + 0x18) == 0) || (*(uint *)(lVar12 + 0x18) < 3)) {
LAB_0072ea30:
        uVar19 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar19,0);
      }
      uVar19 = *(undefined8 *)(lVar12 + 0x20);
      uVar24 = *(undefined8 *)(lVar12 + 0x38);
      fVar14 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
      if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_0072ea30;
      if (lVar9 == 0) goto LAB_0072ea2c;
      uVar16 = *(undefined8 *)(lVar12 + 0x38);
      fVar22 = (float)uVar19;
      fVar17 = (float)((ulong)uVar19 >> 0x20);
      fVar22 = fVar22 + ((float)uVar24 - fVar22) * fVar14;
      fVar17 = fVar17 + ((float)((ulong)uVar24 >> 0x20) - fVar17) * fVar14;
      uVar19 = CONCAT44(fVar17,fVar22);
      fVar20 = (float)uVar16 - (float)*(undefined8 *)(lVar12 + 0x20);
      param_4 = (float)((ulong)uVar16 >> 0x20) -
                (float)((ulong)*(undefined8 *)(lVar12 + 0x20) >> 0x20);
      uVar8 = CONCAT44(param_4,fVar20);
      fVar14 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar9,0);
      fVar22 = fVar22 - fVar14;
      fVar14 = fVar17 - (float)uVar16;
      if ((fVar22 * fVar22 + fVar14 * fVar14 < 9.9999994e-11) &&
         (uVar24 = uVar19,
         fVar14 = (float)native_UnityEngine_BoxCollider2D__get_size_db8988(lVar9,0),
         fVar20 = fVar20 - fVar14, fVar14 = param_4 - (float)uVar24,
         fVar20 * fVar20 + fVar14 * fVar14 < 9.9999994e-11)) {
        return;
      }
      native_UnityEngine_Collider2D__set_offset_db8bcc(uVar19,fVar17,lVar9,0);
    }
    else {
      fVar22 = (float)(**(code **)(lVar12 + 0x2f8))(param_5,*(undefined8 *)(lVar12 + 0x300));
      if (lVar9 == 0) goto LAB_0072ea2c;
      uVar8 = (ulong)(uint)(fVar14 - fVar22);
      fVar23 = (fVar22 + fVar14) * 0.5;
      fVar17 = (param_2 + param_4) * 0.5;
      param_4 = param_4 - param_2;
      fVar20 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar9,0);
      fVar20 = fVar23 - fVar20;
      param_2 = fVar17 - param_2;
      param_2 = param_2 * param_2;
      if ((fVar20 * fVar20 + param_2 < 9.9999994e-11) &&
         (fVar20 = (float)native_UnityEngine_BoxCollider2D__get_size_db8988(lVar9,0),
         fVar20 = (fVar14 - fVar22) - fVar20,
         fVar20 * fVar20 + (param_4 - param_2) * (param_4 - param_2) < 9.9999994e-11)) {
        return;
      }
      native_UnityEngine_Collider2D__set_offset_db8bcc(fVar23,fVar17,lVar9,0);
    }
    native_UnityEngine_BoxCollider2D__set_size_db8a30(uVar8,param_4,lVar9,0);
    if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
      return;
    }
    if (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) != 0) {
      return;
    }
  }
  else {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if ((bRam000000000133f58d & 1) == 0) {
      native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
      native_sub_43273c(&StringLiteral_last_change_12f5390);
      bRam000000000133f58d = 1;
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar8 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar9,0,0);
    if ((uVar8 & 1) == 0) {
      return;
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar8 = native_UnityEngine_Object__op_Inequality_8d76fc(param_5,0,0);
    if ((uVar8 & 1) == 0) {
      return;
    }
    if (param_5 == (long *)0x0) {
LAB_0072e730:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    lVar12 = *param_5;
    if ((((*(float *)((long)param_5 + 0x104) == 0.0) && (*(float *)(param_5 + 0x21) == 0.0)) &&
        (param_2 = *(float *)((long)param_5 + 0x10c), param_2 == 1.0)) &&
       (param_2 = *(float *)(param_5 + 0x22), param_2 == 1.0)) {
      lVar12 = (**(code **)(lVar12 + 0x1d8))(param_5,*(undefined8 *)(lVar12 + 0x1e0));
      if (lVar12 == 0) goto LAB_0072e730;
      if ((*(uint *)(lVar12 + 0x18) == 0) || (*(uint *)(lVar12 + 0x18) < 3)) {
LAB_0072e734:
        uVar19 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar19,0);
      }
      uVar19 = *(undefined8 *)(lVar12 + 0x20);
      fVar20 = *(float *)(lVar12 + 0x28);
      uVar24 = *(undefined8 *)(lVar12 + 0x38);
      fVar22 = *(float *)(lVar12 + 0x40);
      fVar14 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
      if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_0072e734;
      if (lVar9 == 0) goto LAB_0072e730;
      fVar23 = (float)uVar19;
      fVar17 = (float)((ulong)uVar19 >> 0x20);
      fVar22 = fVar22 - fVar20;
      uVar10 = (ulong)(uint)fVar22;
      fVar17 = fVar17 + ((float)((ulong)uVar24 >> 0x20) - fVar17) * fVar14;
      uVar16 = CONCAT44(fVar17,fVar23 + ((float)uVar24 - fVar23) * fVar14);
      uVar21 = (ulong)(uint)(fVar20 + fVar22 * fVar14);
      fVar22 = (float)((ulong)*(undefined8 *)(lVar12 + 0x38) >> 0x20) -
               (float)((ulong)*(undefined8 *)(lVar12 + 0x20) >> 0x20);
      uVar15 = CONCAT44(fVar22,(float)*(undefined8 *)(lVar12 + 0x38) -
                               (float)*(undefined8 *)(lVar12 + 0x20));
      fVar14 = *(float *)(lVar12 + 0x40) - *(float *)(lVar12 + 0x28);
      uVar19 = uVar16;
      uVar24 = native_UnityEngine_BoxCollider__get_center_dba95c(lVar9,0);
      uVar8 = (ulong)(uint)fVar17;
      uVar11 = uVar8;
      uVar18 = uVar21;
      uVar10 = native_UnityEngine_Vector3__op_Inequality_776c48
                         (uVar16,uVar8,uVar21,uVar24,uVar19,uVar10,0);
      if ((uVar10 & 1) == 0) {
        uVar19 = native_UnityEngine_BoxCollider__get_size_dbaab4(lVar9,0);
        uVar11 = native_UnityEngine_Vector3__op_Inequality_776c48
                           (uVar15,fVar22,fVar14,uVar19,uVar11,uVar18,0);
        if ((uVar11 & 1) == 0) {
          return;
        }
      }
      native_UnityEngine_BoxCollider__set_center_dbaa0c(uVar16,uVar8,uVar21,lVar9,0);
    }
    else {
      fVar14 = (float)(**(code **)(lVar12 + 0x2f8))(param_5,*(undefined8 *)(lVar12 + 0x300));
      if (lVar9 == 0) goto LAB_0072e730;
      uVar15 = (ulong)(uint)((float)param_3 - fVar14);
      fVar22 = param_4 - param_2;
      uVar11 = (ulong)(uint)(param_2 + param_4);
      uVar18 = (ulong)(uint)((param_2 + param_4) * 0.5);
      fVar20 = (fVar14 + (float)param_3) * 0.5;
      uVar19 = native_UnityEngine_BoxCollider__get_center_dba95c(lVar9,0);
      uVar24 = 0;
      fVar14 = 0.0;
      uVar8 = uVar18;
      uVar11 = native_UnityEngine_Vector3__op_Inequality_776c48
                         (fVar20,uVar18,0,uVar19,uVar11,param_3,0);
      if ((uVar11 & 1) == 0) {
        uVar19 = native_UnityEngine_BoxCollider__get_size_dbaab4(lVar9,0);
        uVar8 = native_UnityEngine_Vector3__op_Inequality_776c48
                          (uVar15,fVar22,0,uVar19,uVar8,uVar24,0);
        if ((uVar8 & 1) == 0) {
          return;
        }
      }
      native_UnityEngine_BoxCollider__set_center_dbaa0c(fVar20,uVar18,0,lVar9,0);
    }
    native_UnityEngine_BoxCollider__set_size_dbab64(uVar15,fVar22,fVar14,lVar9,0);
    if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
      return;
    }
    if (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) != 0) {
      return;
    }
  }
  lVar9 = _NGUITools_TypeInfo_12d53c8;
  if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
    return;
  }
  piVar1 = (int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0);
  while (*piVar1 == 1) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') {
      DataMemoryBarrier(2,3);
      return;
    }
  }
  ClearExclusiveLocal();
  DataMemoryBarrier(2,3);
  lVar12 = native_sub_432c38();
  if (lVar12 == lRam00000000013451d0) {
    iRam00000000013451d8 = iRam00000000013451d8 + 1;
  }
  else {
    iVar13 = 0;
    do {
      iVar7 = iRam0000000001345190;
      if (iRam0000000001345190 == iVar13) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
        if (bVar6) {
          cVar5 = ExclusiveMonitorsStatus();
          iRam0000000001345190 = iVar13 + 1;
        }
        if (cVar5 != '\0') goto code_r0x003cc248;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
code_r0x003cc248:
        bVar6 = false;
      }
    } while ((iVar7 != 2) && (iVar13 = iVar7, !bVar6));
    while (iVar7 != 0) {
      native_sub_432bb4(0x1345190,2,0xffffffff);
      do {
        iVar7 = iRam0000000001345190;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
        if (bVar6) {
          iRam0000000001345190 = 2;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    iRam00000000013451d8 = 1;
    lRam00000000013451d0 = lVar12;
  }
  while (*piVar1 == 1) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') {
      DataMemoryBarrier(2,3);
      if (iRam00000000013451d8 < 1) {
        return;
      }
      if (iRam00000000013451d8 + -1 != 0) {
        iRam00000000013451d8 = iRam00000000013451d8 + -1;
        return;
      }
      lRam00000000013451d0 = 0;
      iRam00000000013451d8 = 0;
      do {
        iVar13 = iRam0000000001345190;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
        if (bVar6) {
          iRam0000000001345190 = 0;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar13 != 2) {
        lRam00000000013451d0 = 0;
        iRam00000000013451d8 = 0;
        return;
      }
      (*(code *)&DAT_0155b260)(0x62,0x1345190,0x81,1,0,0,0);
      return;
    }
  }
  ClearExclusiveLocal();
  DataMemoryBarrier(2,3);
  piVar2 = (int *)(lVar9 + 0xdc);
  do {
    if (*piVar2 != 1) {
      ClearExclusiveLocal();
      DataMemoryBarrier(2,3);
      puVar4 = (undefined8 *)(lVar9 + 0xe8);
      uVar19 = native_sub_3aad3c();
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar6) {
          *puVar4 = uVar19;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      DataMemoryBarrier(2,3);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      DataMemoryBarrier(2,3);
      iVar13 = iRam00000000013451d8 + -1;
      if ((0 < iRam00000000013451d8) && (iRam00000000013451d8 = iVar13, iVar13 == 0)) {
        lRam00000000013451d0 = 0;
        iRam00000000013451d8 = 0;
        do {
          iVar13 = iRam0000000001345190;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
          if (bVar6) {
            iRam0000000001345190 = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar13 == 2) {
          native_sub_432c0c(0x1345190,1,0);
        }
      }
      if (((*(byte *)(lVar9 + 0x133) >> 2 & 1) != 0) &&
         (lVar9 = native_sub_3c573c(lVar9,&UNK_00edd9af,0xffffffff,0x800), lVar9 != 0)) {
        native_sub_3d704c(lVar9,0,0,&stack0xffffffffffffffb8);
      }
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      DataMemoryBarrier(2,3);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar6) {
          *puVar4 = 0;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      DataMemoryBarrier(2,3);
      return;
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar6) {
      *piVar2 = 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  DataMemoryBarrier(2,3);
  iVar13 = iRam00000000013451d8 + -1;
  if ((0 < iRam00000000013451d8) && (iRam00000000013451d8 = iVar13, iVar13 == 0)) {
    lRam00000000013451d0 = 0;
    iRam00000000013451d8 = 0;
    do {
      iVar13 = iRam0000000001345190;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
      if (bVar6) {
        iRam0000000001345190 = 0;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar13 == 2) {
      native_sub_432c0c(0x1345190,1,0);
    }
  }
  lVar12 = native_sub_3aad3c();
  plVar3 = (long *)(lVar9 + 0xe8);
  do {
    lVar9 = *plVar3;
    if (lVar9 != lVar12) {
      ClearExclusiveLocal();
      break;
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar6) {
      *plVar3 = lVar12;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  DataMemoryBarrier(2,3);
  if (lVar9 != lVar12) {
    do {
      iVar13 = *piVar1;
      if (iVar13 != 1) {
        ClearExclusiveLocal();
        break;
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    DataMemoryBarrier(2,3);
    while (iVar13 == 0) {
      native_sub_3a30dc(1,0);
      do {
        iVar13 = *piVar1;
        if (iVar13 != 1) {
          ClearExclusiveLocal();
          break;
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      DataMemoryBarrier(2,3);
    }
  }
  return;
}



/* NGUITools$$UpdateWidgetCollider @ 0x72e3f0
 * void NGUITools__UpdateWidgetCollider (UIWidget_o* w, UnityEngine_BoxCollider_o* box, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00432c1c) */
/* WARNING: Removing unreachable block (ram,0x003cc494) */
/* WARNING: Removing unreachable block (ram,0x003cc4b8) */
/* WARNING: Removing unreachable block (ram,0x003cc4d4) */
/* WARNING: Removing unreachable block (ram,0x003cc4dc) */
/* WARNING: Removing unreachable block (ram,0x003cc4f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$UpdateWidgetCollider
   void NGUITools__UpdateWidgetCollider (UIWidget_o* w, UnityEngine_BoxCollider_o* box, const
   MethodInfo* method); */

void native_NGUITools__UpdateWidgetCollider_72e3f0
               (undefined1 param_1 [16],float param_2,undefined8 param_3,float param_4,long *param_5
               ,long param_6)

{
  int *piVar1;
  int *piVar2;
  long *plVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  float fVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  ulong uVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar17;
  
  if ((bRam000000000133f58d & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_last_change_12f5390);
    bRam000000000133f58d = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(param_6,0,0);
  if ((uVar9 & 1) != 0) {
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(param_5,0,0);
    if ((uVar9 & 1) != 0) {
      if (param_5 == (long *)0x0) {
LAB_0072e730:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      lVar12 = *param_5;
      if ((((*(float *)((long)param_5 + 0x104) == 0.0) && (*(float *)(param_5 + 0x21) == 0.0)) &&
          (param_2 = *(float *)((long)param_5 + 0x10c), param_2 == 1.0)) &&
         (param_2 = *(float *)(param_5 + 0x22), param_2 == 1.0)) {
        lVar12 = (**(code **)(lVar12 + 0x1d8))(param_5,*(undefined8 *)(lVar12 + 0x1e0));
        if (lVar12 == 0) goto LAB_0072e730;
        if ((*(uint *)(lVar12 + 0x18) == 0) || (*(uint *)(lVar12 + 0x18) < 3)) {
LAB_0072e734:
          uVar20 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar20,0);
        }
        uVar20 = *(undefined8 *)(lVar12 + 0x20);
        fVar21 = *(float *)(lVar12 + 0x28);
        uVar24 = *(undefined8 *)(lVar12 + 0x38);
        fVar23 = *(float *)(lVar12 + 0x40);
        fVar14 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
        if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_0072e734;
        if (param_6 == 0) goto LAB_0072e730;
        fVar19 = (float)uVar20;
        fVar17 = (float)((ulong)uVar20 >> 0x20);
        fVar23 = fVar23 - fVar21;
        uVar10 = (ulong)(uint)fVar23;
        fVar17 = fVar17 + ((float)((ulong)uVar24 >> 0x20) - fVar17) * fVar14;
        uVar16 = CONCAT44(fVar17,fVar19 + ((float)uVar24 - fVar19) * fVar14);
        uVar22 = (ulong)(uint)(fVar21 + fVar23 * fVar14);
        fVar23 = (float)((ulong)*(undefined8 *)(lVar12 + 0x38) >> 0x20) -
                 (float)((ulong)*(undefined8 *)(lVar12 + 0x20) >> 0x20);
        uVar15 = CONCAT44(fVar23,(float)*(undefined8 *)(lVar12 + 0x38) -
                                 (float)*(undefined8 *)(lVar12 + 0x20));
        fVar14 = *(float *)(lVar12 + 0x40) - *(float *)(lVar12 + 0x28);
        uVar20 = uVar16;
        uVar24 = native_UnityEngine_BoxCollider__get_center_dba95c(param_6,0);
        uVar9 = (ulong)(uint)fVar17;
        uVar11 = uVar9;
        uVar18 = uVar22;
        uVar10 = native_UnityEngine_Vector3__op_Inequality_776c48
                           (uVar16,uVar9,uVar22,uVar24,uVar20,uVar10,0);
        if ((uVar10 & 1) == 0) {
          uVar20 = native_UnityEngine_BoxCollider__get_size_dbaab4(param_6,0);
          uVar11 = native_UnityEngine_Vector3__op_Inequality_776c48
                             (uVar15,fVar23,fVar14,uVar20,uVar11,uVar18,0);
          if ((uVar11 & 1) == 0) {
            return;
          }
        }
        native_UnityEngine_BoxCollider__set_center_dbaa0c(uVar16,uVar9,uVar22,param_6,0);
      }
      else {
        fVar14 = (float)(**(code **)(lVar12 + 0x2f8))(param_5,*(undefined8 *)(lVar12 + 0x300));
        if (param_6 == 0) goto LAB_0072e730;
        uVar15 = (ulong)(uint)((float)param_3 - fVar14);
        fVar23 = param_4 - param_2;
        uVar11 = (ulong)(uint)(param_2 + param_4);
        uVar18 = (ulong)(uint)((param_2 + param_4) * 0.5);
        fVar21 = (fVar14 + (float)param_3) * 0.5;
        uVar20 = native_UnityEngine_BoxCollider__get_center_dba95c(param_6,0);
        uVar24 = 0;
        fVar14 = 0.0;
        uVar9 = uVar18;
        uVar11 = native_UnityEngine_Vector3__op_Inequality_776c48
                           (fVar21,uVar18,0,uVar20,uVar11,param_3,0);
        if ((uVar11 & 1) == 0) {
          uVar20 = native_UnityEngine_BoxCollider__get_size_dbaab4(param_6,0);
          uVar9 = native_UnityEngine_Vector3__op_Inequality_776c48
                            (uVar15,fVar23,0,uVar20,uVar9,uVar24,0);
          if ((uVar9 & 1) == 0) {
            return;
          }
        }
        native_UnityEngine_BoxCollider__set_center_dbaa0c(fVar21,uVar18,0,param_6,0);
      }
      native_UnityEngine_BoxCollider__set_size_dbab64(uVar15,fVar23,fVar14,param_6,0);
      lVar12 = _NGUITools_TypeInfo_12d53c8;
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
          return;
        }
        piVar1 = (int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0);
        while (*piVar1 == 1) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            DataMemoryBarrier(2,3);
            return;
          }
        }
        ClearExclusiveLocal();
        DataMemoryBarrier(2,3);
        lVar8 = native_sub_432c38();
        if (lVar8 == lRam00000000013451d0) {
          iRam00000000013451d8 = iRam00000000013451d8 + 1;
        }
        else {
          iVar13 = 0;
          do {
            iVar7 = iRam0000000001345190;
            if (iRam0000000001345190 == iVar13) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
              if (bVar6) {
                cVar5 = ExclusiveMonitorsStatus();
                iRam0000000001345190 = iVar13 + 1;
              }
              if (cVar5 != '\0') goto code_r0x003cc248;
              bVar6 = true;
            }
            else {
              ClearExclusiveLocal();
code_r0x003cc248:
              bVar6 = false;
            }
          } while ((iVar7 != 2) && (iVar13 = iVar7, !bVar6));
          while (iVar7 != 0) {
            native_sub_432bb4(0x1345190,2,0xffffffff);
            do {
              iVar7 = iRam0000000001345190;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
              if (bVar6) {
                iRam0000000001345190 = 2;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          iRam00000000013451d8 = 1;
          lRam00000000013451d0 = lVar8;
        }
        while (*piVar1 == 1) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            DataMemoryBarrier(2,3);
            if (iRam00000000013451d8 < 1) {
              return;
            }
            if (iRam00000000013451d8 + -1 != 0) {
              iRam00000000013451d8 = iRam00000000013451d8 + -1;
              return;
            }
            lRam00000000013451d0 = 0;
            iRam00000000013451d8 = 0;
            do {
              iVar13 = iRam0000000001345190;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
              if (bVar6) {
                iRam0000000001345190 = 0;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar13 != 2) {
              lRam00000000013451d0 = 0;
              iRam00000000013451d8 = 0;
              return;
            }
            (*(code *)&DAT_0155b260)(0x62,0x1345190,0x81,1,0,0,0);
            return;
          }
        }
        ClearExclusiveLocal();
        DataMemoryBarrier(2,3);
        piVar2 = (int *)(lVar12 + 0xdc);
        do {
          if (*piVar2 != 1) {
            ClearExclusiveLocal();
            DataMemoryBarrier(2,3);
            puVar4 = (undefined8 *)(lVar12 + 0xe8);
            uVar20 = native_sub_3aad3c();
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
              if (bVar6) {
                *puVar4 = uVar20;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            DataMemoryBarrier(2,3);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            DataMemoryBarrier(2,3);
            iVar13 = iRam00000000013451d8 + -1;
            if ((0 < iRam00000000013451d8) && (iRam00000000013451d8 = iVar13, iVar13 == 0)) {
              lRam00000000013451d0 = 0;
              iRam00000000013451d8 = 0;
              do {
                iVar13 = iRam0000000001345190;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
                if (bVar6) {
                  iRam0000000001345190 = 0;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar13 == 2) {
                native_sub_432c0c(0x1345190,1,0);
              }
            }
            if (((*(byte *)(lVar12 + 0x133) >> 2 & 1) != 0) &&
               (lVar12 = native_sub_3c573c(lVar12,&UNK_00edd9af,0xffffffff,0x800), lVar12 != 0)) {
              native_sub_3d704c(lVar12,0,0,&stack0xffffffffffffffb8);
            }
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            DataMemoryBarrier(2,3);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
              if (bVar6) {
                *puVar4 = 0;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            DataMemoryBarrier(2,3);
            return;
          }
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        DataMemoryBarrier(2,3);
        iVar13 = iRam00000000013451d8 + -1;
        if ((0 < iRam00000000013451d8) && (iRam00000000013451d8 = iVar13, iVar13 == 0)) {
          lRam00000000013451d0 = 0;
          iRam00000000013451d8 = 0;
          do {
            iVar13 = iRam0000000001345190;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
            if (bVar6) {
              iRam0000000001345190 = 0;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar13 == 2) {
            native_sub_432c0c(0x1345190,1,0);
          }
        }
        lVar8 = native_sub_3aad3c();
        plVar3 = (long *)(lVar12 + 0xe8);
        do {
          lVar12 = *plVar3;
          if (lVar12 != lVar8) {
            ClearExclusiveLocal();
            break;
          }
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *plVar3 = lVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        DataMemoryBarrier(2,3);
        if (lVar12 != lVar8) {
          do {
            iVar13 = *piVar1;
            if (iVar13 != 1) {
              ClearExclusiveLocal();
              break;
            }
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          DataMemoryBarrier(2,3);
          while (iVar13 == 0) {
            native_sub_3a30dc(1,0);
            do {
              iVar13 = *piVar1;
              if (iVar13 != 1) {
                ClearExclusiveLocal();
                break;
              }
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            DataMemoryBarrier(2,3);
          }
        }
        return;
      }
    }
  }
  return;
}



/* NGUITools$$UpdateWidgetCollider @ 0x72e740
 * void NGUITools__UpdateWidgetCollider (UIWidget_o* w, UnityEngine_BoxCollider2D_o* box, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00432c1c) */
/* WARNING: Removing unreachable block (ram,0x003cc494) */
/* WARNING: Removing unreachable block (ram,0x003cc4b8) */
/* WARNING: Removing unreachable block (ram,0x003cc4d4) */
/* WARNING: Removing unreachable block (ram,0x003cc4dc) */
/* WARNING: Removing unreachable block (ram,0x003cc4f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$UpdateWidgetCollider
   void NGUITools__UpdateWidgetCollider (UIWidget_o* w, UnityEngine_BoxCollider2D_o* box, const
   MethodInfo* method); */

void native_NGUITools__UpdateWidgetCollider_72e740
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long *param_5,
               long param_6)

{
  int *piVar1;
  int *piVar2;
  long *plVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  if ((bRam000000000133f58e & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_last_change_12f5390);
    bRam000000000133f58e = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(param_6,0,0);
  if ((uVar9 & 1) != 0) {
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(param_5,0,0);
    if ((uVar9 & 1) != 0) {
      if (param_5 == (long *)0x0) {
LAB_0072ea2c:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      lVar10 = *param_5;
      if ((((*(float *)((long)param_5 + 0x104) == 0.0) && (*(float *)(param_5 + 0x21) == 0.0)) &&
          (param_2 = *(float *)((long)param_5 + 0x10c), param_2 == 1.0)) &&
         (param_2 = *(float *)(param_5 + 0x22), param_2 == 1.0)) {
        lVar10 = (**(code **)(lVar10 + 0x1d8))(param_5,*(undefined8 *)(lVar10 + 0x1e0));
        if (lVar10 == 0) goto LAB_0072ea2c;
        if ((*(uint *)(lVar10 + 0x18) == 0) || (*(uint *)(lVar10 + 0x18) < 3)) {
LAB_0072ea30:
          uVar17 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar17,0);
        }
        uVar17 = *(undefined8 *)(lVar10 + 0x20);
        uVar18 = *(undefined8 *)(lVar10 + 0x38);
        fVar12 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
        if (*(uint *)(lVar10 + 0x18) < 3) goto LAB_0072ea30;
        if (param_6 == 0) goto LAB_0072ea2c;
        uVar16 = *(undefined8 *)(lVar10 + 0x38);
        fVar13 = (float)uVar17;
        fVar15 = (float)((ulong)uVar17 >> 0x20);
        fVar13 = fVar13 + ((float)uVar18 - fVar13) * fVar12;
        fVar15 = fVar15 + ((float)((ulong)uVar18 >> 0x20) - fVar15) * fVar12;
        uVar17 = CONCAT44(fVar15,fVar13);
        fVar14 = (float)uVar16 - (float)*(undefined8 *)(lVar10 + 0x20);
        param_4 = (float)((ulong)uVar16 >> 0x20) -
                  (float)((ulong)*(undefined8 *)(lVar10 + 0x20) >> 0x20);
        uVar9 = CONCAT44(param_4,fVar14);
        fVar12 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(param_6,0);
        fVar13 = fVar13 - fVar12;
        fVar12 = fVar15 - (float)uVar16;
        if ((fVar13 * fVar13 + fVar12 * fVar12 < 9.9999994e-11) &&
           (uVar18 = uVar17,
           fVar12 = (float)native_UnityEngine_BoxCollider2D__get_size_db8988(param_6,0),
           fVar14 = fVar14 - fVar12, fVar12 = param_4 - (float)uVar18,
           fVar14 * fVar14 + fVar12 * fVar12 < 9.9999994e-11)) {
          return;
        }
        native_UnityEngine_Collider2D__set_offset_db8bcc(uVar17,fVar15,param_6,0);
      }
      else {
        fVar12 = (float)(**(code **)(lVar10 + 0x2f8))(param_5,*(undefined8 *)(lVar10 + 0x300));
        if (param_6 == 0) goto LAB_0072ea2c;
        uVar9 = (ulong)(uint)(param_3 - fVar12);
        fVar15 = (fVar12 + param_3) * 0.5;
        fVar14 = (param_2 + param_4) * 0.5;
        param_4 = param_4 - param_2;
        fVar13 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(param_6,0);
        fVar13 = fVar15 - fVar13;
        param_2 = fVar14 - param_2;
        param_2 = param_2 * param_2;
        if ((fVar13 * fVar13 + param_2 < 9.9999994e-11) &&
           (fVar13 = (float)native_UnityEngine_BoxCollider2D__get_size_db8988(param_6,0),
           fVar13 = (param_3 - fVar12) - fVar13,
           fVar13 * fVar13 + (param_4 - param_2) * (param_4 - param_2) < 9.9999994e-11)) {
          return;
        }
        native_UnityEngine_Collider2D__set_offset_db8bcc(fVar15,fVar14,param_6,0);
      }
      native_UnityEngine_BoxCollider2D__set_size_db8a30(uVar9,param_4,param_6,0);
      lVar10 = _NGUITools_TypeInfo_12d53c8;
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
          return;
        }
        piVar1 = (int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0);
        while (*piVar1 == 1) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            DataMemoryBarrier(2,3);
            return;
          }
        }
        ClearExclusiveLocal();
        DataMemoryBarrier(2,3);
        lVar8 = native_sub_432c38();
        if (lVar8 == lRam00000000013451d0) {
          iRam00000000013451d8 = iRam00000000013451d8 + 1;
        }
        else {
          iVar11 = 0;
          do {
            iVar7 = iRam0000000001345190;
            if (iRam0000000001345190 == iVar11) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
              if (bVar6) {
                cVar5 = ExclusiveMonitorsStatus();
                iRam0000000001345190 = iVar11 + 1;
              }
              if (cVar5 != '\0') goto code_r0x003cc248;
              bVar6 = true;
            }
            else {
              ClearExclusiveLocal();
code_r0x003cc248:
              bVar6 = false;
            }
          } while ((iVar7 != 2) && (iVar11 = iVar7, !bVar6));
          while (iVar7 != 0) {
            native_sub_432bb4(0x1345190,2,0xffffffff);
            do {
              iVar7 = iRam0000000001345190;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
              if (bVar6) {
                iRam0000000001345190 = 2;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          iRam00000000013451d8 = 1;
          lRam00000000013451d0 = lVar8;
        }
        while (*piVar1 == 1) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            DataMemoryBarrier(2,3);
            if (iRam00000000013451d8 < 1) {
              return;
            }
            if (iRam00000000013451d8 + -1 != 0) {
              iRam00000000013451d8 = iRam00000000013451d8 + -1;
              return;
            }
            lRam00000000013451d0 = 0;
            iRam00000000013451d8 = 0;
            do {
              iVar11 = iRam0000000001345190;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
              if (bVar6) {
                iRam0000000001345190 = 0;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar11 != 2) {
              lRam00000000013451d0 = 0;
              iRam00000000013451d8 = 0;
              return;
            }
            (*(code *)&DAT_0155b260)(0x62,0x1345190,0x81,1,0,0,0);
            return;
          }
        }
        ClearExclusiveLocal();
        DataMemoryBarrier(2,3);
        piVar2 = (int *)(lVar10 + 0xdc);
        do {
          if (*piVar2 != 1) {
            ClearExclusiveLocal();
            DataMemoryBarrier(2,3);
            puVar4 = (undefined8 *)(lVar10 + 0xe8);
            uVar17 = native_sub_3aad3c();
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
              if (bVar6) {
                *puVar4 = uVar17;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            DataMemoryBarrier(2,3);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            DataMemoryBarrier(2,3);
            iVar11 = iRam00000000013451d8 + -1;
            if ((0 < iRam00000000013451d8) && (iRam00000000013451d8 = iVar11, iVar11 == 0)) {
              lRam00000000013451d0 = 0;
              iRam00000000013451d8 = 0;
              do {
                iVar11 = iRam0000000001345190;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
                if (bVar6) {
                  iRam0000000001345190 = 0;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar11 == 2) {
                native_sub_432c0c(0x1345190,1,0);
              }
            }
            if (((*(byte *)(lVar10 + 0x133) >> 2 & 1) != 0) &&
               (lVar10 = native_sub_3c573c(lVar10,&UNK_00edd9af,0xffffffff,0x800), lVar10 != 0)) {
              native_sub_3d704c(lVar10,0,0,&stack0xffffffffffffffb8);
            }
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            DataMemoryBarrier(2,3);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar4,0x10);
              if (bVar6) {
                *puVar4 = 0;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            DataMemoryBarrier(2,3);
            return;
          }
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        DataMemoryBarrier(2,3);
        iVar11 = iRam00000000013451d8 + -1;
        if ((0 < iRam00000000013451d8) && (iRam00000000013451d8 = iVar11, iVar11 == 0)) {
          lRam00000000013451d0 = 0;
          iRam00000000013451d8 = 0;
          do {
            iVar11 = iRam0000000001345190;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
            if (bVar6) {
              iRam0000000001345190 = 0;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar11 == 2) {
            native_sub_432c0c(0x1345190,1,0);
          }
        }
        lVar8 = native_sub_3aad3c();
        plVar3 = (long *)(lVar10 + 0xe8);
        do {
          lVar10 = *plVar3;
          if (lVar10 != lVar8) {
            ClearExclusiveLocal();
            break;
          }
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *plVar3 = lVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        DataMemoryBarrier(2,3);
        if (lVar10 != lVar8) {
          do {
            iVar11 = *piVar1;
            if (iVar11 != 1) {
              ClearExclusiveLocal();
              break;
            }
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          DataMemoryBarrier(2,3);
          while (iVar11 == 0) {
            native_sub_3a30dc(1,0);
            do {
              iVar11 = *piVar1;
              if (iVar11 != 1) {
                ClearExclusiveLocal();
                break;
              }
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            DataMemoryBarrier(2,3);
          }
        }
        return;
      }
    }
  }
  return;
}



/* NGUITools$$UpdateWidgetCollider @ 0x72dcb4
 * void NGUITools__UpdateWidgetCollider (UnityEngine_BoxCollider2D_o* box, bool considerInactive, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$UpdateWidgetCollider
   void NGUITools__UpdateWidgetCollider (UnityEngine_BoxCollider2D_o* box, bool considerInactive,
   const MethodInfo* method); */

void native_NGUITools__UpdateWidgetCollider_72dcb4
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
               uint param_6)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((bRam000000000133f58f & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_last_change_12f5390);
    bRam000000000133f58f = 1;
  }
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(param_5,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if ((param_5 != 0) &&
     (lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_5,0), lVar2 != 0)) {
    plVar3 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                               (lVar2,
                                _Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar3,0,0);
    if ((uVar1 & 1) == 0) {
      uVar9 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar2,0);
      if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
      }
      native_NGUIMath__CalculateRelativeWidgetBounds_805d80(&uStack_98,uVar9,param_6 & 1,0);
      uStack_70 = uStack_88;
      uStack_78 = uStack_90;
      uStack_80 = uStack_98;
      native_UnityEngine_Bounds__get_center_8d7d98(&uStack_80,0);
      native_UnityEngine_Collider2D__set_offset_db8bcc(param_5,0);
      uVar9 = native_UnityEngine_Bounds__get_size_8d7ed8(&uStack_80,0);
      native_UnityEngine_Bounds__get_size_8d7ed8(&uStack_80,0);
      native_UnityEngine_BoxCollider2D__set_size_db8a30(uVar9,param_5,0);
      return;
    }
    if (plVar3 != (long *)0x0) {
      lVar2 = *plVar3;
      if ((((*(float *)((long)plVar3 + 0x104) != 0.0) || (*(float *)(plVar3 + 0x21) != 0.0)) ||
          (param_2 = *(float *)((long)plVar3 + 0x10c), param_2 != 1.0)) ||
         (param_2 = *(float *)(plVar3 + 0x22), param_2 != 1.0)) {
        fVar4 = (float)(**(code **)(lVar2 + 0x2f8))(plVar3,*(undefined8 *)(lVar2 + 0x300));
        uVar1 = (ulong)(uint)(param_3 - fVar4);
        fVar7 = (fVar4 + param_3) * 0.5;
        fVar6 = (param_2 + param_4) * 0.5;
        param_4 = param_4 - param_2;
        fVar5 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(param_5,0);
        fVar5 = fVar7 - fVar5;
        param_2 = fVar6 - param_2;
        param_2 = param_2 * param_2;
        if ((fVar5 * fVar5 + param_2 < 9.9999994e-11) &&
           (fVar5 = (float)native_UnityEngine_BoxCollider2D__get_size_db8988(param_5,0),
           fVar5 = (param_3 - fVar4) - fVar5,
           fVar5 * fVar5 + (param_4 - param_2) * (param_4 - param_2) < 9.9999994e-11)) {
          return;
        }
        native_UnityEngine_Collider2D__set_offset_db8bcc(fVar7,fVar6,param_5,0);
LAB_0072e024:
        native_UnityEngine_BoxCollider2D__set_size_db8a30(uVar1,param_4,param_5,0);
        if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
          return;
        }
        if (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) != 0) {
          return;
        }
        native_sub_4327ec();
        return;
      }
      lVar2 = (**(code **)(lVar2 + 0x1d8))(plVar3,*(undefined8 *)(lVar2 + 0x1e0));
      if (lVar2 != 0) {
        if ((*(uint *)(lVar2 + 0x18) != 0) && (2 < *(uint *)(lVar2 + 0x18))) {
          uVar9 = *(undefined8 *)(lVar2 + 0x20);
          uVar10 = *(undefined8 *)(lVar2 + 0x38);
          fVar4 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
          if (2 < *(uint *)(lVar2 + 0x18)) {
            uVar8 = *(undefined8 *)(lVar2 + 0x38);
            fVar5 = (float)uVar9;
            fVar7 = (float)((ulong)uVar9 >> 0x20);
            fVar5 = fVar5 + ((float)uVar10 - fVar5) * fVar4;
            fVar7 = fVar7 + ((float)((ulong)uVar10 >> 0x20) - fVar7) * fVar4;
            uVar9 = CONCAT44(fVar7,fVar5);
            fVar6 = (float)uVar8 - (float)*(undefined8 *)(lVar2 + 0x20);
            param_4 = (float)((ulong)uVar8 >> 0x20) -
                      (float)((ulong)*(undefined8 *)(lVar2 + 0x20) >> 0x20);
            uVar1 = CONCAT44(param_4,fVar6);
            fVar4 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(param_5,0);
            fVar5 = fVar5 - fVar4;
            fVar4 = fVar7 - (float)uVar8;
            if ((fVar5 * fVar5 + fVar4 * fVar4 < 9.9999994e-11) &&
               (uVar10 = uVar9,
               fVar4 = (float)native_UnityEngine_BoxCollider2D__get_size_db8988(param_5,0),
               fVar6 = fVar6 - fVar4, fVar4 = param_4 - (float)uVar10,
               fVar6 * fVar6 + fVar4 * fVar4 < 9.9999994e-11)) {
              return;
            }
            native_UnityEngine_Collider2D__set_offset_db8bcc(uVar9,fVar7,param_5,0);
            goto LAB_0072e024;
          }
        }
        uVar9 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar9,0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$GetTypeName @ 0x72ea40
 * System_String_o* NGUITools__GetTypeName (UnityEngine_Object_o* obj, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00b0a05c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$GetTypeName
   System_String_o* NGUITools__GetTypeName (UnityEngine_Object_o* obj, const MethodInfo* method); */

long native_NGUITools__GetTypeName_72ea40(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  
  if ((bRam000000000133f590 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_UnityEngine__12f2bc8);
    native_sub_43273c(&StringLiteral_UI_12f2910);
    native_sub_43273c(&StringLiteral_Null_12eff90);
    bRam000000000133f590 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(param_1,0,0);
  if ((uVar3 & 1) == 0) {
    if (((param_1 != 0) &&
        (plVar4 = (long *)native_System_Object__GetType_adb48c(param_1,0), plVar4 != (long *)0x0))
       && (lVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170)),
          lVar5 != 0)) {
      uVar3 = native_System_String__StartsWith_b0cc2c(lVar5,_StringLiteral_UI_12f2910,0);
      if ((uVar3 & 1) == 0) {
        uVar3 = native_System_String__StartsWith_b0cc2c(lVar5,_StringLiteral_UnityEngine__12f2bc8,0)
        ;
        if ((uVar3 & 1) == 0) {
          return lVar5;
        }
        iVar11 = 0xc;
      }
      else {
        iVar11 = 2;
      }
      iVar2 = *(int *)(lVar5 + 0x10) - iVar11;
      if ((bRam0000000001342123 & 1) == 0) {
        native_sub_43273c(&string_TypeInfo_12d5f28);
        bRam0000000001342123 = 1;
      }
      iVar1 = *(int *)(lVar5 + 0x10);
      if (iVar1 < iVar11) {
        uVar7 = native_sub_432740(&
                                  StringLiteral_startIndex_cannot_be_larger_than_length_of_string__12f6240
                                 );
        uVar7 = native_System_Environment__GetResourceString_beaba8(uVar7,0);
        native_sub_432740(&System_ArgumentOutOfRangeException_TypeInfo_12d3810);
        uVar8 = native_sub_432808();
        puVar6 = &StringLiteral_startIndex_12f6228;
      }
      else {
        if (iVar2 < 0) {
          puVar6 = &StringLiteral_Length_cannot_be_less_than_zero__12ef570;
        }
        else {
          if (iVar11 <= iVar1 - iVar2) {
            if (iVar2 == 0) {
              lVar5 = **(long **)(_string_TypeInfo_12d5f28 + 0xb8);
            }
            else if ((iVar11 != 0) || (iVar1 != iVar2)) {
              lVar10 = native_sub_3bca18(iVar2);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              native_System_Buffer__Memcpy_85e1a8
                        (lVar10 + 0x14,lVar5 + (long)iVar11 * 2 + 0x14,iVar2 * 2,0);
              return lVar10;
            }
            return lVar5;
          }
          puVar6 = &
                   StringLiteral_Index_and_length_must_refer_to_a_location_within_the_string__12ee7f0
          ;
        }
        uVar7 = native_sub_432740(puVar6);
        uVar7 = native_System_Environment__GetResourceString_beaba8(uVar7,0);
        native_sub_432740(&System_ArgumentOutOfRangeException_TypeInfo_12d3810);
        uVar8 = native_sub_432808();
        puVar6 = &StringLiteral_length_12f5428;
      }
      uVar9 = native_sub_432740(puVar6);
      native_System_ArgumentOutOfRangeException___ctor_951f98(uVar8,uVar9,uVar7,0);
      uVar7 = native_sub_432740(&Method_System_String_Substring___12e6d80);
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar8,uVar7);
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return _StringLiteral_Null_12eff90;
}



/* NGUITools$$RegisterUndo @ 0x72eb64
 * void NGUITools__RegisterUndo (UnityEngine_Object_o* obj, System_String_o* name, const MethodInfo* method); */

/* NGUITools$$RegisterUndo
   void NGUITools__RegisterUndo (UnityEngine_Object_o* obj, System_String_o* name, const MethodInfo*
   method); */

void native_NGUITools__RegisterUndo_72eb64(void)

{
  return;
}



/* NGUITools$$SetDirty @ 0x72ea3c
 * void NGUITools__SetDirty (UnityEngine_Object_o* obj, System_String_o* undoName, const MethodInfo* method); */

/* NGUITools$$SetDirty
   void NGUITools__SetDirty (UnityEngine_Object_o* obj, System_String_o* undoName, const MethodInfo*
   method); */

void native_NGUITools__SetDirty_72ea3c(void)

{
  return;
}



/* NGUITools$$CheckForPrefabStage @ 0x72eb68
 * void NGUITools__CheckForPrefabStage (UnityEngine_GameObject_o* gameObject, const MethodInfo* method); */

/* NGUITools$$CheckForPrefabStage
   void NGUITools__CheckForPrefabStage (UnityEngine_GameObject_o* gameObject, const MethodInfo*
   method); */

void native_NGUITools__CheckForPrefabStage_72eb68(void)

{
  return;
}



/* NGUITools$$AddChild @ 0x72eb6c
 * UnityEngine_GameObject_o* NGUITools__AddChild (UnityEngine_GameObject_o* parent, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072ece4) */
/* WARNING: Removing unreachable block (ram,0x0072ecec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$AddChild
   UnityEngine_GameObject_o* NGUITools__AddChild (UnityEngine_GameObject_o* parent, const
   MethodInfo* method); */

long native_NGUITools__AddChild_72eb6c(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam000000000133f591 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f591 = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f594 & 1) == 0) {
    native_sub_43273c(&UnityEngine_GameObject_TypeInfo_12d47d8,0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f594 = 1;
  }
  lVar2 = native_sub_432808(_UnityEngine_GameObject_TypeInfo_12d47d8);
  native_UnityEngine_GameObject___ctor_8de914(lVar2,0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(param_1,0,0);
  if ((uVar3 & 1) != 0) {
    if (((lVar2 == 0) ||
        (lVar4 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar2,0), param_1 == 0)) ||
       (uVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(param_1,0), lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_UnityEngine_Transform__set_parent_771f18(lVar4,uVar5,0);
    native_UnityEngine_Vector3__get_zero_776668(0);
    native_UnityEngine_Transform__set_localPosition_7718a4(lVar4,0);
    native_UnityEngine_Quaternion__get_identity_7628fc(0);
    native_UnityEngine_Transform__set_localRotation_771984(lVar4,0);
    native_UnityEngine_Vector3__get_one_776a20(0);
    native_UnityEngine_Transform__set_localScale_771e30(lVar4,0);
    uVar1 = native_UnityEngine_GameObject__get_layer_8de608(param_1,0);
    native_UnityEngine_GameObject__set_layer_8de648(lVar2,uVar1,0);
  }
  return lVar2;
}



/* NGUITools$$AddChild @ 0x72ed2c
 * UnityEngine_GameObject_o* NGUITools__AddChild (UnityEngine_GameObject_o* parent, int32_t layer, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$AddChild
   UnityEngine_GameObject_o* NGUITools__AddChild (UnityEngine_GameObject_o* parent, int32_t layer,
   const MethodInfo* method); */

long native_NGUITools__AddChild_72ed2c(long param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133f592 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f592 = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f594 & 1) == 0) {
    native_sub_43273c(&UnityEngine_GameObject_TypeInfo_12d47d8,0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f594 = 1;
  }
  lVar1 = native_sub_432808(_UnityEngine_GameObject_TypeInfo_12d47d8);
  native_UnityEngine_GameObject___ctor_8de914(lVar1,0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(param_1,0,0);
  if ((uVar2 & 1) != 0) {
    if (((lVar1 == 0) ||
        (lVar3 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar1,0), param_1 == 0)) ||
       (uVar4 = native_UnityEngine_GameObject__get_transform_8de5c8(param_1,0), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_UnityEngine_Transform__set_parent_771f18(lVar3,uVar4,0);
    native_UnityEngine_Vector3__get_zero_776668(0);
    native_UnityEngine_Transform__set_localPosition_7718a4(lVar3,0);
    native_UnityEngine_Quaternion__get_identity_7628fc(0);
    native_UnityEngine_Transform__set_localRotation_771984(lVar3,0);
    native_UnityEngine_Vector3__get_one_776a20(0);
    native_UnityEngine_Transform__set_localScale_771e30(lVar3,0);
    if (param_2 == 0xffffffff) {
      param_2 = native_UnityEngine_GameObject__get_layer_8de608(param_1,0);
    }
    else if (0x1f < param_2) {
      return lVar1;
    }
    native_UnityEngine_GameObject__set_layer_8de648(lVar1,param_2,0);
  }
  return lVar1;
}



/* NGUITools$$AddChild @ 0x72eda0
 * UnityEngine_GameObject_o* NGUITools__AddChild (UnityEngine_GameObject_o* parent, bool undo, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072ece4) */
/* WARNING: Removing unreachable block (ram,0x0072ecec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$AddChild
   UnityEngine_GameObject_o* NGUITools__AddChild (UnityEngine_GameObject_o* parent, bool undo, const
   MethodInfo* method); */

long native_NGUITools__AddChild_72eda0(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam000000000133f593 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f593 = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f594 & 1) == 0) {
    native_sub_43273c(&UnityEngine_GameObject_TypeInfo_12d47d8,0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f594 = 1;
  }
  lVar2 = native_sub_432808(_UnityEngine_GameObject_TypeInfo_12d47d8);
  native_UnityEngine_GameObject___ctor_8de914(lVar2,0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(param_1,0,0);
  if ((uVar3 & 1) != 0) {
    if (((lVar2 == 0) ||
        (lVar4 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar2,0), param_1 == 0)) ||
       (uVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(param_1,0), lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_UnityEngine_Transform__set_parent_771f18(lVar4,uVar5,0);
    native_UnityEngine_Vector3__get_zero_776668(0);
    native_UnityEngine_Transform__set_localPosition_7718a4(lVar4,0);
    native_UnityEngine_Quaternion__get_identity_7628fc(0);
    native_UnityEngine_Transform__set_localRotation_771984(lVar4,0);
    native_UnityEngine_Vector3__get_one_776a20(0);
    native_UnityEngine_Transform__set_localScale_771e30(lVar4,0);
    uVar1 = native_UnityEngine_GameObject__get_layer_8de608(param_1,0);
    native_UnityEngine_GameObject__set_layer_8de648(lVar2,uVar1,0);
  }
  return lVar2;
}



/* NGUITools$$AddChild @ 0x72ebd4
 * UnityEngine_GameObject_o* NGUITools__AddChild (UnityEngine_GameObject_o* parent, bool undo, int32_t layer, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$AddChild
   UnityEngine_GameObject_o* NGUITools__AddChild (UnityEngine_GameObject_o* parent, bool undo,
   int32_t layer, const MethodInfo* method); */

long native_NGUITools__AddChild_72ebd4(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133f594 & 1) == 0) {
    native_sub_43273c(&UnityEngine_GameObject_TypeInfo_12d47d8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f594 = 1;
  }
  lVar1 = native_sub_432808(_UnityEngine_GameObject_TypeInfo_12d47d8);
  native_UnityEngine_GameObject___ctor_8de914(lVar1,0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(param_1,0,0);
  if ((uVar2 & 1) != 0) {
    if (((lVar1 == 0) ||
        (lVar3 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar1,0), param_1 == 0)) ||
       (uVar4 = native_UnityEngine_GameObject__get_transform_8de5c8(param_1,0), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_UnityEngine_Transform__set_parent_771f18(lVar3,uVar4,0);
    native_UnityEngine_Vector3__get_zero_776668(0);
    native_UnityEngine_Transform__set_localPosition_7718a4(lVar3,0);
    native_UnityEngine_Quaternion__get_identity_7628fc(0);
    native_UnityEngine_Transform__set_localRotation_771984(lVar3,0);
    native_UnityEngine_Vector3__get_one_776a20(0);
    native_UnityEngine_Transform__set_localScale_771e30(lVar3,0);
    if (param_3 == 0xffffffff) {
      param_3 = native_UnityEngine_GameObject__get_layer_8de608(param_1,0);
    }
    else if (0x1f < param_3) {
      return lVar1;
    }
    native_UnityEngine_GameObject__set_layer_8de648(lVar1,param_3,0);
  }
  return lVar1;
}



/* NGUITools$$AddChild @ 0x72ee08
 * UnityEngine_GameObject_o* NGUITools__AddChild (UnityEngine_Transform_o* parent, UnityEngine_GameObject_o* prefab, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$AddChild
   UnityEngine_GameObject_o* NGUITools__AddChild (UnityEngine_Transform_o* parent,
   UnityEngine_GameObject_o* prefab, const MethodInfo* method); */

long native_NGUITools__AddChild_72ee08(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if ((bRam000000000133f595 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f595 = 1;
  }
  if (param_1 != 0) {
    uVar1 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    lVar2 = native_UnityEngine_Object__Instantiate_GameObject__4a6564
                      (param_2,uVar1,_Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
    if ((lVar2 != 0) &&
       (lVar3 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar2,0), lVar3 != 0)) {
      native_UnityEngine_Transform__set_parent_771f18(lVar3,param_1,0);
      native_UnityEngine_Vector3__get_zero_776668(0);
      native_UnityEngine_Transform__set_localPosition_7718a4(lVar3,0);
      native_UnityEngine_Quaternion__get_identity_7628fc(0);
      native_UnityEngine_Transform__set_localRotation_771984(lVar3,0);
      native_UnityEngine_Vector3__get_one_776a20(0);
      native_UnityEngine_Transform__set_localScale_771e30(lVar3,0);
      native_UnityEngine_GameObject__SetActive_8de698(lVar2,1,0);
      return lVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$AddChild @ 0x72ef24
 * UnityEngine_GameObject_o* NGUITools__AddChild (UnityEngine_GameObject_o* parent, UnityEngine_GameObject_o* prefab, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072f0b0) */
/* WARNING: Removing unreachable block (ram,0x0072f0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$AddChild
   UnityEngine_GameObject_o* NGUITools__AddChild (UnityEngine_GameObject_o* parent,
   UnityEngine_GameObject_o* prefab, const MethodInfo* method); */

long native_NGUITools__AddChild_72ef24(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  if ((bRam000000000133f596 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f596 = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f597 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f597 = 1;
  }
  if (param_1 != 0) {
    uVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(param_1,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    lVar3 = native_UnityEngine_Object__Instantiate_GameObject__4a6564
                      (param_2,uVar2,_Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
    if ((uVar4 & 1) == 0) {
      return lVar3;
    }
    if ((lVar3 != 0) &&
       (lVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0), param_2 != 0)) {
      uVar2 = native_UnityEngine_Object__get_name_8e8098(param_2,0);
      native_UnityEngine_Object__set_name_8e9c08(lVar3,uVar2,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(param_1,0,0);
      if ((uVar4 & 1) != 0) {
        uVar1 = native_UnityEngine_GameObject__get_layer_8de608(param_1,0);
        native_UnityEngine_GameObject__set_layer_8de648(lVar3,uVar1,0);
      }
      native_UnityEngine_Vector3__get_zero_776668(0);
      if (lVar5 != 0) {
        native_UnityEngine_Transform__set_localPosition_7718a4(lVar5,0);
        native_UnityEngine_Quaternion__get_identity_7628fc(0);
        native_UnityEngine_Transform__set_localRotation_771984(lVar5,0);
        native_UnityEngine_Vector3__get_one_776a20(0);
        native_UnityEngine_Transform__set_localScale_771e30(lVar5,0);
        native_UnityEngine_GameObject__SetActive_8de698(lVar3,1,0);
        return lVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$AddChild @ 0x72ef98
 * UnityEngine_GameObject_o* NGUITools__AddChild (UnityEngine_GameObject_o* parent, UnityEngine_GameObject_o* prefab, int32_t layer, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$AddChild
   UnityEngine_GameObject_o* NGUITools__AddChild (UnityEngine_GameObject_o* parent,
   UnityEngine_GameObject_o* prefab, int32_t layer, const MethodInfo* method); */

long native_NGUITools__AddChild_72ef98(long param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  if ((bRam000000000133f597 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f597 = 1;
  }
  if (param_1 == 0) goto LAB_0072f148;
  uVar1 = native_UnityEngine_GameObject__get_transform_8de5c8(param_1,0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  lVar2 = native_UnityEngine_Object__Instantiate_GameObject__4a6564
                    (param_2,uVar1,_Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
  if ((uVar3 & 1) == 0) {
    return lVar2;
  }
  if ((lVar2 == 0) ||
     (lVar4 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar2,0), param_2 == 0))
  goto LAB_0072f148;
  uVar1 = native_UnityEngine_Object__get_name_8e8098(param_2,0);
  native_UnityEngine_Object__set_name_8e9c08(lVar2,uVar1,0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(param_1,0,0);
  if ((uVar3 & 1) != 0) {
    if (param_3 == 0xffffffff) {
      param_3 = native_UnityEngine_GameObject__get_layer_8de608(param_1,0);
    }
    else if (0x1f < param_3) goto LAB_0072f0e0;
    native_UnityEngine_GameObject__set_layer_8de648(lVar2,param_3,0);
  }
LAB_0072f0e0:
  native_UnityEngine_Vector3__get_zero_776668(0);
  if (lVar4 != 0) {
    native_UnityEngine_Transform__set_localPosition_7718a4(lVar4,0);
    native_UnityEngine_Quaternion__get_identity_7628fc(0);
    native_UnityEngine_Transform__set_localRotation_771984(lVar4,0);
    native_UnityEngine_Vector3__get_one_776a20(0);
    native_UnityEngine_Transform__set_localScale_771e30(lVar4,0);
    native_UnityEngine_GameObject__SetActive_8de698(lVar2,1,0);
    return lVar2;
  }
LAB_0072f148:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$CalculateRaycastDepth @ 0x72f14c
 * int32_t NGUITools__CalculateRaycastDepth (UnityEngine_GameObject_o* go, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$CalculateRaycastDepth
   int32_t NGUITools__CalculateRaycastDepth (UnityEngine_GameObject_o* go, const MethodInfo*
   method); */

int native_NGUITools__CalculateRaycastDepth_72f14c(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  
  if ((bRam000000000133f598 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget____12e4ba8);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__Clear___12dd420);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__RemoveAt___12dd438);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__get_Count___12dd448);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__get_Item___12dd450);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f598 = 1;
  }
  if (param_1 != 0) {
    lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (param_1,_Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar4,0,0);
    if ((uVar5 & 1) == 0) {
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x28);
      if (lVar4 != 0) {
        native_System_Collections_Generic_List_Action___Clear_d40e80
                  (lVar4,_Method_System_Collections_Generic_List_UIWidget__Clear___12dd420);
        native_UnityEngine_GameObject__GetComponentsInChildren_object__4a2760
                  (param_1,*(undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x28),
                   _Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget____12e4ba8);
        lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x28);
        if (lVar4 != 0) {
          iVar3 = *(int *)(lVar4 + 0x18);
          bVar6 = *(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1;
          if (0 < iVar3) {
            uVar7 = 0;
            do {
              if ((bVar6 != 0) && (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x28);
              if (lVar4 == 0) goto LAB_0072f4a4;
              if (*(uint *)(lVar4 + 0x18) <= uVar7) {
                native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
              }
              plVar9 = *(long **)(*(long *)(lVar4 + 0x10) + (long)(int)uVar7 * 8 + 0x20);
              if (plVar9 == (long *)0x0) goto LAB_0072f4a4;
              uVar5 = (**(code **)(*plVar9 + 0x398))(plVar9,*(undefined8 *)(*plVar9 + 0x3a0));
              if (((uVar5 & 1) == 0) ||
                 (uVar5 = native_UnityEngine_Behaviour__get_enabled_8d7acc(plVar9,0), uVar8 = uVar7,
                 (uVar5 & 1) == 0)) {
                if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x28);
                if (lVar4 == 0) goto LAB_0072f4a4;
                uVar8 = uVar7 - 1;
                native_System_Collections_Generic_List_int_____RemoveAt_d42280
                          (lVar4,uVar7,
                           _Method_System_Collections_Generic_List_UIWidget__RemoveAt___12dd438);
                iVar3 = iVar3 + -1;
              }
              uVar7 = uVar8 + 1;
              bVar6 = *(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1;
            } while ((int)uVar7 < iVar3);
          }
          if ((bVar6 != 0) && (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x28);
          if (lVar4 != 0) {
            if (*(int *)(lVar4 + 0x18) == 0) {
              iVar3 = 0;
            }
            else {
              if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                native_sub_4327ec();
                lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x28);
                if (lVar4 == 0) goto LAB_0072f4a4;
              }
              iVar1 = *(int *)(lVar4 + 0x18);
              if (iVar1 < 1) {
                iVar3 = 0x7fffffff;
              }
              else {
                lVar4 = 0;
                iVar3 = 0x7fffffff;
                while( true ) {
                  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  lVar11 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x28);
                  if (lVar11 == 0) goto LAB_0072f4a4;
                  if (*(uint *)(lVar11 + 0x18) <= (uint)lVar4) {
                    native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
                  }
                  lVar11 = *(long *)(*(long *)(lVar11 + 0x10) + lVar4 * 8 + 0x20);
                  if (lVar11 == 0) goto LAB_0072f4a4;
                  uVar2 = native_UIWidget__get_raycastDepth_949f18(lVar11,0);
                  iVar3 = native_UnityEngine_Mathf__Min_8e4c18(iVar3,uVar2,0);
                  if (iVar1 <= (int)((uint)lVar4 + 1)) break;
                  lVar4 = lVar4 + 1;
                }
              }
            }
            return iVar3;
          }
        }
      }
    }
    else if (lVar4 != 0) {
      if ((bRam0000000001341453 & 1) == 0) {
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
        bRam0000000001341453 = 1;
      }
      uVar10 = *(undefined8 *)(lVar4 + 0xf0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar10,0,0);
      if ((uVar5 & 1) != 0) {
        native_UIWidget__CreatePanel_949fec(lVar4);
      }
      uVar10 = *(undefined8 *)(lVar4 + 0xf0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
      iVar3 = *(int *)(lVar4 + 0xac);
      if ((uVar5 & 1) != 0) {
        if (*(long *)(lVar4 + 0xf0) == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        iVar3 = iVar3 + *(int *)(*(long *)(lVar4 + 0xf0) + 0x15c) * 1000;
      }
      return iVar3;
    }
  }
LAB_0072f4a4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$CalculateNextDepth @ 0x72f4a8
 * int32_t NGUITools__CalculateNextDepth (UnityEngine_GameObject_o* go, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$CalculateNextDepth
   int32_t NGUITools__CalculateNextDepth (UnityEngine_GameObject_o* go, const MethodInfo* method);
    */

int native_NGUITools__CalculateNextDepth_72f4a8(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  if ((bRam000000000133f599 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget____12e4ba8);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__Clear___12dd420);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__get_Count___12dd448);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__get_Item___12dd450);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f599 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(param_1,0);
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar5 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x28);
  if ((lVar5 != 0) &&
     (native_System_Collections_Generic_List_Action___Clear_d40e80
                (lVar5,_Method_System_Collections_Generic_List_UIWidget__Clear___12dd420),
     param_1 != 0)) {
    native_UnityEngine_GameObject__GetComponentsInChildren_object__4a2760
              (param_1,*(undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x28),
               _Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget____12e4ba8);
    lVar5 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x28);
    if (lVar5 != 0) {
      iVar1 = *(int *)(lVar5 + 0x18);
      if (iVar1 < 1) {
        iVar3 = -1;
      }
      else {
        lVar5 = 0;
        iVar3 = -1;
        while( true ) {
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar6 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x28);
          if (lVar6 == 0) goto LAB_0072f6ac;
          if (*(uint *)(lVar6 + 0x18) <= (uint)lVar5) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          plVar7 = *(long **)(*(long *)(lVar6 + 0x10) + lVar5 * 8 + 0x20);
          if (plVar7 == (long *)0x0) goto LAB_0072f6ac;
          uVar4 = (**(code **)(*plVar7 + 0x398))(plVar7,*(undefined8 *)(*plVar7 + 0x3a0));
          if (((uVar4 & 1) != 0) &&
             (uVar4 = native_UnityEngine_Behaviour__get_enabled_8d7acc(plVar7,0), (uVar4 & 1) != 0))
          {
            uVar2 = (**(code **)(*plVar7 + 0x2c8))(plVar7,*(undefined8 *)(*plVar7 + 0x2d0));
            iVar3 = native_UnityEngine_Mathf__Max_8e4cd0(iVar3,uVar2,0);
          }
          if (iVar1 <= (int)((uint)lVar5 + 1)) break;
          lVar5 = lVar5 + 1;
        }
      }
      return iVar3 + 1;
    }
  }
LAB_0072f6ac:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$CalculateNextDepth @ 0x72f6b0
 * int32_t NGUITools__CalculateNextDepth (UnityEngine_GameObject_o* go, bool ignoreChildrenWithColliders, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$CalculateNextDepth
   int32_t NGUITools__CalculateNextDepth (UnityEngine_GameObject_o* go, bool
   ignoreChildrenWithColliders, const MethodInfo* method); */

int native_NGUITools__CalculateNextDepth_72f6b0(long param_1,ulong param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  
  if ((bRam000000000133f59a & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget____12e4ba8);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__Clear___12dd420);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__get_Count___12dd448);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__get_Item___12dd450);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f59a = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(param_1,0);
  if (((uVar4 & 1) != 0) && ((param_2 & 1) != 0)) {
    if (((*(ushort *)(_NGUITools_TypeInfo_12d53c8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    lVar5 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x28);
    if ((lVar5 != 0) &&
       (native_System_Collections_Generic_List_Action___Clear_d40e80
                  (lVar5,_Method_System_Collections_Generic_List_UIWidget__Clear___12dd420),
       param_1 != 0)) {
      native_UnityEngine_GameObject__GetComponentsInChildren_object__4a2760
                (param_1,*(undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x28),
                 _Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget____12e4ba8);
      lVar5 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x28);
      if (lVar5 != 0) {
        iVar1 = *(int *)(lVar5 + 0x18);
        if (0 < iVar1) {
          lVar5 = 0;
          iVar3 = -1;
          do {
            if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            lVar7 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x28);
            if (lVar7 == 0) goto LAB_0072f9e4;
            if (*(uint *)(lVar7 + 0x18) <= (uint)lVar5) {
              native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            }
            plVar8 = *(long **)(*(long *)(lVar7 + 0x10) + lVar5 * 8 + 0x20);
            if (plVar8 == (long *)0x0) goto LAB_0072f9e4;
            uVar4 = (**(code **)(*plVar8 + 0x398))(plVar8,*(undefined8 *)(*plVar8 + 0x3a0));
            if (((uVar4 & 1) != 0) &&
               (uVar4 = native_UnityEngine_Behaviour__get_enabled_8d7acc(plVar8,0), (uVar4 & 1) != 0
               )) {
              uVar6 = native_UIRect__get_cachedGameObject_c2d1c0(plVar8,0);
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
              }
              uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,param_1,0);
              if ((uVar4 & 1) == 0) {
LAB_0072f954:
                uVar2 = (**(code **)(*plVar8 + 0x2c8))(plVar8,*(undefined8 *)(*plVar8 + 0x2d0));
                iVar3 = native_UnityEngine_Mathf__Max_8e4cd0(iVar3,uVar2,0);
              }
              else {
                uVar6 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                  (plVar8,
                                   _Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
                }
                uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
                if ((uVar4 & 1) == 0) {
                  uVar6 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                    (plVar8,
                                     _Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8
                                    );
                  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
                  }
                  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
                  if ((uVar4 & 1) == 0) goto LAB_0072f954;
                }
              }
            }
            if (iVar1 <= (int)((uint)lVar5 + 1)) goto LAB_0072f9c4;
            lVar5 = lVar5 + 1;
          } while( true );
        }
        iVar3 = -1;
LAB_0072f9c4:
        return iVar3 + 1;
      }
    }
LAB_0072f9e4:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (((*(ushort *)(_NGUITools_TypeInfo_12d53c8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  if ((bRam000000000133f599 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget____12e4ba8);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__Clear___12dd420);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__get_Count___12dd448);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget__get_Item___12dd450);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f599 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(param_1,0);
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar5 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x28);
  if ((lVar5 != 0) &&
     (native_System_Collections_Generic_List_Action___Clear_d40e80
                (lVar5,_Method_System_Collections_Generic_List_UIWidget__Clear___12dd420),
     param_1 != 0)) {
    native_UnityEngine_GameObject__GetComponentsInChildren_object__4a2760
              (param_1,*(undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x28),
               _Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget____12e4ba8);
    lVar5 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x28);
    if (lVar5 != 0) {
      iVar1 = *(int *)(lVar5 + 0x18);
      if (iVar1 < 1) {
        iVar3 = -1;
      }
      else {
        lVar5 = 0;
        iVar3 = -1;
        while( true ) {
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar7 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x28);
          if (lVar7 == 0) goto LAB_0072f6ac;
          if (*(uint *)(lVar7 + 0x18) <= (uint)lVar5) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          plVar8 = *(long **)(*(long *)(lVar7 + 0x10) + lVar5 * 8 + 0x20);
          if (plVar8 == (long *)0x0) goto LAB_0072f6ac;
          uVar4 = (**(code **)(*plVar8 + 0x398))(plVar8,*(undefined8 *)(*plVar8 + 0x3a0));
          if (((uVar4 & 1) != 0) &&
             (uVar4 = native_UnityEngine_Behaviour__get_enabled_8d7acc(plVar8,0), (uVar4 & 1) != 0))
          {
            uVar2 = (**(code **)(*plVar8 + 0x2c8))(plVar8,*(undefined8 *)(*plVar8 + 0x2d0));
            iVar3 = native_UnityEngine_Mathf__Max_8e4cd0(iVar3,uVar2,0);
          }
          if (iVar1 <= (int)((uint)lVar5 + 1)) break;
          lVar5 = lVar5 + 1;
        }
      }
      return iVar3 + 1;
    }
  }
LAB_0072f6ac:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$AdjustDepth @ 0x72f9e8
 * int32_t NGUITools__AdjustDepth (UnityEngine_GameObject_o* go, int32_t adjustment, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$AdjustDepth
   int32_t NGUITools__AdjustDepth (UnityEngine_GameObject_o* go, int32_t adjustment, const
   MethodInfo* method); */

undefined8 native_NGUITools__AdjustDepth_72f9e8(long param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  int iVar9;
  
  if ((bRam000000000133f59b & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIPanel____12e4ac8);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIPanel____12e4b90);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget____12e4ba0);
    native_sub_43273c(&Method_NGUITools_FindInParents_UIPanel____12e5760);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f59b = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(param_1,0,0);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  if (param_1 != 0) {
    uVar3 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (param_1,_Method_UnityEngine_GameObject_GetComponent_UIPanel____12e4ac8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
    if ((uVar2 & 1) == 0) {
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar3 = native_NGUITools__FindInParents_object__4a5c04
                        (param_1,_Method_NGUITools_FindInParents_UIPanel____12e5760);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar3,0,0);
      if ((uVar2 & 1) != 0) {
        return 0;
      }
      lVar4 = native_UnityEngine_GameObject__GetComponentsInChildren_object__4a2674
                        (param_1,1,
                         _Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget____12e4ba0)
      ;
      if (lVar4 != 0) {
        iVar9 = (int)*(undefined8 *)(lVar4 + 0x18);
        if (iVar9 < 1) {
          return 2;
        }
        if (iVar9 != 0) {
          uVar6 = 0;
          do {
            plVar8 = *(long **)(lVar4 + (long)(int)uVar6 * 8 + 0x20);
            if (plVar8 == (long *)0x0) goto LAB_0072fc9c;
            lVar5 = plVar8[0x1e];
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,uVar3,0);
            if ((uVar2 & 1) == 0) {
              iVar1 = (**(code **)(*plVar8 + 0x2c8))(plVar8,*(undefined8 *)(*plVar8 + 0x2d0));
              (**(code **)(*plVar8 + 0x2d8))
                        (plVar8,iVar1 + param_2,*(undefined8 *)(*plVar8 + 0x2e0));
            }
            uVar6 = uVar6 + 1;
            if (iVar9 <= (int)uVar6) {
              return 2;
            }
          } while (uVar6 < *(uint *)(lVar4 + 0x18));
        }
LAB_0072fc88:
        uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar3,0);
      }
    }
    else {
      lVar4 = native_UnityEngine_GameObject__GetComponentsInChildren_object__4a2674
                        (param_1,1,
                         _Method_UnityEngine_GameObject_GetComponentsInChildren_UIPanel____12e4b90);
      if (lVar4 != 0) {
        uVar6 = *(uint *)(lVar4 + 0x18);
        if (0 < (int)uVar6) {
          uVar7 = 0;
          do {
            if (uVar6 <= uVar7) goto LAB_0072fc88;
            lVar5 = *(long *)(lVar4 + (long)(int)uVar7 * 8 + 0x20);
            if (lVar5 == 0) goto LAB_0072fc9c;
            native_UIPanel__set_depth_aef79c(lVar5,*(int *)(lVar5 + 0x15c) + param_2,0);
            uVar6 = *(uint *)(lVar4 + 0x18);
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < (int)uVar6);
        }
        return 1;
      }
    }
  }
LAB_0072fc9c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$BringForward @ 0x72fca0
 * void NGUITools__BringForward (UnityEngine_GameObject_o* go, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$BringForward
   void NGUITools__BringForward (UnityEngine_GameObject_o* go, const MethodInfo* method); */

void native_NGUITools__BringForward_72fca0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  
  if ((bRam000000000133f59c & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f59c = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar1 = native_NGUITools__AdjustDepth_72f9e8(param_1,1000);
  if (iVar1 == 2) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if ((bRam000000000133f59f & 1) == 0) {
      native_sub_43273c(&Method_NGUITools_FindActive_UIWidget____12e5728);
      native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
      bRam000000000133f59f = 1;
    }
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar4 = native_NGUITools__FindActive_AudioListener__4a5b30
                      (_Method_NGUITools_FindActive_UIWidget____12e5728);
    if ((bRam000000000133f5a1 & 1) == 0) {
      native_sub_43273c(&Method_System_Array_Sort_UIWidget____12e1a68);
      native_sub_43273c(&Method_System_Comparison_UIWidget___ctor___12d8b58);
      native_sub_43273c(&System_Comparison_UIWidget__TypeInfo_12d21f8);
      native_sub_43273c(&Method_UIWidget_FullCompareFunc___12e7958);
      bRam000000000133f5a1 = 1;
    }
    if (lVar4 == 0) {
LAB_00730208:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    iVar1 = *(int *)(lVar4 + 0x18);
    if (0 < iVar1) {
      uVar5 = native_sub_432808(_System_Comparison_UIWidget__TypeInfo_12d21f8);
      native_System_Comparison_ABSSequentiable____ctor_bbdf08
                (uVar5,0,_Method_UIWidget_FullCompareFunc___12e7958,
                 _Method_System_Comparison_UIWidget___ctor___12d8b58);
      native_System_Array__Sort_object__494b80
                (lVar4,uVar5,_Method_System_Array_Sort_UIWidget____12e1a68);
      if (*(int *)(lVar4 + 0x18) == 0) {
LAB_007301fc:
        uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar5,0);
      }
      plVar7 = *(long **)(lVar4 + 0x20);
      if (plVar7 == (long *)0x0) goto LAB_00730208;
      iVar2 = (**(code **)(*plVar7 + 0x2c8))(plVar7,*(undefined8 *)(*plVar7 + 0x2d0));
      lVar6 = 0;
      iVar8 = 0;
      do {
        if (*(uint *)(lVar4 + 0x18) <= (uint)lVar6) goto LAB_007301fc;
        plVar7 = *(long **)(lVar4 + 0x20 + lVar6 * 8);
        if (plVar7 == (long *)0x0) goto LAB_00730208;
        iVar3 = (**(code **)(*plVar7 + 0x2c8))(plVar7,*(undefined8 *)(*plVar7 + 0x2d0));
        lVar9 = *plVar7;
        if (iVar3 != iVar2) {
          iVar2 = (**(code **)(lVar9 + 0x2c8))(plVar7,*(undefined8 *)(lVar9 + 0x2d0));
          lVar9 = *plVar7;
          iVar8 = iVar8 + 1;
        }
        (**(code **)(lVar9 + 0x2d8))(plVar7,iVar8,*(undefined8 *)(lVar9 + 0x2e0));
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < iVar1);
    }
    return;
  }
  if (iVar1 != 1) {
    return;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f5a2 & 1) == 0) {
    native_sub_43273c(&Method_System_Array_Sort_UIPanel____12e1a60);
    native_sub_43273c(&Method_System_Comparison_UIPanel___ctor___12d8b48);
    native_sub_43273c(&System_Comparison_UIPanel__TypeInfo_12d21e8);
    native_sub_43273c(&Method_NGUITools_FindActive_UIPanel____12e5718);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&Method_UIPanel_CompareFunc___12e7848);
    bRam000000000133f5a2 = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar4 = native_NGUITools__FindActive_AudioListener__4a5b30
                    (_Method_NGUITools_FindActive_UIPanel____12e5718);
  if (lVar4 == 0) {
LAB_0072fef4:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  iVar1 = *(int *)(lVar4 + 0x18);
  if (iVar1 < 1) {
    return;
  }
  uVar5 = native_sub_432808(_System_Comparison_UIPanel__TypeInfo_12d21e8);
  native_System_Comparison_ABSSequentiable____ctor_bbdf08
            (uVar5,0,_Method_UIPanel_CompareFunc___12e7848,
             _Method_System_Comparison_UIPanel___ctor___12d8b48);
  native_System_Array__Sort_object__494b80(lVar4,uVar5,_Method_System_Array_Sort_UIPanel____12e1a60)
  ;
  iVar8 = (int)*(undefined8 *)(lVar4 + 0x18);
  if (iVar8 != 0) {
    if (*(long *)(lVar4 + 0x20) == 0) goto LAB_0072fef4;
    if (iVar8 != 0) {
      iVar2 = *(int *)(*(long *)(lVar4 + 0x20) + 0x15c);
      uVar10 = 0;
      iVar8 = 0;
      do {
        lVar6 = *(long *)(lVar4 + (long)(int)uVar10 * 8 + 0x20);
        if (lVar6 == 0) goto LAB_0072fef4;
        iVar3 = *(int *)(lVar6 + 0x15c);
        if (iVar3 == iVar2) {
          native_UIPanel__set_depth_aef79c(lVar6,iVar8,0);
        }
        else {
          iVar8 = iVar8 + 1;
          native_UIPanel__set_depth_aef79c(lVar6,iVar8,0);
          iVar2 = iVar3;
        }
        uVar10 = uVar10 + 1;
        if (iVar1 <= (int)uVar10) {
          return;
        }
      } while (uVar10 < *(uint *)(lVar4 + 0x18));
    }
  }
  uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar5,0);
}



/* NGUITools$$PushBack @ 0x72ff6c
 * void NGUITools__PushBack (UnityEngine_GameObject_o* go, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$PushBack
   void NGUITools__PushBack (UnityEngine_GameObject_o* go, const MethodInfo* method); */

void native_NGUITools__PushBack_72ff6c(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  
  if ((bRam000000000133f59d & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f59d = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar1 = native_NGUITools__AdjustDepth_72f9e8(param_1,0xfffffc18);
  if (iVar1 == 2) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if ((bRam000000000133f59f & 1) == 0) {
      native_sub_43273c(&Method_NGUITools_FindActive_UIWidget____12e5728);
      native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
      bRam000000000133f59f = 1;
    }
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar4 = native_NGUITools__FindActive_AudioListener__4a5b30
                      (_Method_NGUITools_FindActive_UIWidget____12e5728);
    if ((bRam000000000133f5a1 & 1) == 0) {
      native_sub_43273c(&Method_System_Array_Sort_UIWidget____12e1a68);
      native_sub_43273c(&Method_System_Comparison_UIWidget___ctor___12d8b58);
      native_sub_43273c(&System_Comparison_UIWidget__TypeInfo_12d21f8);
      native_sub_43273c(&Method_UIWidget_FullCompareFunc___12e7958);
      bRam000000000133f5a1 = 1;
    }
    if (lVar4 == 0) {
LAB_00730208:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    iVar1 = *(int *)(lVar4 + 0x18);
    if (0 < iVar1) {
      uVar5 = native_sub_432808(_System_Comparison_UIWidget__TypeInfo_12d21f8);
      native_System_Comparison_ABSSequentiable____ctor_bbdf08
                (uVar5,0,_Method_UIWidget_FullCompareFunc___12e7958,
                 _Method_System_Comparison_UIWidget___ctor___12d8b58);
      native_System_Array__Sort_object__494b80
                (lVar4,uVar5,_Method_System_Array_Sort_UIWidget____12e1a68);
      if (*(int *)(lVar4 + 0x18) == 0) {
LAB_007301fc:
        uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar5,0);
      }
      plVar7 = *(long **)(lVar4 + 0x20);
      if (plVar7 == (long *)0x0) goto LAB_00730208;
      iVar2 = (**(code **)(*plVar7 + 0x2c8))(plVar7,*(undefined8 *)(*plVar7 + 0x2d0));
      lVar6 = 0;
      iVar8 = 0;
      do {
        if (*(uint *)(lVar4 + 0x18) <= (uint)lVar6) goto LAB_007301fc;
        plVar7 = *(long **)(lVar4 + 0x20 + lVar6 * 8);
        if (plVar7 == (long *)0x0) goto LAB_00730208;
        iVar3 = (**(code **)(*plVar7 + 0x2c8))(plVar7,*(undefined8 *)(*plVar7 + 0x2d0));
        lVar9 = *plVar7;
        if (iVar3 != iVar2) {
          iVar2 = (**(code **)(lVar9 + 0x2c8))(plVar7,*(undefined8 *)(lVar9 + 0x2d0));
          lVar9 = *plVar7;
          iVar8 = iVar8 + 1;
        }
        (**(code **)(lVar9 + 0x2d8))(plVar7,iVar8,*(undefined8 *)(lVar9 + 0x2e0));
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < iVar1);
    }
    return;
  }
  if (iVar1 != 1) {
    return;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f5a2 & 1) == 0) {
    native_sub_43273c(&Method_System_Array_Sort_UIPanel____12e1a60);
    native_sub_43273c(&Method_System_Comparison_UIPanel___ctor___12d8b48);
    native_sub_43273c(&System_Comparison_UIPanel__TypeInfo_12d21e8);
    native_sub_43273c(&Method_NGUITools_FindActive_UIPanel____12e5718);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&Method_UIPanel_CompareFunc___12e7848);
    bRam000000000133f5a2 = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar4 = native_NGUITools__FindActive_AudioListener__4a5b30
                    (_Method_NGUITools_FindActive_UIPanel____12e5718);
  if (lVar4 == 0) {
LAB_0072fef4:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  iVar1 = *(int *)(lVar4 + 0x18);
  if (iVar1 < 1) {
    return;
  }
  uVar5 = native_sub_432808(_System_Comparison_UIPanel__TypeInfo_12d21e8);
  native_System_Comparison_ABSSequentiable____ctor_bbdf08
            (uVar5,0,_Method_UIPanel_CompareFunc___12e7848,
             _Method_System_Comparison_UIPanel___ctor___12d8b48);
  native_System_Array__Sort_object__494b80(lVar4,uVar5,_Method_System_Array_Sort_UIPanel____12e1a60)
  ;
  iVar8 = (int)*(undefined8 *)(lVar4 + 0x18);
  if (iVar8 != 0) {
    if (*(long *)(lVar4 + 0x20) == 0) goto LAB_0072fef4;
    if (iVar8 != 0) {
      iVar2 = *(int *)(*(long *)(lVar4 + 0x20) + 0x15c);
      uVar10 = 0;
      iVar8 = 0;
      do {
        lVar6 = *(long *)(lVar4 + (long)(int)uVar10 * 8 + 0x20);
        if (lVar6 == 0) goto LAB_0072fef4;
        iVar3 = *(int *)(lVar6 + 0x15c);
        if (iVar3 == iVar2) {
          native_UIPanel__set_depth_aef79c(lVar6,iVar8,0);
        }
        else {
          iVar8 = iVar8 + 1;
          native_UIPanel__set_depth_aef79c(lVar6,iVar8,0);
          iVar2 = iVar3;
        }
        uVar10 = uVar10 + 1;
        if (iVar1 <= (int)uVar10) {
          return;
        }
      } while (uVar10 < *(uint *)(lVar4 + 0x18));
    }
  }
  uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar5,0);
}



/* NGUITools$$NormalizeDepths @ 0x73002c
 * void NGUITools__NormalizeDepths (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$NormalizeDepths
   void NGUITools__NormalizeDepths (const MethodInfo* method); */

void native_NGUITools__NormalizeDepths_73002c(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  if ((bRam000000000133f59e & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f59e = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_NGUITools__NormalizeWidgetDepths_72fef8();
  if ((bRam000000000133f5a2 & 1) == 0) {
    native_sub_43273c(&Method_System_Array_Sort_UIPanel____12e1a60);
    native_sub_43273c(&Method_System_Comparison_UIPanel___ctor___12d8b48);
    native_sub_43273c(&System_Comparison_UIPanel__TypeInfo_12d21e8);
    native_sub_43273c(&Method_NGUITools_FindActive_UIPanel____12e5718);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&Method_UIPanel_CompareFunc___12e7848);
    bRam000000000133f5a2 = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar3 = native_NGUITools__FindActive_AudioListener__4a5b30
                    (_Method_NGUITools_FindActive_UIPanel____12e5718);
  if (lVar3 == 0) {
LAB_0072fef4:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  iVar1 = *(int *)(lVar3 + 0x18);
  if (iVar1 < 1) {
    return;
  }
  uVar4 = native_sub_432808(_System_Comparison_UIPanel__TypeInfo_12d21e8);
  native_System_Comparison_ABSSequentiable____ctor_bbdf08
            (uVar4,0,_Method_UIPanel_CompareFunc___12e7848,
             _Method_System_Comparison_UIPanel___ctor___12d8b48);
  native_System_Array__Sort_object__494b80(lVar3,uVar4,_Method_System_Array_Sort_UIPanel____12e1a60)
  ;
  iVar6 = (int)*(undefined8 *)(lVar3 + 0x18);
  if (iVar6 != 0) {
    if (*(long *)(lVar3 + 0x20) == 0) goto LAB_0072fef4;
    if (iVar6 != 0) {
      iVar8 = *(int *)(*(long *)(lVar3 + 0x20) + 0x15c);
      uVar7 = 0;
      iVar6 = 0;
      do {
        lVar5 = *(long *)(lVar3 + (long)(int)uVar7 * 8 + 0x20);
        if (lVar5 == 0) goto LAB_0072fef4;
        iVar2 = *(int *)(lVar5 + 0x15c);
        if (iVar2 == iVar8) {
          native_UIPanel__set_depth_aef79c(lVar5,iVar6,0);
        }
        else {
          iVar6 = iVar6 + 1;
          native_UIPanel__set_depth_aef79c(lVar5,iVar6,0);
          iVar8 = iVar2;
        }
        uVar7 = uVar7 + 1;
        if (iVar1 <= (int)uVar7) {
          return;
        }
      } while (uVar7 < *(uint *)(lVar3 + 0x18));
    }
  }
  uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar4,0);
}



/* NGUITools$$NormalizeWidgetDepths @ 0x72fef8
 * void NGUITools__NormalizeWidgetDepths (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$NormalizeWidgetDepths
   void NGUITools__NormalizeWidgetDepths (const MethodInfo* method); */

void native_NGUITools__NormalizeWidgetDepths_72fef8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  
  if ((bRam000000000133f59f & 1) == 0) {
    native_sub_43273c(&Method_NGUITools_FindActive_UIWidget____12e5728);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f59f = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar4 = native_NGUITools__FindActive_AudioListener__4a5b30
                    (_Method_NGUITools_FindActive_UIWidget____12e5728);
  if ((bRam000000000133f5a1 & 1) == 0) {
    native_sub_43273c(&Method_System_Array_Sort_UIWidget____12e1a68);
    native_sub_43273c(&Method_System_Comparison_UIWidget___ctor___12d8b58);
    native_sub_43273c(&System_Comparison_UIWidget__TypeInfo_12d21f8);
    native_sub_43273c(&Method_UIWidget_FullCompareFunc___12e7958);
    bRam000000000133f5a1 = 1;
  }
  if (lVar4 != 0) {
    iVar1 = *(int *)(lVar4 + 0x18);
    if (0 < iVar1) {
      uVar5 = native_sub_432808(_System_Comparison_UIWidget__TypeInfo_12d21f8);
      native_System_Comparison_ABSSequentiable____ctor_bbdf08
                (uVar5,0,_Method_UIWidget_FullCompareFunc___12e7958,
                 _Method_System_Comparison_UIWidget___ctor___12d8b58);
      native_System_Array__Sort_object__494b80
                (lVar4,uVar5,_Method_System_Array_Sort_UIWidget____12e1a68);
      if (*(int *)(lVar4 + 0x18) == 0) {
LAB_007301fc:
        uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar5,0);
      }
      plVar6 = *(long **)(lVar4 + 0x20);
      if (plVar6 == (long *)0x0) goto LAB_00730208;
      iVar2 = (**(code **)(*plVar6 + 0x2c8))(plVar6,*(undefined8 *)(*plVar6 + 0x2d0));
      lVar9 = 0;
      iVar8 = 0;
      do {
        if (*(uint *)(lVar4 + 0x18) <= (uint)lVar9) goto LAB_007301fc;
        plVar6 = *(long **)(lVar4 + 0x20 + lVar9 * 8);
        if (plVar6 == (long *)0x0) goto LAB_00730208;
        iVar3 = (**(code **)(*plVar6 + 0x2c8))(plVar6,*(undefined8 *)(*plVar6 + 0x2d0));
        lVar7 = *plVar6;
        if (iVar3 != iVar2) {
          iVar2 = (**(code **)(lVar7 + 0x2c8))(plVar6,*(undefined8 *)(lVar7 + 0x2d0));
          lVar7 = *plVar6;
          iVar8 = iVar8 + 1;
        }
        (**(code **)(lVar7 + 0x2d8))(plVar6,iVar8,*(undefined8 *)(lVar7 + 0x2e0));
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < iVar1);
    }
    return;
  }
LAB_00730208:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$NormalizeWidgetDepths @ 0x73020c
 * void NGUITools__NormalizeWidgetDepths (UnityEngine_GameObject_o* go, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$NormalizeWidgetDepths
   void NGUITools__NormalizeWidgetDepths (UnityEngine_GameObject_o* go, const MethodInfo* method);
    */

void native_NGUITools__NormalizeWidgetDepths_73020c(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  
  if ((bRam000000000133f5a0 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget____12e4b88);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5a0 = 1;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar6 = native_UnityEngine_GameObject__GetComponentsInChildren_Collider__4a2650
                    (param_1,
                     _Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget____12e4b88);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  if ((bRam000000000133f5a1 & 1) == 0) {
    native_sub_43273c(&Method_System_Array_Sort_UIWidget____12e1a68);
    native_sub_43273c(&Method_System_Comparison_UIWidget___ctor___12d8b58);
    native_sub_43273c(&System_Comparison_UIWidget__TypeInfo_12d21f8);
    native_sub_43273c(&Method_UIWidget_FullCompareFunc___12e7958);
    bRam000000000133f5a1 = 1;
  }
  if (lVar6 != 0) {
    iVar1 = *(int *)(lVar6 + 0x18);
    if (0 < iVar1) {
      uVar4 = native_sub_432808(_System_Comparison_UIWidget__TypeInfo_12d21f8);
      native_System_Comparison_ABSSequentiable____ctor_bbdf08
                (uVar4,0,_Method_UIWidget_FullCompareFunc___12e7958,
                 _Method_System_Comparison_UIWidget___ctor___12d8b58);
      native_System_Array__Sort_object__494b80
                (lVar6,uVar4,_Method_System_Array_Sort_UIWidget____12e1a68);
      if (*(int *)(lVar6 + 0x18) == 0) {
LAB_007301fc:
        uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar4,0);
      }
      plVar5 = *(long **)(lVar6 + 0x20);
      if (plVar5 == (long *)0x0) goto LAB_00730208;
      iVar2 = (**(code **)(*plVar5 + 0x2c8))(plVar5,*(undefined8 *)(*plVar5 + 0x2d0));
      lVar9 = 0;
      iVar8 = 0;
      do {
        if (*(uint *)(lVar6 + 0x18) <= (uint)lVar9) goto LAB_007301fc;
        plVar5 = *(long **)(lVar6 + 0x20 + lVar9 * 8);
        if (plVar5 == (long *)0x0) goto LAB_00730208;
        iVar3 = (**(code **)(*plVar5 + 0x2c8))(plVar5,*(undefined8 *)(*plVar5 + 0x2d0));
        lVar7 = *plVar5;
        if (iVar3 != iVar2) {
          iVar2 = (**(code **)(lVar7 + 0x2c8))(plVar5,*(undefined8 *)(lVar7 + 0x2d0));
          lVar7 = *plVar5;
          iVar8 = iVar8 + 1;
        }
        (**(code **)(lVar7 + 0x2d8))(plVar5,iVar8,*(undefined8 *)(lVar7 + 0x2e0));
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < iVar1);
    }
    return;
  }
LAB_00730208:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$NormalizeWidgetDepths @ 0x730088
 * void NGUITools__NormalizeWidgetDepths (UIWidget_array* list, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$NormalizeWidgetDepths
   void NGUITools__NormalizeWidgetDepths (UIWidget_array* list, const MethodInfo* method); */

void native_NGUITools__NormalizeWidgetDepths_730088(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  
  if ((bRam000000000133f5a1 & 1) == 0) {
    native_sub_43273c(&Method_System_Array_Sort_UIWidget____12e1a68);
    native_sub_43273c(&Method_System_Comparison_UIWidget___ctor___12d8b58);
    native_sub_43273c(&System_Comparison_UIWidget__TypeInfo_12d21f8);
    native_sub_43273c(&Method_UIWidget_FullCompareFunc___12e7958);
    bRam000000000133f5a1 = 1;
  }
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    if (0 < iVar1) {
      uVar4 = native_sub_432808(_System_Comparison_UIWidget__TypeInfo_12d21f8);
      native_System_Comparison_ABSSequentiable____ctor_bbdf08
                (uVar4,0,_Method_UIWidget_FullCompareFunc___12e7958,
                 _Method_System_Comparison_UIWidget___ctor___12d8b58);
      native_System_Array__Sort_object__494b80
                (param_1,uVar4,_Method_System_Array_Sort_UIWidget____12e1a68);
      if (*(int *)(param_1 + 0x18) == 0) {
LAB_007301fc:
        uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar4,0);
      }
      plVar5 = *(long **)(param_1 + 0x20);
      if (plVar5 == (long *)0x0) goto LAB_00730208;
      iVar2 = (**(code **)(*plVar5 + 0x2c8))(plVar5,*(undefined8 *)(*plVar5 + 0x2d0));
      lVar8 = 0;
      iVar7 = 0;
      do {
        if (*(uint *)(param_1 + 0x18) <= (uint)lVar8) goto LAB_007301fc;
        plVar5 = *(long **)(param_1 + 0x20 + lVar8 * 8);
        if (plVar5 == (long *)0x0) goto LAB_00730208;
        iVar3 = (**(code **)(*plVar5 + 0x2c8))(plVar5,*(undefined8 *)(*plVar5 + 0x2d0));
        lVar6 = *plVar5;
        if (iVar3 != iVar2) {
          iVar2 = (**(code **)(lVar6 + 0x2c8))(plVar5,*(undefined8 *)(lVar6 + 0x2d0));
          lVar6 = *plVar5;
          iVar7 = iVar7 + 1;
        }
        (**(code **)(lVar6 + 0x2d8))(plVar5,iVar7,*(undefined8 *)(lVar6 + 0x2e0));
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < iVar1);
    }
    return;
  }
LAB_00730208:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$NormalizePanelDepths @ 0x72fd60
 * void NGUITools__NormalizePanelDepths (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$NormalizePanelDepths
   void NGUITools__NormalizePanelDepths (const MethodInfo* method); */

void native_NGUITools__NormalizePanelDepths_72fd60(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  if ((bRam000000000133f5a2 & 1) == 0) {
    native_sub_43273c(&Method_System_Array_Sort_UIPanel____12e1a60);
    native_sub_43273c(&Method_System_Comparison_UIPanel___ctor___12d8b48);
    native_sub_43273c(&System_Comparison_UIPanel__TypeInfo_12d21e8);
    native_sub_43273c(&Method_NGUITools_FindActive_UIPanel____12e5718);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&Method_UIPanel_CompareFunc___12e7848);
    bRam000000000133f5a2 = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar3 = native_NGUITools__FindActive_AudioListener__4a5b30
                    (_Method_NGUITools_FindActive_UIPanel____12e5718);
  if (lVar3 == 0) {
LAB_0072fef4:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  iVar1 = *(int *)(lVar3 + 0x18);
  if (iVar1 < 1) {
    return;
  }
  uVar4 = native_sub_432808(_System_Comparison_UIPanel__TypeInfo_12d21e8);
  native_System_Comparison_ABSSequentiable____ctor_bbdf08
            (uVar4,0,_Method_UIPanel_CompareFunc___12e7848,
             _Method_System_Comparison_UIPanel___ctor___12d8b48);
  native_System_Array__Sort_object__494b80(lVar3,uVar4,_Method_System_Array_Sort_UIPanel____12e1a60)
  ;
  iVar6 = (int)*(undefined8 *)(lVar3 + 0x18);
  if (iVar6 != 0) {
    if (*(long *)(lVar3 + 0x20) == 0) goto LAB_0072fef4;
    if (iVar6 != 0) {
      iVar8 = *(int *)(*(long *)(lVar3 + 0x20) + 0x15c);
      uVar7 = 0;
      iVar6 = 0;
      do {
        lVar5 = *(long *)(lVar3 + (long)(int)uVar7 * 8 + 0x20);
        if (lVar5 == 0) goto LAB_0072fef4;
        iVar2 = *(int *)(lVar5 + 0x15c);
        if (iVar2 == iVar8) {
          native_UIPanel__set_depth_aef79c(lVar5,iVar6,0);
        }
        else {
          iVar6 = iVar6 + 1;
          native_UIPanel__set_depth_aef79c(lVar5,iVar6,0);
          iVar8 = iVar2;
        }
        uVar7 = uVar7 + 1;
        if (iVar1 <= (int)uVar7) {
          return;
        }
      } while (uVar7 < *(uint *)(lVar3 + 0x18));
    }
  }
  uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar4,0);
}



/* NGUITools$$CreateUI @ 0x73029c
 * UIPanel_o* NGUITools__CreateUI (bool advanced3D, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00730c4c) */
/* WARNING: Removing unreachable block (ram,0x00730c68) */
/* WARNING: Removing unreachable block (ram,0x00730c70) */
/* WARNING: Removing unreachable block (ram,0x00730c78) */
/* WARNING: Removing unreachable block (ram,0x00730ca4) */
/* WARNING: Removing unreachable block (ram,0x00730ca8) */
/* WARNING: Removing unreachable block (ram,0x00730ccc) */
/* WARNING: Removing unreachable block (ram,0x00730cd4) */
/* WARNING: Removing unreachable block (ram,0x00730cdc) */
/* WARNING: Removing unreachable block (ram,0x00730ce0) */
/* WARNING: Removing unreachable block (ram,0x00730d1c) */
/* WARNING: Removing unreachable block (ram,0x00730d80) */
/* WARNING: Removing unreachable block (ram,0x00730d98) */
/* WARNING: Removing unreachable block (ram,0x00730da0) */
/* WARNING: Removing unreachable block (ram,0x00730da8) */
/* WARNING: Removing unreachable block (ram,0x00730cf4) */
/* WARNING: Removing unreachable block (ram,0x00730d04) */
/* WARNING: Removing unreachable block (ram,0x00730c8c) */
/* WARNING: Removing unreachable block (ram,0x007304c4) */
/* WARNING: Removing unreachable block (ram,0x007304e8) */
/* WARNING: Removing unreachable block (ram,0x007304f0) */
/* WARNING: Removing unreachable block (ram,0x007304f8) */
/* WARNING: Removing unreachable block (ram,0x00730dc8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$CreateUI
   UIPanel_o* NGUITools__CreateUI (bool advanced3D, const MethodInfo* method); */

undefined8 native_NGUITools__CreateUI_73029c(uint param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  long lVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  if ((bRam000000000133f5a3 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5a3 = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  param_1 = param_1 & 1;
  if ((bRam000000000133f5a5 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInChildren_UICamera____12e2cb8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInChildren_UIPanel____12e2cd0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Camera____12e29a8);
    native_sub_43273c(&Method_System_Collections_Generic_List_Enumerator_UIRoot__Dispose___12da6c0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Enumerator_UIRoot__MoveNext___12da6c8)
    ;
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_UIRoot__get_Current___12da6d0
                     );
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_AudioListener____12e4748);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_UICamera____12e48c8);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_UIPanel____12e48f0);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_UIRoot____12e48f8);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIRoot__GetEnumerator___12dd388);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIRoot__get_Count___12dd398);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIPanel__get_Count___12dd368);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIPanel__get_Item___12dd370);
    native_sub_43273c(&Method_NGUITools_AddChild_Camera____12e56c8);
    native_sub_43273c(&Method_NGUITools_FindActive_AudioListener____12e5700);
    native_sub_43273c(&Method_NGUITools_FindActive_Camera____12e5708);
    native_sub_43273c(&Method_NGUITools_FindInParents_UIRoot____12e5780);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIPanel_TypeInfo_12d6478);
    native_sub_43273c(&UIRoot_TypeInfo_12d64a8);
    native_sub_43273c(&StringLiteral_2D_UI_12ebc08);
    native_sub_43273c(&StringLiteral_UI_Root__3D__12f2920);
    native_sub_43273c(&StringLiteral_UI_12f2910);
    native_sub_43273c(&StringLiteral_UI_Root_12f2918);
    bRam000000000133f5a5 = 1;
  }
  uStack_88 = 0;
  lStack_80 = 0;
  uStack_90 = 0;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(0,0,0);
  if ((uVar6 & 1) != 0) goto LAB_00730ca0;
  lVar9 = 0;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = native_UnityEngine_Object__op_Equality_8e9a3c(0,0,0);
  if ((uVar6 & 1) != 0) {
    if (((*(byte *)(_UIRoot_TypeInfo_12d64a8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIRoot_TypeInfo_12d64a8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar12 = **(long **)(_UIRoot_TypeInfo_12d64a8 + 0xb8);
    if (lVar12 == 0) goto LAB_00730ca0;
    if (0 < *(int *)(lVar12 + 0x18)) {
      if (((*(byte *)(_UIRoot_TypeInfo_12d64a8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIRoot_TypeInfo_12d64a8 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar12 = **(long **)(_UIRoot_TypeInfo_12d64a8 + 0xb8);
        if (lVar12 == 0) goto LAB_00730ca0;
      }
      native_System_Collections_Generic_List_BE2_Op_FunctionLocalVariable___GetEnumerator_d414fc
                (&uStack_a8,lVar12,
                 _Method_System_Collections_Generic_List_UIRoot__GetEnumerator___12dd388);
      lStack_80 = lStack_98;
      uStack_88 = uStack_a0;
      uStack_90 = uStack_a8;
      do {
        uVar6 = native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___MoveNext_7e8f30
                          (&uStack_90,
                           _Method_System_Collections_Generic_List_Enumerator_UIRoot__MoveNext___12da6c8
                          );
        lVar12 = lStack_80;
        lVar7 = lVar9;
        if ((uVar6 & 1) == 0) break;
        if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        lVar7 = native_UnityEngine_Component__get_gameObject_8da66c(lStack_80,0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        iVar2 = native_UnityEngine_GameObject__get_layer_8de608(lVar7,0);
        lVar7 = lVar12;
      } while (iVar2 != -1);
      lVar9 = lVar7;
      native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___Dispose_7e8f2c
                (&uStack_90,
                 _Method_System_Collections_Generic_List_Enumerator_UIRoot__Dispose___12da6c0);
    }
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar9,0,0);
  if ((uVar6 & 1) != 0) {
    if (((*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIPanel_TypeInfo_12d6478 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (**(long **)(_UIPanel_TypeInfo_12d6478 + 0xb8) == 0) goto LAB_00730ca0;
    iVar2 = *(int *)(**(long **)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 0x18);
    if (0 < iVar2) {
      lVar12 = 0;
      while( true ) {
        if (((*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIPanel_TypeInfo_12d6478 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar7 = **(long **)(_UIPanel_TypeInfo_12d6478 + 0xb8);
        if (lVar7 == 0) goto LAB_00730ca0;
        if (*(uint *)(lVar7 + 0x18) <= (uint)lVar12) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + lVar12 * 8 + 0x20);
        if ((lVar7 == 0) ||
           (lVar8 = native_UnityEngine_Component__get_gameObject_8da66c(lVar7,0), lVar8 == 0))
        goto LAB_00730ca0;
        iVar3 = native_UnityEngine_Object__get_hideFlags_8ea7e0(lVar8,0);
        if ((iVar3 == 0) &&
           (iVar3 = native_UnityEngine_GameObject__get_layer_8de608(lVar8,0), iVar3 == -1)) {
          native_UnityEngine_Component__get_transform_8da62c(lVar7,0);
          goto LAB_00730ca0;
        }
        if (iVar2 <= (int)((uint)lVar12 + 1)) break;
        lVar12 = lVar12 + 1;
      }
    }
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar9,0,0);
  if ((uVar6 & 1) != 0) {
    if (lVar9 == 0) goto LAB_00730ca0;
    lVar12 = native_UnityEngine_Component__GetComponentInChildren_Animation__49db98
                       (lVar9,
                        _Method_UnityEngine_Component_GetComponentInChildren_UICamera____12e2cb8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar12,0,0);
    if ((uVar6 & 1) != 0) {
      if ((lVar12 == 0) ||
         (lVar12 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                             (lVar12,_Method_UnityEngine_Component_GetComponent_Camera____12e29a8),
         lVar12 == 0)) goto LAB_00730ca0;
      uVar4 = native_UnityEngine_Camera__get_orthographic_8d86c0(lVar12,0);
      if (((uVar4 ^ param_1) & 1) == 0) {
        lVar9 = 0;
      }
    }
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar9,0,0);
  if ((uVar6 & 1) == 0) {
    if (lVar9 == 0) goto LAB_00730ca0;
  }
  else {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar12 = native_NGUITools__AddChild_72eda0(0,0);
    if (lVar12 == 0) goto LAB_00730ca0;
    lVar9 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                      (lVar12,_Method_UnityEngine_GameObject_AddComponent_UIRoot____12e48f8);
    iVar2 = native_UnityEngine_LayerMask__NameToLayer_8dfe14(_StringLiteral_UI_12f2910,0);
    if (iVar2 == -1) {
      iVar2 = native_UnityEngine_LayerMask__NameToLayer_8dfe14(_StringLiteral_2D_UI_12ebc08,0);
    }
    native_UnityEngine_GameObject__set_layer_8de648(lVar12,iVar2,0);
    if (param_1 == 0) {
      native_UnityEngine_Object__set_name_8e9c08(lVar12,_StringLiteral_UI_Root_12f2918,0);
      if (lVar9 == 0) goto LAB_00730ca0;
      uVar11 = 0;
    }
    else {
      native_UnityEngine_Object__set_name_8e9c08(lVar12,_StringLiteral_UI_Root__3D__12f2920,0);
      if (lVar9 == 0) goto LAB_00730ca0;
      uVar11 = 1;
    }
    *(undefined4 *)(lVar9 + 0x18) = uVar11;
    native_UIRoot__UpdateScale_c2fb2c(lVar9,1,0);
  }
  uVar10 = native_UnityEngine_Component__GetComponentInChildren_Animation__49db98
                     (lVar9,_Method_UnityEngine_Component_GetComponentInChildren_UIPanel____12e2cd0)
  ;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar6 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar10,0,0);
  if ((uVar6 & 1) != 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar12 = native_NGUITools__FindActive_AudioListener__4a5b30
                       (_Method_NGUITools_FindActive_Camera____12e5708);
    lVar7 = native_UnityEngine_Component__get_gameObject_8da66c(lVar9,0);
    if ((lVar7 == 0) ||
       (uVar4 = native_UnityEngine_GameObject__get_layer_8de608(lVar7,0), lVar12 == 0))
    goto LAB_00730ca0;
    uVar5 = *(uint *)(lVar12 + 0x18);
    uVar4 = 1 << (ulong)(uVar4 & 0x1f);
    if ((int)uVar5 < 1) {
      bVar1 = false;
      uVar10 = 0xbf800000;
    }
    else {
      uVar13 = 0;
      bVar1 = false;
      uVar10 = 0xbf800000;
      do {
        if (uVar5 <= uVar13) {
          uVar10 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar10,0);
        }
        lVar7 = *(long *)(lVar12 + (long)(int)uVar13 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_00730ca0;
        iVar2 = native_UnityEngine_Camera__get_clearFlags_8d8ab8(lVar7,0);
        if ((iVar2 == 2) ||
           (iVar2 = native_UnityEngine_Camera__get_clearFlags_8d8ab8(lVar7,0), iVar2 == 1)) {
          bVar1 = true;
        }
        uVar14 = native_UnityEngine_Camera__get_depth_8d87e0(lVar7,0);
        uVar10 = native_UnityEngine_Mathf__Max_8d9f90(uVar10,uVar14,0);
        uVar5 = native_UnityEngine_Camera__get_cullingMask_8d88b0(lVar7,0);
        native_UnityEngine_Camera__set_cullingMask_8d88f0(lVar7,uVar5 & ~uVar4,0);
        uVar5 = *(uint *)(lVar12 + 0x18);
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < (int)uVar5);
    }
    uVar14 = native_UnityEngine_Component__get_gameObject_8da66c(lVar9,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    lVar12 = native_NGUITools__AddChild_Camera__4a4ff0
                       (uVar14,0,_Method_NGUITools_AddChild_Camera____12e56c8);
    if ((lVar12 == 0) ||
       (lVar7 = native_UnityEngine_Component__get_gameObject_8da66c(lVar12,0), lVar7 == 0))
    goto LAB_00730ca0;
    native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
              (lVar7,_Method_UnityEngine_GameObject_AddComponent_UICamera____12e48c8);
    uVar11 = 2;
    if (bVar1) {
      uVar11 = 3;
    }
    native_UnityEngine_Camera__set_clearFlags_8d8af8(lVar12,uVar11,0);
    native_UnityEngine_Color__get_grey_8d9e54(0);
    native_UnityEngine_Camera__set_backgroundColor_8d8a10(lVar12,0);
    native_UnityEngine_Camera__set_cullingMask_8d88f0(lVar12,uVar4,0);
    native_UnityEngine_Camera__set_depth_8d8820((float)uVar10 + 1.0,lVar12,0);
    if (param_1 == 0) {
      native_UnityEngine_Camera__set_orthographic_8d8700(lVar12,1,0);
      native_UnityEngine_Camera__set_orthographicSize_8d8670(0x3f800000,lVar12,0);
      native_UnityEngine_Camera__set_nearClipPlane_8d84c0(0xc1200000,lVar12,0);
      native_UnityEngine_Camera__set_farClipPlane_8d8550(0x41200000,lVar12,0);
    }
    else {
      native_UnityEngine_Camera__set_nearClipPlane_8d84c0(0x3dcccccd,lVar12,0);
      native_UnityEngine_Camera__set_farClipPlane_8d8550(0x40800000,lVar12,0);
      lVar7 = native_UnityEngine_Component__get_transform_8da62c(lVar12,0);
      if (lVar7 == 0) goto LAB_00730ca0;
      native_UnityEngine_Transform__set_localPosition_7718a4(0,0,0xc42f0000,lVar7,0);
    }
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar7 = native_NGUITools__FindActive_AudioListener__4a5b30
                      (_Method_NGUITools_FindActive_AudioListener____12e5700);
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0x18) == 0)) {
      lVar12 = native_UnityEngine_Component__get_gameObject_8da66c(lVar12,0);
      if (lVar12 == 0) goto LAB_00730ca0;
      native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                (lVar12,_Method_UnityEngine_GameObject_AddComponent_AudioListener____12e4748);
    }
    lVar9 = native_UnityEngine_Component__get_gameObject_8da66c(lVar9,0);
    if (lVar9 == 0) goto LAB_00730ca0;
    uVar10 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                       (lVar9,_Method_UnityEngine_GameObject_AddComponent_UIPanel____12e48f0);
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(0,0,0);
  if ((uVar6 & 1) == 0) {
    return uVar10;
  }
LAB_00730ca0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$CreateUI @ 0x730e74
 * UIPanel_o* NGUITools__CreateUI (bool advanced3D, int32_t layer, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00730c4c) */
/* WARNING: Removing unreachable block (ram,0x00730c68) */
/* WARNING: Removing unreachable block (ram,0x00730c70) */
/* WARNING: Removing unreachable block (ram,0x00730c78) */
/* WARNING: Removing unreachable block (ram,0x00730ca4) */
/* WARNING: Removing unreachable block (ram,0x00730ca8) */
/* WARNING: Removing unreachable block (ram,0x00730ccc) */
/* WARNING: Removing unreachable block (ram,0x00730cd4) */
/* WARNING: Removing unreachable block (ram,0x00730cdc) */
/* WARNING: Removing unreachable block (ram,0x00730ce0) */
/* WARNING: Removing unreachable block (ram,0x00730d1c) */
/* WARNING: Removing unreachable block (ram,0x00730d80) */
/* WARNING: Removing unreachable block (ram,0x00730d98) */
/* WARNING: Removing unreachable block (ram,0x00730da0) */
/* WARNING: Removing unreachable block (ram,0x00730da8) */
/* WARNING: Removing unreachable block (ram,0x00730cf4) */
/* WARNING: Removing unreachable block (ram,0x00730d04) */
/* WARNING: Removing unreachable block (ram,0x00730c8c) */
/* WARNING: Removing unreachable block (ram,0x007304c4) */
/* WARNING: Removing unreachable block (ram,0x007304e8) */
/* WARNING: Removing unreachable block (ram,0x007304f0) */
/* WARNING: Removing unreachable block (ram,0x007304f8) */
/* WARNING: Removing unreachable block (ram,0x00730dc8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$CreateUI
   UIPanel_o* NGUITools__CreateUI (bool advanced3D, int32_t layer, const MethodInfo* method); */

undefined8 native_NGUITools__CreateUI_730e74(uint param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  long lVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  if ((bRam000000000133f5a4 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5a4 = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  param_1 = param_1 & 1;
  if ((bRam000000000133f5a5 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInChildren_UICamera____12e2cb8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInChildren_UIPanel____12e2cd0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Camera____12e29a8);
    native_sub_43273c(&Method_System_Collections_Generic_List_Enumerator_UIRoot__Dispose___12da6c0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Enumerator_UIRoot__MoveNext___12da6c8)
    ;
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_UIRoot__get_Current___12da6d0
                     );
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_AudioListener____12e4748);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_UICamera____12e48c8);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_UIPanel____12e48f0);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_UIRoot____12e48f8);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIRoot__GetEnumerator___12dd388);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIRoot__get_Count___12dd398);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIPanel__get_Count___12dd368);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIPanel__get_Item___12dd370);
    native_sub_43273c(&Method_NGUITools_AddChild_Camera____12e56c8);
    native_sub_43273c(&Method_NGUITools_FindActive_AudioListener____12e5700);
    native_sub_43273c(&Method_NGUITools_FindActive_Camera____12e5708);
    native_sub_43273c(&Method_NGUITools_FindInParents_UIRoot____12e5780);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIPanel_TypeInfo_12d6478);
    native_sub_43273c(&UIRoot_TypeInfo_12d64a8);
    native_sub_43273c(&StringLiteral_2D_UI_12ebc08);
    native_sub_43273c(&StringLiteral_UI_Root__3D__12f2920);
    native_sub_43273c(&StringLiteral_UI_12f2910);
    native_sub_43273c(&StringLiteral_UI_Root_12f2918);
    bRam000000000133f5a5 = 1;
  }
  uStack_88 = 0;
  lStack_80 = 0;
  uStack_90 = 0;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(0,0,0);
  if ((uVar6 & 1) != 0) goto LAB_00730ca0;
  lVar9 = 0;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = native_UnityEngine_Object__op_Equality_8e9a3c(0,0,0);
  if ((uVar6 & 1) != 0) {
    if (((*(byte *)(_UIRoot_TypeInfo_12d64a8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIRoot_TypeInfo_12d64a8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar12 = **(long **)(_UIRoot_TypeInfo_12d64a8 + 0xb8);
    if (lVar12 == 0) goto LAB_00730ca0;
    if (0 < *(int *)(lVar12 + 0x18)) {
      if (((*(byte *)(_UIRoot_TypeInfo_12d64a8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIRoot_TypeInfo_12d64a8 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar12 = **(long **)(_UIRoot_TypeInfo_12d64a8 + 0xb8);
        if (lVar12 == 0) goto LAB_00730ca0;
      }
      native_System_Collections_Generic_List_BE2_Op_FunctionLocalVariable___GetEnumerator_d414fc
                (&uStack_a8,lVar12,
                 _Method_System_Collections_Generic_List_UIRoot__GetEnumerator___12dd388);
      lStack_80 = lStack_98;
      uStack_88 = uStack_a0;
      uStack_90 = uStack_a8;
      do {
        uVar6 = native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___MoveNext_7e8f30
                          (&uStack_90,
                           _Method_System_Collections_Generic_List_Enumerator_UIRoot__MoveNext___12da6c8
                          );
        lVar12 = lStack_80;
        lVar7 = lVar9;
        if ((uVar6 & 1) == 0) break;
        if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        lVar7 = native_UnityEngine_Component__get_gameObject_8da66c(lStack_80,0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        iVar2 = native_UnityEngine_GameObject__get_layer_8de608(lVar7,0);
        lVar7 = lVar12;
      } while (iVar2 != param_2);
      lVar9 = lVar7;
      native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___Dispose_7e8f2c
                (&uStack_90,
                 _Method_System_Collections_Generic_List_Enumerator_UIRoot__Dispose___12da6c0);
    }
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar9,0,0);
  if ((uVar6 & 1) != 0) {
    if (((*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIPanel_TypeInfo_12d6478 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (**(long **)(_UIPanel_TypeInfo_12d6478 + 0xb8) == 0) goto LAB_00730ca0;
    iVar2 = *(int *)(**(long **)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 0x18);
    if (0 < iVar2) {
      lVar12 = 0;
      while( true ) {
        if (((*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIPanel_TypeInfo_12d6478 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar7 = **(long **)(_UIPanel_TypeInfo_12d6478 + 0xb8);
        if (lVar7 == 0) goto LAB_00730ca0;
        if (*(uint *)(lVar7 + 0x18) <= (uint)lVar12) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + lVar12 * 8 + 0x20);
        if ((lVar7 == 0) ||
           (lVar8 = native_UnityEngine_Component__get_gameObject_8da66c(lVar7,0), lVar8 == 0))
        goto LAB_00730ca0;
        iVar3 = native_UnityEngine_Object__get_hideFlags_8ea7e0(lVar8,0);
        if ((iVar3 == 0) &&
           (iVar3 = native_UnityEngine_GameObject__get_layer_8de608(lVar8,0), iVar3 == param_2)) {
          native_UnityEngine_Component__get_transform_8da62c(lVar7,0);
          goto LAB_00730ca0;
        }
        if (iVar2 <= (int)((uint)lVar12 + 1)) break;
        lVar12 = lVar12 + 1;
      }
    }
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar9,0,0);
  if ((uVar6 & 1) != 0) {
    if (lVar9 == 0) goto LAB_00730ca0;
    lVar12 = native_UnityEngine_Component__GetComponentInChildren_Animation__49db98
                       (lVar9,
                        _Method_UnityEngine_Component_GetComponentInChildren_UICamera____12e2cb8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar12,0,0);
    if ((uVar6 & 1) != 0) {
      if ((lVar12 == 0) ||
         (lVar12 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                             (lVar12,_Method_UnityEngine_Component_GetComponent_Camera____12e29a8),
         lVar12 == 0)) goto LAB_00730ca0;
      uVar4 = native_UnityEngine_Camera__get_orthographic_8d86c0(lVar12,0);
      if (((uVar4 ^ param_1) & 1) == 0) {
        lVar9 = 0;
      }
    }
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar9,0,0);
  if ((uVar6 & 1) == 0) {
    if (lVar9 == 0) goto LAB_00730ca0;
  }
  else {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar12 = native_NGUITools__AddChild_72eda0(0,0);
    if (lVar12 == 0) goto LAB_00730ca0;
    lVar9 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                      (lVar12,_Method_UnityEngine_GameObject_AddComponent_UIRoot____12e48f8);
    if (param_2 == -1) {
      param_2 = native_UnityEngine_LayerMask__NameToLayer_8dfe14(_StringLiteral_UI_12f2910,0);
      if (param_2 == -1) {
        param_2 = native_UnityEngine_LayerMask__NameToLayer_8dfe14(_StringLiteral_2D_UI_12ebc08,0);
      }
    }
    native_UnityEngine_GameObject__set_layer_8de648(lVar12,param_2,0);
    if (param_1 == 0) {
      native_UnityEngine_Object__set_name_8e9c08(lVar12,_StringLiteral_UI_Root_12f2918,0);
      if (lVar9 == 0) goto LAB_00730ca0;
      uVar11 = 0;
    }
    else {
      native_UnityEngine_Object__set_name_8e9c08(lVar12,_StringLiteral_UI_Root__3D__12f2920,0);
      if (lVar9 == 0) goto LAB_00730ca0;
      uVar11 = 1;
    }
    *(undefined4 *)(lVar9 + 0x18) = uVar11;
    native_UIRoot__UpdateScale_c2fb2c(lVar9,1,0);
  }
  uVar10 = native_UnityEngine_Component__GetComponentInChildren_Animation__49db98
                     (lVar9,_Method_UnityEngine_Component_GetComponentInChildren_UIPanel____12e2cd0)
  ;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar6 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar10,0,0);
  if ((uVar6 & 1) != 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar12 = native_NGUITools__FindActive_AudioListener__4a5b30
                       (_Method_NGUITools_FindActive_Camera____12e5708);
    lVar7 = native_UnityEngine_Component__get_gameObject_8da66c(lVar9,0);
    if ((lVar7 == 0) ||
       (uVar4 = native_UnityEngine_GameObject__get_layer_8de608(lVar7,0), lVar12 == 0))
    goto LAB_00730ca0;
    uVar5 = *(uint *)(lVar12 + 0x18);
    uVar4 = 1 << (ulong)(uVar4 & 0x1f);
    if ((int)uVar5 < 1) {
      bVar1 = false;
      uVar10 = 0xbf800000;
    }
    else {
      uVar13 = 0;
      bVar1 = false;
      uVar10 = 0xbf800000;
      do {
        if (uVar5 <= uVar13) {
          uVar10 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar10,0);
        }
        lVar7 = *(long *)(lVar12 + (long)(int)uVar13 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_00730ca0;
        iVar2 = native_UnityEngine_Camera__get_clearFlags_8d8ab8(lVar7,0);
        if ((iVar2 == 2) ||
           (iVar2 = native_UnityEngine_Camera__get_clearFlags_8d8ab8(lVar7,0), iVar2 == 1)) {
          bVar1 = true;
        }
        uVar14 = native_UnityEngine_Camera__get_depth_8d87e0(lVar7,0);
        uVar10 = native_UnityEngine_Mathf__Max_8d9f90(uVar10,uVar14,0);
        uVar5 = native_UnityEngine_Camera__get_cullingMask_8d88b0(lVar7,0);
        native_UnityEngine_Camera__set_cullingMask_8d88f0(lVar7,uVar5 & ~uVar4,0);
        uVar5 = *(uint *)(lVar12 + 0x18);
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < (int)uVar5);
    }
    uVar14 = native_UnityEngine_Component__get_gameObject_8da66c(lVar9,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    lVar12 = native_NGUITools__AddChild_Camera__4a4ff0
                       (uVar14,0,_Method_NGUITools_AddChild_Camera____12e56c8);
    if ((lVar12 == 0) ||
       (lVar7 = native_UnityEngine_Component__get_gameObject_8da66c(lVar12,0), lVar7 == 0))
    goto LAB_00730ca0;
    native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
              (lVar7,_Method_UnityEngine_GameObject_AddComponent_UICamera____12e48c8);
    uVar11 = 2;
    if (bVar1) {
      uVar11 = 3;
    }
    native_UnityEngine_Camera__set_clearFlags_8d8af8(lVar12,uVar11,0);
    native_UnityEngine_Color__get_grey_8d9e54(0);
    native_UnityEngine_Camera__set_backgroundColor_8d8a10(lVar12,0);
    native_UnityEngine_Camera__set_cullingMask_8d88f0(lVar12,uVar4,0);
    native_UnityEngine_Camera__set_depth_8d8820((float)uVar10 + 1.0,lVar12,0);
    if (param_1 == 0) {
      native_UnityEngine_Camera__set_orthographic_8d8700(lVar12,1,0);
      native_UnityEngine_Camera__set_orthographicSize_8d8670(0x3f800000,lVar12,0);
      native_UnityEngine_Camera__set_nearClipPlane_8d84c0(0xc1200000,lVar12,0);
      native_UnityEngine_Camera__set_farClipPlane_8d8550(0x41200000,lVar12,0);
    }
    else {
      native_UnityEngine_Camera__set_nearClipPlane_8d84c0(0x3dcccccd,lVar12,0);
      native_UnityEngine_Camera__set_farClipPlane_8d8550(0x40800000,lVar12,0);
      lVar7 = native_UnityEngine_Component__get_transform_8da62c(lVar12,0);
      if (lVar7 == 0) goto LAB_00730ca0;
      native_UnityEngine_Transform__set_localPosition_7718a4(0,0,0xc42f0000,lVar7,0);
    }
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar7 = native_NGUITools__FindActive_AudioListener__4a5b30
                      (_Method_NGUITools_FindActive_AudioListener____12e5700);
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0x18) == 0)) {
      lVar12 = native_UnityEngine_Component__get_gameObject_8da66c(lVar12,0);
      if (lVar12 == 0) goto LAB_00730ca0;
      native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                (lVar12,_Method_UnityEngine_GameObject_AddComponent_AudioListener____12e4748);
    }
    lVar9 = native_UnityEngine_Component__get_gameObject_8da66c(lVar9,0);
    if (lVar9 == 0) goto LAB_00730ca0;
    uVar10 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                       (lVar9,_Method_UnityEngine_GameObject_AddComponent_UIPanel____12e48f0);
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(0,0,0);
  if ((uVar6 & 1) == 0) {
    return uVar10;
  }
LAB_00730ca0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$CreateUI @ 0x730304
 * UIPanel_o* NGUITools__CreateUI (UnityEngine_Transform_o* trans, bool advanced3D, int32_t layer, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$CreateUI
   UIPanel_o* NGUITools__CreateUI (UnityEngine_Transform_o* trans, bool advanced3D, int32_t layer,
   const MethodInfo* method); */

long native_NGUITools__CreateUI_730304(long param_1,uint param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  if ((bRam000000000133f5a5 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInChildren_UICamera____12e2cb8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInChildren_UIPanel____12e2cd0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Camera____12e29a8);
    native_sub_43273c(&Method_System_Collections_Generic_List_Enumerator_UIRoot__Dispose___12da6c0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Enumerator_UIRoot__MoveNext___12da6c8)
    ;
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_UIRoot__get_Current___12da6d0
                     );
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_AudioListener____12e4748);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_UICamera____12e48c8);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_UIPanel____12e48f0);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_UIRoot____12e48f8);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIRoot__GetEnumerator___12dd388);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIRoot__get_Count___12dd398);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIPanel__get_Count___12dd368);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIPanel__get_Item___12dd370);
    native_sub_43273c(&Method_NGUITools_AddChild_Camera____12e56c8);
    native_sub_43273c(&Method_NGUITools_FindActive_AudioListener____12e5700);
    native_sub_43273c(&Method_NGUITools_FindActive_Camera____12e5708);
    native_sub_43273c(&Method_NGUITools_FindInParents_UIRoot____12e5780);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIPanel_TypeInfo_12d6478);
    native_sub_43273c(&UIRoot_TypeInfo_12d64a8);
    native_sub_43273c(&StringLiteral_2D_UI_12ebc08);
    native_sub_43273c(&StringLiteral_UI_Root__3D__12f2920);
    native_sub_43273c(&StringLiteral_UI_12f2910);
    native_sub_43273c(&StringLiteral_UI_Root_12f2918);
    bRam000000000133f5a5 = 1;
  }
  uStack_88 = 0;
  lStack_80 = 0;
  uStack_90 = 0;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(param_1,0,0);
  lVar12 = 0;
  if ((uVar7 & 1) != 0) {
    if (param_1 == 0) goto LAB_00730ca0;
    uVar8 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    lVar12 = native_NGUITools__FindInParents_object__4a5c04
                       (uVar8,_Method_NGUITools_FindInParents_UIRoot____12e5780);
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar7 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar12,0,0);
  if ((uVar7 & 1) != 0) {
    if (((*(byte *)(_UIRoot_TypeInfo_12d64a8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIRoot_TypeInfo_12d64a8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar11 = **(long **)(_UIRoot_TypeInfo_12d64a8 + 0xb8);
    if (lVar11 == 0) goto LAB_00730ca0;
    if (0 < *(int *)(lVar11 + 0x18)) {
      if (((*(byte *)(_UIRoot_TypeInfo_12d64a8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIRoot_TypeInfo_12d64a8 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar11 = **(long **)(_UIRoot_TypeInfo_12d64a8 + 0xb8);
        if (lVar11 == 0) goto LAB_00730ca0;
      }
      native_System_Collections_Generic_List_BE2_Op_FunctionLocalVariable___GetEnumerator_d414fc
                (&uStack_a8,lVar11,
                 _Method_System_Collections_Generic_List_UIRoot__GetEnumerator___12dd388);
      lStack_80 = lStack_98;
      uStack_88 = uStack_a0;
      uStack_90 = uStack_a8;
      do {
        uVar7 = native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___MoveNext_7e8f30
                          (&uStack_90,
                           _Method_System_Collections_Generic_List_Enumerator_UIRoot__MoveNext___12da6c8
                          );
        lVar11 = lStack_80;
        lVar9 = lVar12;
        if ((uVar7 & 1) == 0) break;
        if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        lVar9 = native_UnityEngine_Component__get_gameObject_8da66c(lStack_80,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        iVar2 = native_UnityEngine_GameObject__get_layer_8de608(lVar9,0);
        lVar9 = lVar11;
      } while (iVar2 != param_3);
      lVar12 = lVar9;
      native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___Dispose_7e8f2c
                (&uStack_90,
                 _Method_System_Collections_Generic_List_Enumerator_UIRoot__Dispose___12da6c0);
    }
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar7 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar12,0,0);
  if ((uVar7 & 1) != 0) {
    if (((*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIPanel_TypeInfo_12d6478 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (**(long **)(_UIPanel_TypeInfo_12d6478 + 0xb8) == 0) goto LAB_00730ca0;
    iVar2 = *(int *)(**(long **)(_UIPanel_TypeInfo_12d6478 + 0xb8) + 0x18);
    if (0 < iVar2) {
      lVar11 = 0;
      while( true ) {
        if (((*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIPanel_TypeInfo_12d6478 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar9 = **(long **)(_UIPanel_TypeInfo_12d6478 + 0xb8);
        if (lVar9 == 0) goto LAB_00730ca0;
        if (*(uint *)(lVar9 + 0x18) <= (uint)lVar11) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + lVar11 * 8 + 0x20);
        if ((lVar9 == 0) ||
           (lVar10 = native_UnityEngine_Component__get_gameObject_8da66c(lVar9,0), lVar10 == 0))
        goto LAB_00730ca0;
        iVar3 = native_UnityEngine_Object__get_hideFlags_8ea7e0(lVar10,0);
        if ((iVar3 == 0) &&
           (iVar3 = native_UnityEngine_GameObject__get_layer_8de608(lVar10,0), iVar3 == param_3)) {
          uVar8 = native_UnityEngine_Component__get_transform_8da62c(lVar9,0);
          if (param_1 != 0) {
            native_UnityEngine_Transform__set_parent_771f18(param_1,uVar8,0);
            native_UnityEngine_Vector3__get_one_776a20(0);
            native_UnityEngine_Transform__set_localScale_771e30(param_1,0);
            return lVar9;
          }
          goto LAB_00730ca0;
        }
        if (iVar2 <= (int)((uint)lVar11 + 1)) break;
        lVar11 = lVar11 + 1;
      }
    }
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar12,0,0);
  if ((uVar7 & 1) != 0) {
    if (lVar12 == 0) goto LAB_00730ca0;
    lVar11 = native_UnityEngine_Component__GetComponentInChildren_Animation__49db98
                       (lVar12,
                        _Method_UnityEngine_Component_GetComponentInChildren_UICamera____12e2cb8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar11,0,0);
    if ((uVar7 & 1) != 0) {
      if ((lVar11 == 0) ||
         (lVar11 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                             (lVar11,_Method_UnityEngine_Component_GetComponent_Camera____12e29a8),
         lVar11 == 0)) goto LAB_00730ca0;
      uVar4 = native_UnityEngine_Camera__get_orthographic_8d86c0(lVar11,0);
      if (((uVar4 ^ param_2) & 1) == 0) {
        lVar12 = 0;
        param_1 = 0;
      }
    }
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar7 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar12,0,0);
  if ((uVar7 & 1) == 0) {
    if (lVar12 == 0) goto LAB_00730ca0;
  }
  else {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar11 = native_NGUITools__AddChild_72eda0(0,0);
    if (lVar11 == 0) goto LAB_00730ca0;
    lVar12 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                       (lVar11,_Method_UnityEngine_GameObject_AddComponent_UIRoot____12e48f8);
    if ((param_3 == -1) &&
       (param_3 = native_UnityEngine_LayerMask__NameToLayer_8dfe14(_StringLiteral_UI_12f2910,0),
       param_3 == -1)) {
      param_3 = native_UnityEngine_LayerMask__NameToLayer_8dfe14(_StringLiteral_2D_UI_12ebc08,0);
    }
    native_UnityEngine_GameObject__set_layer_8de648(lVar11,param_3,0);
    if ((param_2 & 1) == 0) {
      native_UnityEngine_Object__set_name_8e9c08(lVar11,_StringLiteral_UI_Root_12f2918,0);
      if (lVar12 == 0) goto LAB_00730ca0;
      uVar6 = 0;
    }
    else {
      native_UnityEngine_Object__set_name_8e9c08(lVar11,_StringLiteral_UI_Root__3D__12f2920,0);
      if (lVar12 == 0) goto LAB_00730ca0;
      uVar6 = 1;
    }
    *(undefined4 *)(lVar12 + 0x18) = uVar6;
    native_UIRoot__UpdateScale_c2fb2c(lVar12,1,0);
  }
  lVar11 = native_UnityEngine_Component__GetComponentInChildren_Animation__49db98
                     (lVar12,_Method_UnityEngine_Component_GetComponentInChildren_UIPanel____12e2cd0
                     );
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar7 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar11,0,0);
  if ((uVar7 & 1) != 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar11 = native_NGUITools__FindActive_AudioListener__4a5b30
                       (_Method_NGUITools_FindActive_Camera____12e5708);
    lVar9 = native_UnityEngine_Component__get_gameObject_8da66c(lVar12,0);
    if ((lVar9 == 0) ||
       (uVar4 = native_UnityEngine_GameObject__get_layer_8de608(lVar9,0), lVar11 == 0))
    goto LAB_00730ca0;
    uVar5 = *(uint *)(lVar11 + 0x18);
    uVar4 = 1 << (ulong)(uVar4 & 0x1f);
    if ((int)uVar5 < 1) {
      bVar1 = false;
      uVar8 = 0xbf800000;
    }
    else {
      uVar13 = 0;
      bVar1 = false;
      uVar8 = 0xbf800000;
      do {
        if (uVar5 <= uVar13) {
          uVar8 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar8,0);
        }
        lVar9 = *(long *)(lVar11 + (long)(int)uVar13 * 8 + 0x20);
        if (lVar9 == 0) goto LAB_00730ca0;
        iVar2 = native_UnityEngine_Camera__get_clearFlags_8d8ab8(lVar9,0);
        if ((iVar2 == 2) ||
           (iVar2 = native_UnityEngine_Camera__get_clearFlags_8d8ab8(lVar9,0), iVar2 == 1)) {
          bVar1 = true;
        }
        uVar14 = native_UnityEngine_Camera__get_depth_8d87e0(lVar9,0);
        uVar8 = native_UnityEngine_Mathf__Max_8d9f90(uVar8,uVar14,0);
        uVar5 = native_UnityEngine_Camera__get_cullingMask_8d88b0(lVar9,0);
        native_UnityEngine_Camera__set_cullingMask_8d88f0(lVar9,uVar5 & ~uVar4,0);
        uVar5 = *(uint *)(lVar11 + 0x18);
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < (int)uVar5);
    }
    uVar14 = native_UnityEngine_Component__get_gameObject_8da66c(lVar12,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    lVar11 = native_NGUITools__AddChild_Camera__4a4ff0
                       (uVar14,0,_Method_NGUITools_AddChild_Camera____12e56c8);
    if ((lVar11 == 0) ||
       (lVar9 = native_UnityEngine_Component__get_gameObject_8da66c(lVar11,0), lVar9 == 0))
    goto LAB_00730ca0;
    native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
              (lVar9,_Method_UnityEngine_GameObject_AddComponent_UICamera____12e48c8);
    uVar6 = 2;
    if (bVar1) {
      uVar6 = 3;
    }
    native_UnityEngine_Camera__set_clearFlags_8d8af8(lVar11,uVar6,0);
    native_UnityEngine_Color__get_grey_8d9e54(0);
    native_UnityEngine_Camera__set_backgroundColor_8d8a10(lVar11,0);
    native_UnityEngine_Camera__set_cullingMask_8d88f0(lVar11,uVar4,0);
    native_UnityEngine_Camera__set_depth_8d8820((float)uVar8 + 1.0,lVar11,0);
    if ((param_2 & 1) == 0) {
      native_UnityEngine_Camera__set_orthographic_8d8700(lVar11,1,0);
      native_UnityEngine_Camera__set_orthographicSize_8d8670(0x3f800000,lVar11,0);
      native_UnityEngine_Camera__set_nearClipPlane_8d84c0(0xc1200000,lVar11,0);
      native_UnityEngine_Camera__set_farClipPlane_8d8550(0x41200000,lVar11,0);
    }
    else {
      native_UnityEngine_Camera__set_nearClipPlane_8d84c0(0x3dcccccd,lVar11,0);
      native_UnityEngine_Camera__set_farClipPlane_8d8550(0x40800000,lVar11,0);
      lVar9 = native_UnityEngine_Component__get_transform_8da62c(lVar11,0);
      if (lVar9 == 0) goto LAB_00730ca0;
      native_UnityEngine_Transform__set_localPosition_7718a4(0,0,0xc42f0000,lVar9,0);
    }
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar9 = native_NGUITools__FindActive_AudioListener__4a5b30
                      (_Method_NGUITools_FindActive_AudioListener____12e5700);
    if ((lVar9 == 0) || (*(long *)(lVar9 + 0x18) == 0)) {
      lVar11 = native_UnityEngine_Component__get_gameObject_8da66c(lVar11,0);
      if (lVar11 == 0) goto LAB_00730ca0;
      native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                (lVar11,_Method_UnityEngine_GameObject_AddComponent_AudioListener____12e4748);
    }
    lVar12 = native_UnityEngine_Component__get_gameObject_8da66c(lVar12,0);
    if (lVar12 == 0) goto LAB_00730ca0;
    lVar11 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                       (lVar12,_Method_UnityEngine_GameObject_AddComponent_UIPanel____12e48f0);
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(param_1,0,0);
  if ((uVar7 & 1) == 0) {
    return lVar11;
  }
  for (; param_1 != 0; param_1 = native_UnityEngine_Transform__get_parent_765eb0(param_1,0)) {
    uVar8 = native_UnityEngine_Transform__get_parent_765eb0(param_1,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
    if ((uVar7 & 1) == 0) {
      if (lVar11 != 0) {
        lVar12 = native_UnityEngine_Component__get_transform_8da62c(lVar11,0);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
        }
        if (lVar12 != 0) {
          uVar7 = native_UnityEngine_Transform__IsChildOf_772d5c(lVar12,param_1,0);
          if ((uVar7 & 1) == 0) {
            uVar8 = native_UnityEngine_Component__get_transform_8da62c(lVar11,0);
            native_UnityEngine_Transform__set_parent_771f18(param_1,uVar8,0);
            native_UnityEngine_Vector3__get_one_776a20(0);
            native_UnityEngine_Transform__set_localScale_771e30(param_1,0);
            native_UnityEngine_Vector3__get_zero_776668(0);
            native_UnityEngine_Transform__set_localPosition_7718a4(param_1,0);
            uVar8 = native_UIRect__get_cachedTransform_c27c58(lVar11,0);
            lVar12 = native_UIRect__get_cachedGameObject_c2d1c0(lVar11,0);
            if (lVar12 != 0) {
              uVar6 = native_UnityEngine_GameObject__get_layer_8de608(lVar12,0);
              if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
              }
              native_NGUITools__SetChildLayer_730f0c(uVar8,uVar6);
              return lVar11;
            }
          }
          else {
            lVar12 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
            if (lVar12 != 0) {
              lVar12 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                                 (lVar12,
                                  _Method_UnityEngine_GameObject_AddComponent_UIPanel____12e48f0);
              return lVar12;
            }
          }
        }
      }
      break;
    }
  }
LAB_00730ca0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$SetChildLayer @ 0x730f0c
 * void NGUITools__SetChildLayer (UnityEngine_Transform_o* t, int32_t layer, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$SetChildLayer
   void NGUITools__SetChildLayer (UnityEngine_Transform_o* t, int32_t layer, const MethodInfo*
   method); */

void native_NGUITools__SetChildLayer_730f0c(long param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam000000000133f5a6 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5a6 = 1;
  }
  if (param_1 != 0) {
    iVar1 = native_UnityEngine_Transform__get_childCount_772a64(param_1,0);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        lVar3 = native_UnityEngine_Transform__GetChild_772ef0(param_1,iVar1,0);
        if ((lVar3 == 0) ||
           (lVar4 = native_UnityEngine_Component__get_gameObject_8da66c(lVar3,0), lVar4 == 0))
        goto LAB_00730fec;
        native_UnityEngine_GameObject__set_layer_8de648(lVar4,param_2,0);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        native_NGUITools__SetChildLayer_730f0c(lVar3,param_2);
        iVar1 = iVar1 + 1;
        iVar2 = native_UnityEngine_Transform__get_childCount_772a64(param_1,0);
      } while (iVar1 < iVar2);
    }
    return;
  }
LAB_00730fec:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$AddSprite @ 0x730ff0
 * UISprite_o* NGUITools__AddSprite (UnityEngine_GameObject_o* go, INGUIAtlas_o* atlas, System_String_o* spriteName, int32_t depth, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$AddSprite
   UISprite_o* NGUITools__AddSprite (UnityEngine_GameObject_o* go, INGUIAtlas_o* atlas,
   System_String_o* spriteName, int32_t depth, const MethodInfo* method); */

long * native_NGUITools__AddSprite_730ff0
                 (undefined8 param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((bRam000000000133f5a7 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&Method_NGUITools_AddWidget_UISprite____12e56e0);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5a7 = 1;
  }
  if (param_2 == (long *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *param_2;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
          puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 10) * 0x10 + 0x138);
          goto LAB_007310b8;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar1 = (undefined8 *)native_sub_3c9b34(param_2,_INGUIAtlas_TypeInfo_12d4c68,10);
LAB_007310b8:
    lVar4 = (*(code *)*puVar1)(param_2,param_3,puVar1[1]);
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  plVar2 = (long *)native_NGUITools__AddWidget_object__4a528c
                             (param_1,param_4,_Method_NGUITools_AddWidget_UISprite____12e56e0);
  if ((lVar4 == 0) || (uVar5 = native_UISpriteData__get_hasBorder_940b38(lVar4,0), (uVar5 & 1) == 0)
     ) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  (**(code **)(*plVar2 + 0x438))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 0x440));
  native_UISprite__set_atlas_c35910(plVar2,param_2,0);
  native_UISprite__set_spriteName_c35c6c(plVar2,param_3,0);
  return plVar2;
}



/* NGUITools$$GetRoot @ 0x731180
 * UnityEngine_GameObject_o* NGUITools__GetRoot (UnityEngine_GameObject_o* go, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$GetRoot
   UnityEngine_GameObject_o* NGUITools__GetRoot (UnityEngine_GameObject_o* go, const MethodInfo*
   method); */

void native_NGUITools__GetRoot_731180(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  if ((bRam000000000133f5a8 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f5a8 = 1;
  }
  if (param_1 != 0) {
    lVar1 = native_UnityEngine_GameObject__get_transform_8de5c8(param_1,0);
    while (lVar3 = lVar1, lVar3 != 0) {
      lVar1 = native_UnityEngine_Transform__get_parent_765eb0(lVar3,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar1,0,0);
      if ((uVar2 & 1) != 0) {
        if (pcRam0000000001340ac0 == (code *)0x0) {
          pcRam0000000001340ac0 = (code *)native_sub_4326f0(&UNK_00e2d108);
        }
                    /* WARNING: Could not recover jumptable at 0x008da6a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000001340ac0)(lVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$Destroy @ 0x731234
 * void NGUITools__Destroy (UnityEngine_Object_o* obj, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$Destroy
   void NGUITools__Destroy (UnityEngine_Object_o* obj, const MethodInfo* method); */

void native_NGUITools__Destroy_731234(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  if ((bRam000000000133f5a9 & 1) == 0) {
    native_sub_43273c(&UnityEngine_GameObject_TypeInfo_12d47d8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_Transform_TypeInfo_12d6300);
    bRam000000000133f5a9 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(param_1,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (param_1 == (long *)0x0) {
LAB_007312fc:
    uVar2 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
    if ((uVar2 & 1) == 0) {
      if ((*(ushort *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x132) >> 10 & 1) == 0)
      goto LAB_00731434;
      iVar1 = *(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0);
joined_r0x0073133c:
      if (iVar1 == 0) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
LAB_00731434:
      if ((bRam0000000001341058 & 1) == 0) {
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
        bRam0000000001341058 = 1;
      }
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      if (pcRam0000000001341050 == (code *)0x0) {
        pcRam0000000001341050 = (code *)native_sub_4326f0(&UNK_00e2f80d);
      }
                    /* WARNING: Could not recover jumptable at 0x008ea6c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000001341050)(param_1,0);
      return;
    }
    if ((*(ushort *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x132) >> 10 & 1) == 0)
    goto LAB_007313a4;
    iVar1 = *(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0);
  }
  else {
    lVar4 = *param_1;
    if ((*(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300) <= *(byte *)(lVar4 + 300)) &&
       (*(long *)(*(long *)(lVar4 + 200) +
                  (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300) * 8 + -8) ==
        _UnityEngine_Transform_TypeInfo_12d6300)) {
      plVar3 = (long *)native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
      uVar2 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
      if ((uVar2 & 1) == 0) {
        param_1 = plVar3;
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        goto LAB_00731434;
      }
      if (plVar3 == (long *)0x0) {
LAB_00731468:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      native_UnityEngine_GameObject__SetActive_8de698(plVar3,0,0);
      native_UnityEngine_Transform__set_parent_771f18(param_1,0,0);
      param_1 = plVar3;
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      goto LAB_007313a4;
    }
    if (lVar4 != _UnityEngine_GameObject_TypeInfo_12d47d8) goto LAB_007312fc;
    lVar4 = native_UnityEngine_GameObject__get_transform_8de5c8(param_1,0);
    uVar2 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
    if ((uVar2 & 1) == 0) {
      if ((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) == 0)
      goto LAB_00731434;
      iVar1 = *(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0);
      goto joined_r0x0073133c;
    }
    native_UnityEngine_GameObject__SetActive_8de698(param_1,0,0);
    if (lVar4 == 0) goto LAB_00731468;
    native_UnityEngine_Transform__set_parent_771f18(lVar4,0,0);
    if ((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) == 0) goto LAB_007313a4;
    iVar1 = *(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0);
  }
  if (iVar1 == 0) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
LAB_007313a4:
  if ((bRam0000000001341048 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001341048 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (pcRam0000000001341040 == (code *)0x0) {
    pcRam0000000001341040 = (code *)native_sub_4326f0(&UNK_00e2f7cf);
  }
                    /* WARNING: Could not recover jumptable at 0x008ea5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000001341040)(0,param_1);
  return;
}



/* NGUITools$$DestroyChildren @ 0x73146c
 * void NGUITools__DestroyChildren (UnityEngine_Transform_o* t, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$DestroyChildren
   void NGUITools__DestroyChildren (UnityEngine_Transform_o* t, const MethodInfo* method); */

void native_NGUITools__DestroyChildren_73146c(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133f5aa & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5aa = 1;
  }
  if (param_1 != 0) {
    iVar1 = native_UnityEngine_Transform__get_childCount_772a64(param_1,0);
    while( true ) {
      if (iVar1 == 0) {
        return;
      }
      lVar2 = native_UnityEngine_Transform__GetChild_772ef0(param_1,0,0);
      if (lVar2 == 0) break;
      uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(lVar2,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
      }
      native_NGUITools__Destroy_731234(uVar3);
      iVar1 = native_UnityEngine_Transform__get_childCount_772a64(param_1,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$DestroyImmediate @ 0x731524
 * void NGUITools__DestroyImmediate (UnityEngine_Object_o* obj, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$DestroyImmediate
   void NGUITools__DestroyImmediate (UnityEngine_Object_o* obj, const MethodInfo* method); */

void native_NGUITools__DestroyImmediate_731524(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  
  if ((bRam000000000133f5ab & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f5ab = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(param_1,0,0);
  if ((uVar2 & 1) != 0) {
    iVar1 = native_UnityEngine_Application__get_installMode_8d619c(0);
    if (iVar1 == 5) {
      if (((*(ushort *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      if ((bRam0000000001341058 & 1) == 0) {
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
        bRam0000000001341058 = 1;
      }
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      if (pcRam0000000001341050 == (code *)0x0) {
        pcRam0000000001341050 = (code *)native_sub_4326f0(&UNK_00e2f80d);
      }
                    /* WARNING: Could not recover jumptable at 0x008ea6c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000001341050)(param_1,0);
      return;
    }
    if (((*(ushort *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    if ((bRam0000000001341048 & 1) == 0) {
      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
      bRam0000000001341048 = 1;
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (pcRam0000000001341040 == (code *)0x0) {
      pcRam0000000001341040 = (code *)native_sub_4326f0(&UNK_00e2f7cf);
    }
                    /* WARNING: Could not recover jumptable at 0x008ea5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000001341040)(0,param_1);
    return;
  }
  return;
}



/* NGUITools$$Broadcast @ 0x7315fc
 * void NGUITools__Broadcast (System_String_o* funcName, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$Broadcast
   void NGUITools__Broadcast (System_String_o* funcName, const MethodInfo* method); */

void native_NGUITools__Broadcast_7315fc(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  
  if ((bRam000000000133f5ac & 1) == 0) {
    native_sub_43273c(&UnityEngine_GameObject___TypeInfo_12d31a0);
    native_sub_43273c(&UnityEngine_GameObject_var_12d14b0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    bRam000000000133f5ac = 1;
  }
  uVar1 = _UnityEngine_GameObject_var_12d14b0;
  if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_System_Type__GetTypeFromHandle_b0fb24(uVar1,0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar1 = native_UnityEngine_Object__FindObjectsOfType_8ea6cc(uVar1,0);
  lVar2 = native_sub_4327f8(uVar1,_UnityEngine_GameObject___TypeInfo_12d31a0);
  if (lVar2 == 0) {
LAB_0073173c:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  iVar4 = (int)*(undefined8 *)(lVar2 + 0x18);
  if (iVar4 < 1) {
    return;
  }
  if (iVar4 != 0) {
    uVar5 = 0;
    do {
      lVar3 = *(long *)(lVar2 + (long)(int)uVar5 * 8 + 0x20);
      if (lVar3 == 0) goto LAB_0073173c;
      native_UnityEngine_GameObject__SendMessage_8de464(lVar3,param_1,1,0);
      uVar5 = uVar5 + 1;
      if (iVar4 <= (int)uVar5) {
        return;
      }
    } while (uVar5 < *(uint *)(lVar2 + 0x18));
  }
  uVar1 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,0);
}



/* NGUITools$$Broadcast @ 0x731740
 * void NGUITools__Broadcast (System_String_o* funcName, Il2CppObject* param, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$Broadcast
   void NGUITools__Broadcast (System_String_o* funcName, Il2CppObject* param, const MethodInfo*
   method); */

void native_NGUITools__Broadcast_731740(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  
  if ((bRam000000000133f5ad & 1) == 0) {
    native_sub_43273c(&UnityEngine_GameObject___TypeInfo_12d31a0);
    native_sub_43273c(&UnityEngine_GameObject_var_12d14b0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    bRam000000000133f5ad = 1;
  }
  uVar1 = _UnityEngine_GameObject_var_12d14b0;
  if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_System_Type__GetTypeFromHandle_b0fb24(uVar1,0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar1 = native_UnityEngine_Object__FindObjectsOfType_8ea6cc(uVar1,0);
  lVar2 = native_sub_4327f8(uVar1,_UnityEngine_GameObject___TypeInfo_12d31a0);
  if (lVar2 == 0) {
LAB_00731890:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  iVar4 = (int)*(undefined8 *)(lVar2 + 0x18);
  if (iVar4 < 1) {
    return;
  }
  if (iVar4 != 0) {
    uVar5 = 0;
    do {
      lVar3 = *(long *)(lVar2 + (long)(int)uVar5 * 8 + 0x20);
      if (lVar3 == 0) goto LAB_00731890;
      native_UnityEngine_GameObject__SendMessage_8de4c0(lVar3,param_1,param_2,1,0);
      uVar5 = uVar5 + 1;
      if (iVar4 <= (int)uVar5) {
        return;
      }
    } while (uVar5 < *(uint *)(lVar2 + 0x18));
  }
  uVar1 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,0);
}



/* NGUITools$$IsChild @ 0x730ee8
 * bool NGUITools__IsChild (UnityEngine_Transform_o* parent, UnityEngine_Transform_o* child, const MethodInfo* method); */

/* NGUITools$$IsChild
   bool NGUITools__IsChild (UnityEngine_Transform_o* parent, UnityEngine_Transform_o* child, const
   MethodInfo* method); */

void native_NGUITools__IsChild_730ee8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    if (pcRam000000000133fea8 == (code *)0x0) {
      pcRam000000000133fea8 = (code *)native_sub_4326f0(&UNK_00e2ac11);
    }
                    /* WARNING: Could not recover jumptable at 0x00772da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000133fea8)(param_2,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$Activate @ 0x731894
 * void NGUITools__Activate (UnityEngine_Transform_o* t, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00731984) */
/* WARNING: Removing unreachable block (ram,0x00731998) */
/* WARNING: Removing unreachable block (ram,0x007319a0) */
/* WARNING: Removing unreachable block (ram,0x007319b4) */
/* WARNING: Removing unreachable block (ram,0x007319c0) */
/* WARNING: Removing unreachable block (ram,0x007319cc) */
/* WARNING: Removing unreachable block (ram,0x007319d8) */
/* WARNING: Removing unreachable block (ram,0x007319ec) */
/* WARNING: Removing unreachable block (ram,0x007319f4) */
/* WARNING: Removing unreachable block (ram,0x00731a14) */
/* WARNING: Removing unreachable block (ram,0x00731a1c) */
/* WARNING: Removing unreachable block (ram,0x00731a24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$Activate
   void NGUITools__Activate (UnityEngine_Transform_o* t, const MethodInfo* method); */

void native_NGUITools__Activate_731894(long param_1)

{
  long lVar1;
  
  if ((bRam000000000133f5ae & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5ae = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f5af & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5af = 1;
  }
  if (param_1 != 0) {
    lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    if (lVar1 != 0) {
      native_UnityEngine_GameObject__SetActive_8de698(lVar1,1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$Activate @ 0x7318f8
 * void NGUITools__Activate (UnityEngine_Transform_o* t, bool compatibilityMode, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$Activate
   void NGUITools__Activate (UnityEngine_Transform_o* t, bool compatibilityMode, const MethodInfo*
   method); */

void native_NGUITools__Activate_7318f8(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  
  if ((bRam000000000133f5af & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5af = 1;
  }
  if (param_1 != 0) {
    lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    if (lVar2 != 0) {
      native_UnityEngine_GameObject__SetActive_8de698(lVar2,1,0);
      if ((param_2 & 1) != 0) {
        iVar1 = native_UnityEngine_Transform__get_childCount_772a64(param_1,0);
        if (0 < iVar1) {
          iVar5 = 0;
          do {
            lVar2 = native_UnityEngine_Transform__GetChild_772ef0(param_1,iVar5,0);
            if ((lVar2 == 0) ||
               (lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(lVar2,0), lVar2 == 0))
            goto LAB_00731a50;
            uVar3 = native_UnityEngine_GameObject__get_activeSelf_8de6e8(lVar2,0);
            if ((uVar3 & 1) != 0) {
              return;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar1);
        }
        iVar1 = native_UnityEngine_Transform__get_childCount_772a64(param_1,0);
        if (0 < iVar1) {
          iVar5 = 0;
          do {
            uVar4 = native_UnityEngine_Transform__GetChild_772ef0(param_1,iVar5,0);
            if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
              native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
            }
            native_NGUITools__Activate_7318f8(uVar4,1);
            iVar5 = iVar5 + 1;
          } while (iVar1 != iVar5);
        }
      }
      return;
    }
  }
LAB_00731a50:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$Deactivate @ 0x731a70
 * void NGUITools__Deactivate (UnityEngine_Transform_o* t, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$Deactivate
   void NGUITools__Deactivate (UnityEngine_Transform_o* t, const MethodInfo* method); */

void native_NGUITools__Deactivate_731a70(long param_1)

{
  long lVar1;
  
  if ((bRam000000000133f5b0 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5b0 = 1;
  }
  if (param_1 != 0) {
    lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    if (lVar1 != 0) {
      if (pcRam0000000001340bf8 == (code *)0x0) {
        pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
      }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000001340bf8)(lVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$SetActive @ 0x731af8
 * void NGUITools__SetActive (UnityEngine_GameObject_o* go, bool state, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$SetActive
   void NGUITools__SetActive (UnityEngine_GameObject_o* go, bool state, const MethodInfo* method);
    */

void native_NGUITools__SetActive_731af8(long param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  
  if ((bRam000000000133f5b1 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5b1 = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f5b2 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f5b2 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(param_1,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar3 = native_UnityEngine_GameObject__get_transform_8de5c8(param_1,0);
  if ((param_2 & 1) == 0) {
    if (((*(ushort *)(_NGUITools_TypeInfo_12d53c8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    if ((bRam000000000133f5b0 & 1) == 0) {
      native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
      bRam000000000133f5b0 = 1;
    }
    if (lVar3 != 0) {
      lVar3 = native_UnityEngine_Component__get_gameObject_8da66c(lVar3,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
      }
      if (lVar3 != 0) {
        if (pcRam0000000001340bf8 == (code *)0x0) {
          pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
        }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000001340bf8)(lVar3,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (((*(ushort *)(_NGUITools_TypeInfo_12d53c8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  native_NGUITools__Activate_7318f8(lVar3,1);
  lVar3 = native_UnityEngine_GameObject__get_transform_8de5c8(param_1,0);
  if ((bRam000000000133f5b3 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f5b3 = 1;
  }
  if (lVar3 != 0) {
    lVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (lVar3,_Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar4,0,0);
    if ((uVar2 & 1) != 0) {
      if (lVar4 == 0) goto LAB_00731db4;
      native_UIWidget__CreatePanel_949fec(lVar4,0);
    }
    iVar1 = native_UnityEngine_Transform__get_childCount_772a64(lVar3,0);
    if (0 < iVar1) {
      iVar6 = 0;
      do {
        uVar5 = native_UnityEngine_Transform__GetChild_772ef0(lVar3,iVar6,0);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
        }
        native_NGUITools__CallCreatePanel_731c84(uVar5);
        iVar6 = iVar6 + 1;
      } while (iVar1 != iVar6);
    }
    return;
  }
LAB_00731db4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$SetActive @ 0x731b6c
 * void NGUITools__SetActive (UnityEngine_GameObject_o* go, bool state, bool compatibilityMode, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$SetActive
   void NGUITools__SetActive (UnityEngine_GameObject_o* go, bool state, bool compatibilityMode,
   const MethodInfo* method); */

void native_NGUITools__SetActive_731b6c(long param_1,ulong param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  
  if ((bRam000000000133f5b2 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f5b2 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(param_1,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar3 = native_UnityEngine_GameObject__get_transform_8de5c8(param_1,0);
  if ((param_2 & 1) == 0) {
    if (((*(ushort *)(_NGUITools_TypeInfo_12d53c8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    if ((bRam000000000133f5b0 & 1) == 0) {
      native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
      bRam000000000133f5b0 = 1;
    }
    if (lVar3 != 0) {
      lVar3 = native_UnityEngine_Component__get_gameObject_8da66c(lVar3,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
      }
      if (lVar3 != 0) {
        if (pcRam0000000001340bf8 == (code *)0x0) {
          pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
        }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000001340bf8)(lVar3,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (((*(ushort *)(_NGUITools_TypeInfo_12d53c8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  native_NGUITools__Activate_7318f8(lVar3,param_3 & 1);
  lVar3 = native_UnityEngine_GameObject__get_transform_8de5c8(param_1,0);
  if ((bRam000000000133f5b3 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f5b3 = 1;
  }
  if (lVar3 != 0) {
    lVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (lVar3,_Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar4,0,0);
    if ((uVar2 & 1) != 0) {
      if (lVar4 == 0) goto LAB_00731db4;
      native_UIWidget__CreatePanel_949fec(lVar4,0);
    }
    iVar1 = native_UnityEngine_Transform__get_childCount_772a64(lVar3,0);
    if (0 < iVar1) {
      iVar6 = 0;
      do {
        uVar5 = native_UnityEngine_Transform__GetChild_772ef0(lVar3,iVar6,0);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
        }
        native_NGUITools__CallCreatePanel_731c84(uVar5);
        iVar6 = iVar6 + 1;
      } while (iVar1 != iVar6);
    }
    return;
  }
LAB_00731db4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$CallCreatePanel @ 0x731c84
 * void NGUITools__CallCreatePanel (UnityEngine_Transform_o* t, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$CallCreatePanel
   void NGUITools__CallCreatePanel (UnityEngine_Transform_o* t, const MethodInfo* method); */

void native_NGUITools__CallCreatePanel_731c84(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  
  if ((bRam000000000133f5b3 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f5b3 = 1;
  }
  if (param_1 != 0) {
    lVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_1,_Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
    if ((uVar3 & 1) != 0) {
      if (lVar2 == 0) goto LAB_00731db4;
      native_UIWidget__CreatePanel_949fec(lVar2,0);
    }
    iVar1 = native_UnityEngine_Transform__get_childCount_772a64(param_1,0);
    if (0 < iVar1) {
      iVar5 = 0;
      do {
        uVar4 = native_UnityEngine_Transform__GetChild_772ef0(param_1,iVar5,0);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
        }
        native_NGUITools__CallCreatePanel_731c84(uVar4);
        iVar5 = iVar5 + 1;
      } while (iVar1 != iVar5);
    }
    return;
  }
LAB_00731db4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$SetActiveChildren @ 0x731db8
 * void NGUITools__SetActiveChildren (UnityEngine_GameObject_o* go, bool state, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$SetActiveChildren
   void NGUITools__SetActiveChildren (UnityEngine_GameObject_o* go, bool state, const MethodInfo*
   method); */

void native_NGUITools__SetActiveChildren_731db8(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  
  if ((bRam000000000133f5b4 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5b4 = 1;
  }
  if ((param_1 != 0) &&
     (lVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(param_1,0), lVar2 != 0)) {
    iVar1 = native_UnityEngine_Transform__get_childCount_772a64(lVar2,0);
    if ((param_2 & 1) == 0) {
      if (0 < iVar1) {
        iVar4 = 0;
        do {
          uVar3 = native_UnityEngine_Transform__GetChild_772ef0(lVar2,iVar4,0);
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
          }
          native_NGUITools__Deactivate_731a70(uVar3);
          iVar4 = iVar4 + 1;
        } while (iVar1 != iVar4);
      }
    }
    else if (0 < iVar1) {
      iVar4 = 0;
      do {
        uVar3 = native_UnityEngine_Transform__GetChild_772ef0(lVar2,iVar4,0);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
        }
        native_NGUITools__Activate_731894(uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar1 != iVar4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$IsActive @ 0x731ee4
 * bool NGUITools__IsActive (UnityEngine_Behaviour_o* mb, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$IsActive
   bool NGUITools__IsActive (UnityEngine_Behaviour_o* mb, const MethodInfo* method); */

undefined8 native_NGUITools__IsActive_731ee4(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133f5b5 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f5b5 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(param_1,0,0);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  if (param_1 != 0) {
    uVar1 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (lVar2 != 0) {
      if (pcRam0000000001340c08 == (code *)0x0) {
        pcRam0000000001340c08 = (code *)native_sub_4326f0(&UNK_00e2dac2);
      }
                    /* WARNING: Could not recover jumptable at 0x008de764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*pcRam0000000001340c08)(lVar2);
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$GetActive @ 0x72d02c
 * bool NGUITools__GetActive (UnityEngine_Behaviour_o* mb, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$GetActive
   bool NGUITools__GetActive (UnityEngine_Behaviour_o* mb, const MethodInfo* method); */

undefined8 native_NGUITools__GetActive_72d02c(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133f5b6 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f5b6 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(param_1,0);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  if (param_1 != 0) {
    uVar1 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (lVar2 != 0) {
      if (pcRam0000000001340c08 == (code *)0x0) {
        pcRam0000000001340c08 = (code *)native_sub_4326f0(&UNK_00e2dac2);
      }
                    /* WARNING: Could not recover jumptable at 0x008de764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*pcRam0000000001340c08)(lVar2);
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$GetActive @ 0x72d0d4
 * bool NGUITools__GetActive (UnityEngine_GameObject_o* go, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$GetActive
   bool NGUITools__GetActive (UnityEngine_GameObject_o* go, const MethodInfo* method); */

undefined8 native_NGUITools__GetActive_72d0d4(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((bRam000000000133f5b7 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f5b7 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(param_1,0);
  if ((uVar1 & 1) != 0) {
    if (param_1 != 0) {
      if (pcRam0000000001340c08 == (code *)0x0) {
        pcRam0000000001340c08 = (code *)native_sub_4326f0(&UNK_00e2dac2);
      }
                    /* WARNING: Could not recover jumptable at 0x008de764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*pcRam0000000001340c08)(param_1);
      return uVar2;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return 0;
}



/* NGUITools$$SetActiveSelf @ 0x731a54
 * void NGUITools__SetActiveSelf (UnityEngine_GameObject_o* go, bool state, const MethodInfo* method); */

/* NGUITools$$SetActiveSelf
   void NGUITools__SetActiveSelf (UnityEngine_GameObject_o* go, bool state, const MethodInfo*
   method); */

void native_NGUITools__SetActiveSelf_731a54(long param_1,uint param_2)

{
  if (param_1 != 0) {
    if (pcRam0000000001340bf8 == (code *)0x0) {
      pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
    }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000001340bf8)(param_1,param_2 & 1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$SetLayer @ 0x731f90
 * void NGUITools__SetLayer (UnityEngine_GameObject_o* go, int32_t layer, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$SetLayer
   void NGUITools__SetLayer (UnityEngine_GameObject_o* go, int32_t layer, const MethodInfo* method);
    */

void native_NGUITools__SetLayer_731f90(long param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  
  if ((bRam000000000133f5b8 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5b8 = 1;
  }
  if (param_1 != 0) {
    native_UnityEngine_GameObject__set_layer_8de648(param_1,param_2,0);
    lVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(param_1,0);
    if (lVar2 != 0) {
      iVar1 = native_UnityEngine_Transform__get_childCount_772a64(lVar2,0);
      if (0 < iVar1) {
        iVar5 = 0;
        do {
          lVar3 = native_UnityEngine_Transform__GetChild_772ef0(lVar2,iVar5,0);
          if (lVar3 == 0) goto LAB_0073207c;
          uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(lVar3,0);
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
          }
          native_NGUITools__SetLayer_731f90(uVar4,param_2);
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar1);
      }
      return;
    }
  }
LAB_0073207c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$Round @ 0x732080
 * UnityEngine_Vector3_o NGUITools__Round (UnityEngine_Vector3_o v, const MethodInfo* method); */

/* NGUITools$$Round
   UnityEngine_Vector3_o NGUITools__Round (UnityEngine_Vector3_o v, const MethodInfo* method); */

float native_NGUITools__Round_732080(float param_1,float param_2,float param_3)

{
  double dVar1;
  float fVar2;
  float fVar3;
  double dStack_28;
  
  dVar1 = (double)func_0x002c9600((double)param_1,&dStack_28);
  if (0.0 <= param_1) {
    if (dVar1 != 0.5) {
      fVar3 = (float)(int)(param_1 + 0.5);
      goto LAB_00732110;
    }
    fVar2 = 1.0;
  }
  else {
    if (dVar1 != -0.5) {
      fVar3 = (float)(int)(param_1 + -0.5);
      goto LAB_00732110;
    }
    fVar2 = -1.0;
  }
  fVar3 = (float)dStack_28;
  if (((long)dStack_28 & 1U) != 0) {
    fVar3 = (float)dStack_28 + fVar2;
  }
LAB_00732110:
  func_0x002c9600((double)param_2,&dStack_28);
  func_0x002c9600((double)param_3,&dStack_28);
  return fVar3;
}



/* NGUITools$$MakePixelPerfect @ 0x732210
 * void NGUITools__MakePixelPerfect (UnityEngine_Transform_o* t, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$MakePixelPerfect
   void NGUITools__MakePixelPerfect (UnityEngine_Transform_o* t, const MethodInfo* method); */

void native_NGUITools__MakePixelPerfect_732210
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  
  if ((bRam000000000133f5b9 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIAnchor____12e2b98);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIRoot____12e2c00);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f5b9 = 1;
  }
  if (param_4 != 0) {
    plVar2 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                               (param_4,
                                _Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar2,0,0);
    if ((uVar3 & 1) != 0) {
      if (plVar2 == (long *)0x0) goto LAB_00732470;
      (**(code **)(*plVar2 + 0x3a8))(plVar2,*(undefined8 *)(*plVar2 + 0x3b0));
    }
    uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_4,_Method_UnityEngine_Component_GetComponent_UIAnchor____12e2b98);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,0,0);
    if ((uVar3 & 1) != 0) {
      uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (param_4,_Method_UnityEngine_Component_GetComponent_UIRoot____12e2c00);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,0,0);
      if ((uVar3 & 1) != 0) {
        uVar4 = native_UnityEngine_Transform__get_localPosition_7717f4(param_4,0);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        native_NGUITools__Round_732080(uVar4,param_2,param_3);
        native_UnityEngine_Transform__set_localPosition_7718a4(param_4,0);
        native_UnityEngine_Transform__get_localScale_771d80(param_4,0);
        native_NGUITools__Round_732080();
        native_UnityEngine_Transform__set_localScale_771e30(param_4,0);
      }
    }
    iVar1 = native_UnityEngine_Transform__get_childCount_772a64(param_4,0);
    if (0 < iVar1) {
      iVar5 = 0;
      do {
        uVar4 = native_UnityEngine_Transform__GetChild_772ef0(param_4,iVar5,0);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
        }
        native_NGUITools__MakePixelPerfect_732210(uVar4);
        iVar5 = iVar5 + 1;
      } while (iVar1 != iVar5);
    }
    return;
  }
LAB_00732470:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$FitOnScreen @ 0x732474
 * void NGUITools__FitOnScreen (UnityEngine_Camera_o* cam, UnityEngine_Transform_o* t, bool considerInactive, bool considerChildren, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$FitOnScreen
   void NGUITools__FitOnScreen (UnityEngine_Camera_o* cam, UnityEngine_Transform_o* t, bool
   considerInactive, bool considerChildren, const MethodInfo* method); */

void native_NGUITools__FitOnScreen_732474
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5,
               uint param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_38;
  
  if ((bRam000000000133f5ba & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    bRam000000000133f5ba = 1;
  }
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_80 = 0;
  uStack_38 = 0;
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_NGUIMath__CalculateRelativeWidgetBounds_805b00
            (&uStack_a8,param_5,param_5,param_6 & 1,param_7 & 1,0);
  uStack_80 = uStack_98;
  uStack_88 = uStack_a0;
  uStack_90 = uStack_a8;
  if ((param_5 != 0) && (native_UnityEngine_Transform__get_position_77169c(param_5,0), param_4 != 0)
     ) {
    fVar3 = (float)native_UnityEngine_Camera__WorldToScreenPoint_8d9158(param_4,0);
    fVar6 = param_2;
    fVar4 = (float)native_UnityEngine_Bounds__get_min_8d7f18(&uStack_90,0);
    fVar8 = param_2 + fVar6;
    fVar5 = (float)native_UnityEngine_Bounds__get_max_8d7f88(&uStack_90,0);
    fVar7 = fVar6;
    iVar1 = native_UnityEngine_Screen__get_width_76a5e4(0);
    iVar2 = native_UnityEngine_Screen__get_height_76a618(0);
    uStack_38._0_4_ = (float)native_UnityEngine_Vector2__get_zero_765ef0(0);
    if (0.0 <= fVar3 + fVar4) {
      fVar4 = (float)iVar1;
      if (fVar4 < fVar3 + fVar5) {
        uStack_38._0_4_ = fVar4 - (fVar3 + fVar5);
      }
    }
    else {
      uStack_38._0_4_ = -(fVar3 + fVar4);
      fVar4 = fVar7;
    }
    if (0.0 <= fVar8) {
      fVar4 = (float)iVar2;
      uStack_38._4_4_ = fVar7;
      if (fVar4 < param_2 + fVar6) {
        uStack_38._4_4_ = fVar4 - (param_2 + fVar6);
      }
    }
    else {
      uStack_38._4_4_ = -fVar8;
    }
    fVar6 = (float)native_UnityEngine_Vector2__get_sqrMagnitude_775674(&uStack_38,0);
    if (0.0 < fVar6) {
      fVar6 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(param_5,0);
      native_UnityEngine_Transform__set_localPosition_7718a4
                (fVar6 + (float)uStack_38,fVar4 + uStack_38._4_4_,param_3 + 0.0,param_5,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$FitOnScreen @ 0x732650
 * void NGUITools__FitOnScreen (UnityEngine_Camera_o* cam, UnityEngine_Transform_o* transform, UnityEngine_Vector3_o pos, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$FitOnScreen
   void NGUITools__FitOnScreen (UnityEngine_Camera_o* cam, UnityEngine_Transform_o* transform,
   UnityEngine_Vector3_o pos, const MethodInfo* method); */

void native_NGUITools__FitOnScreen_732650
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam000000000133f5bb & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5bb = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f5bc & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5bc = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_68 = 0;
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_NGUITools__FitOnScreen_7327b8(param_1,param_2,param_3,param_4,param_5,param_5,&uStack_68,0)
  ;
  return;
}



/* NGUITools$$FitOnScreen @ 0x7326f0
 * void NGUITools__FitOnScreen (UnityEngine_Camera_o* cam, UnityEngine_Transform_o* transform, UnityEngine_Transform_o* content, UnityEngine_Vector3_o pos, bool considerInactive, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$FitOnScreen
   void NGUITools__FitOnScreen (UnityEngine_Camera_o* cam, UnityEngine_Transform_o* transform,
   UnityEngine_Transform_o* content, UnityEngine_Vector3_o pos, bool considerInactive, const
   MethodInfo* method); */

void native_NGUITools__FitOnScreen_7326f0
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,uint param_7)

{
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam000000000133f5bc & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5bc = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_68 = 0;
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_NGUITools__FitOnScreen_7327b8
            (param_1,param_2,param_3,param_4,param_5,param_6,&uStack_68,param_7 & 1);
  return;
}



/* NGUITools$$FitOnScreen @ 0x7327b8
 * void NGUITools__FitOnScreen (UnityEngine_Camera_o* cam, UnityEngine_Transform_o* transform, UnityEngine_Transform_o* content, UnityEngine_Vector3_o pos, UnityEngine_Bounds_o* bounds, bool considerInactive, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$FitOnScreen
   void NGUITools__FitOnScreen (UnityEngine_Camera_o* cam, UnityEngine_Transform_o* transform,
   UnityEngine_Transform_o* content, UnityEngine_Vector3_o pos, UnityEngine_Bounds_o* bounds, bool
   considerInactive, const MethodInfo* method); */

void native_NGUITools__FitOnScreen_7327b8
               (float param_1,float param_2,undefined8 param_3,long param_4,long param_5,
               undefined8 param_6,double *param_7,uint param_8)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  
  fVar7 = param_2;
  if ((bRam000000000133f5bd & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f5bd = 1;
  }
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_NGUIMath__CalculateRelativeWidgetBounds_805b00(&dStack_b8,param_5,param_6,param_8 & 1,1,0);
  dStack_98 = dStack_b0;
  dStack_a0 = dStack_b8;
  dStack_90 = dStack_a8;
  param_7[2] = dStack_a8;
  param_7[1] = dStack_b0;
  *param_7 = dStack_b8;
  fVar5 = (float)native_UnityEngine_Bounds__get_min_8d7f18(param_7,0);
  native_UnityEngine_Bounds__get_max_8d7f88(param_7,0);
  fVar12 = fVar7;
  fVar6 = (float)native_UnityEngine_Bounds__get_size_8d7ed8(param_7,0);
  fVar11 = fVar12;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  fVar5 = fVar5 + fVar6;
  fVar12 = fVar12 - fVar7;
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(param_4,0,0);
  iVar1 = native_UnityEngine_Screen__get_width_76a5e4(0);
  if ((uVar3 & 1) == 0) {
    if ((float)iVar1 < param_1 + fVar5) {
      iVar1 = native_UnityEngine_Screen__get_width_76a5e4(0);
      param_1 = (float)iVar1 - fVar5;
    }
    if (0.0 <= param_2 - fVar12) {
      fVar12 = param_2;
    }
    iVar1 = native_UnityEngine_Screen__get_width_76a5e4(0);
    iVar2 = native_UnityEngine_Screen__get_height_76a618(0);
    if (param_5 == 0) goto LAB_00732b9c;
    param_1 = param_1 - (float)iVar1 * 0.5;
    fVar7 = fVar12 - (float)iVar2 * 0.5;
    goto LAB_00732b60;
  }
  uVar8 = native_UnityEngine_Mathf__Clamp01_8d9d9c(param_1 / (float)iVar1,0);
  iVar1 = native_UnityEngine_Screen__get_height_76a618(0);
  uVar9 = native_UnityEngine_Mathf__Clamp01_8d9d9c(param_2 / (float)iVar1,0);
  if (((param_4 == 0) ||
      (fVar7 = (float)native_UnityEngine_Camera__get_orthographicSize_8d8630(param_4,0),
      param_5 == 0)) ||
     (lVar4 = native_UnityEngine_Transform__get_parent_765eb0(param_5,0), lVar4 == 0)) {
LAB_00732b9c:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  native_UnityEngine_Transform__get_lossyScale_772cac(lVar4,0);
  iVar1 = native_UnityEngine_Screen__get_height_76a618(0);
  fVar7 = ((float)iVar1 * 0.5) / (fVar7 / fVar11);
  iVar1 = native_UnityEngine_Screen__get_width_76a5e4(0);
  iVar2 = native_UnityEngine_Screen__get_height_76a618(0);
  uVar8 = native_UnityEngine_Mathf__Min_8e4bb8(uVar8,1.0 - (fVar5 * fVar7) / (float)iVar1,0);
  uVar9 = native_UnityEngine_Mathf__Max_8d9f90(uVar9,(fVar12 * fVar7) / (float)iVar2,0);
  native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(uVar8,uVar9,param_3,param_4,0);
  fVar12 = (float)uVar9;
  native_UnityEngine_Transform__set_position_77174c(param_5,0);
  fVar7 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(param_5,0);
  dVar10 = (double)func_0x002c9600((double)fVar7,&dStack_a0);
  if (0.0 <= fVar7) {
    if (dVar10 == 0.5) {
      fVar7 = (float)dStack_a0 + 1.0;
      goto LAB_00732ac4;
    }
    param_1 = (float)(int)(fVar7 + 0.5);
  }
  else if (dVar10 == -0.5) {
    fVar7 = (float)dStack_a0 + -1.0;
LAB_00732ac4:
    param_1 = (float)dStack_a0;
    if (((long)dStack_a0 & 1U) != 0) {
      param_1 = fVar7;
    }
  }
  else {
    param_1 = (float)(int)(fVar7 + -0.5);
  }
  dVar10 = (double)func_0x002c9600((double)fVar12,&dStack_a0);
  if (0.0 <= fVar12) {
    if (dVar10 != 0.5) {
      fVar7 = (float)(int)(fVar12 + 0.5);
      goto LAB_00732b60;
    }
    fVar12 = (float)dStack_a0 + 1.0;
  }
  else {
    if (dVar10 != -0.5) {
      fVar7 = (float)(int)(fVar12 + -0.5);
      goto LAB_00732b60;
    }
    fVar12 = (float)dStack_a0 + -1.0;
  }
  fVar7 = (float)dStack_a0;
  if (((long)dStack_a0 & 1U) != 0) {
    fVar7 = fVar12;
  }
LAB_00732b60:
  native_UnityEngine_Transform__set_localPosition_7718a4(param_1,fVar7,param_3,param_5,0);
  return;
}



/* NGUITools$$Save @ 0x732ba0
 * bool NGUITools__Save (System_String_o* fileName, System_Byte_array* bytes, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$Save
   bool NGUITools__Save (System_String_o* fileName, System_Byte_array* bytes, const MethodInfo*
   method); */

undefined8 native_NGUITools__Save_732ba0(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  
  if ((bRam000000000133f5be & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&StringLiteral___12eb830);
    bRam000000000133f5be = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar1 = native_UnityEngine_Application__get_platform_8d6250(0);
  if (iVar1 == 0x11) {
    uVar2 = 0;
  }
  else {
    uVar2 = native_UnityEngine_Application__get_persistentDataPath_8d6168(0);
    uVar2 = native_System_String__Concat_afc654(uVar2,_StringLiteral___12eb830,param_1,0);
    if (param_2 == 0) {
      uVar4 = native_System_IO_File__Exists_bf1460(uVar2,0);
      if ((uVar4 & 1) != 0) {
        native_System_IO_File__Delete_bf6f6c(uVar2,0);
      }
    }
    else {
      plVar3 = (long *)native_System_IO_File__Create_bf6ee8(uVar2,0);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      (**(code **)(*plVar3 + 0x2f8))
                (plVar3,param_2,0,*(undefined4 *)(param_2 + 0x18),*(undefined8 *)(*plVar3 + 0x300));
      (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
    }
    uVar2 = 1;
  }
  return uVar2;
}



/* NGUITools$$Load @ 0x732d94
 * System_Byte_array* NGUITools__Load (System_String_o* fileName, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00bf7558) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$Load
   System_Byte_array* NGUITools__Load (System_String_o* fileName, const MethodInfo* method); */

undefined8 native_NGUITools__Load_732d94(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  
  if ((bRam000000000133f5bf & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&StringLiteral___12eb830);
    bRam000000000133f5bf = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar2 = native_UnityEngine_Application__get_platform_8d6250(0);
  if (iVar2 != 0x11) {
    uVar4 = native_UnityEngine_Application__get_persistentDataPath_8d6168(0);
    uVar4 = native_System_String__Concat_afc654(uVar4,_StringLiteral___12eb830,param_1,0);
    uVar5 = native_System_IO_File__Exists_bf1460(uVar4,0);
    if ((uVar5 & 1) != 0) {
      if ((bRam00000000013425fb & 1) == 0) {
        native_sub_43273c(&byte___TypeInfo_12d3060,0);
        native_sub_43273c(&Method_System_IO_File_ReadAllBytes___12e43b8);
        native_sub_43273c(&System_IDisposable_TypeInfo_12d4b00);
        bRam00000000013425fb = 1;
      }
      plVar6 = (long *)native_System_IO_File__OpenRead_bf7298(uVar4);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      uVar5 = (**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
      if (0x7fffffff < (long)uVar5) {
        native_sub_432740(&System_IO_IOException_TypeInfo_12d4c88);
        uVar4 = native_sub_432808();
        uVar8 = native_sub_432740(&
                                  StringLiteral_Reading_more_than_2GB_with_this_call_is_not_supported_12f0900
                                 );
        native_System_IO_IOException___ctor_839f34(uVar4,uVar8,0);
        uVar8 = native_sub_432740(&Method_System_IO_File_ReadAllBytes___12e43b8);
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar4,uVar8);
      }
      uVar4 = native_sub_432750(_byte___TypeInfo_12d3060,uVar5 & 0xffffffff);
      if (0 < (int)uVar5) {
        iVar2 = 0;
        do {
          iVar3 = (**(code **)(*plVar6 + 0x2d8))
                            (plVar6,uVar4,iVar2,uVar5 & 0xffffffff,*(undefined8 *)(*plVar6 + 0x2e0))
          ;
          if (iVar3 == 0) {
            native_sub_432740(&System_IO_IOException_TypeInfo_12d4c88);
            uVar4 = native_sub_432808();
            uVar8 = native_sub_432740(&StringLiteral_Unexpected_end_of_stream_12f2b48);
            native_System_IO_IOException___ctor_839f34(uVar4,uVar8,0);
            uVar8 = native_sub_432740(&Method_System_IO_File_ReadAllBytes___12e43b8);
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar4,uVar8);
          }
          uVar1 = (int)uVar5 - iVar3;
          uVar5 = (ulong)uVar1;
          iVar2 = iVar3 + iVar2;
        } while (0 < (int)uVar1);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
      }
      lVar9 = *plVar6;
      if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
        uVar5 = 0;
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == _System_IDisposable_TypeInfo_12d4b00) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto code_r0x00bf74c8;
          }
          uVar5 = uVar5 + 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 < *(ushort *)(lVar9 + 0x12a));
      }
      puVar7 = (undefined8 *)native_sub_3c9b34(plVar6,_System_IDisposable_TypeInfo_12d4b00,0);
code_r0x00bf74c8:
      (*(code *)*puVar7)(plVar6,puVar7[1]);
      return uVar4;
    }
  }
  return 0;
}



/* NGUITools$$ApplyPMA @ 0x732e54
 * UnityEngine_Color_o NGUITools__ApplyPMA (UnityEngine_Color_o c, const MethodInfo* method); */

/* NGUITools$$ApplyPMA
   UnityEngine_Color_o NGUITools__ApplyPMA (UnityEngine_Color_o c, const MethodInfo* method); */

float native_NGUITools__ApplyPMA_732e54
                (float param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4)

{
  if (param_4 != 1.0) {
    param_1 = param_1 * param_4;
  }
  return param_1;
}



/* NGUITools$$MarkParentAsChanged @ 0x732e70
 * void NGUITools__MarkParentAsChanged (UnityEngine_GameObject_o* go, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$MarkParentAsChanged
   void NGUITools__MarkParentAsChanged (UnityEngine_GameObject_o* go, const MethodInfo* method); */

void native_NGUITools__MarkParentAsChanged_732e70(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  
  if ((bRam000000000133f5c0 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIRect____12e4b78);
    bRam000000000133f5c0 = 1;
  }
  if ((param_1 != 0) &&
     (lVar1 = native_UnityEngine_GameObject__GetComponentsInChildren_Collider__4a2650
                        (param_1,
                         _Method_UnityEngine_GameObject_GetComponentsInChildren_UIRect____12e4b78),
     lVar1 != 0)) {
    iVar4 = (int)*(undefined8 *)(lVar1 + 0x18);
    if (iVar4 < 1) {
      return;
    }
    if (iVar4 != 0) {
      uVar5 = 0;
      do {
        plVar2 = *(long **)(lVar1 + (long)(int)uVar5 * 8 + 0x20);
        if (plVar2 == (long *)0x0) goto LAB_00732f28;
        (**(code **)(*plVar2 + 0x278))(plVar2,*(undefined8 *)(*plVar2 + 0x280));
        uVar5 = uVar5 + 1;
        if (iVar4 <= (int)uVar5) {
          return;
        }
      } while (uVar5 < *(uint *)(lVar1 + 0x18));
    }
    uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar3,0);
  }
LAB_00732f28:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$get_clipboard @ 0x732f2c
 * System_String_o* NGUITools__get_clipboard (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$get_clipboard
   System_String_o* NGUITools__get_clipboard (const MethodInfo* method); */

undefined8 native_NGUITools__get_clipboard_732f2c(void)

{
  long lVar1;
  
  if ((bRam000000000133f5c1 & 1) == 0) {
    native_sub_43273c(&UnityEngine_TextEditor_TypeInfo_12d6188);
    bRam000000000133f5c1 = 1;
  }
  lVar1 = native_sub_432808(_UnityEngine_TextEditor_TypeInfo_12d6188);
  native_UnityEngine_TextEditor___ctor_d86334(lVar1,0);
  if (lVar1 != 0) {
    native_UnityEngine_TextEditor__Paste_d867f4(lVar1,0);
    if (*(long *)(lVar1 + 0x38) != 0) {
      return *(undefined8 *)(*(long *)(lVar1 + 0x38) + 0x10);
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810(lVar1,0);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$set_clipboard @ 0x732f9c
 * void NGUITools__set_clipboard (System_String_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$set_clipboard
   void NGUITools__set_clipboard (System_String_o* value, const MethodInfo* method); */

void native_NGUITools__set_clipboard_732f9c(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((bRam000000000133f5c2 & 1) == 0) {
    native_sub_43273c(&UnityEngine_TextEditor_TypeInfo_12d6188);
    bRam000000000133f5c2 = 1;
  }
  plVar1 = (long *)native_sub_432808(_UnityEngine_TextEditor_TypeInfo_12d6188);
  native_UnityEngine_TextEditor___ctor_d86334(plVar1,0);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  native_UnityEngine_TextEditor__set_text_d86164(plVar1,param_1,0);
  native_UnityEngine_TextEditor__OnFocus_d86424(plVar1,0);
  if ((bRam0000000001343361 & 1) == 0) {
    native_sub_43273c(&UnityEngine_GUIUtility_TypeInfo_12d47c8,0);
    bRam0000000001343361 = 1;
  }
  if ((*(int *)((long)plVar1 + 0x54) != (int)plVar1[10]) && (*(char *)((long)plVar1 + 0x2a) == '\0')
     ) {
    lVar3 = plVar1[4];
    (**(code **)(*plVar1 + 0x178))(plVar1,*(undefined8 *)(*plVar1 + 0x180));
    if (lVar3 != 0) {
      uVar2 = native_UnityEngine_GUIStyle__Internal_GetSelectedRenderedText_d84edc
                        (lVar3,plVar1[7],*(undefined4 *)((long)plVar1 + 0x54),(int)plVar1[10]);
      if (((*(byte *)(_UnityEngine_GUIUtility_TypeInfo_12d47c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_GUIUtility_TypeInfo_12d47c8 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_GUIUtility_TypeInfo_12d47c8);
      }
      if (pcRam0000000001343338 == (code *)0x0) {
        pcRam0000000001343338 = (code *)native_sub_4326f0(&UNK_00e4c9ac);
      }
                    /* WARNING: Could not recover jumptable at 0x00d86754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000001343338)(uVar2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return;
}



/* NGUITools$$EncodeColor @ 0x733020
 * System_String_o* NGUITools__EncodeColor (UnityEngine_Color_o c, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$EncodeColor
   System_String_o* NGUITools__EncodeColor (UnityEngine_Color_o c, const MethodInfo* method); */

void native_NGUITools__EncodeColor_733020
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((bRam000000000133f5c3 & 1) == 0) {
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    bRam000000000133f5c3 = 1;
  }
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam0000000001340491 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    bRam0000000001340491 = 1;
  }
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_NGUIMath__ColorToInt_80509c(param_1,param_2,param_3,param_4);
  if ((bRam0000000001340463 & 1) == 0) {
    native_sub_43273c(&StringLiteral_X6_12f3100);
    bRam0000000001340463 = 1;
  }
  native_System_Int32__ToString_83c640(&stack0xffffffffffffffdc,_StringLiteral_X6_12f3100,0);
  return;
}



/* NGUITools$$ParseColor @ 0x7330ac
 * UnityEngine_Color_o NGUITools__ParseColor (System_String_o* text, int32_t offset, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$ParseColor
   UnityEngine_Color_o NGUITools__ParseColor (System_String_o* text, int32_t offset, const
   MethodInfo* method); */

undefined4 native_NGUITools__ParseColor_7330ac(long param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam000000000133f5c4 & 1) == 0) {
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    bRam000000000133f5c4 = 1;
  }
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000134048a & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8,param_2,0);
    bRam000000000134048a = 1;
  }
  if (param_1 != 0) {
    uVar1 = native_System_String__get_Chars_b03810(param_1,param_2,0);
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
    }
    iVar2 = native_NGUIMath__HexToDecimal_804ea8(uVar1,0xf);
    uVar8 = native_System_String__get_Chars_b03810(param_1,param_2 + 1,0);
    uVar3 = native_NGUIMath__HexToDecimal_804ea8(uVar8,0xf);
    uVar8 = native_System_String__get_Chars_b03810(param_1,param_2 + 2,0);
    iVar4 = native_NGUIMath__HexToDecimal_804ea8(uVar8,0xf);
    uVar8 = native_System_String__get_Chars_b03810(param_1,param_2 + 3,0);
    uVar5 = native_NGUIMath__HexToDecimal_804ea8(uVar8,0xf);
    uVar8 = native_System_String__get_Chars_b03810(param_1,param_2 + 4,0);
    iVar6 = native_NGUIMath__HexToDecimal_804ea8(uVar8,0xf);
    uVar8 = native_System_String__get_Chars_b03810(param_1,param_2 + 5,0);
    uVar7 = native_NGUIMath__HexToDecimal_804ea8(uVar8,0xf);
    uStack_50 = 0;
    uStack_48 = 0;
    native_UnityEngine_Color___ctor_8d9818
              ((float)(int)(uVar3 | iVar2 << 4) * 0.003921569,
               (float)(int)(uVar5 | iVar4 << 4) * 0.003921569,
               (float)(int)(uVar7 | iVar6 << 4) * 0.003921569,&uStack_50,0);
    return (undefined4)uStack_50;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$StripSymbols @ 0x733120
 * System_String_o* NGUITools__StripSymbols (System_String_o* text, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$StripSymbols
   System_String_o* NGUITools__StripSymbols (System_String_o* text, const MethodInfo* method); */

long native_NGUITools__StripSymbols_733120(long param_1)

{
  short sVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_74;
  int iStack_70;
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [4];
  undefined4 uStack_54;
  
  if ((bRam000000000133f5c5 & 1) == 0) {
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    bRam000000000133f5c5 = 1;
  }
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam0000000001340495 & 1) == 0) {
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0,0);
    bRam0000000001340495 = 1;
  }
  uStack_54 = 0;
  auStack_58[0] = 0;
  auStack_5c[0] = 0;
  auStack_60[0] = 0;
  auStack_64[0] = 0;
  auStack_68[0] = 0;
  auStack_6c[0] = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (param_1 != 0) {
    iVar4 = *(int *)(param_1 + 0x10);
    if (0 < iVar4) {
      iVar3 = 0;
      do {
        sVar1 = native_System_String__get_Chars_b03810(param_1,iVar3,0);
        if (sVar1 == 0x5b) {
          uStack_54 = 0;
          auStack_58[0] = 0;
          auStack_5c[0] = 0;
          auStack_60[0] = 0;
          auStack_64[0] = 0;
          auStack_68[0] = 0;
          auStack_6c[0] = 0;
          uStack_74 = 0;
          iStack_70 = iVar3;
          if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar2 = native_NGUIText__ParseSymbol_8091a4
                            (param_1,&iStack_70,0,0,&uStack_54,&uStack_74,auStack_58,auStack_5c,
                             auStack_60,auStack_64,auStack_68,auStack_6c);
          if ((uVar2 & 1) == 0) goto LAB_0080bc58;
          param_1 = native_System_String__Remove_b0d628(param_1,iVar3,iStack_70 - iVar3,0);
          if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          iVar4 = *(int *)(param_1 + 0x10);
        }
        else {
LAB_0080bc58:
          iVar3 = iVar3 + 1;
        }
      } while (iVar3 < iVar4);
    }
  }
  return param_1;
}



/* NGUITools$$GetSides @ 0x733184
 * UnityEngine_Vector3_array* NGUITools__GetSides (UnityEngine_Camera_o* cam, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x007336d0) */
/* WARNING: Removing unreachable block (ram,0x007336f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$GetSides
   UnityEngine_Vector3_array* NGUITools__GetSides (UnityEngine_Camera_o* cam, const MethodInfo*
   method); */

undefined8 native_NGUITools__GetSides_733184(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 in_s3;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if ((bRam000000000133f5c6 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5c6 = 1;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar13 = native_UnityEngine_Camera__get_nearClipPlane_8d8480(param_1,0);
  fVar6 = (float)native_UnityEngine_Camera__get_farClipPlane_8d8510(param_1,0);
  uVar15 = 0x3f000000;
  fVar7 = (float)native_UnityEngine_Mathf__Lerp_8e5224(uVar13,0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f5c9 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f5c9 = 1;
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  if (param_1 == 0) goto LAB_00733764;
  uVar3 = native_UnityEngine_Camera__get_orthographic_8d86c0(param_1,0);
  if ((uVar3 & 1) == 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar14 = 0x3f000000;
    lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
    fVar6 = fVar7;
    uVar9 = native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(0,param_1,0);
    if (lVar4 == 0) goto LAB_00733764;
    if (*(int *)(lVar4 + 0x18) == 0) goto LAB_00733768;
    *(undefined4 *)(lVar4 + 0x20) = uVar9;
    *(undefined4 *)(lVar4 + 0x24) = uVar14;
    *(float *)(lVar4 + 0x28) = fVar6;
    uVar14 = 0x3f800000;
    lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
    fVar6 = fVar7;
    uVar9 = native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(0x3f000000,param_1,0);
    if (lVar4 == 0) goto LAB_00733764;
    if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_00733768;
    *(undefined4 *)(lVar4 + 0x2c) = uVar9;
    *(undefined4 *)(lVar4 + 0x30) = uVar14;
    *(float *)(lVar4 + 0x34) = fVar6;
    uVar14 = 0x3f000000;
    lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
    fVar6 = fVar7;
    uVar9 = native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(0x3f800000,param_1,0);
    if (lVar4 == 0) goto LAB_00733764;
    if (*(uint *)(lVar4 + 0x18) < 3) goto LAB_00733768;
    *(undefined4 *)(lVar4 + 0x38) = uVar9;
    *(undefined4 *)(lVar4 + 0x3c) = uVar14;
    *(float *)(lVar4 + 0x40) = fVar6;
    fVar18 = 0.0;
    lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
    fVar12 = (float)native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(0x3f000000,param_1,0);
    if (lVar4 == 0) goto LAB_00733764;
    if (*(uint *)(lVar4 + 0x18) < 4) goto LAB_00733768;
  }
  else {
    fVar8 = (float)native_UnityEngine_Camera__get_orthographicSize_8d8630(param_1,0);
    uVar9 = native_UnityEngine_Camera__get_rect_8d8b48(param_1,0);
    uStack_a0 = CONCAT44(fVar6,uVar9);
    uStack_98 = CONCAT44(in_s3,(int)uVar15);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    iVar1 = native_UnityEngine_Screen__get_width_76a5e4(0);
    iVar2 = native_UnityEngine_Screen__get_height_76a618(0);
    fVar10 = (float)native_UnityEngine_Rect__get_width_76367c(&uStack_a0,0);
    fVar11 = (float)native_UnityEngine_Rect__get_height_76368c(&uStack_a0,0);
    lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if (lVar4 == 0) goto LAB_00733764;
    fVar19 = (float)iVar1;
    fVar17 = (float)iVar2;
    uVar9 = native_UnityEngine_Transform__get_rotation_771a30(lVar4,0);
    uVar13 = uVar15;
    fVar18 = fVar6;
    fVar12 = (float)native_UnityEngine_Transform__get_position_77169c(lVar4,0);
    uVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar19,0);
    uVar5 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar17,0);
    if ((uVar3 & 1) != 0) {
      fVar12 = fVar12 + -1.0 / fVar19;
    }
    fVar10 = (fVar19 / fVar17) * (fVar10 / fVar11);
    if ((uVar5 & 1) != 0) {
      fVar18 = 1.0 / fVar17 + fVar18;
    }
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
    uVar16 = uVar15;
    fVar11 = fVar6;
    fVar17 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                              (uVar9,fVar6,uVar15,in_s3,fVar10 * -fVar8,0,fVar7,0);
    if (lVar4 == 0) goto LAB_00733764;
    if (*(int *)(lVar4 + 0x18) == 0) goto LAB_00733768;
    fVar19 = (float)uVar13;
    *(float *)(lVar4 + 0x20) = fVar12 + fVar17;
    *(float *)(lVar4 + 0x24) = fVar18 + fVar11;
    *(float *)(lVar4 + 0x28) = fVar19 + (float)uVar16;
    lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
    uVar13 = uVar15;
    fVar11 = fVar6;
    fVar17 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                              (uVar9,fVar6,uVar15,in_s3,0,fVar8,fVar7,0);
    if (lVar4 == 0) goto LAB_00733764;
    if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_00733768;
    *(float *)(lVar4 + 0x2c) = fVar12 + fVar17;
    *(float *)(lVar4 + 0x30) = fVar18 + fVar11;
    *(float *)(lVar4 + 0x34) = fVar19 + (float)uVar13;
    lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
    uVar13 = uVar15;
    fVar11 = fVar6;
    fVar10 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                              (uVar9,fVar6,uVar15,in_s3,fVar8 * fVar10,0,fVar7,0);
    if (lVar4 == 0) goto LAB_00733764;
    if (*(uint *)(lVar4 + 0x18) < 3) goto LAB_00733768;
    *(float *)(lVar4 + 0x38) = fVar12 + fVar10;
    *(float *)(lVar4 + 0x3c) = fVar18 + fVar11;
    *(float *)(lVar4 + 0x40) = fVar19 + (float)uVar13;
    lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
    fVar8 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                             (uVar9,fVar6,uVar15,in_s3,0,-fVar8,fVar7,0);
    if (lVar4 == 0) goto LAB_00733764;
    if (*(uint *)(lVar4 + 0x18) < 4) goto LAB_00733768;
    fVar7 = fVar19 + (float)uVar15;
    fVar18 = fVar18 + fVar6;
    fVar12 = fVar12 + fVar8;
  }
  *(float *)(lVar4 + 0x44) = fVar12;
  *(float *)(lVar4 + 0x48) = fVar18;
  *(float *)(lVar4 + 0x4c) = fVar7;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(0,0,0);
  if ((uVar3 & 1) == 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    return *(undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
  if ((lVar4 != 0) && (*(int *)(lVar4 + 0x18) == 0)) {
LAB_00733768:
    uVar13 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar13,0);
  }
LAB_00733764:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$GetSides @ 0x733774
 * UnityEngine_Vector3_array* NGUITools__GetSides (UnityEngine_Camera_o* cam, float depth, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x007336d0) */
/* WARNING: Removing unreachable block (ram,0x007336f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$GetSides
   UnityEngine_Vector3_array* NGUITools__GetSides (UnityEngine_Camera_o* cam, float depth, const
   MethodInfo* method); */

undefined8
native_NGUITools__GetSides_733774
          (float param_1,float param_2,undefined8 param_3,undefined4 param_4,long param_5)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if ((bRam000000000133f5c7 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5c7 = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f5c9 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f5c9 = 1;
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  if (param_5 == 0) goto LAB_00733764;
  uVar3 = native_UnityEngine_Camera__get_orthographic_8d86c0(param_5,0);
  if ((uVar3 & 1) == 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar12 = 0x3f000000;
    lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
    fVar15 = param_1;
    uVar8 = native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(0,param_5,0);
    if (lVar4 == 0) goto LAB_00733764;
    if (*(int *)(lVar4 + 0x18) == 0) goto LAB_00733768;
    *(undefined4 *)(lVar4 + 0x20) = uVar8;
    *(undefined4 *)(lVar4 + 0x24) = uVar12;
    *(float *)(lVar4 + 0x28) = fVar15;
    uVar12 = 0x3f800000;
    lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
    fVar15 = param_1;
    uVar8 = native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(0x3f000000,param_5,0);
    if (lVar4 == 0) goto LAB_00733764;
    if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_00733768;
    *(undefined4 *)(lVar4 + 0x2c) = uVar8;
    *(undefined4 *)(lVar4 + 0x30) = uVar12;
    *(float *)(lVar4 + 0x34) = fVar15;
    uVar12 = 0x3f000000;
    lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
    fVar15 = param_1;
    uVar8 = native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(0x3f800000,param_5,0);
    if (lVar4 == 0) goto LAB_00733764;
    if (*(uint *)(lVar4 + 0x18) < 3) goto LAB_00733768;
    *(undefined4 *)(lVar4 + 0x38) = uVar8;
    *(undefined4 *)(lVar4 + 0x3c) = uVar12;
    *(float *)(lVar4 + 0x40) = fVar15;
    fVar15 = 0.0;
    lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
    fVar11 = (float)native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(0x3f000000,param_5,0);
    if (lVar4 == 0) goto LAB_00733764;
    if (*(uint *)(lVar4 + 0x18) < 4) goto LAB_00733768;
  }
  else {
    fVar7 = (float)native_UnityEngine_Camera__get_orthographicSize_8d8630(param_5,0);
    uVar8 = native_UnityEngine_Camera__get_rect_8d8b48(param_5,0);
    uStack_a0 = CONCAT44(param_2,uVar8);
    uStack_98 = CONCAT44(param_4,(int)param_3);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    iVar1 = native_UnityEngine_Screen__get_width_76a5e4(0);
    iVar2 = native_UnityEngine_Screen__get_height_76a618(0);
    fVar9 = (float)native_UnityEngine_Rect__get_width_76367c(&uStack_a0,0);
    fVar10 = (float)native_UnityEngine_Rect__get_height_76368c(&uStack_a0,0);
    lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_5,0);
    if (lVar4 == 0) goto LAB_00733764;
    fVar16 = (float)iVar1;
    fVar14 = (float)iVar2;
    uVar8 = native_UnityEngine_Transform__get_rotation_771a30(lVar4,0);
    uVar6 = param_3;
    fVar15 = param_2;
    fVar11 = (float)native_UnityEngine_Transform__get_position_77169c(lVar4,0);
    uVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar16,0);
    uVar5 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar14,0);
    if ((uVar3 & 1) != 0) {
      fVar11 = fVar11 + -1.0 / fVar16;
    }
    fVar9 = (fVar16 / fVar14) * (fVar9 / fVar10);
    if ((uVar5 & 1) != 0) {
      fVar15 = 1.0 / fVar14 + fVar15;
    }
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
    uVar13 = param_3;
    fVar10 = param_2;
    fVar14 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                              (uVar8,param_2,param_3,param_4,fVar9 * -fVar7,0,param_1,0);
    if (lVar4 == 0) goto LAB_00733764;
    if (*(int *)(lVar4 + 0x18) == 0) goto LAB_00733768;
    fVar16 = (float)uVar6;
    *(float *)(lVar4 + 0x20) = fVar11 + fVar14;
    *(float *)(lVar4 + 0x24) = fVar15 + fVar10;
    *(float *)(lVar4 + 0x28) = fVar16 + (float)uVar13;
    lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
    uVar6 = param_3;
    fVar10 = param_2;
    fVar14 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                              (uVar8,param_2,param_3,param_4,0,fVar7,param_1,0);
    if (lVar4 == 0) goto LAB_00733764;
    if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_00733768;
    *(float *)(lVar4 + 0x2c) = fVar11 + fVar14;
    *(float *)(lVar4 + 0x30) = fVar15 + fVar10;
    *(float *)(lVar4 + 0x34) = fVar16 + (float)uVar6;
    lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
    uVar6 = param_3;
    fVar10 = param_2;
    fVar9 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                             (uVar8,param_2,param_3,param_4,fVar7 * fVar9,0,param_1,0);
    if (lVar4 == 0) goto LAB_00733764;
    if (*(uint *)(lVar4 + 0x18) < 3) goto LAB_00733768;
    *(float *)(lVar4 + 0x38) = fVar11 + fVar9;
    *(float *)(lVar4 + 0x3c) = fVar15 + fVar10;
    *(float *)(lVar4 + 0x40) = fVar16 + (float)uVar6;
    lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
    fVar7 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                             (uVar8,param_2,param_3,param_4,0,-fVar7,param_1,0);
    if (lVar4 == 0) goto LAB_00733764;
    if (*(uint *)(lVar4 + 0x18) < 4) goto LAB_00733768;
    param_1 = fVar16 + (float)param_3;
    fVar15 = fVar15 + param_2;
    fVar11 = fVar11 + fVar7;
  }
  *(float *)(lVar4 + 0x44) = fVar11;
  *(float *)(lVar4 + 0x48) = fVar15;
  *(float *)(lVar4 + 0x4c) = param_1;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(0,0,0);
  if ((uVar3 & 1) == 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    return *(undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
  if ((lVar4 != 0) && (*(int *)(lVar4 + 0x18) == 0)) {
LAB_00733768:
    uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar6,0);
  }
LAB_00733764:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$GetSides @ 0x7337e8
 * UnityEngine_Vector3_array* NGUITools__GetSides (UnityEngine_Camera_o* cam, UnityEngine_Transform_o* relativeTo, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$GetSides
   UnityEngine_Vector3_array* NGUITools__GetSides (UnityEngine_Camera_o* cam,
   UnityEngine_Transform_o* relativeTo, const MethodInfo* method); */

undefined8 native_NGUITools__GetSides_7337e8(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 in_s3;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if ((bRam000000000133f5c8 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5c8 = 1;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar15 = native_UnityEngine_Camera__get_nearClipPlane_8d8480(param_1,0);
  fVar13 = (float)native_UnityEngine_Camera__get_farClipPlane_8d8510(param_1,0);
  uVar19 = 0x3f000000;
  fVar14 = (float)native_UnityEngine_Mathf__Lerp_8e5224(uVar15,0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f5c9 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f5c9 = 1;
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  if (param_1 != 0) {
    uVar4 = native_UnityEngine_Camera__get_orthographic_8d86c0(param_1,0);
    if ((uVar4 & 1) == 0) {
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar16 = 0x3f000000;
      lVar5 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
      fVar13 = fVar14;
      uVar9 = native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(0,param_1,0);
      if (lVar5 != 0) {
        if (*(int *)(lVar5 + 0x18) != 0) {
          *(undefined4 *)(lVar5 + 0x20) = uVar9;
          *(undefined4 *)(lVar5 + 0x24) = uVar16;
          *(float *)(lVar5 + 0x28) = fVar13;
          uVar16 = 0x3f800000;
          lVar5 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
          fVar13 = fVar14;
          uVar9 = native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(0x3f000000,param_1,0);
          if (lVar5 == 0) goto LAB_00733764;
          if (1 < *(uint *)(lVar5 + 0x18)) {
            *(undefined4 *)(lVar5 + 0x2c) = uVar9;
            *(undefined4 *)(lVar5 + 0x30) = uVar16;
            *(float *)(lVar5 + 0x34) = fVar13;
            uVar16 = 0x3f000000;
            lVar5 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
            fVar13 = fVar14;
            uVar9 = native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(0x3f800000,param_1,0);
            if (lVar5 == 0) goto LAB_00733764;
            if (2 < *(uint *)(lVar5 + 0x18)) {
              *(undefined4 *)(lVar5 + 0x38) = uVar9;
              *(undefined4 *)(lVar5 + 0x3c) = uVar16;
              *(float *)(lVar5 + 0x40) = fVar13;
              fVar21 = 0.0;
              lVar5 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
              fVar12 = (float)native_UnityEngine_Camera__ViewportToWorldPoint_8d9168
                                        (0x3f000000,param_1,0);
              if (lVar5 == 0) goto LAB_00733764;
              if (3 < *(uint *)(lVar5 + 0x18)) {
LAB_00733648:
                *(float *)(lVar5 + 0x44) = fVar12;
                *(float *)(lVar5 + 0x48) = fVar21;
                *(float *)(lVar5 + 0x4c) = fVar14;
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(param_2,0,0);
                if ((uVar4 & 1) != 0) {
                  lVar5 = 0;
                  uVar4 = 0xffffffffffffffff;
                  do {
                    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    lVar7 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
                    if (lVar7 == 0) goto LAB_00733764;
                    if ((ulong)*(uint *)(lVar7 + 0x18) <= uVar4 + 1) goto LAB_00733768;
                    if (param_2 == 0) goto LAB_00733764;
                    lVar1 = lVar7 + lVar5;
                    uVar16 = *(undefined4 *)(lVar1 + 0x24);
                    uVar17 = *(undefined4 *)(lVar1 + 0x28);
                    uVar9 = native_UnityEngine_Transform__InverseTransformPoint_7729a0
                                      (*(undefined4 *)(lVar1 + 0x20),param_2,0);
                    if ((ulong)*(uint *)(lVar7 + 0x18) <= uVar4 + 1) goto LAB_00733768;
                    uVar4 = uVar4 + 1;
                    lVar5 = lVar5 + 0xc;
                    *(undefined4 *)(lVar1 + 0x20) = uVar9;
                    *(undefined4 *)(lVar1 + 0x24) = uVar16;
                    *(undefined4 *)(lVar1 + 0x28) = uVar17;
                  } while (uVar4 < 3);
                }
                if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                return *(undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
              }
            }
          }
        }
LAB_00733768:
        uVar15 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar15,0);
      }
    }
    else {
      fVar8 = (float)native_UnityEngine_Camera__get_orthographicSize_8d8630(param_1,0);
      uVar9 = native_UnityEngine_Camera__get_rect_8d8b48(param_1,0);
      uStack_a0 = CONCAT44(fVar13,uVar9);
      uStack_98 = CONCAT44(in_s3,(int)uVar19);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      iVar2 = native_UnityEngine_Screen__get_width_76a5e4(0);
      iVar3 = native_UnityEngine_Screen__get_height_76a618(0);
      fVar10 = (float)native_UnityEngine_Rect__get_width_76367c(&uStack_a0,0);
      fVar11 = (float)native_UnityEngine_Rect__get_height_76368c(&uStack_a0,0);
      lVar5 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
      if (lVar5 != 0) {
        fVar22 = (float)iVar2;
        fVar20 = (float)iVar3;
        uVar9 = native_UnityEngine_Transform__get_rotation_771a30(lVar5,0);
        uVar15 = uVar19;
        fVar21 = fVar13;
        fVar12 = (float)native_UnityEngine_Transform__get_position_77169c(lVar5,0);
        uVar4 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar22,0);
        uVar6 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar20,0);
        if ((uVar4 & 1) != 0) {
          fVar12 = fVar12 + -1.0 / fVar22;
        }
        fVar10 = (fVar22 / fVar20) * (fVar10 / fVar11);
        if ((uVar6 & 1) != 0) {
          fVar21 = 1.0 / fVar20 + fVar21;
        }
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar5 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
        uVar18 = uVar19;
        fVar11 = fVar13;
        fVar20 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                                  (uVar9,fVar13,uVar19,in_s3,fVar10 * -fVar8,0,fVar14,0);
        if (lVar5 != 0) {
          if (*(int *)(lVar5 + 0x18) != 0) {
            fVar22 = (float)uVar15;
            *(float *)(lVar5 + 0x20) = fVar12 + fVar20;
            *(float *)(lVar5 + 0x24) = fVar21 + fVar11;
            *(float *)(lVar5 + 0x28) = fVar22 + (float)uVar18;
            lVar5 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
            uVar15 = uVar19;
            fVar11 = fVar13;
            fVar20 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                                      (uVar9,fVar13,uVar19,in_s3,0,fVar8,fVar14,0);
            if (lVar5 == 0) goto LAB_00733764;
            if (1 < *(uint *)(lVar5 + 0x18)) {
              *(float *)(lVar5 + 0x2c) = fVar12 + fVar20;
              *(float *)(lVar5 + 0x30) = fVar21 + fVar11;
              *(float *)(lVar5 + 0x34) = fVar22 + (float)uVar15;
              lVar5 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
              uVar15 = uVar19;
              fVar11 = fVar13;
              fVar10 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                                        (uVar9,fVar13,uVar19,in_s3,fVar8 * fVar10,0,fVar14,0);
              if (lVar5 == 0) goto LAB_00733764;
              if (2 < *(uint *)(lVar5 + 0x18)) {
                *(float *)(lVar5 + 0x38) = fVar12 + fVar10;
                *(float *)(lVar5 + 0x3c) = fVar21 + fVar11;
                *(float *)(lVar5 + 0x40) = fVar22 + (float)uVar15;
                lVar5 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
                fVar8 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                                         (uVar9,fVar13,uVar19,in_s3,0,-fVar8,fVar14,0);
                if (lVar5 == 0) goto LAB_00733764;
                if (3 < *(uint *)(lVar5 + 0x18)) {
                  fVar14 = fVar22 + (float)uVar19;
                  fVar21 = fVar21 + fVar13;
                  fVar12 = fVar12 + fVar8;
                  goto LAB_00733648;
                }
              }
            }
          }
          goto LAB_00733768;
        }
      }
    }
  }
LAB_00733764:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$GetSides @ 0x733230
 * UnityEngine_Vector3_array* NGUITools__GetSides (UnityEngine_Camera_o* cam, float depth, UnityEngine_Transform_o* relativeTo, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$GetSides
   UnityEngine_Vector3_array* NGUITools__GetSides (UnityEngine_Camera_o* cam, float depth,
   UnityEngine_Transform_o* relativeTo, const MethodInfo* method); */

undefined8
native_NGUITools__GetSides_733230
          (float param_1,float param_2,undefined8 param_3,undefined4 param_4,long param_5,
          long param_6)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if ((bRam000000000133f5c9 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f5c9 = 1;
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  if (param_5 != 0) {
    uVar4 = native_UnityEngine_Camera__get_orthographic_8d86c0(param_5,0);
    if ((uVar4 & 1) == 0) {
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar14 = 0x3f000000;
      lVar5 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
      fVar18 = param_1;
      uVar10 = native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(0,param_5,0);
      if (lVar5 != 0) {
        if (*(int *)(lVar5 + 0x18) != 0) {
          *(undefined4 *)(lVar5 + 0x20) = uVar10;
          *(undefined4 *)(lVar5 + 0x24) = uVar14;
          *(float *)(lVar5 + 0x28) = fVar18;
          uVar14 = 0x3f800000;
          lVar5 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
          fVar18 = param_1;
          uVar10 = native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(0x3f000000,param_5,0);
          if (lVar5 == 0) goto LAB_00733764;
          if (1 < *(uint *)(lVar5 + 0x18)) {
            *(undefined4 *)(lVar5 + 0x2c) = uVar10;
            *(undefined4 *)(lVar5 + 0x30) = uVar14;
            *(float *)(lVar5 + 0x34) = fVar18;
            uVar14 = 0x3f000000;
            lVar5 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
            fVar18 = param_1;
            uVar10 = native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(0x3f800000,param_5,0);
            if (lVar5 == 0) goto LAB_00733764;
            if (2 < *(uint *)(lVar5 + 0x18)) {
              *(undefined4 *)(lVar5 + 0x38) = uVar10;
              *(undefined4 *)(lVar5 + 0x3c) = uVar14;
              *(float *)(lVar5 + 0x40) = fVar18;
              fVar18 = 0.0;
              lVar5 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
              fVar13 = (float)native_UnityEngine_Camera__ViewportToWorldPoint_8d9168
                                        (0x3f000000,param_5,0);
              if (lVar5 == 0) goto LAB_00733764;
              if (3 < *(uint *)(lVar5 + 0x18)) {
LAB_00733648:
                *(float *)(lVar5 + 0x44) = fVar13;
                *(float *)(lVar5 + 0x48) = fVar18;
                *(float *)(lVar5 + 0x4c) = param_1;
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(param_6,0,0);
                if ((uVar4 & 1) != 0) {
                  lVar5 = 0;
                  uVar4 = 0xffffffffffffffff;
                  do {
                    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    lVar8 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
                    if (lVar8 == 0) goto LAB_00733764;
                    if ((ulong)*(uint *)(lVar8 + 0x18) <= uVar4 + 1) goto LAB_00733768;
                    if (param_6 == 0) goto LAB_00733764;
                    lVar1 = lVar8 + lVar5;
                    uVar14 = *(undefined4 *)(lVar1 + 0x24);
                    uVar15 = *(undefined4 *)(lVar1 + 0x28);
                    uVar10 = native_UnityEngine_Transform__InverseTransformPoint_7729a0
                                       (*(undefined4 *)(lVar1 + 0x20),param_6,0);
                    if ((ulong)*(uint *)(lVar8 + 0x18) <= uVar4 + 1) goto LAB_00733768;
                    uVar4 = uVar4 + 1;
                    lVar5 = lVar5 + 0xc;
                    *(undefined4 *)(lVar1 + 0x20) = uVar10;
                    *(undefined4 *)(lVar1 + 0x24) = uVar14;
                    *(undefined4 *)(lVar1 + 0x28) = uVar15;
                  } while (uVar4 < 3);
                }
                if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                return *(undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
              }
            }
          }
        }
LAB_00733768:
        uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar7,0);
      }
    }
    else {
      fVar9 = (float)native_UnityEngine_Camera__get_orthographicSize_8d8630(param_5,0);
      uVar10 = native_UnityEngine_Camera__get_rect_8d8b48(param_5,0);
      uStack_a0 = CONCAT44(param_2,uVar10);
      uStack_98 = CONCAT44(param_4,(int)param_3);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      iVar2 = native_UnityEngine_Screen__get_width_76a5e4(0);
      iVar3 = native_UnityEngine_Screen__get_height_76a618(0);
      fVar11 = (float)native_UnityEngine_Rect__get_width_76367c(&uStack_a0,0);
      fVar12 = (float)native_UnityEngine_Rect__get_height_76368c(&uStack_a0,0);
      lVar5 = native_UnityEngine_Component__get_transform_8da62c(param_5,0);
      if (lVar5 != 0) {
        fVar19 = (float)iVar2;
        fVar17 = (float)iVar3;
        uVar10 = native_UnityEngine_Transform__get_rotation_771a30(lVar5,0);
        uVar7 = param_3;
        fVar18 = param_2;
        fVar13 = (float)native_UnityEngine_Transform__get_position_77169c(lVar5,0);
        uVar4 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar19,0);
        uVar6 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar17,0);
        if ((uVar4 & 1) != 0) {
          fVar13 = fVar13 + -1.0 / fVar19;
        }
        fVar11 = (fVar19 / fVar17) * (fVar11 / fVar12);
        if ((uVar6 & 1) != 0) {
          fVar18 = 1.0 / fVar17 + fVar18;
        }
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar5 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
        uVar16 = param_3;
        fVar12 = param_2;
        fVar17 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                                  (uVar10,param_2,param_3,param_4,fVar11 * -fVar9,0,param_1,0);
        if (lVar5 != 0) {
          if (*(int *)(lVar5 + 0x18) != 0) {
            fVar19 = (float)uVar7;
            *(float *)(lVar5 + 0x20) = fVar13 + fVar17;
            *(float *)(lVar5 + 0x24) = fVar18 + fVar12;
            *(float *)(lVar5 + 0x28) = fVar19 + (float)uVar16;
            lVar5 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
            uVar7 = param_3;
            fVar12 = param_2;
            fVar17 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                                      (uVar10,param_2,param_3,param_4,0,fVar9,param_1,0);
            if (lVar5 == 0) goto LAB_00733764;
            if (1 < *(uint *)(lVar5 + 0x18)) {
              *(float *)(lVar5 + 0x2c) = fVar13 + fVar17;
              *(float *)(lVar5 + 0x30) = fVar18 + fVar12;
              *(float *)(lVar5 + 0x34) = fVar19 + (float)uVar7;
              lVar5 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
              uVar7 = param_3;
              fVar12 = param_2;
              fVar11 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                                        (uVar10,param_2,param_3,param_4,fVar9 * fVar11,0,param_1,0);
              if (lVar5 == 0) goto LAB_00733764;
              if (2 < *(uint *)(lVar5 + 0x18)) {
                *(float *)(lVar5 + 0x38) = fVar13 + fVar11;
                *(float *)(lVar5 + 0x3c) = fVar18 + fVar12;
                *(float *)(lVar5 + 0x40) = fVar19 + (float)uVar7;
                lVar5 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
                fVar9 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                                         (uVar10,param_2,param_3,param_4,0,-fVar9,param_1,0);
                if (lVar5 == 0) goto LAB_00733764;
                if (3 < *(uint *)(lVar5 + 0x18)) {
                  param_1 = fVar19 + (float)param_3;
                  fVar18 = fVar18 + param_2;
                  fVar13 = fVar13 + fVar9;
                  goto LAB_00733648;
                }
              }
            }
          }
          goto LAB_00733768;
        }
      }
    }
  }
LAB_00733764:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$GetWorldCorners @ 0x7338d4
 * UnityEngine_Vector3_array* NGUITools__GetWorldCorners (UnityEngine_Camera_o* cam, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00733dd8) */
/* WARNING: Removing unreachable block (ram,0x00733dfc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$GetWorldCorners
   UnityEngine_Vector3_array* NGUITools__GetWorldCorners (UnityEngine_Camera_o* cam, const
   MethodInfo* method); */

undefined8 native_NGUITools__GetWorldCorners_7338d4(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong in_d3;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if ((bRam000000000133f5ca & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5ca = 1;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar14 = native_UnityEngine_Camera__get_nearClipPlane_8d8480(param_1,0);
  uVar6 = native_UnityEngine_Camera__get_farClipPlane_8d8510(param_1,0);
  uVar5 = 0x3f000000;
  fVar7 = (float)native_UnityEngine_Mathf__Lerp_8e5224(uVar14,0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f5cd & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f5cd = 1;
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  if (param_1 == 0) goto LAB_00733e6c;
  uVar3 = native_UnityEngine_Camera__get_orthographic_8d86c0(param_1,0);
  if ((uVar3 & 1) == 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar9 = 0;
    lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
    fVar10 = fVar7;
    uVar6 = native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(0,param_1,0);
    if (lVar4 == 0) goto LAB_00733e6c;
    if (*(int *)(lVar4 + 0x18) == 0) goto LAB_00733e70;
    *(undefined4 *)(lVar4 + 0x20) = uVar6;
    *(undefined4 *)(lVar4 + 0x24) = uVar9;
    *(float *)(lVar4 + 0x28) = fVar10;
    uVar9 = 0x3f800000;
    lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
    fVar10 = fVar7;
    uVar6 = native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(0,param_1,0);
    if (lVar4 == 0) goto LAB_00733e6c;
    if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_00733e70;
    *(undefined4 *)(lVar4 + 0x2c) = uVar6;
    *(undefined4 *)(lVar4 + 0x30) = uVar9;
    *(float *)(lVar4 + 0x34) = fVar10;
    uVar6 = 0x3f800000;
    lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
    fVar10 = fVar7;
    uVar9 = native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(param_1,0);
    if (lVar4 == 0) goto LAB_00733e6c;
    if (*(uint *)(lVar4 + 0x18) < 3) goto LAB_00733e70;
    *(undefined4 *)(lVar4 + 0x38) = uVar9;
    *(undefined4 *)(lVar4 + 0x3c) = uVar6;
    *(float *)(lVar4 + 0x40) = fVar10;
    fVar11 = 0.0;
    lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
    fVar10 = (float)native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(0x3f800000,param_1,0);
    if (lVar4 == 0) goto LAB_00733e6c;
    if (*(uint *)(lVar4 + 0x18) < 4) goto LAB_00733e70;
  }
  else {
    fVar8 = (float)native_UnityEngine_Camera__get_orthographicSize_8d8630(param_1,0);
    uVar9 = native_UnityEngine_Camera__get_rect_8d8b48(param_1,0);
    uStack_a0 = CONCAT44(uVar6,uVar9);
    uStack_98 = CONCAT44((int)in_d3,(int)uVar5);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    iVar1 = native_UnityEngine_Screen__get_width_76a5e4(0);
    iVar2 = native_UnityEngine_Screen__get_height_76a618(0);
    fVar10 = (float)native_UnityEngine_Rect__get_width_76367c(&uStack_a0,0);
    fVar11 = (float)native_UnityEngine_Rect__get_height_76368c(&uStack_a0,0);
    lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if (lVar4 == 0) goto LAB_00733e6c;
    uVar16 = (ulong)(uint)(fVar10 / fVar11);
    fVar22 = -fVar8;
    fVar12 = ((float)iVar1 / (float)iVar2) * (fVar10 / fVar11);
    fVar20 = fVar12 * fVar22;
    uVar15 = native_UnityEngine_Transform__get_rotation_771a30(lVar4,0);
    uVar3 = uVar16;
    uVar18 = uVar5;
    fVar10 = (float)native_UnityEngine_Transform__get_position_77169c(lVar4,0);
    lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
    fVar23 = (float)uVar5;
    uVar17 = uVar16;
    uVar19 = uVar5;
    fVar13 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                              (uVar15,uVar16,uVar5,in_d3,fVar20,fVar22,fVar7,0);
    if (lVar4 == 0) goto LAB_00733e6c;
    if (*(int *)(lVar4 + 0x18) == 0) goto LAB_00733e70;
    uVar15 = uVar15 & 0xffffffff;
    fVar11 = (float)uVar3;
    fVar21 = (float)uVar18;
    *(float *)(lVar4 + 0x28) = fVar21 + (float)uVar19;
    *(float *)(lVar4 + 0x20) = fVar10 + fVar13;
    *(float *)(lVar4 + 0x24) = fVar11 + (float)uVar17;
    uVar5 = uVar5 & 0xffffffff;
    in_d3 = in_d3 & 0xffffffff;
    lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
    uVar3 = uVar16;
    fVar13 = fVar23;
    fVar20 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                              (uVar15,uVar16,uVar5,in_d3,fVar20,fVar8,fVar7,0);
    if (lVar4 == 0) goto LAB_00733e6c;
    if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_00733e70;
    *(float *)(lVar4 + 0x2c) = fVar10 + fVar20;
    *(float *)(lVar4 + 0x30) = fVar11 + (float)uVar3;
    *(float *)(lVar4 + 0x34) = fVar21 + fVar13;
    fVar12 = fVar8 * fVar12;
    lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
    uVar3 = uVar16;
    fVar13 = fVar23;
    fVar8 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                             (uVar15,uVar16,uVar5,in_d3,fVar12,fVar8,fVar7,0);
    if (lVar4 == 0) goto LAB_00733e6c;
    if (*(uint *)(lVar4 + 0x18) < 3) goto LAB_00733e70;
    *(float *)(lVar4 + 0x38) = fVar10 + fVar8;
    *(float *)(lVar4 + 0x3c) = fVar11 + (float)uVar3;
    *(float *)(lVar4 + 0x40) = fVar21 + fVar13;
    lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
    fVar8 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                             (uVar15,uVar16,uVar5,in_d3,fVar12,fVar22,fVar7,0);
    if (lVar4 == 0) goto LAB_00733e6c;
    if (*(uint *)(lVar4 + 0x18) < 4) goto LAB_00733e70;
    fVar7 = fVar21 + fVar23;
    fVar11 = fVar11 + (float)uVar16;
    fVar10 = fVar10 + fVar8;
  }
  *(float *)(lVar4 + 0x44) = fVar10;
  *(float *)(lVar4 + 0x48) = fVar11;
  *(float *)(lVar4 + 0x4c) = fVar7;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(0,0,0);
  if ((uVar5 & 1) == 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    return *(undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
  if ((lVar4 != 0) && (*(int *)(lVar4 + 0x18) == 0)) {
LAB_00733e70:
    uVar14 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar14,0);
  }
LAB_00733e6c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$GetWorldCorners @ 0x733e7c
 * UnityEngine_Vector3_array* NGUITools__GetWorldCorners (UnityEngine_Camera_o* cam, float depth, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00733dd8) */
/* WARNING: Removing unreachable block (ram,0x00733dfc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$GetWorldCorners
   UnityEngine_Vector3_array* NGUITools__GetWorldCorners (UnityEngine_Camera_o* cam, float depth,
   const MethodInfo* method); */

undefined8
native_NGUITools__GetWorldCorners_733e7c
          (float param_1,undefined4 param_2,ulong param_3,ulong param_4,long param_5)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if ((bRam000000000133f5cb & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5cb = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f5cd & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f5cd = 1;
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  if (param_5 == 0) goto LAB_00733e6c;
  uVar3 = native_UnityEngine_Camera__get_orthographic_8d86c0(param_5,0);
  if ((uVar3 & 1) == 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar12 = 0;
    lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
    fVar8 = param_1;
    uVar7 = native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(0,param_5,0);
    if (lVar4 == 0) goto LAB_00733e6c;
    if (*(int *)(lVar4 + 0x18) == 0) goto LAB_00733e70;
    *(undefined4 *)(lVar4 + 0x20) = uVar7;
    *(undefined4 *)(lVar4 + 0x24) = uVar12;
    *(float *)(lVar4 + 0x28) = fVar8;
    uVar12 = 0x3f800000;
    lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
    fVar8 = param_1;
    uVar7 = native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(0,param_5,0);
    if (lVar4 == 0) goto LAB_00733e6c;
    if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_00733e70;
    *(undefined4 *)(lVar4 + 0x2c) = uVar7;
    *(undefined4 *)(lVar4 + 0x30) = uVar12;
    *(float *)(lVar4 + 0x34) = fVar8;
    uVar7 = 0x3f800000;
    lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
    fVar8 = param_1;
    uVar12 = native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(param_5,0);
    if (lVar4 == 0) goto LAB_00733e6c;
    if (*(uint *)(lVar4 + 0x18) < 3) goto LAB_00733e70;
    *(undefined4 *)(lVar4 + 0x38) = uVar12;
    *(undefined4 *)(lVar4 + 0x3c) = uVar7;
    *(float *)(lVar4 + 0x40) = fVar8;
    fVar9 = 0.0;
    lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
    fVar8 = (float)native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(0x3f800000,param_5,0);
    if (lVar4 == 0) goto LAB_00733e6c;
    if (*(uint *)(lVar4 + 0x18) < 4) goto LAB_00733e70;
  }
  else {
    fVar6 = (float)native_UnityEngine_Camera__get_orthographicSize_8d8630(param_5,0);
    uVar7 = native_UnityEngine_Camera__get_rect_8d8b48(param_5,0);
    uStack_a0 = CONCAT44(param_2,uVar7);
    uStack_98 = CONCAT44((int)param_4,(int)param_3);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    iVar1 = native_UnityEngine_Screen__get_width_76a5e4(0);
    iVar2 = native_UnityEngine_Screen__get_height_76a618(0);
    fVar8 = (float)native_UnityEngine_Rect__get_width_76367c(&uStack_a0,0);
    fVar9 = (float)native_UnityEngine_Rect__get_height_76368c(&uStack_a0,0);
    lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_5,0);
    if (lVar4 == 0) goto LAB_00733e6c;
    uVar14 = (ulong)(uint)(fVar8 / fVar9);
    fVar20 = -fVar6;
    fVar10 = ((float)iVar1 / (float)iVar2) * (fVar8 / fVar9);
    fVar18 = fVar10 * fVar20;
    uVar13 = native_UnityEngine_Transform__get_rotation_771a30(lVar4,0);
    uVar3 = uVar14;
    uVar16 = param_3;
    fVar8 = (float)native_UnityEngine_Transform__get_position_77169c(lVar4,0);
    lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
    fVar21 = (float)param_3;
    uVar15 = uVar14;
    uVar17 = param_3;
    fVar11 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                              (uVar13,uVar14,param_3,param_4,fVar18,fVar20,param_1,0);
    if (lVar4 == 0) goto LAB_00733e6c;
    if (*(int *)(lVar4 + 0x18) == 0) goto LAB_00733e70;
    uVar13 = uVar13 & 0xffffffff;
    fVar9 = (float)uVar3;
    fVar19 = (float)uVar16;
    *(float *)(lVar4 + 0x28) = fVar19 + (float)uVar17;
    *(float *)(lVar4 + 0x20) = fVar8 + fVar11;
    *(float *)(lVar4 + 0x24) = fVar9 + (float)uVar15;
    param_3 = param_3 & 0xffffffff;
    param_4 = param_4 & 0xffffffff;
    lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
    uVar3 = uVar14;
    fVar11 = fVar21;
    fVar18 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                              (uVar13,uVar14,param_3,param_4,fVar18,fVar6,param_1,0);
    if (lVar4 == 0) goto LAB_00733e6c;
    if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_00733e70;
    *(float *)(lVar4 + 0x2c) = fVar8 + fVar18;
    *(float *)(lVar4 + 0x30) = fVar9 + (float)uVar3;
    *(float *)(lVar4 + 0x34) = fVar19 + fVar11;
    fVar10 = fVar6 * fVar10;
    lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
    uVar3 = uVar14;
    fVar11 = fVar21;
    fVar6 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                             (uVar13,uVar14,param_3,param_4,fVar10,fVar6,param_1,0);
    if (lVar4 == 0) goto LAB_00733e6c;
    if (*(uint *)(lVar4 + 0x18) < 3) goto LAB_00733e70;
    *(float *)(lVar4 + 0x38) = fVar8 + fVar6;
    *(float *)(lVar4 + 0x3c) = fVar9 + (float)uVar3;
    *(float *)(lVar4 + 0x40) = fVar19 + fVar11;
    lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
    fVar6 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                             (uVar13,uVar14,param_3,param_4,fVar10,fVar20,param_1,0);
    if (lVar4 == 0) goto LAB_00733e6c;
    if (*(uint *)(lVar4 + 0x18) < 4) goto LAB_00733e70;
    param_1 = fVar19 + fVar21;
    fVar9 = fVar9 + (float)uVar14;
    fVar8 = fVar8 + fVar6;
  }
  *(float *)(lVar4 + 0x44) = fVar8;
  *(float *)(lVar4 + 0x48) = fVar9;
  *(float *)(lVar4 + 0x4c) = param_1;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(0,0,0);
  if ((uVar3 & 1) == 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    return *(undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar4 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
  if ((lVar4 != 0) && (*(int *)(lVar4 + 0x18) == 0)) {
LAB_00733e70:
    uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar5,0);
  }
LAB_00733e6c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$GetWorldCorners @ 0x733ef0
 * UnityEngine_Vector3_array* NGUITools__GetWorldCorners (UnityEngine_Camera_o* cam, UnityEngine_Transform_o* relativeTo, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$GetWorldCorners
   UnityEngine_Vector3_array* NGUITools__GetWorldCorners (UnityEngine_Camera_o* cam,
   UnityEngine_Transform_o* relativeTo, const MethodInfo* method); */

undefined8 native_NGUITools__GetWorldCorners_733ef0(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined4 uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong in_d3;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if ((bRam000000000133f5cc & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5cc = 1;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar17 = native_UnityEngine_Camera__get_nearClipPlane_8d8480(param_1,0);
  uVar14 = native_UnityEngine_Camera__get_farClipPlane_8d8510(param_1,0);
  uVar6 = 0x3f000000;
  fVar15 = (float)native_UnityEngine_Mathf__Lerp_8e5224(uVar17,0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f5cd & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f5cd = 1;
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  if (param_1 != 0) {
    uVar4 = native_UnityEngine_Camera__get_orthographic_8d86c0(param_1,0);
    if ((uVar4 & 1) == 0) {
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar9 = 0;
      lVar5 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
      fVar10 = fVar15;
      uVar14 = native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(0,param_1,0);
      if (lVar5 != 0) {
        if (*(int *)(lVar5 + 0x18) != 0) {
          *(undefined4 *)(lVar5 + 0x20) = uVar14;
          *(undefined4 *)(lVar5 + 0x24) = uVar9;
          *(float *)(lVar5 + 0x28) = fVar10;
          uVar9 = 0x3f800000;
          lVar5 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
          fVar10 = fVar15;
          uVar14 = native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(0,param_1,0);
          if (lVar5 == 0) goto LAB_00733e6c;
          if (1 < *(uint *)(lVar5 + 0x18)) {
            *(undefined4 *)(lVar5 + 0x2c) = uVar14;
            *(undefined4 *)(lVar5 + 0x30) = uVar9;
            *(float *)(lVar5 + 0x34) = fVar10;
            uVar14 = 0x3f800000;
            lVar5 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
            fVar10 = fVar15;
            uVar9 = native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(param_1,0);
            if (lVar5 == 0) goto LAB_00733e6c;
            if (2 < *(uint *)(lVar5 + 0x18)) {
              *(undefined4 *)(lVar5 + 0x38) = uVar9;
              *(undefined4 *)(lVar5 + 0x3c) = uVar14;
              *(float *)(lVar5 + 0x40) = fVar10;
              fVar11 = 0.0;
              lVar5 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
              fVar10 = (float)native_UnityEngine_Camera__ViewportToWorldPoint_8d9168
                                        (0x3f800000,param_1,0);
              if (lVar5 == 0) goto LAB_00733e6c;
              if (3 < *(uint *)(lVar5 + 0x18)) {
LAB_00733d50:
                *(float *)(lVar5 + 0x44) = fVar10;
                *(float *)(lVar5 + 0x48) = fVar11;
                *(float *)(lVar5 + 0x4c) = fVar15;
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(param_2,0,0);
                if ((uVar6 & 1) != 0) {
                  lVar5 = 0;
                  uVar6 = 0xffffffffffffffff;
                  do {
                    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    lVar7 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
                    if (lVar7 == 0) goto LAB_00733e6c;
                    if ((ulong)*(uint *)(lVar7 + 0x18) <= uVar6 + 1) goto LAB_00733e70;
                    if (param_2 == 0) goto LAB_00733e6c;
                    lVar1 = lVar7 + lVar5;
                    uVar9 = *(undefined4 *)(lVar1 + 0x24);
                    uVar20 = *(undefined4 *)(lVar1 + 0x28);
                    uVar14 = native_UnityEngine_Transform__InverseTransformPoint_7729a0
                                       (*(undefined4 *)(lVar1 + 0x20),param_2,0);
                    if ((ulong)*(uint *)(lVar7 + 0x18) <= uVar6 + 1) goto LAB_00733e70;
                    uVar6 = uVar6 + 1;
                    lVar5 = lVar5 + 0xc;
                    *(undefined4 *)(lVar1 + 0x20) = uVar14;
                    *(undefined4 *)(lVar1 + 0x24) = uVar9;
                    *(undefined4 *)(lVar1 + 0x28) = uVar20;
                  } while (uVar6 < 3);
                }
                if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                return *(undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
              }
            }
          }
        }
LAB_00733e70:
        uVar17 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar17,0);
      }
    }
    else {
      fVar8 = (float)native_UnityEngine_Camera__get_orthographicSize_8d8630(param_1,0);
      uVar9 = native_UnityEngine_Camera__get_rect_8d8b48(param_1,0);
      uStack_a0 = CONCAT44(uVar14,uVar9);
      uStack_98 = CONCAT44((int)in_d3,(int)uVar6);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      iVar2 = native_UnityEngine_Screen__get_width_76a5e4(0);
      iVar3 = native_UnityEngine_Screen__get_height_76a618(0);
      fVar10 = (float)native_UnityEngine_Rect__get_width_76367c(&uStack_a0,0);
      fVar11 = (float)native_UnityEngine_Rect__get_height_76368c(&uStack_a0,0);
      lVar5 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
      if (lVar5 != 0) {
        uVar18 = (ulong)(uint)(fVar10 / fVar11);
        fVar25 = -fVar8;
        fVar12 = ((float)iVar2 / (float)iVar3) * (fVar10 / fVar11);
        fVar23 = fVar12 * fVar25;
        uVar16 = native_UnityEngine_Transform__get_rotation_771a30(lVar5,0);
        uVar4 = uVar18;
        uVar21 = uVar6;
        fVar10 = (float)native_UnityEngine_Transform__get_position_77169c(lVar5,0);
        lVar5 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
        fVar26 = (float)uVar6;
        uVar19 = uVar18;
        uVar22 = uVar6;
        fVar13 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                                  (uVar16,uVar18,uVar6,in_d3,fVar23,fVar25,fVar15,0);
        if (lVar5 != 0) {
          if (*(int *)(lVar5 + 0x18) != 0) {
            uVar16 = uVar16 & 0xffffffff;
            fVar11 = (float)uVar4;
            fVar24 = (float)uVar21;
            *(float *)(lVar5 + 0x28) = fVar24 + (float)uVar22;
            *(float *)(lVar5 + 0x20) = fVar10 + fVar13;
            *(float *)(lVar5 + 0x24) = fVar11 + (float)uVar19;
            uVar6 = uVar6 & 0xffffffff;
            in_d3 = in_d3 & 0xffffffff;
            lVar5 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
            uVar4 = uVar18;
            fVar13 = fVar26;
            fVar23 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                                      (uVar16,uVar18,uVar6,in_d3,fVar23,fVar8,fVar15,0);
            if (lVar5 == 0) goto LAB_00733e6c;
            if (1 < *(uint *)(lVar5 + 0x18)) {
              *(float *)(lVar5 + 0x2c) = fVar10 + fVar23;
              *(float *)(lVar5 + 0x30) = fVar11 + (float)uVar4;
              *(float *)(lVar5 + 0x34) = fVar24 + fVar13;
              fVar12 = fVar8 * fVar12;
              lVar5 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
              uVar4 = uVar18;
              fVar13 = fVar26;
              fVar8 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                                       (uVar16,uVar18,uVar6,in_d3,fVar12,fVar8,fVar15,0);
              if (lVar5 == 0) goto LAB_00733e6c;
              if (2 < *(uint *)(lVar5 + 0x18)) {
                *(float *)(lVar5 + 0x38) = fVar10 + fVar8;
                *(float *)(lVar5 + 0x3c) = fVar11 + (float)uVar4;
                *(float *)(lVar5 + 0x40) = fVar24 + fVar13;
                lVar5 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
                fVar8 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                                         (uVar16,uVar18,uVar6,in_d3,fVar12,fVar25,fVar15,0);
                if (lVar5 == 0) goto LAB_00733e6c;
                if (3 < *(uint *)(lVar5 + 0x18)) {
                  fVar15 = fVar24 + fVar26;
                  fVar11 = fVar11 + (float)uVar18;
                  fVar10 = fVar10 + fVar8;
                  goto LAB_00733d50;
                }
              }
            }
          }
          goto LAB_00733e70;
        }
      }
    }
  }
LAB_00733e6c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$GetWorldCorners @ 0x733980
 * UnityEngine_Vector3_array* NGUITools__GetWorldCorners (UnityEngine_Camera_o* cam, float depth, UnityEngine_Transform_o* relativeTo, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$GetWorldCorners
   UnityEngine_Vector3_array* NGUITools__GetWorldCorners (UnityEngine_Camera_o* cam, float depth,
   UnityEngine_Transform_o* relativeTo, const MethodInfo* method); */

undefined8
native_NGUITools__GetWorldCorners_733980
          (float param_1,undefined4 param_2,ulong param_3,ulong param_4,long param_5,long param_6)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulong uVar14;
  undefined4 uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined4 uVar18;
  ulong uVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if ((bRam000000000133f5cd & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f5cd = 1;
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  if (param_5 != 0) {
    uVar4 = native_UnityEngine_Camera__get_orthographic_8d86c0(param_5,0);
    if ((uVar4 & 1) == 0) {
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar15 = 0;
      lVar5 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
      fVar10 = param_1;
      uVar9 = native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(0,param_5,0);
      if (lVar5 != 0) {
        if (*(int *)(lVar5 + 0x18) != 0) {
          *(undefined4 *)(lVar5 + 0x20) = uVar9;
          *(undefined4 *)(lVar5 + 0x24) = uVar15;
          *(float *)(lVar5 + 0x28) = fVar10;
          uVar15 = 0x3f800000;
          lVar5 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
          fVar10 = param_1;
          uVar9 = native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(0,param_5,0);
          if (lVar5 == 0) goto LAB_00733e6c;
          if (1 < *(uint *)(lVar5 + 0x18)) {
            *(undefined4 *)(lVar5 + 0x2c) = uVar9;
            *(undefined4 *)(lVar5 + 0x30) = uVar15;
            *(float *)(lVar5 + 0x34) = fVar10;
            uVar9 = 0x3f800000;
            lVar5 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
            fVar10 = param_1;
            uVar15 = native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(param_5,0);
            if (lVar5 == 0) goto LAB_00733e6c;
            if (2 < *(uint *)(lVar5 + 0x18)) {
              *(undefined4 *)(lVar5 + 0x38) = uVar15;
              *(undefined4 *)(lVar5 + 0x3c) = uVar9;
              *(float *)(lVar5 + 0x40) = fVar10;
              fVar11 = 0.0;
              lVar5 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
              fVar10 = (float)native_UnityEngine_Camera__ViewportToWorldPoint_8d9168
                                        (0x3f800000,param_5,0);
              if (lVar5 == 0) goto LAB_00733e6c;
              if (3 < *(uint *)(lVar5 + 0x18)) {
LAB_00733d50:
                *(float *)(lVar5 + 0x44) = fVar10;
                *(float *)(lVar5 + 0x48) = fVar11;
                *(float *)(lVar5 + 0x4c) = param_1;
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(param_6,0,0);
                if ((uVar4 & 1) != 0) {
                  lVar5 = 0;
                  uVar4 = 0xffffffffffffffff;
                  do {
                    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    lVar7 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
                    if (lVar7 == 0) goto LAB_00733e6c;
                    if ((ulong)*(uint *)(lVar7 + 0x18) <= uVar4 + 1) goto LAB_00733e70;
                    if (param_6 == 0) goto LAB_00733e6c;
                    lVar1 = lVar7 + lVar5;
                    uVar15 = *(undefined4 *)(lVar1 + 0x24);
                    uVar18 = *(undefined4 *)(lVar1 + 0x28);
                    uVar9 = native_UnityEngine_Transform__InverseTransformPoint_7729a0
                                      (*(undefined4 *)(lVar1 + 0x20),param_6,0);
                    if ((ulong)*(uint *)(lVar7 + 0x18) <= uVar4 + 1) goto LAB_00733e70;
                    uVar4 = uVar4 + 1;
                    lVar5 = lVar5 + 0xc;
                    *(undefined4 *)(lVar1 + 0x20) = uVar9;
                    *(undefined4 *)(lVar1 + 0x24) = uVar15;
                    *(undefined4 *)(lVar1 + 0x28) = uVar18;
                  } while (uVar4 < 3);
                }
                if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                return *(undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
              }
            }
          }
        }
LAB_00733e70:
        uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar6,0);
      }
    }
    else {
      fVar8 = (float)native_UnityEngine_Camera__get_orthographicSize_8d8630(param_5,0);
      uVar9 = native_UnityEngine_Camera__get_rect_8d8b48(param_5,0);
      uStack_a0 = CONCAT44(param_2,uVar9);
      uStack_98 = CONCAT44((int)param_4,(int)param_3);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      iVar2 = native_UnityEngine_Screen__get_width_76a5e4(0);
      iVar3 = native_UnityEngine_Screen__get_height_76a618(0);
      fVar10 = (float)native_UnityEngine_Rect__get_width_76367c(&uStack_a0,0);
      fVar11 = (float)native_UnityEngine_Rect__get_height_76368c(&uStack_a0,0);
      lVar5 = native_UnityEngine_Component__get_transform_8da62c(param_5,0);
      if (lVar5 != 0) {
        uVar16 = (ulong)(uint)(fVar10 / fVar11);
        fVar23 = -fVar8;
        fVar12 = ((float)iVar2 / (float)iVar3) * (fVar10 / fVar11);
        fVar21 = fVar12 * fVar23;
        uVar14 = native_UnityEngine_Transform__get_rotation_771a30(lVar5,0);
        uVar4 = uVar16;
        uVar19 = param_3;
        fVar10 = (float)native_UnityEngine_Transform__get_position_77169c(lVar5,0);
        lVar5 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
        fVar24 = (float)param_3;
        uVar17 = uVar16;
        uVar20 = param_3;
        fVar13 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                                  (uVar14,uVar16,param_3,param_4,fVar21,fVar23,param_1,0);
        if (lVar5 != 0) {
          if (*(int *)(lVar5 + 0x18) != 0) {
            uVar14 = uVar14 & 0xffffffff;
            fVar11 = (float)uVar4;
            fVar22 = (float)uVar19;
            *(float *)(lVar5 + 0x28) = fVar22 + (float)uVar20;
            *(float *)(lVar5 + 0x20) = fVar10 + fVar13;
            *(float *)(lVar5 + 0x24) = fVar11 + (float)uVar17;
            param_3 = param_3 & 0xffffffff;
            param_4 = param_4 & 0xffffffff;
            lVar5 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
            uVar4 = uVar16;
            fVar13 = fVar24;
            fVar21 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                                      (uVar14,uVar16,param_3,param_4,fVar21,fVar8,param_1,0);
            if (lVar5 == 0) goto LAB_00733e6c;
            if (1 < *(uint *)(lVar5 + 0x18)) {
              *(float *)(lVar5 + 0x2c) = fVar10 + fVar21;
              *(float *)(lVar5 + 0x30) = fVar11 + (float)uVar4;
              *(float *)(lVar5 + 0x34) = fVar22 + fVar13;
              fVar12 = fVar8 * fVar12;
              lVar5 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
              uVar4 = uVar16;
              fVar13 = fVar24;
              fVar8 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                                       (uVar14,uVar16,param_3,param_4,fVar12,fVar8,param_1,0);
              if (lVar5 == 0) goto LAB_00733e6c;
              if (2 < *(uint *)(lVar5 + 0x18)) {
                *(float *)(lVar5 + 0x38) = fVar10 + fVar8;
                *(float *)(lVar5 + 0x3c) = fVar11 + (float)uVar4;
                *(float *)(lVar5 + 0x40) = fVar22 + fVar13;
                lVar5 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
                fVar8 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                                         (uVar14,uVar16,param_3,param_4,fVar12,fVar23,param_1,0);
                if (lVar5 == 0) goto LAB_00733e6c;
                if (3 < *(uint *)(lVar5 + 0x18)) {
                  param_1 = fVar22 + fVar24;
                  fVar11 = fVar11 + (float)uVar16;
                  fVar10 = fVar10 + fVar8;
                  goto LAB_00733d50;
                }
              }
            }
          }
          goto LAB_00733e70;
        }
      }
    }
  }
LAB_00733e6c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$GetFuncName @ 0x733fa8
 * System_String_o* NGUITools__GetFuncName (Il2CppObject* obj, System_String_o* method, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$GetFuncName
   System_String_o* NGUITools__GetFuncName (Il2CppObject* obj, System_String_o* method, const
   MethodInfo* method); */

long native_NGUITools__GetFuncName_733fa8(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  if ((bRam000000000133f5ce & 1) == 0) {
    native_sub_43273c(&StringLiteral___12eb830);
    native_sub_43273c(&StringLiteral__null__12ebf98);
    bRam000000000133f5ce = 1;
  }
  lVar3 = _StringLiteral__null__12ebf98;
  if (param_1 != 0) {
    plVar2 = (long *)native_System_Object__GetType_adb48c(param_1,0);
    if ((plVar2 == (long *)0x0) ||
       (lVar3 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170)), lVar3 == 0)
       ) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    iVar1 = native_System_String__LastIndexOf_b0c42c(lVar3,0x2f,0);
    if (0 < iVar1) {
      lVar3 = native_System_String__Substring_b0a110(lVar3,iVar1 + 1,0);
    }
    uVar4 = native_System_String__IsNullOrEmpty_b09430(param_2,0);
    lVar5 = _StringLiteral___12eb830;
    if ((uVar4 & 1) == 0) {
      if ((bRam0000000001342140 & 1) == 0) {
        native_sub_43273c(&string_TypeInfo_12d5f28,_StringLiteral___12eb830,param_2,0);
        bRam0000000001342140 = 1;
      }
      if ((lVar3 != 0) ||
         (lVar6 = **(long **)(_string_TypeInfo_12d5f28 + 0xb8), lVar3 = lVar6,
         lVar5 != 0 || param_2 != 0)) {
        if (lVar5 == 0) {
          lVar5 = **(long **)(_string_TypeInfo_12d5f28 + 0xb8);
        }
        if (param_2 == 0) {
          param_2 = **(long **)(_string_TypeInfo_12d5f28 + 0xb8);
        }
        if (((lVar3 == 0) || (lVar5 == 0)) || (param_2 == 0)) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        lVar6 = native_sub_3bca18(*(int *)(lVar5 + 0x10) + *(int *)(lVar3 + 0x10) +
                                  *(int *)(param_2 + 0x10));
        native_System_String__FillStringChecked_b0a62c(lVar6,0,lVar3);
        native_System_String__FillStringChecked_b0a62c(lVar6,*(undefined4 *)(lVar3 + 0x10),lVar5);
        native_System_String__FillStringChecked_b0a62c
                  (lVar6,*(int *)(lVar5 + 0x10) + *(int *)(lVar3 + 0x10),param_2);
      }
      return lVar6;
    }
  }
  return lVar3;
}



/* NGUITools$$ImmediatelyCreateDrawCalls @ 0x734098
 * void NGUITools__ImmediatelyCreateDrawCalls (UnityEngine_GameObject_o* root, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$ImmediatelyCreateDrawCalls
   void NGUITools__ImmediatelyCreateDrawCalls (UnityEngine_GameObject_o* root, const MethodInfo*
   method); */

void native_NGUITools__ImmediatelyCreateDrawCalls_734098(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  
  if ((bRam000000000133f5cf & 1) == 0) {
    native_sub_43273c(&Method_NGUITools_ExecuteAll_UIPanel____12e56f0);
    native_sub_43273c(&Method_NGUITools_ExecuteAll_UIWidget____12e56f8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&StringLiteral_LateUpdate_12ef548);
    native_sub_43273c(&StringLiteral_Update_12f2cf8);
    native_sub_43273c(&StringLiteral_Start_12f1038);
    bRam000000000133f5cf = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_NGUITools__ExecuteAll_object__4a59f8
            (param_1,_StringLiteral_Start_12f1038,_Method_NGUITools_ExecuteAll_UIWidget____12e56f8);
  native_NGUITools__ExecuteAll_object__4a59f8
            (param_1,_StringLiteral_Start_12f1038,_Method_NGUITools_ExecuteAll_UIPanel____12e56f0);
  native_NGUITools__ExecuteAll_object__4a59f8
            (param_1,_StringLiteral_Update_12f2cf8,_Method_NGUITools_ExecuteAll_UIWidget____12e56f8)
  ;
  native_NGUITools__ExecuteAll_object__4a59f8
            (param_1,_StringLiteral_Update_12f2cf8,_Method_NGUITools_ExecuteAll_UIPanel____12e56f0);
  uVar2 = _StringLiteral_LateUpdate_12ef548;
  lVar1 = _Method_NGUITools_ExecuteAll_UIPanel____12e56f0;
  if ((bRam000000000133e71f & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133e71f = 1;
  }
  if (param_1 != 0) {
    uVar4 = native_UnityEngine_GameObject__get_activeInHierarchy_8de728(param_1,0);
    if ((uVar4 & 1) != 0) {
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      (**(code **)**(undefined8 **)(lVar1 + 0x30))(param_1,uVar2);
      lVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(param_1,0);
      if (lVar5 == 0) goto code_r0x004a5b2c;
      iVar3 = native_UnityEngine_Transform__get_childCount_772a64(lVar5,0);
      if (0 < iVar3) {
        iVar8 = 0;
        do {
          lVar6 = native_UnityEngine_Transform__GetChild_772ef0(lVar5,iVar8,0);
          if (lVar6 == 0) goto code_r0x004a5b2c;
          uVar7 = native_UnityEngine_Component__get_gameObject_8da66c(lVar6,0);
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
          }
          (*(code *)**(undefined8 **)(*(long *)(lVar1 + 0x30) + 8))(uVar7,uVar2);
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar3);
      }
    }
    return;
  }
code_r0x004a5b2c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$get_screenSize @ 0x7338a0
 * UnityEngine_Vector2_o NGUITools__get_screenSize (const MethodInfo* method); */

/* NGUITools$$get_screenSize
   UnityEngine_Vector2_o NGUITools__get_screenSize (const MethodInfo* method); */

float native_NGUITools__get_screenSize_7338a0(void)

{
  int iVar1;
  
  iVar1 = native_UnityEngine_Screen__get_width_76a5e4(0);
  native_UnityEngine_Screen__get_height_76a618(0);
  return (float)iVar1;
}



/* NGUITools$$KeyToCaption @ 0x7341ac
 * System_String_o* NGUITools__KeyToCaption (int32_t key, const MethodInfo* method); */

/* NGUITools$$KeyToCaption
   System_String_o* NGUITools__KeyToCaption (int32_t key, const MethodInfo* method); */

undefined8 native_NGUITools__KeyToCaption_7341ac(undefined4 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if ((bRam000000000133f5d0 & 1) == 0) {
    native_sub_43273c(&StringLiteral_F10_12edde8);
    native_sub_43273c(&StringLiteral_PD_12f0448);
    native_sub_43273c(&StringLiteral_M0_12ef698);
    native_sub_43273c(&StringLiteral_J16_12ef2c8);
    native_sub_43273c(&StringLiteral_S_12f0b70);
    native_sub_43273c(&StringLiteral___12f33a8);
    native_sub_43273c(&StringLiteral_J11_12ef2a0);
    native_sub_43273c(&StringLiteral___12eafe0);
    native_sub_43273c(&StringLiteral_J_12ef290);
    native_sub_43273c(&StringLiteral_K__12ef370);
    native_sub_43273c(&StringLiteral_K__12ef390);
    native_sub_43273c(&StringLiteral___12eaf78);
    native_sub_43273c(&StringLiteral_J14_12ef2b8);
    native_sub_43273c(&StringLiteral_RT_12f0868);
    native_sub_43273c(&StringLiteral_Home_12ee3c8);
    native_sub_43273c(&StringLiteral_Clear_12ed0d0);
    native_sub_43273c(&StringLiteral_LT_12ef4f0);
    native_sub_43273c(&StringLiteral_F4_12ede28);
    native_sub_43273c(&StringLiteral___12ebfd8);
    native_sub_43273c(&StringLiteral_3_12ebc10);
    native_sub_43273c(&StringLiteral___12eb600);
    native_sub_43273c(&StringLiteral_2_12ebb88);
    native_sub_43273c(&StringLiteral_Z_12f3208);
    native_sub_43273c(&StringLiteral_F2_12ede18);
    native_sub_43273c(&StringLiteral_RC_12f07e0);
    native_sub_43273c(&StringLiteral_M2_12ef6a8);
    native_sub_43273c(&StringLiteral_9_12ebc60);
    native_sub_43273c(&StringLiteral_K2_12ef3a8);
    native_sub_43273c(&StringLiteral_LC_12ef4c8);
    native_sub_43273c(&StringLiteral_RS_12f0850);
    native_sub_43273c(&StringLiteral_R_12f07c8);
    native_sub_43273c(&StringLiteral_KQ_12ef3f0);
    native_sub_43273c(&StringLiteral_F7_12ede40);
    native_sub_43273c(&StringLiteral_6_12ebc40);
    native_sub_43273c(&StringLiteral_J17_12ef2d0);
    native_sub_43273c(&StringLiteral_J15_12ef2c0);
    native_sub_43273c(&StringLiteral_M5_12ef6c0);
    native_sub_43273c(&StringLiteral_M3_12ef6b0);
    native_sub_43273c(&StringLiteral_K0_12ef398);
    native_sub_43273c(&StringLiteral_W_12f2f48);
    native_sub_43273c(&StringLiteral___12eb6c8);
    native_sub_43273c(&StringLiteral_J10_12ef298);
    native_sub_43273c(&StringLiteral_DN_12ed588);
    native_sub_43273c(&StringLiteral_Tab_12f1478);
    native_sub_43273c(&StringLiteral_K_12ef368);
    native_sub_43273c(&StringLiteral_G_12ee108);
    native_sub_43273c(&StringLiteral_LA_12ef4c0);
    native_sub_43273c(&StringLiteral_H_12ee270);
    native_sub_43273c(&StringLiteral_F13_12ede00);
    native_sub_43273c(&StringLiteral___12eb180);
    native_sub_43273c(&StringLiteral__LB__12eb4d8);
    native_sub_43273c(&StringLiteral_Q_12f0788);
    native_sub_43273c(&StringLiteral_Scr_12f0c90);
    native_sub_43273c(&StringLiteral_K1_12ef3a0);
    native_sub_43273c(&StringLiteral_K9_12ef3e0);
    native_sub_43273c(&StringLiteral_J18_12ef2d8);
    native_sub_43273c(&StringLiteral___12f34d0);
    native_sub_43273c(&StringLiteral_M6_12ef6c8);
    native_sub_43273c(&StringLiteral_U_12f2908);
    native_sub_43273c(&StringLiteral_V_12f2d80);
    native_sub_43273c(&StringLiteral___12f38a8);
    native_sub_43273c(&StringLiteral_K7_12ef3d0);
    native_sub_43273c(&StringLiteral_E_12ed8d0);
    native_sub_43273c(&StringLiteral_F15_12ede10);
    native_sub_43273c(&StringLiteral_F12_12eddf8);
    native_sub_43273c(&StringLiteral____12eb208);
    native_sub_43273c(&StringLiteral_Space_12f0f30);
    native_sub_43273c(&StringLiteral_I_12ee410);
    native_sub_43273c(&StringLiteral_Backspace_12ec700);
    native_sub_43273c(&StringLiteral_K8_12ef3d8);
    native_sub_43273c(&StringLiteral_Del_12ed720);
    native_sub_43273c(&StringLiteral___12ebd20);
    native_sub_43273c(&StringLiteral___12ebff8);
    native_sub_43273c(&StringLiteral_7_12ebc48);
    native_sub_43273c(&StringLiteral_4_12ebc20);
    native_sub_43273c(&StringLiteral_K6_12ef3c8);
    native_sub_43273c(&StringLiteral_K__12ef380);
    native_sub_43273c(&StringLiteral_F9_12ede50);
    native_sub_43273c(&StringLiteral_T_12f12c0);
    native_sub_43273c(&StringLiteral_M1_12ef6a0);
    native_sub_43273c(&StringLiteral___12f34b8);
    native_sub_43273c(&StringLiteral_L_12ef4b0);
    native_sub_43273c(&StringLiteral___12eb830);
    native_sub_43273c(&StringLiteral___12ebc70);
    native_sub_43273c(&StringLiteral___12eb148);
    native_sub_43273c(&StringLiteral_Esc_12edc70);
    native_sub_43273c(&StringLiteral__Back__12eb4b0);
    native_sub_43273c(&StringLiteral__A__12eb4a0);
    native_sub_43273c(&StringLiteral___12ebcf8);
    native_sub_43273c(&StringLiteral_Return_12f0b08);
    native_sub_43273c(&StringLiteral_O_12effd8);
    native_sub_43273c(&StringLiteral_J13_12ef2b0);
    native_sub_43273c(&StringLiteral__Start__12eb540);
    native_sub_43273c(&StringLiteral___12eb0c0);
    native_sub_43273c(&StringLiteral_D_12ed558);
    native_sub_43273c(&StringLiteral___12eb450);
    native_sub_43273c(&StringLiteral_Ins_12ee8f8);
    native_sub_43273c(&StringLiteral_F6_12ede38);
    native_sub_43273c(&StringLiteral_End_12eda90);
    native_sub_43273c(&StringLiteral_B_12ec6d8);
    native_sub_43273c(&StringLiteral__RS__12eb538);
    native_sub_43273c(&StringLiteral_8_12ebc50);
    native_sub_43273c(&StringLiteral_F3_12ede20);
    native_sub_43273c(&StringLiteral___12eb590);
    native_sub_43273c(&StringLiteral_KE_12ef3e8);
    native_sub_43273c(&StringLiteral_UP_12f29a8);
    native_sub_43273c(&StringLiteral__X__12eb550);
    native_sub_43273c(&StringLiteral___12ec010);
    native_sub_43273c(&StringLiteral_Num_12effb8);
    native_sub_43273c(&StringLiteral_LS_12ef4e8);
    native_sub_43273c(&StringLiteral_C_12ec9b0);
    native_sub_43273c(&StringLiteral_F5_12ede30);
    native_sub_43273c(&StringLiteral___12eb630);
    native_sub_43273c(&StringLiteral_F14_12ede08);
    native_sub_43273c(&StringLiteral__RB__12eb530);
    native_sub_43273c(&StringLiteral_Y_12f31b8);
    native_sub_43273c(&StringLiteral_F1_12edde0);
    native_sub_43273c(&StringLiteral_K__12ef388);
    native_sub_43273c(&StringLiteral_K__12ef378);
    native_sub_43273c(&StringLiteral_F11_12eddf0);
    native_sub_43273c(&StringLiteral_M4_12ef6b8);
    native_sub_43273c(&StringLiteral_K3_12ef3b0);
    native_sub_43273c(&StringLiteral_RA_12f07d0);
    native_sub_43273c(&StringLiteral__Y__12eb558);
    native_sub_43273c(&StringLiteral_F8_12ede48);
    native_sub_43273c(&StringLiteral_X_12f30c0);
    native_sub_43273c(&StringLiteral___12f3230);
    native_sub_43273c(&StringLiteral_J19_12ef2e0);
    native_sub_43273c(&StringLiteral_M_12ef690);
    native_sub_43273c(&StringLiteral_J12_12ef2a8);
    native_sub_43273c(&StringLiteral___12f3410);
    native_sub_43273c(&StringLiteral___12eb5f0);
    native_sub_43273c(&StringLiteral_N_12efba8);
    native_sub_43273c(&StringLiteral_PS_12f0498);
    native_sub_43273c(&StringLiteral_1_12eb968);
    native_sub_43273c(&StringLiteral_K5_12ef3c0);
    native_sub_43273c(&StringLiteral_A_12ec020);
    native_sub_43273c(&StringLiteral___12ebfe8);
    native_sub_43273c(&StringLiteral___12eb7a0);
    native_sub_43273c(&StringLiteral__B__12eb4a8);
    native_sub_43273c(&StringLiteral_K4_12ef3b8);
    native_sub_43273c(&StringLiteral_Cap_12ecf10);
    native_sub_43273c(&StringLiteral_5_12ebc38);
    native_sub_43273c(&StringLiteral_0_12eb8d8);
    native_sub_43273c(&StringLiteral_PU_12f04a0);
    native_sub_43273c(&StringLiteral__LS__12eb4e0);
    native_sub_43273c(&StringLiteral_P_12f0418);
    native_sub_43273c(&StringLiteral_F_12eddd8);
    bRam000000000133f5d0 = 1;
  }
  uVar1 = 0;
  switch(param_1) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 10:
  case 0xb:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x25:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
    goto LAB_00734c68;
  case 8:
    puVar2 = (undefined8 *)&StringLiteral_Backspace_12ec700;
    break;
  case 9:
    puVar2 = (undefined8 *)&StringLiteral_Tab_12f1478;
    break;
  case 0xc:
    puVar2 = (undefined8 *)&StringLiteral_Clear_12ed0d0;
    break;
  case 0xd:
    puVar2 = (undefined8 *)&StringLiteral_Return_12f0b08;
    break;
  case 0x13:
    puVar2 = (undefined8 *)&StringLiteral_PS_12f0498;
    break;
  case 0x1b:
    puVar2 = (undefined8 *)&StringLiteral_Esc_12edc70;
    break;
  case 0x20:
    puVar2 = (undefined8 *)&StringLiteral_Space_12f0f30;
    break;
  case 0x21:
    puVar2 = (undefined8 *)&StringLiteral___12eaf78;
    break;
  case 0x22:
    puVar2 = (undefined8 *)&StringLiteral____12eb208;
    break;
  case 0x23:
    puVar2 = (undefined8 *)&StringLiteral___12eafe0;
    break;
  case 0x24:
    puVar2 = (undefined8 *)&StringLiteral___12eb0c0;
    break;
  case 0x26:
    puVar2 = (undefined8 *)&StringLiteral___12eb148;
    break;
  case 0x27:
    puVar2 = (undefined8 *)&StringLiteral___12eb180;
    break;
  case 0x28:
    puVar2 = (undefined8 *)&StringLiteral___12eb450;
    break;
  case 0x29:
    puVar2 = (undefined8 *)&StringLiteral___12eb590;
    break;
  case 0x2a:
    puVar2 = (undefined8 *)&StringLiteral___12eb5f0;
    break;
  case 0x2b:
    puVar2 = (undefined8 *)&StringLiteral___12eb600;
    break;
  case 0x2c:
    puVar2 = (undefined8 *)&StringLiteral___12eb630;
    break;
  case 0x2d:
    puVar2 = (undefined8 *)&StringLiteral___12eb6c8;
    break;
  case 0x2e:
    puVar2 = (undefined8 *)&StringLiteral___12eb7a0;
    break;
  case 0x2f:
    puVar2 = (undefined8 *)&StringLiteral___12eb830;
    break;
  case 0x30:
    puVar2 = (undefined8 *)&StringLiteral_0_12eb8d8;
    break;
  case 0x31:
    puVar2 = (undefined8 *)&StringLiteral_1_12eb968;
    break;
  case 0x32:
    puVar2 = (undefined8 *)&StringLiteral_2_12ebb88;
    break;
  case 0x33:
    puVar2 = (undefined8 *)&StringLiteral_3_12ebc10;
    break;
  case 0x34:
    puVar2 = (undefined8 *)&StringLiteral_4_12ebc20;
    break;
  case 0x35:
    puVar2 = (undefined8 *)&StringLiteral_5_12ebc38;
    break;
  case 0x36:
    puVar2 = (undefined8 *)&StringLiteral_6_12ebc40;
    break;
  case 0x37:
    puVar2 = (undefined8 *)&StringLiteral_7_12ebc48;
    break;
  case 0x38:
    puVar2 = (undefined8 *)&StringLiteral_8_12ebc50;
    break;
  case 0x39:
    puVar2 = (undefined8 *)&StringLiteral_9_12ebc60;
    break;
  case 0x3a:
    puVar2 = (undefined8 *)&StringLiteral___12ebc70;
    break;
  case 0x3b:
    puVar2 = (undefined8 *)&StringLiteral___12ebcf8;
    break;
  case 0x3c:
    puVar2 = (undefined8 *)&StringLiteral___12ebd20;
    break;
  case 0x3d:
    puVar2 = (undefined8 *)&StringLiteral___12ebfd8;
    break;
  case 0x3e:
    puVar2 = (undefined8 *)&StringLiteral___12ebfe8;
    break;
  case 0x3f:
    puVar2 = (undefined8 *)&StringLiteral___12ebff8;
    break;
  case 0x40:
    puVar2 = (undefined8 *)&StringLiteral___12ec010;
    break;
  case 0x5b:
    puVar2 = (undefined8 *)&StringLiteral___12f3230;
    break;
  case 0x5c:
    puVar2 = (undefined8 *)&StringLiteral___12f33a8;
    break;
  case 0x5d:
    puVar2 = (undefined8 *)&StringLiteral___12f3410;
    break;
  case 0x5e:
    puVar2 = (undefined8 *)&StringLiteral___12f34b8;
    break;
  case 0x5f:
    puVar2 = (undefined8 *)&StringLiteral___12f34d0;
    break;
  case 0x60:
    puVar2 = (undefined8 *)&StringLiteral___12f38a8;
    break;
  case 0x61:
    puVar2 = (undefined8 *)&StringLiteral_A_12ec020;
    break;
  case 0x62:
    puVar2 = (undefined8 *)&StringLiteral_B_12ec6d8;
    break;
  case 99:
    puVar2 = (undefined8 *)&StringLiteral_C_12ec9b0;
    break;
  case 100:
    puVar2 = (undefined8 *)&StringLiteral_D_12ed558;
    break;
  case 0x65:
    puVar2 = (undefined8 *)&StringLiteral_E_12ed8d0;
    break;
  case 0x66:
    puVar2 = (undefined8 *)&StringLiteral_F_12eddd8;
    break;
  case 0x67:
    puVar2 = (undefined8 *)&StringLiteral_G_12ee108;
    break;
  case 0x68:
    puVar2 = (undefined8 *)&StringLiteral_H_12ee270;
    break;
  case 0x69:
    puVar2 = (undefined8 *)&StringLiteral_I_12ee410;
    break;
  case 0x6a:
    puVar2 = (undefined8 *)&StringLiteral_J_12ef290;
    break;
  case 0x6b:
    puVar2 = (undefined8 *)&StringLiteral_K_12ef368;
    break;
  case 0x6c:
    puVar2 = (undefined8 *)&StringLiteral_L_12ef4b0;
    break;
  case 0x6d:
    puVar2 = (undefined8 *)&StringLiteral_M_12ef690;
    break;
  case 0x6e:
    puVar2 = (undefined8 *)&StringLiteral_N_12efba8;
    break;
  case 0x6f:
    puVar2 = (undefined8 *)&StringLiteral_O_12effd8;
    break;
  case 0x70:
    puVar2 = (undefined8 *)&StringLiteral_P_12f0418;
    break;
  case 0x71:
    puVar2 = (undefined8 *)&StringLiteral_Q_12f0788;
    break;
  case 0x72:
    puVar2 = (undefined8 *)&StringLiteral_R_12f07c8;
    break;
  case 0x73:
    puVar2 = (undefined8 *)&StringLiteral_S_12f0b70;
    break;
  case 0x74:
    puVar2 = (undefined8 *)&StringLiteral_T_12f12c0;
    break;
  case 0x75:
    puVar2 = (undefined8 *)&StringLiteral_U_12f2908;
    break;
  case 0x76:
    puVar2 = (undefined8 *)&StringLiteral_V_12f2d80;
    break;
  case 0x77:
    puVar2 = (undefined8 *)&StringLiteral_W_12f2f48;
    break;
  case 0x78:
    puVar2 = (undefined8 *)&StringLiteral_X_12f30c0;
    break;
  case 0x79:
    puVar2 = (undefined8 *)&StringLiteral_Y_12f31b8;
    break;
  case 0x7a:
    puVar2 = (undefined8 *)&StringLiteral_Z_12f3208;
    break;
  case 0x7f:
    puVar2 = (undefined8 *)&StringLiteral_Del_12ed720;
    break;
  default:
    uVar1 = 0;
    switch(param_1) {
    case 0x100:
      puVar2 = (undefined8 *)&StringLiteral_K0_12ef398;
      break;
    case 0x101:
      puVar2 = (undefined8 *)&StringLiteral_K1_12ef3a0;
      break;
    case 0x102:
      puVar2 = (undefined8 *)&StringLiteral_K2_12ef3a8;
      break;
    case 0x103:
      puVar2 = (undefined8 *)&StringLiteral_K3_12ef3b0;
      break;
    case 0x104:
      puVar2 = (undefined8 *)&StringLiteral_K4_12ef3b8;
      break;
    case 0x105:
      puVar2 = (undefined8 *)&StringLiteral_K5_12ef3c0;
      break;
    case 0x106:
      puVar2 = (undefined8 *)&StringLiteral_K6_12ef3c8;
      break;
    case 0x107:
      puVar2 = (undefined8 *)&StringLiteral_K7_12ef3d0;
      break;
    case 0x108:
      puVar2 = (undefined8 *)&StringLiteral_K8_12ef3d8;
      break;
    case 0x109:
      puVar2 = (undefined8 *)&StringLiteral_K9_12ef3e0;
      break;
    case 0x10a:
      puVar2 = (undefined8 *)&StringLiteral_K__12ef388;
      break;
    case 0x10b:
      puVar2 = (undefined8 *)&StringLiteral_K__12ef390;
      break;
    case 0x10c:
      puVar2 = (undefined8 *)&StringLiteral_K__12ef370;
      break;
    case 0x10d:
      puVar2 = (undefined8 *)&StringLiteral_K__12ef380;
      break;
    case 0x10e:
      puVar2 = (undefined8 *)&StringLiteral_K__12ef378;
      break;
    case 0x10f:
      puVar2 = (undefined8 *)&StringLiteral_KE_12ef3e8;
      break;
    case 0x110:
      puVar2 = (undefined8 *)&StringLiteral_KQ_12ef3f0;
      break;
    case 0x111:
      puVar2 = (undefined8 *)&StringLiteral_UP_12f29a8;
      break;
    case 0x112:
      puVar2 = (undefined8 *)&StringLiteral_DN_12ed588;
      break;
    case 0x113:
      puVar2 = (undefined8 *)&StringLiteral_LT_12ef4f0;
      break;
    case 0x114:
      puVar2 = (undefined8 *)&StringLiteral_RT_12f0868;
      break;
    case 0x115:
      puVar2 = (undefined8 *)&StringLiteral_Ins_12ee8f8;
      break;
    case 0x116:
      puVar2 = (undefined8 *)&StringLiteral_Home_12ee3c8;
      break;
    case 0x117:
      puVar2 = (undefined8 *)&StringLiteral_End_12eda90;
      break;
    case 0x118:
      puVar2 = (undefined8 *)&StringLiteral_PU_12f04a0;
      break;
    case 0x119:
      puVar2 = (undefined8 *)&StringLiteral_PD_12f0448;
      break;
    case 0x11a:
      puVar2 = (undefined8 *)&StringLiteral_F1_12edde0;
      break;
    case 0x11b:
      puVar2 = (undefined8 *)&StringLiteral_F2_12ede18;
      break;
    case 0x11c:
      puVar2 = (undefined8 *)&StringLiteral_F3_12ede20;
      break;
    case 0x11d:
      puVar2 = (undefined8 *)&StringLiteral_F4_12ede28;
      break;
    case 0x11e:
      puVar2 = (undefined8 *)&StringLiteral_F5_12ede30;
      break;
    case 0x11f:
      puVar2 = (undefined8 *)&StringLiteral_F6_12ede38;
      break;
    case 0x120:
      puVar2 = (undefined8 *)&StringLiteral_F7_12ede40;
      break;
    case 0x121:
      puVar2 = (undefined8 *)&StringLiteral_F8_12ede48;
      break;
    case 0x122:
      puVar2 = (undefined8 *)&StringLiteral_F9_12ede50;
      break;
    case 0x123:
      puVar2 = (undefined8 *)&StringLiteral_F10_12edde8;
      break;
    case 0x124:
      puVar2 = (undefined8 *)&StringLiteral_F11_12eddf0;
      break;
    case 0x125:
      puVar2 = (undefined8 *)&StringLiteral_F12_12eddf8;
      break;
    case 0x126:
      puVar2 = (undefined8 *)&StringLiteral_F13_12ede00;
      break;
    case 0x127:
      puVar2 = (undefined8 *)&StringLiteral_F14_12ede08;
      break;
    case 0x128:
      puVar2 = (undefined8 *)&StringLiteral_F15_12ede10;
      break;
    default:
      goto LAB_00734c68;
    case 300:
      puVar2 = (undefined8 *)&StringLiteral_Num_12effb8;
      break;
    case 0x12d:
      puVar2 = (undefined8 *)&StringLiteral_Cap_12ecf10;
      break;
    case 0x12e:
      puVar2 = (undefined8 *)&StringLiteral_Scr_12f0c90;
      break;
    case 0x12f:
      puVar2 = (undefined8 *)&StringLiteral_RS_12f0850;
      break;
    case 0x130:
      puVar2 = (undefined8 *)&StringLiteral_LS_12ef4e8;
      break;
    case 0x131:
      puVar2 = (undefined8 *)&StringLiteral_RC_12f07e0;
      break;
    case 0x132:
      puVar2 = (undefined8 *)&StringLiteral_LC_12ef4c8;
      break;
    case 0x133:
      puVar2 = (undefined8 *)&StringLiteral_RA_12f07d0;
      break;
    case 0x134:
      puVar2 = (undefined8 *)&StringLiteral_LA_12ef4c0;
      break;
    case 0x143:
      puVar2 = (undefined8 *)&StringLiteral_M0_12ef698;
      break;
    case 0x144:
      puVar2 = (undefined8 *)&StringLiteral_M1_12ef6a0;
      break;
    case 0x145:
      puVar2 = (undefined8 *)&StringLiteral_M2_12ef6a8;
      break;
    case 0x146:
      puVar2 = (undefined8 *)&StringLiteral_M3_12ef6b0;
      break;
    case 0x147:
      puVar2 = (undefined8 *)&StringLiteral_M4_12ef6b8;
      break;
    case 0x148:
      puVar2 = (undefined8 *)&StringLiteral_M5_12ef6c0;
      break;
    case 0x149:
      puVar2 = (undefined8 *)&StringLiteral_M6_12ef6c8;
      break;
    case 0x14a:
      puVar2 = (undefined8 *)&StringLiteral__A__12eb4a0;
      break;
    case 0x14b:
      puVar2 = (undefined8 *)&StringLiteral__B__12eb4a8;
      break;
    case 0x14c:
      puVar2 = (undefined8 *)&StringLiteral__X__12eb550;
      break;
    case 0x14d:
      puVar2 = (undefined8 *)&StringLiteral__Y__12eb558;
      break;
    case 0x14e:
      puVar2 = (undefined8 *)&StringLiteral__RB__12eb530;
      break;
    case 0x14f:
      puVar2 = (undefined8 *)&StringLiteral__LB__12eb4d8;
      break;
    case 0x150:
      puVar2 = (undefined8 *)&StringLiteral__Back__12eb4b0;
      break;
    case 0x151:
      puVar2 = (undefined8 *)&StringLiteral__Start__12eb540;
      break;
    case 0x152:
      puVar2 = (undefined8 *)&StringLiteral__LS__12eb4e0;
      break;
    case 0x153:
      puVar2 = (undefined8 *)&StringLiteral__RS__12eb538;
      break;
    case 0x154:
      puVar2 = (undefined8 *)&StringLiteral_J10_12ef298;
      break;
    case 0x155:
      puVar2 = (undefined8 *)&StringLiteral_J11_12ef2a0;
      break;
    case 0x156:
      puVar2 = (undefined8 *)&StringLiteral_J12_12ef2a8;
      break;
    case 0x157:
      puVar2 = (undefined8 *)&StringLiteral_J13_12ef2b0;
      break;
    case 0x158:
      puVar2 = (undefined8 *)&StringLiteral_J14_12ef2b8;
      break;
    case 0x159:
      puVar2 = (undefined8 *)&StringLiteral_J15_12ef2c0;
      break;
    case 0x15a:
      puVar2 = (undefined8 *)&StringLiteral_J16_12ef2c8;
      break;
    case 0x15b:
      puVar2 = (undefined8 *)&StringLiteral_J17_12ef2d0;
      break;
    case 0x15c:
      puVar2 = (undefined8 *)&StringLiteral_J18_12ef2d8;
      break;
    case 0x15d:
      puVar2 = (undefined8 *)&StringLiteral_J19_12ef2e0;
    }
  }
  uVar1 = *puVar2;
LAB_00734c68:
  return uVar1;
}



/* NGUITools$$CaptionToKey @ 0x735004
 * int32_t NGUITools__CaptionToKey (System_String_o* caption, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$CaptionToKey
   int32_t NGUITools__CaptionToKey (System_String_o* caption, const MethodInfo* method); */

undefined4 native_NGUITools__CaptionToKey_735004(undefined8 param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  if ((bRam000000000133f5d1 & 1) == 0) {
    native_sub_43273c(&StringLiteral_F10_12edde8);
    native_sub_43273c(&StringLiteral_PD_12f0448);
    native_sub_43273c(&StringLiteral_M0_12ef698);
    native_sub_43273c(&StringLiteral_J16_12ef2c8);
    native_sub_43273c(&StringLiteral_S_12f0b70);
    native_sub_43273c(&StringLiteral___12f33a8);
    native_sub_43273c(&StringLiteral_J11_12ef2a0);
    native_sub_43273c(&StringLiteral___12eafe0);
    native_sub_43273c(&StringLiteral_J_12ef290);
    native_sub_43273c(&StringLiteral_K__12ef370);
    native_sub_43273c(&StringLiteral_K__12ef390);
    native_sub_43273c(&StringLiteral___12eaf78);
    native_sub_43273c(&StringLiteral_J14_12ef2b8);
    native_sub_43273c(&StringLiteral_RT_12f0868);
    native_sub_43273c(&StringLiteral_Home_12ee3c8);
    native_sub_43273c(&StringLiteral_Clear_12ed0d0);
    native_sub_43273c(&StringLiteral_LT_12ef4f0);
    native_sub_43273c(&StringLiteral_F4_12ede28);
    native_sub_43273c(&StringLiteral_____12ebd10);
    native_sub_43273c(&StringLiteral___12ebfd8);
    native_sub_43273c(&StringLiteral_3_12ebc10);
    native_sub_43273c(&StringLiteral___12eb600);
    native_sub_43273c(&StringLiteral_2_12ebb88);
    native_sub_43273c(&StringLiteral_Z_12f3208);
    native_sub_43273c(&StringLiteral_F2_12ede18);
    native_sub_43273c(&StringLiteral_RC_12f07e0);
    native_sub_43273c(&StringLiteral_M2_12ef6a8);
    native_sub_43273c(&StringLiteral_9_12ebc60);
    native_sub_43273c(&StringLiteral_K2_12ef3a8);
    native_sub_43273c(&StringLiteral_LC_12ef4c8);
    native_sub_43273c(&StringLiteral_RS_12f0850);
    native_sub_43273c(&StringLiteral_R_12f07c8);
    native_sub_43273c(&StringLiteral_KQ_12ef3f0);
    native_sub_43273c(&StringLiteral_F7_12ede40);
    native_sub_43273c(&StringLiteral_6_12ebc40);
    native_sub_43273c(&StringLiteral_J17_12ef2d0);
    native_sub_43273c(&StringLiteral_J15_12ef2c0);
    native_sub_43273c(&StringLiteral_M5_12ef6c0);
    native_sub_43273c(&StringLiteral_M3_12ef6b0);
    native_sub_43273c(&StringLiteral_K0_12ef398);
    native_sub_43273c(&StringLiteral_W_12f2f48);
    native_sub_43273c(&StringLiteral___12eb6c8);
    native_sub_43273c(&StringLiteral_J10_12ef298);
    native_sub_43273c(&StringLiteral_DN_12ed588);
    native_sub_43273c(&StringLiteral_Tab_12f1478);
    native_sub_43273c(&StringLiteral_K_12ef368);
    native_sub_43273c(&StringLiteral_G_12ee108);
    native_sub_43273c(&StringLiteral_LA_12ef4c0);
    native_sub_43273c(&StringLiteral_H_12ee270);
    native_sub_43273c(&StringLiteral_F13_12ede00);
    native_sub_43273c(&StringLiteral___12eb180);
    native_sub_43273c(&StringLiteral__LB__12eb4d8);
    native_sub_43273c(&StringLiteral_Q_12f0788);
    native_sub_43273c(&StringLiteral_Scr_12f0c90);
    native_sub_43273c(&StringLiteral_K1_12ef3a0);
    native_sub_43273c(&StringLiteral_K9_12ef3e0);
    native_sub_43273c(&StringLiteral_J18_12ef2d8);
    native_sub_43273c(&StringLiteral___12f34d0);
    native_sub_43273c(&StringLiteral_M6_12ef6c8);
    native_sub_43273c(&StringLiteral_U_12f2908);
    native_sub_43273c(&StringLiteral_V_12f2d80);
    native_sub_43273c(&StringLiteral___12f38a8);
    native_sub_43273c(&StringLiteral_K7_12ef3d0);
    native_sub_43273c(&StringLiteral_E_12ed8d0);
    native_sub_43273c(&StringLiteral_F15_12ede10);
    native_sub_43273c(&StringLiteral_F12_12eddf8);
    native_sub_43273c(&StringLiteral____12eb208);
    native_sub_43273c(&StringLiteral_Space_12f0f30);
    native_sub_43273c(&StringLiteral_I_12ee410);
    native_sub_43273c(&StringLiteral_Backspace_12ec700);
    native_sub_43273c(&StringLiteral_K8_12ef3d8);
    native_sub_43273c(&StringLiteral_Del_12ed720);
    native_sub_43273c(&StringLiteral___12ebd20);
    native_sub_43273c(&StringLiteral___12ebff8);
    native_sub_43273c(&StringLiteral_7_12ebc48);
    native_sub_43273c(&StringLiteral_4_12ebc20);
    native_sub_43273c(&StringLiteral_K6_12ef3c8);
    native_sub_43273c(&StringLiteral_K__12ef380);
    native_sub_43273c(&StringLiteral_F9_12ede50);
    native_sub_43273c(&StringLiteral_T_12f12c0);
    native_sub_43273c(&StringLiteral_M1_12ef6a0);
    native_sub_43273c(&StringLiteral___12f34b8);
    native_sub_43273c(&StringLiteral_L_12ef4b0);
    native_sub_43273c(&StringLiteral___12eb830);
    native_sub_43273c(&StringLiteral___12eb148);
    native_sub_43273c(&StringLiteral_Esc_12edc70);
    native_sub_43273c(&StringLiteral__Back__12eb4b0);
    native_sub_43273c(&StringLiteral__A__12eb4a0);
    native_sub_43273c(&StringLiteral___12ebcf8);
    native_sub_43273c(&StringLiteral_Return_12f0b08);
    native_sub_43273c(&StringLiteral_O_12effd8);
    native_sub_43273c(&StringLiteral_J13_12ef2b0);
    native_sub_43273c(&StringLiteral__Start__12eb540);
    native_sub_43273c(&StringLiteral___12eb0c0);
    native_sub_43273c(&StringLiteral_D_12ed558);
    native_sub_43273c(&StringLiteral___12eb450);
    native_sub_43273c(&StringLiteral_Ins_12ee8f8);
    native_sub_43273c(&StringLiteral_Pause_12f05d0);
    native_sub_43273c(&StringLiteral_F6_12ede38);
    native_sub_43273c(&StringLiteral_End_12eda90);
    native_sub_43273c(&StringLiteral_B_12ec6d8);
    native_sub_43273c(&StringLiteral__RS__12eb538);
    native_sub_43273c(&StringLiteral_8_12ebc50);
    native_sub_43273c(&StringLiteral_F3_12ede20);
    native_sub_43273c(&StringLiteral___12eb590);
    native_sub_43273c(&StringLiteral_KE_12ef3e8);
    native_sub_43273c(&StringLiteral_UP_12f29a8);
    native_sub_43273c(&StringLiteral__X__12eb550);
    native_sub_43273c(&StringLiteral___12ec010);
    native_sub_43273c(&StringLiteral_Num_12effb8);
    native_sub_43273c(&StringLiteral_LS_12ef4e8);
    native_sub_43273c(&StringLiteral_C_12ec9b0);
    native_sub_43273c(&StringLiteral_F5_12ede30);
    native_sub_43273c(&StringLiteral___12eb630);
    native_sub_43273c(&StringLiteral_F14_12ede08);
    native_sub_43273c(&StringLiteral__RB__12eb530);
    native_sub_43273c(&StringLiteral_Y_12f31b8);
    native_sub_43273c(&StringLiteral_F1_12edde0);
    native_sub_43273c(&StringLiteral_K__12ef388);
    native_sub_43273c(&StringLiteral_K__12ef378);
    native_sub_43273c(&StringLiteral_F11_12eddf0);
    native_sub_43273c(&StringLiteral_M4_12ef6b8);
    native_sub_43273c(&StringLiteral_K3_12ef3b0);
    native_sub_43273c(&StringLiteral_RA_12f07d0);
    native_sub_43273c(&StringLiteral__Y__12eb558);
    native_sub_43273c(&StringLiteral_F8_12ede48);
    native_sub_43273c(&StringLiteral_X_12f30c0);
    native_sub_43273c(&StringLiteral___12f3230);
    native_sub_43273c(&StringLiteral_J19_12ef2e0);
    native_sub_43273c(&StringLiteral_M_12ef690);
    native_sub_43273c(&StringLiteral_J12_12ef2a8);
    native_sub_43273c(&StringLiteral___12f3410);
    native_sub_43273c(&StringLiteral___12eb5f0);
    native_sub_43273c(&StringLiteral_N_12efba8);
    native_sub_43273c(&StringLiteral_1_12eb968);
    native_sub_43273c(&StringLiteral_K5_12ef3c0);
    native_sub_43273c(&StringLiteral_A_12ec020);
    native_sub_43273c(&StringLiteral___12ebfe8);
    native_sub_43273c(&StringLiteral___12eb7a0);
    native_sub_43273c(&StringLiteral__B__12eb4a8);
    native_sub_43273c(&StringLiteral_K4_12ef3b8);
    native_sub_43273c(&StringLiteral_Cap_12ecf10);
    native_sub_43273c(&StringLiteral_5_12ebc38);
    native_sub_43273c(&StringLiteral_0_12eb8d8);
    native_sub_43273c(&StringLiteral_PU_12f04a0);
    native_sub_43273c(&StringLiteral__LS__12eb4e0);
    native_sub_43273c(&StringLiteral_P_12f0418);
    native_sub_43273c(&StringLiteral_F_12eddd8);
    bRam000000000133f5d1 = 1;
  }
  uVar1 = native_System_String__IsNullOrEmpty_b09430(param_1,0);
  if ((uVar1 & 1) == 0) {
    uVar1 = native_System_String__op_Equality_afc18c(param_1,_StringLiteral_Backspace_12ec700,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = native_System_String__op_Equality_afc18c(param_1,_StringLiteral_Tab_12f1478,0);
      if ((uVar1 & 1) == 0) {
        uVar1 = native_System_String__op_Equality_afc18c(param_1,_StringLiteral_Clear_12ed0d0,0);
        if ((uVar1 & 1) == 0) {
          uVar1 = native_System_String__op_Equality_afc18c(param_1,_StringLiteral_Return_12f0b08,0);
          if ((uVar1 & 1) == 0) {
            uVar1 = native_System_String__op_Equality_afc18c(param_1,_StringLiteral_Pause_12f05d0,0)
            ;
            if ((uVar1 & 1) == 0) {
              uVar1 = native_System_String__op_Equality_afc18c(param_1,_StringLiteral_Esc_12edc70,0)
              ;
              if ((uVar1 & 1) == 0) {
                uVar1 = native_System_String__op_Equality_afc18c
                                  (param_1,_StringLiteral_Space_12f0f30,0);
                if ((uVar1 & 1) == 0) {
                  uVar1 = native_System_String__op_Equality_afc18c
                                    (param_1,_StringLiteral___12eaf78,0);
                  if ((uVar1 & 1) == 0) {
                    uVar1 = native_System_String__op_Equality_afc18c
                                      (param_1,_StringLiteral____12eb208,0);
                    if ((uVar1 & 1) == 0) {
                      uVar1 = native_System_String__op_Equality_afc18c
                                        (param_1,_StringLiteral___12eafe0,0);
                      if ((uVar1 & 1) == 0) {
                        uVar1 = native_System_String__op_Equality_afc18c
                                          (param_1,_StringLiteral___12eb0c0,0);
                        if ((uVar1 & 1) == 0) {
                          uVar1 = native_System_String__op_Equality_afc18c
                                            (param_1,_StringLiteral___12eb148,0);
                          if ((uVar1 & 1) == 0) {
                            uVar1 = native_System_String__op_Equality_afc18c
                                              (param_1,_StringLiteral___12eb180,0);
                            if ((uVar1 & 1) == 0) {
                              uVar1 = native_System_String__op_Equality_afc18c
                                                (param_1,_StringLiteral___12eb450,0);
                              if ((uVar1 & 1) == 0) {
                                uVar1 = native_System_String__op_Equality_afc18c
                                                  (param_1,_StringLiteral___12eb590,0);
                                if ((uVar1 & 1) == 0) {
                                  uVar1 = native_System_String__op_Equality_afc18c
                                                    (param_1,_StringLiteral___12eb5f0,0);
                                  if ((uVar1 & 1) == 0) {
                                    uVar1 = native_System_String__op_Equality_afc18c
                                                      (param_1,_StringLiteral___12eb600,0);
                                    if ((uVar1 & 1) == 0) {
                                      uVar1 = native_System_String__op_Equality_afc18c
                                                        (param_1,_StringLiteral___12eb630,0);
                                      if ((uVar1 & 1) == 0) {
                                        uVar1 = native_System_String__op_Equality_afc18c
                                                          (param_1,_StringLiteral___12eb6c8,0);
                                        if ((uVar1 & 1) == 0) {
                                          uVar1 = native_System_String__op_Equality_afc18c
                                                            (param_1,_StringLiteral___12eb7a0,0);
                                          if ((uVar1 & 1) == 0) {
                                            uVar1 = native_System_String__op_Equality_afc18c
                                                              (param_1,_StringLiteral___12eb830,0);
                                            if ((uVar1 & 1) == 0) {
                                              uVar1 = native_System_String__op_Equality_afc18c
                                                                (param_1,_StringLiteral_0_12eb8d8,0)
                                              ;
                                              if ((uVar1 & 1) == 0) {
                                                uVar1 = native_System_String__op_Equality_afc18c
                                                                  (param_1,_StringLiteral_1_12eb968,
                                                                   0);
                                                if ((uVar1 & 1) == 0) {
                                                  uVar1 = native_System_String__op_Equality_afc18c
                                                                    (param_1,
                                                  _StringLiteral_2_12ebb88,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_3_12ebc10,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_4_12ebc20,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_5_12ebc38,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_6_12ebc40,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_7_12ebc48,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_8_12ebc50,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_9_12ebc60,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_____12ebd10,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral___12ebcf8,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral___12ebd20,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral___12ebfd8,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral___12ebfe8,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral___12ebff8,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral___12ec010,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral___12f3230,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral___12f33a8,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral___12f3410,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral___12f34b8,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral___12f34d0,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral___12f38a8,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_A_12ec020,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_B_12ec6d8,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_C_12ec9b0,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_D_12ed558,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_E_12ed8d0,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_F_12eddd8,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_G_12ee108,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_H_12ee270,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_I_12ee410,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_J_12ef290,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_K_12ef368,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_L_12ef4b0,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_M_12ef690,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_N_12efba8,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_O_12effd8,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_P_12f0418,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_Q_12f0788,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_R_12f07c8,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_S_12f0b70,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_T_12f12c0,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_U_12f2908,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_V_12f2d80,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_W_12f2f48,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_X_12f30c0,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_Y_12f31b8,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_Z_12f3208,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_Del_12ed720,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_K0_12ef398,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_K1_12ef3a0,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_K2_12ef3a8,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_K3_12ef3b0,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_K4_12ef3b8,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_K5_12ef3c0,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_K6_12ef3c8,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_K7_12ef3d0,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_K8_12ef3d8,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_K9_12ef3e0,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_K__12ef388,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_K__12ef390,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_K__12ef370,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_K__12ef380,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_K__12ef378,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_KE_12ef3e8,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_KQ_12ef3f0,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_UP_12f29a8,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_DN_12ed588,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_LT_12ef4f0,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_RT_12f0868,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_Ins_12ee8f8,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_Home_12ee3c8,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_End_12eda90,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_PU_12f04a0,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_PD_12f0448,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_F1_12edde0,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_F2_12ede18,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_F3_12ede20,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_F4_12ede28,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_F5_12ede30,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_F6_12ede38,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_F7_12ede40,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_F8_12ede48,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_F9_12ede50,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_F10_12edde8,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_F11_12eddf0,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_F12_12eddf8,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_F13_12ede00,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_F14_12ede08,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_F15_12ede10,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_Num_12effb8,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_Cap_12ecf10,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_Scr_12f0c90,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_RS_12f0850,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_LS_12ef4e8,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_RC_12f07e0,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_LC_12ef4c8,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_RA_12f07d0,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_LA_12ef4c0,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_M0_12ef698,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_M1_12ef6a0,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_M2_12ef6a8,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_M3_12ef6b0,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_M4_12ef6b8,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_M5_12ef6c0,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_M6_12ef6c8,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral__A__12eb4a0,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral__B__12eb4a8,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral__X__12eb550,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral__Y__12eb558,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral__RB__12eb530,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral__LB__12eb4d8,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral__Back__12eb4b0,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral__Start__12eb540,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral__LS__12eb4e0,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral__RS__12eb538,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_J10_12ef298,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_J11_12ef2a0,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_J12_12ef2a8,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_J13_12ef2b0,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_J14_12ef2b8,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_J15_12ef2c0,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_J16_12ef2c8,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_J17_12ef2d0,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_J18_12ef2d8,0);
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar1 = native_System_String__op_Equality_afc18c
                                                                      (param_1,
                                                  _StringLiteral_J19_12ef2e0,0);
                                                  uVar2 = 0x15d;
                                                  if ((uVar1 & 1) == 0) {
                                                    uVar2 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x15c;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x15b;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x15a;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x159;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x158;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x157;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x156;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x155;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x154;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x153;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x152;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x151;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x150;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x14f;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x14e;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x14d;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x14c;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x14b;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x14a;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x149;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x148;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x147;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x146;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x145;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x144;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x143;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x134;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x133;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x132;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x131;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x130;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x12f;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x12e;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x12d;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 300;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x128;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x127;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x126;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x125;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x124;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x123;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x122;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x121;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x120;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x11f;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x11e;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x11d;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x11c;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x11b;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x11a;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x119;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x118;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x117;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x116;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x115;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x114;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x113;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x112;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x111;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x110;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x10f;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x10e;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x10d;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x10c;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x10b;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x10a;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x109;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x108;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x107;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x106;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x105;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x104;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x103;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x102;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x101;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x100;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x7f;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x7a;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x79;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x78;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x77;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x76;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x75;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x74;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x73;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x72;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x71;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x70;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x6f;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x6e;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x6d;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x6c;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x6b;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x6a;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x69;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x68;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x67;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x66;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x65;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 100;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 99;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x62;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x61;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x60;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x5f;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x5e;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x5d;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x5c;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x5b;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x40;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x3f;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x3e;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x3d;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x3c;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x3b;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x3a;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x39;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x38;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x37;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x36;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x35;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x34;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x33;
                                                  }
                                                  }
                                                  else {
                                                    uVar2 = 0x32;
                                                  }
                                                }
                                                else {
                                                  uVar2 = 0x31;
                                                }
                                              }
                                              else {
                                                uVar2 = 0x30;
                                              }
                                            }
                                            else {
                                              uVar2 = 0x2f;
                                            }
                                          }
                                          else {
                                            uVar2 = 0x2e;
                                          }
                                        }
                                        else {
                                          uVar2 = 0x2d;
                                        }
                                      }
                                      else {
                                        uVar2 = 0x2c;
                                      }
                                    }
                                    else {
                                      uVar2 = 0x2b;
                                    }
                                  }
                                  else {
                                    uVar2 = 0x2a;
                                  }
                                }
                                else {
                                  uVar2 = 0x29;
                                }
                              }
                              else {
                                uVar2 = 0x28;
                              }
                            }
                            else {
                              uVar2 = 0x27;
                            }
                          }
                          else {
                            uVar2 = 0x26;
                          }
                        }
                        else {
                          uVar2 = 0x24;
                        }
                      }
                      else {
                        uVar2 = 0x23;
                      }
                    }
                    else {
                      uVar2 = 0x22;
                    }
                  }
                  else {
                    uVar2 = 0x21;
                  }
                }
                else {
                  uVar2 = 0x20;
                }
              }
              else {
                uVar2 = 0x1b;
              }
            }
            else {
              uVar2 = 0x13;
            }
          }
          else {
            uVar2 = 0xd;
          }
        }
        else {
          uVar2 = 0xc;
        }
      }
      else {
        uVar2 = 9;
      }
    }
    else {
      uVar2 = 8;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* NGUITools$$GammaToLinearSpace @ 0x736c0c
 * UnityEngine_Color_o NGUITools__GammaToLinearSpace (UnityEngine_Color_o c, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$GammaToLinearSpace
   UnityEngine_Color_o NGUITools__GammaToLinearSpace (UnityEngine_Color_o c, const MethodInfo*
   method); */

undefined1  [16]
native_NGUITools__GammaToLinearSpace_736c0c
          (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  ulong uVar7;
  ulong auStack_50 [2];
  
  uVar3 = param_1._8_8_;
  uVar7 = param_1._0_8_;
  if ((bRam000000000133f5d2 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5d2 = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  lVar2 = _NGUITools_TypeInfo_12d53c8;
  if (*(int *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x60) == -1) {
    uVar1 = native_UnityEngine_QualitySettings__get_activeColorSpace_7621d0(0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    lVar2 = _NGUITools_TypeInfo_12d53c8;
    *(undefined4 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x60) = uVar1;
  }
  if (((*(byte *)(lVar2 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar2 + 0xe0) == 0)) {
    native_sub_4327ec(lVar2);
    lVar2 = _NGUITools_TypeInfo_12d53c8;
  }
  if (*(int *)(*(long *)(lVar2 + 0xb8) + 0x60) == 1) {
    uVar3 = native_UnityEngine_Mathf__GammaToLinearSpace_8d9f30(uVar7,0);
    uVar4 = native_UnityEngine_Mathf__GammaToLinearSpace_8d9f30(param_2,0);
    uVar5 = native_UnityEngine_Mathf__GammaToLinearSpace_8d9f30(param_3,0);
    auStack_50[0] = 0;
    auStack_50[1] = 0;
    native_UnityEngine_Color___ctor_8d980c(uVar3,uVar4,uVar5,param_4,auStack_50,0);
    uVar7 = auStack_50[0] & 0xffffffff;
    uVar3 = 0;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = uVar7;
  return auVar6;
}



/* NGUITools$$LinearToGammaSpace @ 0x736d74
 * UnityEngine_Color_o NGUITools__LinearToGammaSpace (UnityEngine_Color_o c, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$LinearToGammaSpace
   UnityEngine_Color_o NGUITools__LinearToGammaSpace (UnityEngine_Color_o c, const MethodInfo*
   method); */

undefined1  [16]
native_NGUITools__LinearToGammaSpace_736d74
          (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  ulong uVar7;
  ulong auStack_50 [2];
  
  uVar3 = param_1._8_8_;
  uVar7 = param_1._0_8_;
  if ((bRam000000000133f5d3 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5d3 = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  lVar2 = _NGUITools_TypeInfo_12d53c8;
  if (*(int *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x60) == -1) {
    uVar1 = native_UnityEngine_QualitySettings__get_activeColorSpace_7621d0(0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    lVar2 = _NGUITools_TypeInfo_12d53c8;
    *(undefined4 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x60) = uVar1;
  }
  if (((*(byte *)(lVar2 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar2 + 0xe0) == 0)) {
    native_sub_4327ec(lVar2);
    lVar2 = _NGUITools_TypeInfo_12d53c8;
  }
  if (*(int *)(*(long *)(lVar2 + 0xb8) + 0x60) == 1) {
    uVar3 = native_UnityEngine_Mathf__LinearToGammaSpace_8e477c(uVar7,0);
    uVar4 = native_UnityEngine_Mathf__LinearToGammaSpace_8e477c(param_2,0);
    uVar5 = native_UnityEngine_Mathf__LinearToGammaSpace_8e477c(param_3,0);
    auStack_50[0] = 0;
    auStack_50[1] = 0;
    native_UnityEngine_Color___ctor_8d980c(uVar3,uVar4,uVar5,param_4,auStack_50,0);
    uVar7 = auStack_50[0] & 0xffffffff;
    uVar3 = 0;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = uVar7;
  return auVar6;
}



/* NGUITools$$CheckIfRelated @ 0x736edc
 * bool NGUITools__CheckIfRelated (INGUIAtlas_o* a, INGUIAtlas_o* b, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$CheckIfRelated
   bool NGUITools__CheckIfRelated (INGUIAtlas_o* a, INGUIAtlas_o* b, const MethodInfo* method); */

undefined8 native_NGUITools__CheckIfRelated_736edc(long *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((bRam000000000133f5d4 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    bRam000000000133f5d4 = 1;
  }
  uVar1 = 0;
  if ((param_1 != (long *)0x0) && (param_2 != (long *)0x0)) {
    if (param_1 != param_2) {
      lVar3 = *param_1;
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar4 = 0;
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0xd) * 0x10 + 0x138);
            goto LAB_00736f88;
          }
          uVar4 = uVar4 + 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar2 = (undefined8 *)native_sub_3c9b34(param_1,_INGUIAtlas_TypeInfo_12d4c68,0xd);
LAB_00736f88:
      uVar4 = (*(code *)*puVar2)(param_1,param_2,puVar2[1]);
      if ((uVar4 & 1) == 0) {
        lVar3 = *param_2;
        if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
          uVar4 = 0;
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
              puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0xd) * 0x10 + 0x138);
              goto LAB_00737008;
            }
            uVar4 = uVar4 + 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
        }
        puVar2 = (undefined8 *)native_sub_3c9b34(param_2,_INGUIAtlas_TypeInfo_12d4c68,0xd);
LAB_00737008:
                    /* WARNING: Could not recover jumptable at 0x00737020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*(code *)*puVar2)(param_2,param_1,puVar2[1]);
        return uVar1;
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}



/* NGUITools$$Replace @ 0x737024
 * void NGUITools__Replace (INGUIAtlas_o* before, INGUIAtlas_o* after, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$Replace
   void NGUITools__Replace (INGUIAtlas_o* before, INGUIAtlas_o* after, const MethodInfo* method); */

void native_NGUITools__Replace_737024(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  
  if ((bRam000000000133f5d5 & 1) == 0) {
    native_sub_43273c(&Method_NGUITools_FindActive_UILabel____12e5710);
    native_sub_43273c(&Method_NGUITools_FindActive_UISprite____12e5720);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&Method_UnityEngine_Resources_FindObjectsOfTypeAll_NGUIFont____12e6308);
    native_sub_43273c(&Method_UnityEngine_Resources_FindObjectsOfTypeAll_UIFont____12e6310);
    bRam000000000133f5d5 = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar1 = native_NGUITools__FindActive_AudioListener__4a5b30
                    (_Method_NGUITools_FindActive_UISprite____12e5720);
  if (lVar1 != 0) {
    iVar5 = (int)*(undefined8 *)(lVar1 + 0x18);
    if (iVar5 < 1) {
LAB_0073712c:
      lVar1 = native_UnityEngine_Resources__FindObjectsOfTypeAll_NGUIFont__4a7c94
                        (_Method_UnityEngine_Resources_FindObjectsOfTypeAll_UIFont____12e6310);
      if (lVar1 == 0) goto LAB_007372dc;
      iVar5 = (int)*(undefined8 *)(lVar1 + 0x18);
      if (iVar5 < 1) {
LAB_007371a4:
        lVar1 = native_UnityEngine_Resources__FindObjectsOfTypeAll_NGUIFont__4a7c94
                          (_Method_UnityEngine_Resources_FindObjectsOfTypeAll_NGUIFont____12e6308);
        if (lVar1 == 0) goto LAB_007372dc;
        iVar5 = (int)*(undefined8 *)(lVar1 + 0x18);
        if (iVar5 < 1) {
LAB_0073721c:
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar1 = native_NGUITools__FindActive_AudioListener__4a5b30
                            (_Method_NGUITools_FindActive_UILabel____12e5710);
          if (lVar1 == 0) goto LAB_007372dc;
          iVar5 = (int)*(undefined8 *)(lVar1 + 0x18);
          if (iVar5 < 1) {
            return;
          }
          if (iVar5 != 0) {
            uVar6 = 0;
            do {
              lVar4 = *(long *)(lVar1 + (long)(int)uVar6 * 8 + 0x20);
              if (lVar4 == 0) goto LAB_007372dc;
              lVar2 = native_UILabel__get_font_ae77e8(lVar4,0);
              if ((lVar2 != 0) &&
                 (lVar2 = native_UILabel__get_atlas_ae7ac0(lVar4,0), lVar2 == param_1)) {
                native_UILabel__set_atlas_ae7b80(lVar4,param_2,0);
              }
              uVar6 = uVar6 + 1;
              if (iVar5 <= (int)uVar6) {
                return;
              }
            } while (uVar6 < *(uint *)(lVar1 + 0x18));
          }
        }
        else if (iVar5 != 0) {
          uVar6 = 0;
          do {
            lVar4 = *(long *)(lVar1 + (long)(int)uVar6 * 8 + 0x20);
            if (lVar4 == 0) goto LAB_007372dc;
            lVar2 = native_NGUIFont__get_atlas_7fe8f0(lVar4,0);
            if (lVar2 == param_1) {
              native_NGUIFont__set_atlas_7fe9f4(lVar4,param_2,0);
            }
            uVar6 = uVar6 + 1;
            if (iVar5 <= (int)uVar6) goto LAB_0073721c;
          } while (uVar6 < *(uint *)(lVar1 + 0x18));
        }
      }
      else if (iVar5 != 0) {
        uVar6 = 0;
        do {
          lVar4 = *(long *)(lVar1 + (long)(int)uVar6 * 8 + 0x20);
          if (lVar4 == 0) goto LAB_007372dc;
          lVar2 = native_UIFont__get_atlas_9ebd3c(lVar4,0);
          if (lVar2 == param_1) {
            native_UIFont__set_atlas_9ebe18(lVar4,param_2,0);
          }
          uVar6 = uVar6 + 1;
          if (iVar5 <= (int)uVar6) goto LAB_007371a4;
        } while (uVar6 < *(uint *)(lVar1 + 0x18));
      }
    }
    else if (iVar5 != 0) {
      uVar6 = 0;
      do {
        lVar4 = *(long *)(lVar1 + (long)(int)uVar6 * 8 + 0x20);
        if (lVar4 == 0) goto LAB_007372dc;
        lVar2 = native_UISprite__get_atlas_c358c4(lVar4,0);
        if (lVar2 == param_1) {
          native_UISprite__set_atlas_c35910(lVar4,param_2,0);
        }
        uVar6 = uVar6 + 1;
        if (iVar5 <= (int)uVar6) goto LAB_0073712c;
      } while (uVar6 < *(uint *)(lVar1 + 0x18));
    }
    uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar3,0);
  }
LAB_007372dc:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUITools$$CheckIfRelated @ 0x7372e0
 * bool NGUITools__CheckIfRelated (INGUIFont_o* a, INGUIFont_o* b, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$CheckIfRelated
   bool NGUITools__CheckIfRelated (INGUIFont_o* a, INGUIFont_o* b, const MethodInfo* method); */

undefined8 native_NGUITools__CheckIfRelated_7372e0(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  
  if ((bRam000000000133f5d6 & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam000000000133f5d6 = 1;
  }
  if (param_1 == (long *)0x0) {
    return 0;
  }
  if (param_2 == (long *)0x0) {
    return 0;
  }
  lVar2 = *param_1;
  if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
    uVar4 = 0;
    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 0x21) * 0x10 + 0x138);
        goto LAB_00737384;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar2 + 0x12a));
  }
  puVar1 = (undefined8 *)native_sub_3c9b34(param_1,_INGUIFont_TypeInfo_12d4c70,0x21);
LAB_00737384:
  uVar4 = (*(code *)*puVar1)(param_1,puVar1[1]);
  if ((uVar4 & 1) != 0) {
    lVar2 = *param_2;
    if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
      uVar4 = 0;
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == _INGUIFont_TypeInfo_12d4c70) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 0x21) * 0x10 + 0x138);
          goto LAB_007373ec;
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 < *(ushort *)(lVar2 + 0x12a));
    }
    puVar1 = (undefined8 *)native_sub_3c9b34(param_2,_INGUIFont_TypeInfo_12d4c70,0x21);
LAB_007373ec:
    uVar4 = (*(code *)*puVar1)(param_2,puVar1[1]);
    if ((uVar4 & 1) != 0) {
      lVar2 = *param_1;
      if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
        uVar4 = 0;
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == _INGUIFont_TypeInfo_12d4c70) {
            puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 0x22) * 0x10 + 0x138);
            goto LAB_00737460;
          }
          uVar4 = uVar4 + 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 < *(ushort *)(lVar2 + 0x12a));
      }
      puVar1 = (undefined8 *)native_sub_3c9b34(param_1,_INGUIFont_TypeInfo_12d4c70,0x22);
LAB_00737460:
      lVar2 = (*(code *)*puVar1)(param_1,puVar1[1]);
      if ((lVar2 == 0) ||
         (lVar2 = native_UnityEngine_Font__get_fontNames_db3b70(lVar2,0), lVar2 == 0)) {
LAB_0073761c:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      if (*(int *)(lVar2 + 0x18) == 0) {
LAB_00737620:
        uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar6,0);
      }
      lVar3 = *param_2;
      uVar6 = *(undefined8 *)(lVar2 + 0x20);
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar4 = 0;
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == _INGUIFont_TypeInfo_12d4c70) {
            puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x22) * 0x10 + 0x138);
            goto LAB_007374e0;
          }
          uVar4 = uVar4 + 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar1 = (undefined8 *)native_sub_3c9b34(param_2,_INGUIFont_TypeInfo_12d4c70,0x22);
LAB_007374e0:
      lVar2 = (*(code *)*puVar1)(param_2,puVar1[1]);
      if ((lVar2 == 0) ||
         (lVar2 = native_UnityEngine_Font__get_fontNames_db3b70(lVar2,0), lVar2 == 0))
      goto LAB_0073761c;
      if (*(int *)(lVar2 + 0x18) == 0) goto LAB_00737620;
      uVar4 = native_System_String__op_Equality_afc18c(uVar6,*(undefined8 *)(lVar2 + 0x20),0);
      if (param_1 == param_2) {
        return 1;
      }
      if ((uVar4 & 1) != 0) {
        return 1;
      }
      goto LAB_00737528;
    }
  }
  if (param_1 == param_2) {
    return 1;
  }
LAB_00737528:
  lVar2 = *param_1;
  if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
    uVar4 = 0;
    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 0x26) * 0x10 + 0x138);
        goto LAB_00737580;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar2 + 0x12a));
  }
  puVar1 = (undefined8 *)native_sub_3c9b34(param_1,_INGUIFont_TypeInfo_12d4c70,0x26);
LAB_00737580:
  uVar4 = (*(code *)*puVar1)(param_1,param_2,puVar1[1]);
  if ((uVar4 & 1) != 0) {
    return 1;
  }
  lVar2 = *param_2;
  if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
    uVar4 = 0;
    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 0x26) * 0x10 + 0x138);
        goto LAB_00737600;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar2 + 0x12a));
  }
  puVar1 = (undefined8 *)native_sub_3c9b34(param_2,_INGUIFont_TypeInfo_12d4c70,0x26);
LAB_00737600:
                    /* WARNING: Could not recover jumptable at 0x00737618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (*(code *)*puVar1)(param_2,param_1,puVar1[1]);
  return uVar6;
}



/* NGUITools$$.cctor @ 0x73762c
 * void NGUITools___cctor (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUITools$$.cctor
   void NGUITools___cctor (const MethodInfo* method); */

void native_NGUITools___cctor_73762c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if ((bRam000000000133f5d7 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_Type__string___ctor___12d9a30);
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__UIWidget___ctor___12d9938
                     );
    native_sub_43273c(&System_Collections_Generic_Dictionary_Type__string__TypeInfo_12d2408);
    native_sub_43273c(&System_Collections_Generic_Dictionary_string__UIWidget__TypeInfo_12d23d0);
    native_sub_43273c(&UnityEngine_KeyCode___TypeInfo_12d3288);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIWidget___ctor___12dd410);
    native_sub_43273c(&System_Collections_Generic_List_UIWidget__TypeInfo_12d2c48);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&
                      Field__PrivateImplementationDetails__6383AD8D3ACB5400C9BB99B6431A223D7472A06120C1C15C09458B0FCB291E2B_12ea348
                     );
    native_sub_43273c(&UnityEngine_Vector3___TypeInfo_12d3478);
    bRam000000000133f5d7 = 1;
  }
  lVar1 = _NGUITools_TypeInfo_12d53c8;
  *(undefined1 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x10) = 0;
  *(undefined4 *)(*(long *)(lVar1 + 0xb8) + 0x14) = 0x3f800000;
  *(undefined4 *)(*(long *)(lVar1 + 0xb8) + 0x18) = 0;
  uVar2 = native_sub_432808(_System_Collections_Generic_List_UIWidget__TypeInfo_12d2c48);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar2,_Method_System_Collections_Generic_List_UIWidget___ctor___12dd410);
  puVar3 = (undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x28);
  *puVar3 = uVar2;
  native_sub_4326e0(puVar3,uVar2);
  uVar2 = native_sub_432808(_System_Collections_Generic_Dictionary_Type__string__TypeInfo_12d2408);
  native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action_____ctor_cda13c
            (uVar2,_Method_System_Collections_Generic_Dictionary_Type__string___ctor___12d9a30);
  puVar3 = (undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x30);
  *puVar3 = uVar2;
  native_sub_4326e0(puVar3,uVar2);
  uVar2 = native_sub_432750(_UnityEngine_Vector3___TypeInfo_12d3478,4);
  puVar3 = (undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
  *puVar3 = uVar2;
  native_sub_4326e0(puVar3,uVar2);
  uVar2 = native_sub_432750(_UnityEngine_KeyCode___TypeInfo_12d3288,0x91);
  native_System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_7c17e0
            (uVar2,
             _Field__PrivateImplementationDetails__6383AD8D3ACB5400C9BB99B6431A223D7472A06120C1C15C09458B0FCB291E2B_12ea348
             ,0);
  puVar3 = (undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x40);
  *puVar3 = uVar2;
  native_sub_4326e0(puVar3,uVar2);
  uVar2 = native_sub_432808(
                           _System_Collections_Generic_Dictionary_string__UIWidget__TypeInfo_12d23d0
                           );
  native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action_____ctor_cda13c
            (uVar2,_Method_System_Collections_Generic_Dictionary_string__UIWidget___ctor___12d9938);
  puVar3 = (undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x48);
  *puVar3 = uVar2;
  native_sub_4326e0(puVar3,uVar2);
  *(undefined4 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x60) = 0xffffffff;
  return;
}


