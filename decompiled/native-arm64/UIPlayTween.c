/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIPlayTween$$get_isActive @ 0xaf6e5c
 * bool UIPlayTween__get_isActive (UIPlayTween_o* __this, const MethodInfo* method); */

/* UIPlayTween$$get_isActive
   bool UIPlayTween__get_isActive (UIPlayTween_o* __this, const MethodInfo* method); */

bool native_UIPlayTween__get_isActive_af6e5c(long param_1)

{
  return 0 < *(int *)(param_1 + 100);
}



/* UIPlayTween$$Awake @ 0xaf6e6c
 * void UIPlayTween__Awake (UIPlayTween_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayTween$$Awake
   void UIPlayTween__Awake (UIPlayTween_o* __this, const MethodInfo* method); */

void native_UIPlayTween__Awake_af6e6c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if ((bRam000000000134207e & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134207e = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
  if ((uVar4 & 1) != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_EventDelegate__IsValid_deef08(uVar6,0);
    if ((uVar4 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x48) = 0;
      native_sub_4326e0((undefined8 *)(param_1 + 0x48),0);
      puVar5 = (undefined8 *)(param_1 + 0x50);
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



/* UIPlayTween$$Start @ 0xaf6f58
 * void UIPlayTween__Start (UIPlayTween_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00731c0c) */
/* WARNING: Removing unreachable block (ram,0x00731c10) */
/* WARNING: Removing unreachable block (ram,0x00731c18) */
/* WARNING: Removing unreachable block (ram,0x00731c20) */
/* WARNING: Removing unreachable block (ram,0x00731ca8) */
/* WARNING: Removing unreachable block (ram,0x00731cd4) */
/* WARNING: Removing unreachable block (ram,0x00731cd8) */
/* WARNING: Removing unreachable block (ram,0x00731d04) */
/* WARNING: Removing unreachable block (ram,0x00731d0c) */
/* WARNING: Removing unreachable block (ram,0x00731d14) */
/* WARNING: Removing unreachable block (ram,0x00731d28) */
/* WARNING: Removing unreachable block (ram,0x00731d2c) */
/* WARNING: Removing unreachable block (ram,0x00731d38) */
/* WARNING: Removing unreachable block (ram,0x00731d4c) */
/* WARNING: Removing unreachable block (ram,0x00731d5c) */
/* WARNING: Removing unreachable block (ram,0x00731d7c) */
/* WARNING: Removing unreachable block (ram,0x00731d84) */
/* WARNING: Removing unreachable block (ram,0x00731d8c) */
/* WARNING: Removing unreachable block (ram,0x00731da0) */
/* WARNING: Removing unreachable block (ram,0x00731db4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayTween$$Start
   void UIPlayTween__Start (UIPlayTween_o* __this, const MethodInfo* method); */

void native_UIPlayTween__Start_af6f58(long param_1)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  
  if ((bRam000000000134207f & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentsInChildren_UITweener____12e4b80);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponents_UITweener____12e4b40);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134207f = 1;
  }
  plVar5 = (long *)(param_1 + 0x18);
  lVar6 = *plVar5;
  *(undefined1 *)(param_1 + 0x60) = 1;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar6,0,0);
  if ((uVar3 & 1) != 0) {
    uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    native_sub_4326e0(plVar5,uVar4);
  }
  if (*(char *)(param_1 + 0x2e) == '\0') {
    return;
  }
  uVar3 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  lVar6 = *plVar5;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar6,0,0);
  if ((uVar3 & 1) == 0) {
    lVar6 = *plVar5;
  }
  else {
    lVar6 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  }
  if (lVar6 != 0) {
    if (*(char *)(param_1 + 0x3c) == '\0') {
      lVar6 = native_UnityEngine_GameObject__GetComponents_object__4a24c0
                        (lVar6,_Method_UnityEngine_GameObject_GetComponents_UITweener____12e4b40);
    }
    else {
      lVar6 = native_UnityEngine_GameObject__GetComponentsInChildren_Collider__4a2650
                        (lVar6,
                         _Method_UnityEngine_GameObject_GetComponentsInChildren_UITweener____12e4b80
                        );
    }
    plVar7 = (long *)(param_1 + 0x58);
    *plVar7 = lVar6;
    native_sub_4326e0(plVar7,lVar6);
    lVar6 = *plVar7;
    if (lVar6 != 0) {
      if (*(long *)(lVar6 + 0x18) == 0) {
        if (*(int *)(param_1 + 0x38) != 0) {
          lVar6 = *plVar5;
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          if ((bRam000000000133f5b1 & 1) == 0) {
            native_sub_43273c(&NGUITools_TypeInfo_12d53c8,0,0);
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
          uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar6,0);
          if ((uVar3 & 1) == 0) {
            return;
          }
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          lVar6 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar6,0);
          if (((*(ushort *)(_NGUITools_TypeInfo_12d53c8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
          }
          if ((bRam000000000133f5b0 & 1) == 0) {
            native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
            bRam000000000133f5b0 = 1;
          }
          if (lVar6 != 0) {
            lVar6 = native_UnityEngine_Component__get_gameObject_8da66c(lVar6,0);
            if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
              native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
            }
            if (lVar6 != 0) {
              if (pcRam0000000001340bf8 == (code *)0x0) {
                pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
              }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000001340bf8)(lVar6,0);
              return;
            }
          }
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
      }
      else {
        iVar8 = (int)*(long *)(lVar6 + 0x18);
        if (0 < iVar8) {
          iVar1 = *(int *)(param_1 + 0x28);
          uVar9 = 0;
          do {
            if (*(uint *)(lVar6 + 0x18) <= uVar9) {
              uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar4,0);
            }
            plVar5 = *(long **)(lVar6 + (long)(int)uVar9 * 8 + 0x20);
            if (plVar5 == (long *)0x0) break;
            if (*(int *)((long)plVar5 + 0x3c) == *(int *)(param_1 + 0x20)) {
              bVar2 = *(float *)(param_1 + 0x30) == 1.0;
              if (iVar1 == -1) {
                bVar2 = !bVar2;
              }
              (**(code **)(*plVar5 + 0x198))(plVar5,bVar2,*(undefined8 *)(*plVar5 + 0x1a0));
              fVar10 = *(float *)(param_1 + 0x30);
              if (iVar1 == -1) {
                fVar10 = 1.0 - *(float *)(param_1 + 0x30);
              }
              native_UITweener__Sample_948a44(fVar10,plVar5,1,0);
              native_UnityEngine_Behaviour__set_enabled_8d7b0c(plVar5,0,0);
            }
            uVar9 = uVar9 + 1;
            if (iVar8 <= (int)uVar9) {
              return;
            }
            lVar6 = *plVar7;
          } while (lVar6 != 0);
          goto LAB_00af7170;
        }
      }
      return;
    }
  }
LAB_00af7170:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPlayTween$$OnEnable @ 0xaf71e8
 * void UIPlayTween__OnEnable (UIPlayTween_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayTween$$OnEnable
   void UIPlayTween__OnEnable (UIPlayTween_o* __this, const MethodInfo* method); */

long * native_UIPlayTween__OnEnable_af71e8(long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  
  if ((bRam0000000001342080 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIToggle____12e2c28);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&Method_UIPlayTween_OnToggle___12e7878);
    bRam0000000001342080 = 1;
  }
  if (*(char *)(param_1 + 0x60) != '\0') {
    uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec(_UICamera_TypeInfo_12d6410);
    }
    uVar2 = native_UICamera__IsHighlighted_c92014(uVar3,0);
    native_UIPlayTween__OnHover_af74c0(param_1,uVar2 & 1);
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
  if (lVar6 != 0) {
    uVar2 = *(uint *)(param_1 + 0x24);
    if ((uVar2 == 5) || (uVar2 == 2)) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
        if (lVar6 == 0) goto LAB_00af74bc;
      }
      uVar7 = *(undefined8 *)(lVar6 + 0x50);
      uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      bVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar7,uVar3,0);
      uVar2 = *(uint *)(param_1 + 0x24);
      *(byte *)(param_1 + 0x68) = bVar1 & 1;
    }
    if ((uVar2 | 2) == 3) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
      if (lVar6 == 0) goto LAB_00af74bc;
      uVar7 = *(undefined8 *)(lVar6 + 0x48);
      uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      bVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar7,uVar3,0);
      *(byte *)(param_1 + 0x68) = bVar1 & 1;
    }
  }
  lVar6 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_UIToggle____12e2c28);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  plVar4 = (long *)native_UnityEngine_Object__op_Inequality_8d76fc(lVar6,0,0);
  if (((ulong)plVar4 & 1) == 0) {
    return plVar4;
  }
  if (lVar6 != 0) {
    lVar6 = *(long *)(lVar6 + 0x50);
    uVar3 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
    native_EventDelegate_Callback___ctor_54bd18
              (uVar3,param_1,_Method_UIPlayTween_OnToggle___12e7878,0);
    if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if ((bRam0000000001346ef3 & 1) == 0) {
      native_sub_43273c(&EventDelegate_TypeInfo_12d4590,uVar3,0);
      bRam0000000001346ef3 = 1;
    }
    if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if ((bRam0000000001346ef4 & 1) == 0) {
      native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
      native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
      native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
      native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Count___12dc760);
      native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Item___12dc768);
      native_sub_43273c(&StringLiteral_Attempting_to_add_a_callback_to_a_list_that_s_null_12ec670);
      bRam0000000001346ef4 = 1;
    }
    if (lVar6 == 0) {
      if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UnityEngine_Debug__LogWarning_8dca9c
                (_StringLiteral_Attempting_to_add_a_callback_to_a_list_that_s_null_12ec670,0);
      plVar4 = (long *)0x0;
    }
    else {
      uVar2 = *(uint *)(lVar6 + 0x18);
      if (0 < (int)uVar2) {
        uVar8 = 0;
        lVar9 = (long)(int)uVar2;
        while( true ) {
          if (uVar2 <= uVar8) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          plVar4 = *(long **)(*(long *)(lVar6 + 0x10) + uVar8 * 8 + 0x20);
          if ((plVar4 != (long *)0x0) &&
             (uVar5 = (**(code **)(*plVar4 + 0x138))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x140)),
             (uVar5 & 1) != 0)) {
            return plVar4;
          }
          uVar8 = uVar8 + 1;
          if (lVar9 <= (long)uVar8) break;
          uVar2 = *(uint *)(lVar6 + 0x18);
        }
      }
      plVar4 = (long *)native_sub_432808(_EventDelegate_TypeInfo_12d4590);
      native_System_Object___ctor_ad2798(plVar4,0);
      native_EventDelegate__Set_dedf08(plVar4,uVar3);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      *(undefined1 *)(plVar4 + 5) = 0;
      native_System_Collections_Generic_List_int_____Add_d40c00
                (lVar6,plVar4,_Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
    }
    return plVar4;
  }
LAB_00af74bc:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPlayTween$$OnDisable @ 0xaf771c
 * void UIPlayTween__OnDisable (UIPlayTween_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayTween$$OnDisable
   void UIPlayTween__OnDisable (UIPlayTween_o* __this, const MethodInfo* method); */

ulong native_UIPlayTween__OnDisable_af771c(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  if ((bRam0000000001342081 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIToggle____12e2c28);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&Method_UIPlayTween_OnToggle___12e7878);
    bRam0000000001342081 = 1;
  }
  lVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_UIToggle____12e2c28);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
  if ((uVar3 & 1) == 0) {
    return uVar3;
  }
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar2 = *(long *)(lVar2 + 0x50);
  uVar4 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
  native_EventDelegate_Callback___ctor_54bd18
            (uVar4,param_1,_Method_UIPlayTween_OnToggle___12e7878,0);
  if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam0000000001346ef7 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__RemoveAt___12dc758,
                      uVar4,0);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Count___12dc760);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Item___12dc768);
    bRam0000000001346ef7 = 1;
  }
  if ((lVar2 != 0) && (uVar1 = *(uint *)(lVar2 + 0x18), 0 < (int)uVar1)) {
    uVar3 = 0;
    lVar7 = (long)(int)uVar1;
    while( true ) {
      if (uVar1 <= uVar3) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      plVar5 = *(long **)(*(long *)(lVar2 + 0x10) + uVar3 * 8 + 0x20);
      if ((plVar5 != (long *)0x0) &&
         (uVar6 = (**(code **)(*plVar5 + 0x138))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0x140)),
         (uVar6 & 1) != 0)) {
        native_System_Collections_Generic_List_int_____RemoveAt_d42280
                  (lVar2,uVar3 & 0xffffffff,
                   _Method_System_Collections_Generic_List_EventDelegate__RemoveAt___12dc758);
        return 1;
      }
      uVar3 = uVar3 + 1;
      if (lVar7 <= (long)uVar3) break;
      uVar1 = *(uint *)(lVar2 + 0x18);
    }
  }
  return 0;
}



/* UIPlayTween$$OnDragOver @ 0xaf7854
 * void UIPlayTween__OnDragOver (UIPlayTween_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00af7580) */
/* WARNING: Removing unreachable block (ram,0x00af7594) */
/* WARNING: Removing unreachable block (ram,0x00af759c) */
/* WARNING: Removing unreachable block (ram,0x00af75a0) */
/* WARNING: Removing unreachable block (ram,0x00af75c0) */
/* WARNING: Removing unreachable block (ram,0x00af75c8) */
/* WARNING: Removing unreachable block (ram,0x00af75d0) */
/* WARNING: Removing unreachable block (ram,0x00af75e4) */
/* WARNING: Removing unreachable block (ram,0x00af75f0) */
/* WARNING: Removing unreachable block (ram,0x00af75f8) */
/* WARNING: Removing unreachable block (ram,0x00af75fc) */
/* WARNING: Removing unreachable block (ram,0x00af7608) */
/* WARNING: Removing unreachable block (ram,0x00af7710) */
/* WARNING: Removing unreachable block (ram,0x00af7624) */
/* WARNING: Removing unreachable block (ram,0x00af7638) */
/* WARNING: Removing unreachable block (ram,0x00af7644) */
/* WARNING: Removing unreachable block (ram,0x00af764c) */
/* WARNING: Removing unreachable block (ram,0x00af7654) */
/* WARNING: Removing unreachable block (ram,0x00af76a8) */
/* WARNING: Removing unreachable block (ram,0x00af7714) */
/* WARNING: Removing unreachable block (ram,0x00af773c) */
/* WARNING: Removing unreachable block (ram,0x00af7780) */
/* WARNING: Removing unreachable block (ram,0x00af77ac) */
/* WARNING: Removing unreachable block (ram,0x00af77b4) */
/* WARNING: Removing unreachable block (ram,0x00af77bc) */
/* WARNING: Removing unreachable block (ram,0x00af7840) */
/* WARNING: Removing unreachable block (ram,0x00af77d0) */
/* WARNING: Removing unreachable block (ram,0x00af7850) */
/* WARNING: Removing unreachable block (ram,0x00af77d4) */
/* WARNING: Removing unreachable block (ram,0x00af7818) */
/* WARNING: Removing unreachable block (ram,0x00af7820) */
/* WARNING: Removing unreachable block (ram,0x00af7824) */
/* WARNING: Removing unreachable block (ram,0x00def6c8) */
/* WARNING: Removing unreachable block (ram,0x00def6f4) */
/* WARNING: Removing unreachable block (ram,0x00def6f8) */
/* WARNING: Removing unreachable block (ram,0x00def704) */
/* WARNING: Removing unreachable block (ram,0x00def714) */
/* WARNING: Removing unreachable block (ram,0x00def71c) */
/* WARNING: Removing unreachable block (ram,0x00def724) */
/* WARNING: Removing unreachable block (ram,0x00def734) */
/* WARNING: Removing unreachable block (ram,0x00def768) */
/* WARNING: Removing unreachable block (ram,0x00def748) */
/* WARNING: Removing unreachable block (ram,0x00def710) */
/* WARNING: Removing unreachable block (ram,0x00def754) */
/* WARNING: Removing unreachable block (ram,0x00def758) */
/* WARNING: Removing unreachable block (ram,0x00af76b8) */
/* WARNING: Removing unreachable block (ram,0x00af7708) */
/* WARNING: Removing unreachable block (ram,0x00af76e4) */
/* WARNING: Removing unreachable block (ram,0x00731c0c) */
/* WARNING: Removing unreachable block (ram,0x00731c10) */
/* WARNING: Removing unreachable block (ram,0x00731c18) */
/* WARNING: Removing unreachable block (ram,0x00731c20) */
/* WARNING: Removing unreachable block (ram,0x00731ca8) */
/* WARNING: Removing unreachable block (ram,0x00731cd4) */
/* WARNING: Removing unreachable block (ram,0x00731cd8) */
/* WARNING: Removing unreachable block (ram,0x00731d04) */
/* WARNING: Removing unreachable block (ram,0x00731d0c) */
/* WARNING: Removing unreachable block (ram,0x00731d14) */
/* WARNING: Removing unreachable block (ram,0x00731d28) */
/* WARNING: Removing unreachable block (ram,0x00731d2c) */
/* WARNING: Removing unreachable block (ram,0x00731d38) */
/* WARNING: Removing unreachable block (ram,0x00731d4c) */
/* WARNING: Removing unreachable block (ram,0x00731d5c) */
/* WARNING: Removing unreachable block (ram,0x00731d7c) */
/* WARNING: Removing unreachable block (ram,0x00731d84) */
/* WARNING: Removing unreachable block (ram,0x00731d8c) */
/* WARNING: Removing unreachable block (ram,0x00731da0) */
/* WARNING: Removing unreachable block (ram,0x00731db4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayTween$$OnDragOver
   void UIPlayTween__OnDragOver (UIPlayTween_o* __this, const MethodInfo* method); */

ulong native_UIPlayTween__OnDragOver_af7854(ulong param_1)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  uint uVar10;
  
  if (*(int *)(param_1 + 0x24) != 1) {
    return param_1;
  }
  if ((bRam0000000001342082 & 1) == 0) {
    native_sub_43273c(&UICamera_BoolDelegate_TypeInfo_12d79e0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&Method_UIPlayTween_CustomHoverListener___12e7868);
    bRam0000000001342082 = 1;
  }
  uVar3 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if ((uVar3 & 1) == 0) {
    return uVar3;
  }
  iVar9 = *(int *)(param_1 + 0x24);
  if ((iVar9 != 1) && (iVar9 != 3)) {
    return uVar3;
  }
  if (*(char *)(param_1 + 0x68) != '\0') {
    return uVar3;
  }
  *(bool *)(param_1 + 0x68) = iVar9 == 1;
  if ((bRam0000000001342086 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentsInChildren_UITweener____12e4b80);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponents_UITweener____12e4b40);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&Method_UIPlayTween_OnFinished___12e7870);
    bRam0000000001342086 = 1;
  }
  *(undefined4 *)(param_1 + 100) = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
  if ((uVar3 & 1) == 0) {
    lVar4 = *(long *)(param_1 + 0x18);
  }
  else {
    lVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_NGUITools__GetActive_72d0d4(lVar4,0);
  if ((uVar3 & 1) == 0) {
    if (*(int *)(param_1 + 0x34) != 1) {
      return uVar3;
    }
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_NGUITools__SetActive_731af8(lVar4,1,0);
  }
  if (lVar4 != 0) {
    if (*(char *)(param_1 + 0x3c) == '\0') {
      lVar5 = native_UnityEngine_GameObject__GetComponents_object__4a24c0
                        (lVar4,_Method_UnityEngine_GameObject_GetComponents_UITweener____12e4b40);
    }
    else {
      lVar5 = native_UnityEngine_GameObject__GetComponentsInChildren_Collider__4a2650
                        (lVar4,
                         _Method_UnityEngine_GameObject_GetComponentsInChildren_UITweener____12e4b80
                        );
    }
    plVar7 = (long *)(param_1 + 0x58);
    *plVar7 = lVar5;
    uVar3 = native_sub_4326e0(plVar7,lVar5);
    lVar5 = *plVar7;
    if (lVar5 != 0) {
      if (*(long *)(lVar5 + 0x18) == 0) {
        if (*(int *)(param_1 + 0x38) != 0) {
          lVar4 = *(long *)(param_1 + 0x18);
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          if ((bRam000000000133f5b1 & 1) == 0) {
            native_sub_43273c(&NGUITools_TypeInfo_12d53c8,0,0);
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
          uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar4,0);
          if ((uVar3 & 1) == 0) {
            return uVar3;
          }
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          lVar4 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar4,0);
          if (((*(ushort *)(_NGUITools_TypeInfo_12d53c8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
          }
          if ((bRam000000000133f5b0 & 1) == 0) {
            native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
            bRam000000000133f5b0 = 1;
          }
          if (lVar4 != 0) {
            lVar4 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
            if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
              native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
            }
            if (lVar4 != 0) {
              if (pcRam0000000001340bf8 == (code *)0x0) {
                pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
              }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar3 = (*pcRam0000000001340bf8)(lVar4,0);
              return uVar3;
            }
          }
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
      }
      else {
        bVar2 = *(int *)(param_1 + 0x28) != -1;
        iVar9 = (int)*(long *)(lVar5 + 0x18);
        if (0 < iVar9) {
          uVar10 = 0;
          bVar1 = false;
          do {
            if (*(uint *)(lVar5 + 0x18) <= uVar10) {
              uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar6,0);
            }
            plVar8 = *(long **)(lVar5 + (long)(int)uVar10 * 8 + 0x20);
            if (plVar8 == (long *)0x0) break;
            if (*(int *)((long)plVar8 + 0x3c) == *(int *)(param_1 + 0x20)) {
              if (bVar1) {
                bVar1 = true;
              }
              else {
                if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar3 = native_NGUITools__GetActive_72d0d4(lVar4,0);
                if ((uVar3 & 1) == 0) {
                  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  bVar1 = true;
                  native_NGUITools__SetActive_731af8(lVar4,1,0);
                }
                else {
                  bVar1 = false;
                }
              }
              *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
              if (*(int *)(param_1 + 0x28) == 0) {
                lVar5 = plVar8[9];
                uVar6 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
                native_EventDelegate_Callback___ctor_54bd18
                          (uVar6,param_1,_Method_UIPlayTween_OnFinished___12e7870,0);
                if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                native_EventDelegate__Add_def180(lVar5,uVar6,1,0);
                uVar3 = native_UITweener__Toggle_94901c(plVar8,0);
              }
              else {
                if ((*(char *)(param_1 + 0x2c) != '\0') ||
                   ((*(char *)(param_1 + 0x2d) != '\0' &&
                    (uVar3 = native_UnityEngine_Behaviour__get_enabled_8d7acc(plVar8,0),
                    (uVar3 & 1) == 0)))) {
                  (**(code **)(*plVar8 + 0x198))(plVar8,bVar2,*(undefined8 *)(*plVar8 + 0x1a0));
                  native_UITweener__ResetToBeginning_948fd4(plVar8,0);
                }
                lVar5 = plVar8[9];
                uVar6 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
                native_EventDelegate_Callback___ctor_54bd18
                          (uVar6,param_1,_Method_UIPlayTween_OnFinished___12e7870,0);
                if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                native_EventDelegate__Add_def180(lVar5,uVar6,1,0);
                uVar3 = (**(code **)(*plVar8 + 0x198))
                                  (plVar8,bVar2,*(undefined8 *)(*plVar8 + 0x1a0));
              }
            }
            uVar10 = uVar10 + 1;
            if (iVar9 <= (int)uVar10) {
              return uVar3;
            }
            lVar5 = *plVar7;
          } while (lVar5 != 0);
          goto LAB_00af7ca0;
        }
      }
      return uVar3;
    }
  }
LAB_00af7ca0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPlayTween$$OnHover @ 0xaf74c0
 * void UIPlayTween__OnHover (UIPlayTween_o* __this, bool isOver, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00731c0c) */
/* WARNING: Removing unreachable block (ram,0x00731c10) */
/* WARNING: Removing unreachable block (ram,0x00731c18) */
/* WARNING: Removing unreachable block (ram,0x00731c20) */
/* WARNING: Removing unreachable block (ram,0x00731ca8) */
/* WARNING: Removing unreachable block (ram,0x00731cd4) */
/* WARNING: Removing unreachable block (ram,0x00731cd8) */
/* WARNING: Removing unreachable block (ram,0x00731d04) */
/* WARNING: Removing unreachable block (ram,0x00731d0c) */
/* WARNING: Removing unreachable block (ram,0x00731d14) */
/* WARNING: Removing unreachable block (ram,0x00731d28) */
/* WARNING: Removing unreachable block (ram,0x00731d2c) */
/* WARNING: Removing unreachable block (ram,0x00731d38) */
/* WARNING: Removing unreachable block (ram,0x00731d4c) */
/* WARNING: Removing unreachable block (ram,0x00731d5c) */
/* WARNING: Removing unreachable block (ram,0x00731d7c) */
/* WARNING: Removing unreachable block (ram,0x00731d84) */
/* WARNING: Removing unreachable block (ram,0x00731d8c) */
/* WARNING: Removing unreachable block (ram,0x00731da0) */
/* WARNING: Removing unreachable block (ram,0x00731db4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayTween$$OnHover
   void UIPlayTween__OnHover (UIPlayTween_o* __this, bool isOver, const MethodInfo* method); */

ulong native_UIPlayTween__OnHover_af74c0(long param_1,byte param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  uint uVar12;
  
  if ((bRam0000000001342082 & 1) == 0) {
    native_sub_43273c(&UICamera_BoolDelegate_TypeInfo_12d79e0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&Method_UIPlayTween_CustomHoverListener___12e7868);
    bRam0000000001342082 = 1;
  }
  uVar2 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if ((uVar2 & 1) == 0) {
    return uVar2;
  }
  iVar11 = *(int *)(param_1 + 0x24);
  if ((iVar11 != 1) && ((iVar11 == 3 & param_2) == 0)) {
    if (iVar11 != 4) {
      return uVar2;
    }
    if ((param_2 & 1) != 0) {
      return uVar2;
    }
  }
  if (((*(char *)(param_1 + 0x68) != '\0' ^ param_2) & 1) == 0) {
    return uVar2;
  }
  if ((param_2 & 1) == 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar8 = native_UICamera__get_hoveredObject_c9114c(0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
    if ((uVar2 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar3 = native_UICamera__get_hoveredObject_c9114c(0);
      if (lVar3 == 0) {
LAB_00af7710:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      lVar3 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0);
      uVar8 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
      if (lVar3 == 0) goto LAB_00af7710;
      uVar2 = native_UnityEngine_Transform__IsChildOf_772d5c(lVar3,uVar8,0);
      if ((uVar2 & 1) != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar7 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x110);
        uVar8 = native_sub_432808(_UICamera_BoolDelegate_TypeInfo_12d79e0);
        native_UICamera_BoolDelegate___ctor_54ffc4
                  (uVar8,param_1,_Method_UIPlayTween_CustomHoverListener___12e7868,0);
        plVar9 = (long *)native_System_Delegate__Combine_a6cf00(uVar7,uVar8,0);
        lVar3 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        if ((plVar9 != (long *)0x0) && (*plVar9 != _UICamera_BoolDelegate_TypeInfo_12d79e0)) {
          uVar8 = native_sub_432b04(plVar9);
          if ((bRam0000000001342081 & 1) == 0) {
            native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
            native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIToggle____12e2c28);
            native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
            native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
            native_sub_43273c(&Method_UIPlayTween_OnToggle___12e7878);
            bRam0000000001342081 = 1;
          }
          lVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                            (uVar8,_Method_UnityEngine_Component_GetComponent_UIToggle____12e2c28);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
          }
          uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
          if ((uVar2 & 1) != 0) {
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            lVar3 = *(long *)(lVar3 + 0x50);
            uVar7 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
            native_EventDelegate_Callback___ctor_54bd18
                      (uVar7,uVar8,_Method_UIPlayTween_OnToggle___12e7878,0);
            if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            if ((bRam0000000001346ef7 & 1) == 0) {
              native_sub_43273c(&
                                Method_System_Collections_Generic_List_EventDelegate__RemoveAt___12dc758
                                ,uVar7,0);
              native_sub_43273c(&
                                Method_System_Collections_Generic_List_EventDelegate__get_Count___12dc760
                               );
              native_sub_43273c(&
                                Method_System_Collections_Generic_List_EventDelegate__get_Item___12dc768
                               );
              bRam0000000001346ef7 = 1;
            }
            if ((lVar3 != 0) && (uVar12 = *(uint *)(lVar3 + 0x18), 0 < (int)uVar12)) {
              uVar2 = 0;
              lVar4 = (long)(int)uVar12;
              while( true ) {
                if (uVar12 <= uVar2) {
                  native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
                }
                plVar9 = *(long **)(*(long *)(lVar3 + 0x10) + uVar2 * 8 + 0x20);
                if ((plVar9 != (long *)0x0) &&
                   (uVar5 = (**(code **)(*plVar9 + 0x138))
                                      (plVar9,uVar7,*(undefined8 *)(*plVar9 + 0x140)),
                   (uVar5 & 1) != 0)) {
                  native_System_Collections_Generic_List_int_____RemoveAt_d42280
                            (lVar3,uVar2 & 0xffffffff,
                             _Method_System_Collections_Generic_List_EventDelegate__RemoveAt___12dc758
                            );
                  return 1;
                }
                uVar2 = uVar2 + 1;
                if (lVar4 <= (long)uVar2) break;
                uVar12 = *(uint *)(lVar3 + 0x18);
              }
            }
            return 0;
          }
          return uVar2;
        }
        *(long **)(lVar3 + 0x110) = plVar9;
        uVar2 = native_sub_4326e0(lVar3 + 0x110,plVar9);
        if (*(char *)(param_1 + 0x68) != '\0') {
          return uVar2;
        }
        iVar11 = *(int *)(param_1 + 0x24);
        goto LAB_00af7570;
      }
    }
    bVar6 = 0;
    bVar1 = false;
  }
  else {
LAB_00af7570:
    bVar1 = iVar11 == 1;
    bVar6 = 1;
  }
  *(bool *)(param_1 + 0x68) = bVar1;
  if ((bRam0000000001342086 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentsInChildren_UITweener____12e4b80);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponents_UITweener____12e4b40);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&Method_UIPlayTween_OnFinished___12e7870);
    bRam0000000001342086 = 1;
  }
  *(undefined4 *)(param_1 + 100) = 0;
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar8,0,0);
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x18);
  }
  else {
    lVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_NGUITools__GetActive_72d0d4(lVar3,0);
  if ((uVar2 & 1) == 0) {
    if (*(int *)(param_1 + 0x34) != 1) {
      return uVar2;
    }
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_NGUITools__SetActive_731af8(lVar3,1,0);
  }
  if (lVar3 != 0) {
    if (*(char *)(param_1 + 0x3c) == '\0') {
      lVar4 = native_UnityEngine_GameObject__GetComponents_object__4a24c0
                        (lVar3,_Method_UnityEngine_GameObject_GetComponents_UITweener____12e4b40);
    }
    else {
      lVar4 = native_UnityEngine_GameObject__GetComponentsInChildren_Collider__4a2650
                        (lVar3,
                         _Method_UnityEngine_GameObject_GetComponentsInChildren_UITweener____12e4b80
                        );
    }
    plVar9 = (long *)(param_1 + 0x58);
    *plVar9 = lVar4;
    uVar2 = native_sub_4326e0(plVar9,lVar4);
    lVar4 = *plVar9;
    if (lVar4 != 0) {
      if (*(long *)(lVar4 + 0x18) == 0) {
        if (*(int *)(param_1 + 0x38) != 0) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          if ((bRam000000000133f5b1 & 1) == 0) {
            native_sub_43273c(&NGUITools_TypeInfo_12d53c8,0,0);
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
          uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar3,0);
          if ((uVar2 & 1) == 0) {
            return uVar2;
          }
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          lVar3 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0);
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
              uVar2 = (*pcRam0000000001340bf8)(lVar3,0);
              return uVar2;
            }
          }
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
      }
      else {
        iVar11 = (int)*(long *)(lVar4 + 0x18);
        if (0 < iVar11) {
          uVar12 = 0;
          bVar1 = false;
          bVar6 = *(int *)(param_1 + 0x28) == -1 ^ bVar6;
          do {
            if (*(uint *)(lVar4 + 0x18) <= uVar12) {
              uVar8 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar8,0);
            }
            plVar10 = *(long **)(lVar4 + (long)(int)uVar12 * 8 + 0x20);
            if (plVar10 == (long *)0x0) break;
            if (*(int *)((long)plVar10 + 0x3c) == *(int *)(param_1 + 0x20)) {
              if (bVar1) {
                bVar1 = true;
              }
              else {
                if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar2 = native_NGUITools__GetActive_72d0d4(lVar3,0);
                if ((uVar2 & 1) == 0) {
                  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  bVar1 = true;
                  native_NGUITools__SetActive_731af8(lVar3,1,0);
                }
                else {
                  bVar1 = false;
                }
              }
              *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
              if (*(int *)(param_1 + 0x28) == 0) {
                lVar4 = plVar10[9];
                uVar8 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
                native_EventDelegate_Callback___ctor_54bd18
                          (uVar8,param_1,_Method_UIPlayTween_OnFinished___12e7870,0);
                if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                native_EventDelegate__Add_def180(lVar4,uVar8,1,0);
                uVar2 = native_UITweener__Toggle_94901c(plVar10,0);
              }
              else {
                if ((*(char *)(param_1 + 0x2c) != '\0') ||
                   ((*(char *)(param_1 + 0x2d) != '\0' &&
                    (uVar2 = native_UnityEngine_Behaviour__get_enabled_8d7acc(plVar10,0),
                    (uVar2 & 1) == 0)))) {
                  (**(code **)(*plVar10 + 0x198))(plVar10,bVar6,*(undefined8 *)(*plVar10 + 0x1a0));
                  native_UITweener__ResetToBeginning_948fd4(plVar10,0);
                }
                lVar4 = plVar10[9];
                uVar8 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
                native_EventDelegate_Callback___ctor_54bd18
                          (uVar8,param_1,_Method_UIPlayTween_OnFinished___12e7870,0);
                if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                native_EventDelegate__Add_def180(lVar4,uVar8,1,0);
                uVar2 = (**(code **)(*plVar10 + 0x198))
                                  (plVar10,bVar6,*(undefined8 *)(*plVar10 + 0x1a0));
              }
            }
            uVar12 = uVar12 + 1;
            if (iVar11 <= (int)uVar12) {
              return uVar2;
            }
            lVar4 = *plVar9;
          } while (lVar4 != 0);
          goto LAB_00af7ca0;
        }
      }
      return uVar2;
    }
  }
LAB_00af7ca0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPlayTween$$CustomHoverListener @ 0xaf7cb0
 * void UIPlayTween__CustomHoverListener (UIPlayTween_o* __this, UnityEngine_GameObject_o* go, bool isOver, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayTween$$CustomHoverListener
   void UIPlayTween__CustomHoverListener (UIPlayTween_o* __this, UnityEngine_GameObject_o* go, bool
   isOver, const MethodInfo* method); */

void native_UIPlayTween__CustomHoverListener_af7cb0(undefined8 param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  
  if ((bRam0000000001342083 & 1) == 0) {
    native_sub_43273c(&UICamera_BoolDelegate_TypeInfo_12d79e0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&Method_UIPlayTween_CustomHoverListener___12e7868);
    bRam0000000001342083 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(param_1,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
  if ((uVar4 & 1) != 0) {
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(param_2,0);
    if ((uVar4 & 1) != 0) {
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(param_2,uVar5,0);
      if ((uVar4 & 1) != 0) {
        return;
      }
      if (param_2 == 0) goto LAB_00af7ed8;
      lVar6 = native_UnityEngine_GameObject__get_transform_8de5c8(param_2,0);
      uVar5 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
      if (lVar6 == 0) goto LAB_00af7ed8;
      uVar4 = native_UnityEngine_Transform__IsChildOf_772d5c(lVar6,uVar5,0);
      if ((uVar4 & 1) != 0) {
        return;
      }
    }
  }
  native_UIPlayTween__OnHover_af74c0(param_1,0);
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar8 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x110);
  uVar5 = native_sub_432808(_UICamera_BoolDelegate_TypeInfo_12d79e0);
  native_UICamera_BoolDelegate___ctor_54ffc4
            (uVar5,param_1,_Method_UIPlayTween_CustomHoverListener___12e7868,0);
  plVar7 = (long *)native_System_Delegate__Remove_a6d1c0(uVar8,uVar5,0);
  lVar6 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
  if ((plVar7 == (long *)0x0) || (*plVar7 == _UICamera_BoolDelegate_TypeInfo_12d79e0)) {
    *(long **)(lVar6 + 0x110) = plVar7;
    uVar4 = lVar6 + 0x110;
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)((uVar4 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << (uVar4 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  native_sub_432b04(plVar7);
LAB_00af7ed8:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPlayTween$$OnDragOut @ 0xaf7edc
 * void UIPlayTween__OnDragOut (UIPlayTween_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00731c0c) */
/* WARNING: Removing unreachable block (ram,0x00731c10) */
/* WARNING: Removing unreachable block (ram,0x00731c18) */
/* WARNING: Removing unreachable block (ram,0x00731c20) */
/* WARNING: Removing unreachable block (ram,0x00731ca8) */
/* WARNING: Removing unreachable block (ram,0x00731cd4) */
/* WARNING: Removing unreachable block (ram,0x00731cd8) */
/* WARNING: Removing unreachable block (ram,0x00731d04) */
/* WARNING: Removing unreachable block (ram,0x00731d0c) */
/* WARNING: Removing unreachable block (ram,0x00731d14) */
/* WARNING: Removing unreachable block (ram,0x00731d28) */
/* WARNING: Removing unreachable block (ram,0x00731d2c) */
/* WARNING: Removing unreachable block (ram,0x00731d38) */
/* WARNING: Removing unreachable block (ram,0x00731d4c) */
/* WARNING: Removing unreachable block (ram,0x00731d5c) */
/* WARNING: Removing unreachable block (ram,0x00731d7c) */
/* WARNING: Removing unreachable block (ram,0x00731d84) */
/* WARNING: Removing unreachable block (ram,0x00731d8c) */
/* WARNING: Removing unreachable block (ram,0x00731da0) */
/* WARNING: Removing unreachable block (ram,0x00731db4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayTween$$OnDragOut
   void UIPlayTween__OnDragOut (UIPlayTween_o* __this, const MethodInfo* method); */

void native_UIPlayTween__OnDragOut_af7edc(long param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  uint uVar10;
  
  uVar5 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if (((uVar5 & 1) == 0) || (*(char *)(param_1 + 0x68) == '\0')) {
    return;
  }
  *(undefined1 *)(param_1 + 0x68) = 0;
  if ((bRam0000000001342086 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentsInChildren_UITweener____12e4b80);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponents_UITweener____12e4b40);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&Method_UIPlayTween_OnFinished___12e7870);
    bRam0000000001342086 = 1;
  }
  *(undefined4 *)(param_1 + 100) = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
  if ((uVar5 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x18);
  }
  else {
    lVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_NGUITools__GetActive_72d0d4(lVar3,0);
  if ((uVar5 & 1) == 0) {
    if (*(int *)(param_1 + 0x34) != 1) {
      return;
    }
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_NGUITools__SetActive_731af8(lVar3,1,0);
  }
  if (lVar3 != 0) {
    if (*(char *)(param_1 + 0x3c) == '\0') {
      lVar4 = native_UnityEngine_GameObject__GetComponents_object__4a24c0
                        (lVar3,_Method_UnityEngine_GameObject_GetComponents_UITweener____12e4b40);
    }
    else {
      lVar4 = native_UnityEngine_GameObject__GetComponentsInChildren_Collider__4a2650
                        (lVar3,
                         _Method_UnityEngine_GameObject_GetComponentsInChildren_UITweener____12e4b80
                        );
    }
    plVar7 = (long *)(param_1 + 0x58);
    *plVar7 = lVar4;
    native_sub_4326e0(plVar7,lVar4);
    lVar4 = *plVar7;
    if (lVar4 != 0) {
      if (*(long *)(lVar4 + 0x18) == 0) {
        if (*(int *)(param_1 + 0x38) != 0) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          if ((bRam000000000133f5b1 & 1) == 0) {
            native_sub_43273c(&NGUITools_TypeInfo_12d53c8,0,0);
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
          uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar3,0);
          if ((uVar5 & 1) != 0) {
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            lVar3 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0);
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
          return;
        }
      }
      else {
        bVar2 = *(int *)(param_1 + 0x28) == -1;
        iVar9 = (int)*(long *)(lVar4 + 0x18);
        if (0 < iVar9) {
          uVar10 = 0;
          bVar1 = false;
          do {
            if (*(uint *)(lVar4 + 0x18) <= uVar10) {
              uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar6,0);
            }
            plVar8 = *(long **)(lVar4 + (long)(int)uVar10 * 8 + 0x20);
            if (plVar8 == (long *)0x0) break;
            if (*(int *)((long)plVar8 + 0x3c) == *(int *)(param_1 + 0x20)) {
              if (bVar1) {
                bVar1 = true;
              }
              else {
                if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar5 = native_NGUITools__GetActive_72d0d4(lVar3,0);
                if ((uVar5 & 1) == 0) {
                  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  bVar1 = true;
                  native_NGUITools__SetActive_731af8(lVar3,1,0);
                }
                else {
                  bVar1 = false;
                }
              }
              *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
              if (*(int *)(param_1 + 0x28) == 0) {
                lVar4 = plVar8[9];
                uVar6 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
                native_EventDelegate_Callback___ctor_54bd18
                          (uVar6,param_1,_Method_UIPlayTween_OnFinished___12e7870,0);
                if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                native_EventDelegate__Add_def180(lVar4,uVar6,1,0);
                native_UITweener__Toggle_94901c(plVar8,0);
              }
              else {
                if ((*(char *)(param_1 + 0x2c) != '\0') ||
                   ((*(char *)(param_1 + 0x2d) != '\0' &&
                    (uVar5 = native_UnityEngine_Behaviour__get_enabled_8d7acc(plVar8,0),
                    (uVar5 & 1) == 0)))) {
                  (**(code **)(*plVar8 + 0x198))(plVar8,bVar2,*(undefined8 *)(*plVar8 + 0x1a0));
                  native_UITweener__ResetToBeginning_948fd4(plVar8,0);
                }
                lVar4 = plVar8[9];
                uVar6 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
                native_EventDelegate_Callback___ctor_54bd18
                          (uVar6,param_1,_Method_UIPlayTween_OnFinished___12e7870,0);
                if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                native_EventDelegate__Add_def180(lVar4,uVar6,1,0);
                (**(code **)(*plVar8 + 0x198))(plVar8,bVar2,*(undefined8 *)(*plVar8 + 0x1a0));
              }
            }
            uVar10 = uVar10 + 1;
            if (iVar9 <= (int)uVar10) {
              return;
            }
            lVar4 = *plVar7;
          } while (lVar4 != 0);
          goto LAB_00af7ca0;
        }
      }
      return;
    }
  }
LAB_00af7ca0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPlayTween$$OnPress @ 0xaf7f24
 * void UIPlayTween__OnPress (UIPlayTween_o* __this, bool isPressed, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00731c0c) */
/* WARNING: Removing unreachable block (ram,0x00731c10) */
/* WARNING: Removing unreachable block (ram,0x00731c18) */
/* WARNING: Removing unreachable block (ram,0x00731c20) */
/* WARNING: Removing unreachable block (ram,0x00731ca8) */
/* WARNING: Removing unreachable block (ram,0x00731cd4) */
/* WARNING: Removing unreachable block (ram,0x00731cd8) */
/* WARNING: Removing unreachable block (ram,0x00731d04) */
/* WARNING: Removing unreachable block (ram,0x00731d0c) */
/* WARNING: Removing unreachable block (ram,0x00731d14) */
/* WARNING: Removing unreachable block (ram,0x00731d28) */
/* WARNING: Removing unreachable block (ram,0x00731d2c) */
/* WARNING: Removing unreachable block (ram,0x00731d38) */
/* WARNING: Removing unreachable block (ram,0x00731d4c) */
/* WARNING: Removing unreachable block (ram,0x00731d5c) */
/* WARNING: Removing unreachable block (ram,0x00731d7c) */
/* WARNING: Removing unreachable block (ram,0x00731d84) */
/* WARNING: Removing unreachable block (ram,0x00731d8c) */
/* WARNING: Removing unreachable block (ram,0x00731da0) */
/* WARNING: Removing unreachable block (ram,0x00731db4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayTween$$OnPress
   void UIPlayTween__OnPress (UIPlayTween_o* __this, bool isPressed, const MethodInfo* method); */

void native_UIPlayTween__OnPress_af7f24(long param_1,byte param_2)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  uint uVar10;
  
  uVar5 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  iVar9 = *(int *)(param_1 + 0x24);
  if ((iVar9 != 2) && ((iVar9 == 5 & param_2) == 0)) {
    if (iVar9 != 6) {
      return;
    }
    if ((param_2 & 1) != 0) {
      return;
    }
  }
  *(byte *)(param_1 + 0x68) = iVar9 == 2 & param_2;
  if ((bRam0000000001342086 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentsInChildren_UITweener____12e4b80);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponents_UITweener____12e4b40);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&Method_UIPlayTween_OnFinished___12e7870);
    bRam0000000001342086 = 1;
  }
  *(undefined4 *)(param_1 + 100) = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
  if ((uVar5 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x18);
  }
  else {
    lVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_NGUITools__GetActive_72d0d4(lVar3,0);
  if ((uVar5 & 1) == 0) {
    if (*(int *)(param_1 + 0x34) != 1) {
      return;
    }
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_NGUITools__SetActive_731af8(lVar3,1,0);
  }
  if (lVar3 != 0) {
    if (*(char *)(param_1 + 0x3c) == '\0') {
      lVar4 = native_UnityEngine_GameObject__GetComponents_object__4a24c0
                        (lVar3,_Method_UnityEngine_GameObject_GetComponents_UITweener____12e4b40);
    }
    else {
      lVar4 = native_UnityEngine_GameObject__GetComponentsInChildren_Collider__4a2650
                        (lVar3,
                         _Method_UnityEngine_GameObject_GetComponentsInChildren_UITweener____12e4b80
                        );
    }
    plVar7 = (long *)(param_1 + 0x58);
    *plVar7 = lVar4;
    native_sub_4326e0(plVar7,lVar4);
    lVar4 = *plVar7;
    if (lVar4 != 0) {
      if (*(long *)(lVar4 + 0x18) == 0) {
        if (*(int *)(param_1 + 0x38) != 0) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          if ((bRam000000000133f5b1 & 1) == 0) {
            native_sub_43273c(&NGUITools_TypeInfo_12d53c8,0,0);
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
          uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar3,0);
          if ((uVar5 & 1) != 0) {
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            lVar3 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0);
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
          return;
        }
      }
      else {
        iVar9 = (int)*(long *)(lVar4 + 0x18);
        if (0 < iVar9) {
          uVar10 = 0;
          bVar2 = false;
          bVar1 = *(int *)(param_1 + 0x28) == -1 ^ param_2 & 1;
          do {
            if (*(uint *)(lVar4 + 0x18) <= uVar10) {
              uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar6,0);
            }
            plVar8 = *(long **)(lVar4 + (long)(int)uVar10 * 8 + 0x20);
            if (plVar8 == (long *)0x0) break;
            if (*(int *)((long)plVar8 + 0x3c) == *(int *)(param_1 + 0x20)) {
              if (bVar2) {
                bVar2 = true;
              }
              else {
                if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar5 = native_NGUITools__GetActive_72d0d4(lVar3,0);
                if ((uVar5 & 1) == 0) {
                  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  bVar2 = true;
                  native_NGUITools__SetActive_731af8(lVar3,1,0);
                }
                else {
                  bVar2 = false;
                }
              }
              *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
              if (*(int *)(param_1 + 0x28) == 0) {
                lVar4 = plVar8[9];
                uVar6 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
                native_EventDelegate_Callback___ctor_54bd18
                          (uVar6,param_1,_Method_UIPlayTween_OnFinished___12e7870,0);
                if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                native_EventDelegate__Add_def180(lVar4,uVar6,1,0);
                native_UITweener__Toggle_94901c(plVar8,0);
              }
              else {
                if ((*(char *)(param_1 + 0x2c) != '\0') ||
                   ((*(char *)(param_1 + 0x2d) != '\0' &&
                    (uVar5 = native_UnityEngine_Behaviour__get_enabled_8d7acc(plVar8,0),
                    (uVar5 & 1) == 0)))) {
                  (**(code **)(*plVar8 + 0x198))(plVar8,bVar1,*(undefined8 *)(*plVar8 + 0x1a0));
                  native_UITweener__ResetToBeginning_948fd4(plVar8,0);
                }
                lVar4 = plVar8[9];
                uVar6 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
                native_EventDelegate_Callback___ctor_54bd18
                          (uVar6,param_1,_Method_UIPlayTween_OnFinished___12e7870,0);
                if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                native_EventDelegate__Add_def180(lVar4,uVar6,1,0);
                (**(code **)(*plVar8 + 0x198))(plVar8,bVar1,*(undefined8 *)(*plVar8 + 0x1a0));
              }
            }
            uVar10 = uVar10 + 1;
            if (iVar9 <= (int)uVar10) {
              return;
            }
            lVar4 = *plVar7;
          } while (lVar4 != 0);
          goto LAB_00af7ca0;
        }
      }
      return;
    }
  }
LAB_00af7ca0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPlayTween$$OnClick @ 0xaf7f9c
 * void UIPlayTween__OnClick (UIPlayTween_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00731c0c) */
/* WARNING: Removing unreachable block (ram,0x00731c10) */
/* WARNING: Removing unreachable block (ram,0x00731c18) */
/* WARNING: Removing unreachable block (ram,0x00731c20) */
/* WARNING: Removing unreachable block (ram,0x00731ca8) */
/* WARNING: Removing unreachable block (ram,0x00731cd4) */
/* WARNING: Removing unreachable block (ram,0x00731cd8) */
/* WARNING: Removing unreachable block (ram,0x00731d04) */
/* WARNING: Removing unreachable block (ram,0x00731d0c) */
/* WARNING: Removing unreachable block (ram,0x00731d14) */
/* WARNING: Removing unreachable block (ram,0x00731d28) */
/* WARNING: Removing unreachable block (ram,0x00731d2c) */
/* WARNING: Removing unreachable block (ram,0x00731d38) */
/* WARNING: Removing unreachable block (ram,0x00731d4c) */
/* WARNING: Removing unreachable block (ram,0x00731d5c) */
/* WARNING: Removing unreachable block (ram,0x00731d7c) */
/* WARNING: Removing unreachable block (ram,0x00731d84) */
/* WARNING: Removing unreachable block (ram,0x00731d8c) */
/* WARNING: Removing unreachable block (ram,0x00731da0) */
/* WARNING: Removing unreachable block (ram,0x00731db4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayTween$$OnClick
   void UIPlayTween__OnClick (UIPlayTween_o* __this, const MethodInfo* method); */

void native_UIPlayTween__OnClick_af7f9c(long param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  uint uVar10;
  
  uVar5 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if (((uVar5 & 1) == 0) || (*(int *)(param_1 + 0x24) != 0)) {
    return;
  }
  if ((bRam0000000001342086 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentsInChildren_UITweener____12e4b80);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponents_UITweener____12e4b40);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&Method_UIPlayTween_OnFinished___12e7870);
    bRam0000000001342086 = 1;
  }
  *(undefined4 *)(param_1 + 100) = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
  if ((uVar5 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x18);
  }
  else {
    lVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_NGUITools__GetActive_72d0d4(lVar3,0);
  if ((uVar5 & 1) == 0) {
    if (*(int *)(param_1 + 0x34) != 1) {
      return;
    }
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_NGUITools__SetActive_731af8(lVar3,1,0);
  }
  if (lVar3 != 0) {
    if (*(char *)(param_1 + 0x3c) == '\0') {
      lVar4 = native_UnityEngine_GameObject__GetComponents_object__4a24c0
                        (lVar3,_Method_UnityEngine_GameObject_GetComponents_UITweener____12e4b40);
    }
    else {
      lVar4 = native_UnityEngine_GameObject__GetComponentsInChildren_Collider__4a2650
                        (lVar3,
                         _Method_UnityEngine_GameObject_GetComponentsInChildren_UITweener____12e4b80
                        );
    }
    plVar7 = (long *)(param_1 + 0x58);
    *plVar7 = lVar4;
    native_sub_4326e0(plVar7,lVar4);
    lVar4 = *plVar7;
    if (lVar4 != 0) {
      if (*(long *)(lVar4 + 0x18) == 0) {
        if (*(int *)(param_1 + 0x38) != 0) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          if ((bRam000000000133f5b1 & 1) == 0) {
            native_sub_43273c(&NGUITools_TypeInfo_12d53c8,0,0);
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
          uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar3,0);
          if ((uVar5 & 1) != 0) {
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            lVar3 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0);
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
          return;
        }
      }
      else {
        bVar2 = *(int *)(param_1 + 0x28) != -1;
        iVar9 = (int)*(long *)(lVar4 + 0x18);
        if (0 < iVar9) {
          uVar10 = 0;
          bVar1 = false;
          do {
            if (*(uint *)(lVar4 + 0x18) <= uVar10) {
              uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar6,0);
            }
            plVar8 = *(long **)(lVar4 + (long)(int)uVar10 * 8 + 0x20);
            if (plVar8 == (long *)0x0) break;
            if (*(int *)((long)plVar8 + 0x3c) == *(int *)(param_1 + 0x20)) {
              if (bVar1) {
                bVar1 = true;
              }
              else {
                if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar5 = native_NGUITools__GetActive_72d0d4(lVar3,0);
                if ((uVar5 & 1) == 0) {
                  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  bVar1 = true;
                  native_NGUITools__SetActive_731af8(lVar3,1,0);
                }
                else {
                  bVar1 = false;
                }
              }
              *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
              if (*(int *)(param_1 + 0x28) == 0) {
                lVar4 = plVar8[9];
                uVar6 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
                native_EventDelegate_Callback___ctor_54bd18
                          (uVar6,param_1,_Method_UIPlayTween_OnFinished___12e7870,0);
                if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                native_EventDelegate__Add_def180(lVar4,uVar6,1,0);
                native_UITweener__Toggle_94901c(plVar8,0);
              }
              else {
                if ((*(char *)(param_1 + 0x2c) != '\0') ||
                   ((*(char *)(param_1 + 0x2d) != '\0' &&
                    (uVar5 = native_UnityEngine_Behaviour__get_enabled_8d7acc(plVar8,0),
                    (uVar5 & 1) == 0)))) {
                  (**(code **)(*plVar8 + 0x198))(plVar8,bVar2,*(undefined8 *)(*plVar8 + 0x1a0));
                  native_UITweener__ResetToBeginning_948fd4(plVar8,0);
                }
                lVar4 = plVar8[9];
                uVar6 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
                native_EventDelegate_Callback___ctor_54bd18
                          (uVar6,param_1,_Method_UIPlayTween_OnFinished___12e7870,0);
                if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                native_EventDelegate__Add_def180(lVar4,uVar6,1,0);
                (**(code **)(*plVar8 + 0x198))(plVar8,bVar2,*(undefined8 *)(*plVar8 + 0x1a0));
              }
            }
            uVar10 = uVar10 + 1;
            if (iVar9 <= (int)uVar10) {
              return;
            }
            lVar4 = *plVar7;
          } while (lVar4 != 0);
          goto LAB_00af7ca0;
        }
      }
      return;
    }
  }
LAB_00af7ca0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPlayTween$$OnDoubleClick @ 0xaf7fe0
 * void UIPlayTween__OnDoubleClick (UIPlayTween_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00731c0c) */
/* WARNING: Removing unreachable block (ram,0x00731c10) */
/* WARNING: Removing unreachable block (ram,0x00731c18) */
/* WARNING: Removing unreachable block (ram,0x00731c20) */
/* WARNING: Removing unreachable block (ram,0x00731ca8) */
/* WARNING: Removing unreachable block (ram,0x00731cd4) */
/* WARNING: Removing unreachable block (ram,0x00731cd8) */
/* WARNING: Removing unreachable block (ram,0x00731d04) */
/* WARNING: Removing unreachable block (ram,0x00731d0c) */
/* WARNING: Removing unreachable block (ram,0x00731d14) */
/* WARNING: Removing unreachable block (ram,0x00731d28) */
/* WARNING: Removing unreachable block (ram,0x00731d2c) */
/* WARNING: Removing unreachable block (ram,0x00731d38) */
/* WARNING: Removing unreachable block (ram,0x00731d4c) */
/* WARNING: Removing unreachable block (ram,0x00731d5c) */
/* WARNING: Removing unreachable block (ram,0x00731d7c) */
/* WARNING: Removing unreachable block (ram,0x00731d84) */
/* WARNING: Removing unreachable block (ram,0x00731d8c) */
/* WARNING: Removing unreachable block (ram,0x00731da0) */
/* WARNING: Removing unreachable block (ram,0x00731db4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayTween$$OnDoubleClick
   void UIPlayTween__OnDoubleClick (UIPlayTween_o* __this, const MethodInfo* method); */

void native_UIPlayTween__OnDoubleClick_af7fe0(long param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  uint uVar10;
  
  uVar5 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if (((uVar5 & 1) == 0) || (*(int *)(param_1 + 0x24) != 10)) {
    return;
  }
  if ((bRam0000000001342086 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentsInChildren_UITweener____12e4b80);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponents_UITweener____12e4b40);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&Method_UIPlayTween_OnFinished___12e7870);
    bRam0000000001342086 = 1;
  }
  *(undefined4 *)(param_1 + 100) = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
  if ((uVar5 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x18);
  }
  else {
    lVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_NGUITools__GetActive_72d0d4(lVar3,0);
  if ((uVar5 & 1) == 0) {
    if (*(int *)(param_1 + 0x34) != 1) {
      return;
    }
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_NGUITools__SetActive_731af8(lVar3,1,0);
  }
  if (lVar3 != 0) {
    if (*(char *)(param_1 + 0x3c) == '\0') {
      lVar4 = native_UnityEngine_GameObject__GetComponents_object__4a24c0
                        (lVar3,_Method_UnityEngine_GameObject_GetComponents_UITweener____12e4b40);
    }
    else {
      lVar4 = native_UnityEngine_GameObject__GetComponentsInChildren_Collider__4a2650
                        (lVar3,
                         _Method_UnityEngine_GameObject_GetComponentsInChildren_UITweener____12e4b80
                        );
    }
    plVar7 = (long *)(param_1 + 0x58);
    *plVar7 = lVar4;
    native_sub_4326e0(plVar7,lVar4);
    lVar4 = *plVar7;
    if (lVar4 != 0) {
      if (*(long *)(lVar4 + 0x18) == 0) {
        if (*(int *)(param_1 + 0x38) != 0) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          if ((bRam000000000133f5b1 & 1) == 0) {
            native_sub_43273c(&NGUITools_TypeInfo_12d53c8,0,0);
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
          uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar3,0);
          if ((uVar5 & 1) != 0) {
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            lVar3 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0);
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
          return;
        }
      }
      else {
        bVar2 = *(int *)(param_1 + 0x28) != -1;
        iVar9 = (int)*(long *)(lVar4 + 0x18);
        if (0 < iVar9) {
          uVar10 = 0;
          bVar1 = false;
          do {
            if (*(uint *)(lVar4 + 0x18) <= uVar10) {
              uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar6,0);
            }
            plVar8 = *(long **)(lVar4 + (long)(int)uVar10 * 8 + 0x20);
            if (plVar8 == (long *)0x0) break;
            if (*(int *)((long)plVar8 + 0x3c) == *(int *)(param_1 + 0x20)) {
              if (bVar1) {
                bVar1 = true;
              }
              else {
                if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar5 = native_NGUITools__GetActive_72d0d4(lVar3,0);
                if ((uVar5 & 1) == 0) {
                  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  bVar1 = true;
                  native_NGUITools__SetActive_731af8(lVar3,1,0);
                }
                else {
                  bVar1 = false;
                }
              }
              *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
              if (*(int *)(param_1 + 0x28) == 0) {
                lVar4 = plVar8[9];
                uVar6 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
                native_EventDelegate_Callback___ctor_54bd18
                          (uVar6,param_1,_Method_UIPlayTween_OnFinished___12e7870,0);
                if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                native_EventDelegate__Add_def180(lVar4,uVar6,1,0);
                native_UITweener__Toggle_94901c(plVar8,0);
              }
              else {
                if ((*(char *)(param_1 + 0x2c) != '\0') ||
                   ((*(char *)(param_1 + 0x2d) != '\0' &&
                    (uVar5 = native_UnityEngine_Behaviour__get_enabled_8d7acc(plVar8,0),
                    (uVar5 & 1) == 0)))) {
                  (**(code **)(*plVar8 + 0x198))(plVar8,bVar2,*(undefined8 *)(*plVar8 + 0x1a0));
                  native_UITweener__ResetToBeginning_948fd4(plVar8,0);
                }
                lVar4 = plVar8[9];
                uVar6 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
                native_EventDelegate_Callback___ctor_54bd18
                          (uVar6,param_1,_Method_UIPlayTween_OnFinished___12e7870,0);
                if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                native_EventDelegate__Add_def180(lVar4,uVar6,1,0);
                (**(code **)(*plVar8 + 0x198))(plVar8,bVar2,*(undefined8 *)(*plVar8 + 0x1a0));
              }
            }
            uVar10 = uVar10 + 1;
            if (iVar9 <= (int)uVar10) {
              return;
            }
            lVar4 = *plVar7;
          } while (lVar4 != 0);
          goto LAB_00af7ca0;
        }
      }
      return;
    }
  }
LAB_00af7ca0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPlayTween$$OnSelect @ 0xaf8028
 * void UIPlayTween__OnSelect (UIPlayTween_o* __this, bool isSelected, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00731c0c) */
/* WARNING: Removing unreachable block (ram,0x00731c10) */
/* WARNING: Removing unreachable block (ram,0x00731c18) */
/* WARNING: Removing unreachable block (ram,0x00731c20) */
/* WARNING: Removing unreachable block (ram,0x00731ca8) */
/* WARNING: Removing unreachable block (ram,0x00731cd4) */
/* WARNING: Removing unreachable block (ram,0x00731cd8) */
/* WARNING: Removing unreachable block (ram,0x00731d04) */
/* WARNING: Removing unreachable block (ram,0x00731d0c) */
/* WARNING: Removing unreachable block (ram,0x00731d14) */
/* WARNING: Removing unreachable block (ram,0x00731d28) */
/* WARNING: Removing unreachable block (ram,0x00731d2c) */
/* WARNING: Removing unreachable block (ram,0x00731d38) */
/* WARNING: Removing unreachable block (ram,0x00731d4c) */
/* WARNING: Removing unreachable block (ram,0x00731d5c) */
/* WARNING: Removing unreachable block (ram,0x00731d7c) */
/* WARNING: Removing unreachable block (ram,0x00731d84) */
/* WARNING: Removing unreachable block (ram,0x00731d8c) */
/* WARNING: Removing unreachable block (ram,0x00731da0) */
/* WARNING: Removing unreachable block (ram,0x00731db4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayTween$$OnSelect
   void UIPlayTween__OnSelect (UIPlayTween_o* __this, bool isSelected, const MethodInfo* method); */

void native_UIPlayTween__OnSelect_af8028(long param_1,byte param_2)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  uint uVar10;
  
  uVar5 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  iVar9 = *(int *)(param_1 + 0x24);
  if ((iVar9 != 0xb) && ((iVar9 == 0xc & param_2) == 0)) {
    if (iVar9 != 0xd) {
      return;
    }
    if ((param_2 & 1) != 0) {
      return;
    }
  }
  *(byte *)(param_1 + 0x68) = iVar9 == 0xb & param_2;
  if ((bRam0000000001342086 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentsInChildren_UITweener____12e4b80);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponents_UITweener____12e4b40);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&Method_UIPlayTween_OnFinished___12e7870);
    bRam0000000001342086 = 1;
  }
  *(undefined4 *)(param_1 + 100) = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
  if ((uVar5 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x18);
  }
  else {
    lVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_NGUITools__GetActive_72d0d4(lVar3,0);
  if ((uVar5 & 1) == 0) {
    if (*(int *)(param_1 + 0x34) != 1) {
      return;
    }
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_NGUITools__SetActive_731af8(lVar3,1,0);
  }
  if (lVar3 != 0) {
    if (*(char *)(param_1 + 0x3c) == '\0') {
      lVar4 = native_UnityEngine_GameObject__GetComponents_object__4a24c0
                        (lVar3,_Method_UnityEngine_GameObject_GetComponents_UITweener____12e4b40);
    }
    else {
      lVar4 = native_UnityEngine_GameObject__GetComponentsInChildren_Collider__4a2650
                        (lVar3,
                         _Method_UnityEngine_GameObject_GetComponentsInChildren_UITweener____12e4b80
                        );
    }
    plVar7 = (long *)(param_1 + 0x58);
    *plVar7 = lVar4;
    native_sub_4326e0(plVar7,lVar4);
    lVar4 = *plVar7;
    if (lVar4 != 0) {
      if (*(long *)(lVar4 + 0x18) == 0) {
        if (*(int *)(param_1 + 0x38) != 0) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          if ((bRam000000000133f5b1 & 1) == 0) {
            native_sub_43273c(&NGUITools_TypeInfo_12d53c8,0,0);
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
          uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar3,0);
          if ((uVar5 & 1) != 0) {
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            lVar3 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0);
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
          return;
        }
      }
      else {
        iVar9 = (int)*(long *)(lVar4 + 0x18);
        if (0 < iVar9) {
          uVar10 = 0;
          bVar2 = false;
          bVar1 = *(int *)(param_1 + 0x28) == -1 ^ param_2 & 1;
          do {
            if (*(uint *)(lVar4 + 0x18) <= uVar10) {
              uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar6,0);
            }
            plVar8 = *(long **)(lVar4 + (long)(int)uVar10 * 8 + 0x20);
            if (plVar8 == (long *)0x0) break;
            if (*(int *)((long)plVar8 + 0x3c) == *(int *)(param_1 + 0x20)) {
              if (bVar2) {
                bVar2 = true;
              }
              else {
                if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar5 = native_NGUITools__GetActive_72d0d4(lVar3,0);
                if ((uVar5 & 1) == 0) {
                  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  bVar2 = true;
                  native_NGUITools__SetActive_731af8(lVar3,1,0);
                }
                else {
                  bVar2 = false;
                }
              }
              *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
              if (*(int *)(param_1 + 0x28) == 0) {
                lVar4 = plVar8[9];
                uVar6 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
                native_EventDelegate_Callback___ctor_54bd18
                          (uVar6,param_1,_Method_UIPlayTween_OnFinished___12e7870,0);
                if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                native_EventDelegate__Add_def180(lVar4,uVar6,1,0);
                native_UITweener__Toggle_94901c(plVar8,0);
              }
              else {
                if ((*(char *)(param_1 + 0x2c) != '\0') ||
                   ((*(char *)(param_1 + 0x2d) != '\0' &&
                    (uVar5 = native_UnityEngine_Behaviour__get_enabled_8d7acc(plVar8,0),
                    (uVar5 & 1) == 0)))) {
                  (**(code **)(*plVar8 + 0x198))(plVar8,bVar1,*(undefined8 *)(*plVar8 + 0x1a0));
                  native_UITweener__ResetToBeginning_948fd4(plVar8,0);
                }
                lVar4 = plVar8[9];
                uVar6 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
                native_EventDelegate_Callback___ctor_54bd18
                          (uVar6,param_1,_Method_UIPlayTween_OnFinished___12e7870,0);
                if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                native_EventDelegate__Add_def180(lVar4,uVar6,1,0);
                (**(code **)(*plVar8 + 0x198))(plVar8,bVar1,*(undefined8 *)(*plVar8 + 0x1a0));
              }
            }
            uVar10 = uVar10 + 1;
            if (iVar9 <= (int)uVar10) {
              return;
            }
            lVar4 = *plVar7;
          } while (lVar4 != 0);
          goto LAB_00af7ca0;
        }
      }
      return;
    }
  }
LAB_00af7ca0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPlayTween$$OnToggle @ 0xaf80a0
 * void UIPlayTween__OnToggle (UIPlayTween_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00731c0c) */
/* WARNING: Removing unreachable block (ram,0x00731c10) */
/* WARNING: Removing unreachable block (ram,0x00731c18) */
/* WARNING: Removing unreachable block (ram,0x00731c20) */
/* WARNING: Removing unreachable block (ram,0x00731ca8) */
/* WARNING: Removing unreachable block (ram,0x00731cd4) */
/* WARNING: Removing unreachable block (ram,0x00731cd8) */
/* WARNING: Removing unreachable block (ram,0x00731d04) */
/* WARNING: Removing unreachable block (ram,0x00731d0c) */
/* WARNING: Removing unreachable block (ram,0x00731d14) */
/* WARNING: Removing unreachable block (ram,0x00731d28) */
/* WARNING: Removing unreachable block (ram,0x00731d2c) */
/* WARNING: Removing unreachable block (ram,0x00731d38) */
/* WARNING: Removing unreachable block (ram,0x00731d4c) */
/* WARNING: Removing unreachable block (ram,0x00731d5c) */
/* WARNING: Removing unreachable block (ram,0x00731d7c) */
/* WARNING: Removing unreachable block (ram,0x00731d84) */
/* WARNING: Removing unreachable block (ram,0x00731d8c) */
/* WARNING: Removing unreachable block (ram,0x00731da0) */
/* WARNING: Removing unreachable block (ram,0x00731db4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayTween$$OnToggle
   void UIPlayTween__OnToggle (UIPlayTween_o* __this, const MethodInfo* method); */

void native_UIPlayTween__OnToggle_af80a0(long param_1)

{
  bool bVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  uint uVar10;
  
  if ((bRam0000000001342084 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIToggle_TypeInfo_12d64e0);
    bRam0000000001342084 = 1;
  }
  uVar4 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = *(undefined8 *)(*(long *)(_UIToggle_TypeInfo_12d64e0 + 0xb8) + 8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  iVar9 = *(int *)(param_1 + 0x24);
  if (iVar9 != 7) {
    if (iVar9 == 8) {
      if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar5 = *(long *)(*(long *)(_UIToggle_TypeInfo_12d64e0 + 0xb8) + 8);
      if (lVar5 == 0) goto LAB_00af8234;
      uVar4 = native_UIToggle__get_value_945b24(lVar5,0);
      if ((uVar4 & 1) != 0) goto LAB_00af81ec;
      iVar9 = *(int *)(param_1 + 0x24);
    }
    if (iVar9 != 9) {
      return;
    }
    if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar5 = *(long *)(*(long *)(_UIToggle_TypeInfo_12d64e0 + 0xb8) + 8);
    if (lVar5 == 0) goto LAB_00af8234;
    uVar4 = native_UIToggle__get_value_945b24(lVar5,0);
    if ((uVar4 & 1) != 0) {
      return;
    }
  }
LAB_00af81ec:
  if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar5 = *(long *)(*(long *)(_UIToggle_TypeInfo_12d64e0 + 0xb8) + 8);
  if (lVar5 == 0) {
LAB_00af8234:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  bVar2 = native_UIToggle__get_value_945b24(lVar5,0);
  if ((bRam0000000001342086 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentsInChildren_UITweener____12e4b80);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponents_UITweener____12e4b40);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&Method_UIPlayTween_OnFinished___12e7870);
    bRam0000000001342086 = 1;
  }
  *(undefined4 *)(param_1 + 100) = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
  if ((uVar4 & 1) == 0) {
    lVar5 = *(long *)(param_1 + 0x18);
  }
  else {
    lVar5 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_NGUITools__GetActive_72d0d4(lVar5,0);
  if ((uVar4 & 1) == 0) {
    if (*(int *)(param_1 + 0x34) != 1) {
      return;
    }
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_NGUITools__SetActive_731af8(lVar5,1,0);
  }
  if (lVar5 != 0) {
    if (*(char *)(param_1 + 0x3c) == '\0') {
      lVar3 = native_UnityEngine_GameObject__GetComponents_object__4a24c0
                        (lVar5,_Method_UnityEngine_GameObject_GetComponents_UITweener____12e4b40);
    }
    else {
      lVar3 = native_UnityEngine_GameObject__GetComponentsInChildren_Collider__4a2650
                        (lVar5,
                         _Method_UnityEngine_GameObject_GetComponentsInChildren_UITweener____12e4b80
                        );
    }
    plVar7 = (long *)(param_1 + 0x58);
    *plVar7 = lVar3;
    native_sub_4326e0(plVar7,lVar3);
    lVar3 = *plVar7;
    if (lVar3 != 0) {
      if (*(long *)(lVar3 + 0x18) == 0) {
        if (*(int *)(param_1 + 0x38) != 0) {
          lVar5 = *(long *)(param_1 + 0x18);
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          if ((bRam000000000133f5b1 & 1) == 0) {
            native_sub_43273c(&NGUITools_TypeInfo_12d53c8,0,0);
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
          uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar5,0);
          if ((uVar4 & 1) != 0) {
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            lVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar5,0);
            if (((*(ushort *)(_NGUITools_TypeInfo_12d53c8 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
              native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
            }
            if ((bRam000000000133f5b0 & 1) == 0) {
              native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
              bRam000000000133f5b0 = 1;
            }
            if (lVar5 != 0) {
              lVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar5,0);
              if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
              }
              if (lVar5 != 0) {
                if (pcRam0000000001340bf8 == (code *)0x0) {
                  pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
                }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pcRam0000000001340bf8)(lVar5,0);
                return;
              }
            }
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          return;
        }
      }
      else {
        iVar9 = (int)*(long *)(lVar3 + 0x18);
        if (0 < iVar9) {
          uVar10 = 0;
          bVar1 = false;
          bVar2 = *(int *)(param_1 + 0x28) == -1 ^ bVar2 & 1;
          do {
            if (*(uint *)(lVar3 + 0x18) <= uVar10) {
              uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar6,0);
            }
            plVar8 = *(long **)(lVar3 + (long)(int)uVar10 * 8 + 0x20);
            if (plVar8 == (long *)0x0) break;
            if (*(int *)((long)plVar8 + 0x3c) == *(int *)(param_1 + 0x20)) {
              if (bVar1) {
                bVar1 = true;
              }
              else {
                if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar4 = native_NGUITools__GetActive_72d0d4(lVar5,0);
                if ((uVar4 & 1) == 0) {
                  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  bVar1 = true;
                  native_NGUITools__SetActive_731af8(lVar5,1,0);
                }
                else {
                  bVar1 = false;
                }
              }
              *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
              if (*(int *)(param_1 + 0x28) == 0) {
                lVar3 = plVar8[9];
                uVar6 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
                native_EventDelegate_Callback___ctor_54bd18
                          (uVar6,param_1,_Method_UIPlayTween_OnFinished___12e7870,0);
                if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                native_EventDelegate__Add_def180(lVar3,uVar6,1,0);
                native_UITweener__Toggle_94901c(plVar8,0);
              }
              else {
                if ((*(char *)(param_1 + 0x2c) != '\0') ||
                   ((*(char *)(param_1 + 0x2d) != '\0' &&
                    (uVar4 = native_UnityEngine_Behaviour__get_enabled_8d7acc(plVar8,0),
                    (uVar4 & 1) == 0)))) {
                  (**(code **)(*plVar8 + 0x198))(plVar8,bVar2,*(undefined8 *)(*plVar8 + 0x1a0));
                  native_UITweener__ResetToBeginning_948fd4(plVar8,0);
                }
                lVar3 = plVar8[9];
                uVar6 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
                native_EventDelegate_Callback___ctor_54bd18
                          (uVar6,param_1,_Method_UIPlayTween_OnFinished___12e7870,0);
                if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                native_EventDelegate__Add_def180(lVar3,uVar6,1,0);
                (**(code **)(*plVar8 + 0x198))(plVar8,bVar2,*(undefined8 *)(*plVar8 + 0x1a0));
              }
            }
            uVar10 = uVar10 + 1;
            if (iVar9 <= (int)uVar10) {
              return;
            }
            lVar3 = *plVar7;
          } while (lVar3 != 0);
          goto LAB_00af7ca0;
        }
      }
      return;
    }
  }
LAB_00af7ca0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPlayTween$$Update @ 0xaf8238
 * void UIPlayTween__Update (UIPlayTween_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayTween$$Update
   void UIPlayTween__Update (UIPlayTween_o* __this, const MethodInfo* method); */

void native_UIPlayTween__Update_af8238(long param_1)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  uint uVar10;
  
  if ((bRam0000000001342085 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam0000000001342085 = 1;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    plVar8 = (long *)(param_1 + 0x58);
    lVar7 = *plVar8;
    if (lVar7 != 0) {
      iVar2 = *(int *)(lVar7 + 0x18);
      if (iVar2 < 1) {
LAB_00af831c:
        uVar9 = *(undefined8 *)(param_1 + 0x18);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        native_NGUITools__SetActive_731af8(uVar9,0,0);
native_sub_41086c:
        *plVar8 = 0;
        if (iRam0000000001345318 != 0) {
          puVar1 = (ulong *)(((ulong)plVar8 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        return;
      }
      uVar10 = 0;
      bVar4 = true;
      do {
        if (*(uint *)(lVar7 + 0x18) <= uVar10) {
          uVar9 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar9,0);
        }
        lVar7 = *(long *)(lVar7 + (long)(int)uVar10 * 8 + 0x20);
        if (lVar7 == 0) break;
        if (*(int *)(lVar7 + 0x3c) == *(int *)(param_1 + 0x20)) {
          uVar6 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar7,0);
          if ((uVar6 & 1) != 0) {
            return;
          }
          iVar5 = native_UITweener__get_direction_948524(lVar7,0);
          bVar4 = (bool)(bVar4 & iVar5 == *(int *)(param_1 + 0x38));
        }
        uVar10 = uVar10 + 1;
        if (iVar2 <= (int)uVar10) {
          if (!bVar4) goto native_sub_41086c;
          goto LAB_00af831c;
        }
        lVar7 = *plVar8;
      } while (lVar7 != 0);
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  return;
}



/* UIPlayTween$$Stop @ 0xaf837c
 * void UIPlayTween__Stop (UIPlayTween_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayTween$$Stop
   void UIPlayTween__Stop (UIPlayTween_o* __this, const MethodInfo* method); */

void native_UIPlayTween__Stop_af837c(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  
  lVar10 = *(long *)(param_1 + 0x58);
  if ((lVar10 != 0) && (uVar2 = *(uint *)(lVar10 + 0x18), 0 < (int)uVar2)) {
    lVar12 = 0;
    do {
      if (uVar2 <= (uint)lVar12) {
        uVar11 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar11,0);
      }
      lVar6 = *(long *)(lVar10 + 0x20 + lVar12 * 8);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      native_UITweener__Finish_948e1c(lVar6,0);
      uVar2 = *(uint *)(lVar10 + 0x18);
      lVar12 = lVar12 + 1;
    } while ((int)lVar12 < (int)uVar2);
  }
  if (*(int *)(param_1 + 100) == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 100) = 1;
  if ((bRam0000000001342087 & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIPlayTween_TypeInfo_12d6488);
    bRam0000000001342087 = 1;
  }
  iVar5 = *(int *)(param_1 + 100) + -1;
  *(int *)(param_1 + 100) = iVar5;
  if (iVar5 == 0) {
    uVar11 = **(undefined8 **)(_UIPlayTween_TypeInfo_12d6488 + 0xb8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar7 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar11,0,0);
    if ((uVar7 & 1) != 0) {
      plVar8 = *(long **)(_UIPlayTween_TypeInfo_12d6488 + 0xb8);
      *plVar8 = param_1;
      native_sub_4326e0(plVar8,param_1);
      uVar11 = *(undefined8 *)(param_1 + 0x40);
      if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_EventDelegate__Execute_deecbc(uVar11,0);
      plVar8 = (long *)(param_1 + 0x48);
      lVar10 = *plVar8;
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar10,0,0);
      if (((uVar7 & 1) != 0) &&
         (uVar7 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x50),0),
         (uVar7 & 1) == 0)) {
        if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        native_UnityEngine_GameObject__SendMessage_8de464
                  (*plVar8,*(undefined8 *)(param_1 + 0x50),1,0);
      }
      *plVar8 = 0;
      native_sub_4326e0(plVar8,0);
      puVar9 = *(undefined8 **)(_UIPlayTween_TypeInfo_12d6488 + 0xb8);
      *puVar9 = 0;
      if (iRam0000000001345318 != 0) {
        puVar1 = (ulong *)(((ulong)puVar9 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      return;
    }
  }
  return;
}



/* UIPlayTween$$Play @ 0xaf85ac
 * void UIPlayTween__Play (UIPlayTween_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00731c0c) */
/* WARNING: Removing unreachable block (ram,0x00731c10) */
/* WARNING: Removing unreachable block (ram,0x00731c18) */
/* WARNING: Removing unreachable block (ram,0x00731c20) */
/* WARNING: Removing unreachable block (ram,0x00731ca8) */
/* WARNING: Removing unreachable block (ram,0x00731cd4) */
/* WARNING: Removing unreachable block (ram,0x00731cd8) */
/* WARNING: Removing unreachable block (ram,0x00731d04) */
/* WARNING: Removing unreachable block (ram,0x00731d0c) */
/* WARNING: Removing unreachable block (ram,0x00731d14) */
/* WARNING: Removing unreachable block (ram,0x00731d28) */
/* WARNING: Removing unreachable block (ram,0x00731d2c) */
/* WARNING: Removing unreachable block (ram,0x00731d38) */
/* WARNING: Removing unreachable block (ram,0x00731d4c) */
/* WARNING: Removing unreachable block (ram,0x00731d5c) */
/* WARNING: Removing unreachable block (ram,0x00731d7c) */
/* WARNING: Removing unreachable block (ram,0x00731d84) */
/* WARNING: Removing unreachable block (ram,0x00731d8c) */
/* WARNING: Removing unreachable block (ram,0x00731da0) */
/* WARNING: Removing unreachable block (ram,0x00731db4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayTween$$Play
   void UIPlayTween__Play (UIPlayTween_o* __this, const MethodInfo* method); */

void native_UIPlayTween__Play_af85ac(long param_1)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  uint uVar10;
  
  if ((bRam0000000001342086 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentsInChildren_UITweener____12e4b80);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponents_UITweener____12e4b40);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&Method_UIPlayTween_OnFinished___12e7870);
    bRam0000000001342086 = 1;
  }
  *(undefined4 *)(param_1 + 100) = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
  if ((uVar3 & 1) == 0) {
    lVar4 = *(long *)(param_1 + 0x18);
  }
  else {
    lVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_NGUITools__GetActive_72d0d4(lVar4,0);
  if ((uVar3 & 1) == 0) {
    if (*(int *)(param_1 + 0x34) != 1) {
      return;
    }
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_NGUITools__SetActive_731af8(lVar4,1,0);
  }
  if (lVar4 != 0) {
    if (*(char *)(param_1 + 0x3c) == '\0') {
      lVar5 = native_UnityEngine_GameObject__GetComponents_object__4a24c0
                        (lVar4,_Method_UnityEngine_GameObject_GetComponents_UITweener____12e4b40);
    }
    else {
      lVar5 = native_UnityEngine_GameObject__GetComponentsInChildren_Collider__4a2650
                        (lVar4,
                         _Method_UnityEngine_GameObject_GetComponentsInChildren_UITweener____12e4b80
                        );
    }
    plVar7 = (long *)(param_1 + 0x58);
    *plVar7 = lVar5;
    native_sub_4326e0(plVar7,lVar5);
    lVar5 = *plVar7;
    if (lVar5 != 0) {
      if (*(long *)(lVar5 + 0x18) == 0) {
        if (*(int *)(param_1 + 0x38) != 0) {
          lVar4 = *(long *)(param_1 + 0x18);
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          if ((bRam000000000133f5b1 & 1) == 0) {
            native_sub_43273c(&NGUITools_TypeInfo_12d53c8,0,0);
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
          uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar4,0);
          if ((uVar3 & 1) != 0) {
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            lVar4 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar4,0);
            if (((*(ushort *)(_NGUITools_TypeInfo_12d53c8 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
              native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
            }
            if ((bRam000000000133f5b0 & 1) == 0) {
              native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
              bRam000000000133f5b0 = 1;
            }
            if (lVar4 != 0) {
              lVar4 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
              if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
              }
              if (lVar4 != 0) {
                if (pcRam0000000001340bf8 == (code *)0x0) {
                  pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
                }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pcRam0000000001340bf8)(lVar4,0);
                return;
              }
            }
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          return;
        }
      }
      else {
        bVar2 = *(int *)(param_1 + 0x28) != -1;
        iVar9 = (int)*(long *)(lVar5 + 0x18);
        if (0 < iVar9) {
          uVar10 = 0;
          bVar1 = false;
          do {
            if (*(uint *)(lVar5 + 0x18) <= uVar10) {
              uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar6,0);
            }
            plVar8 = *(long **)(lVar5 + (long)(int)uVar10 * 8 + 0x20);
            if (plVar8 == (long *)0x0) break;
            if (*(int *)((long)plVar8 + 0x3c) == *(int *)(param_1 + 0x20)) {
              if (bVar1) {
                bVar1 = true;
              }
              else {
                if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar3 = native_NGUITools__GetActive_72d0d4(lVar4,0);
                if ((uVar3 & 1) == 0) {
                  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  bVar1 = true;
                  native_NGUITools__SetActive_731af8(lVar4,1,0);
                }
                else {
                  bVar1 = false;
                }
              }
              *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
              if (*(int *)(param_1 + 0x28) == 0) {
                lVar5 = plVar8[9];
                uVar6 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
                native_EventDelegate_Callback___ctor_54bd18
                          (uVar6,param_1,_Method_UIPlayTween_OnFinished___12e7870,0);
                if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                native_EventDelegate__Add_def180(lVar5,uVar6,1,0);
                native_UITweener__Toggle_94901c(plVar8,0);
              }
              else {
                if ((*(char *)(param_1 + 0x2c) != '\0') ||
                   ((*(char *)(param_1 + 0x2d) != '\0' &&
                    (uVar3 = native_UnityEngine_Behaviour__get_enabled_8d7acc(plVar8,0),
                    (uVar3 & 1) == 0)))) {
                  (**(code **)(*plVar8 + 0x198))(plVar8,bVar2,*(undefined8 *)(*plVar8 + 0x1a0));
                  native_UITweener__ResetToBeginning_948fd4(plVar8,0);
                }
                lVar5 = plVar8[9];
                uVar6 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
                native_EventDelegate_Callback___ctor_54bd18
                          (uVar6,param_1,_Method_UIPlayTween_OnFinished___12e7870,0);
                if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                native_EventDelegate__Add_def180(lVar5,uVar6,1,0);
                (**(code **)(*plVar8 + 0x198))(plVar8,bVar2,*(undefined8 *)(*plVar8 + 0x1a0));
              }
            }
            uVar10 = uVar10 + 1;
            if (iVar9 <= (int)uVar10) {
              return;
            }
            lVar5 = *plVar7;
          } while (lVar5 != 0);
          goto LAB_00af7ca0;
        }
      }
      return;
    }
  }
LAB_00af7ca0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPlayTween$$PlayReverse @ 0xaf85b4
 * void UIPlayTween__PlayReverse (UIPlayTween_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00731c0c) */
/* WARNING: Removing unreachable block (ram,0x00731c10) */
/* WARNING: Removing unreachable block (ram,0x00731c18) */
/* WARNING: Removing unreachable block (ram,0x00731c20) */
/* WARNING: Removing unreachable block (ram,0x00731ca8) */
/* WARNING: Removing unreachable block (ram,0x00731cd4) */
/* WARNING: Removing unreachable block (ram,0x00731cd8) */
/* WARNING: Removing unreachable block (ram,0x00731d04) */
/* WARNING: Removing unreachable block (ram,0x00731d0c) */
/* WARNING: Removing unreachable block (ram,0x00731d14) */
/* WARNING: Removing unreachable block (ram,0x00731d28) */
/* WARNING: Removing unreachable block (ram,0x00731d2c) */
/* WARNING: Removing unreachable block (ram,0x00731d38) */
/* WARNING: Removing unreachable block (ram,0x00731d4c) */
/* WARNING: Removing unreachable block (ram,0x00731d5c) */
/* WARNING: Removing unreachable block (ram,0x00731d7c) */
/* WARNING: Removing unreachable block (ram,0x00731d84) */
/* WARNING: Removing unreachable block (ram,0x00731d8c) */
/* WARNING: Removing unreachable block (ram,0x00731da0) */
/* WARNING: Removing unreachable block (ram,0x00731db4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayTween$$PlayReverse
   void UIPlayTween__PlayReverse (UIPlayTween_o* __this, const MethodInfo* method); */

void native_UIPlayTween__PlayReverse_af85b4(long param_1)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  uint uVar10;
  
  if ((bRam0000000001342086 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentsInChildren_UITweener____12e4b80);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponents_UITweener____12e4b40);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&Method_UIPlayTween_OnFinished___12e7870);
    bRam0000000001342086 = 1;
  }
  *(undefined4 *)(param_1 + 100) = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
  if ((uVar3 & 1) == 0) {
    lVar4 = *(long *)(param_1 + 0x18);
  }
  else {
    lVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_NGUITools__GetActive_72d0d4(lVar4,0);
  if ((uVar3 & 1) == 0) {
    if (*(int *)(param_1 + 0x34) != 1) {
      return;
    }
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_NGUITools__SetActive_731af8(lVar4,1,0);
  }
  if (lVar4 != 0) {
    if (*(char *)(param_1 + 0x3c) == '\0') {
      lVar5 = native_UnityEngine_GameObject__GetComponents_object__4a24c0
                        (lVar4,_Method_UnityEngine_GameObject_GetComponents_UITweener____12e4b40);
    }
    else {
      lVar5 = native_UnityEngine_GameObject__GetComponentsInChildren_Collider__4a2650
                        (lVar4,
                         _Method_UnityEngine_GameObject_GetComponentsInChildren_UITweener____12e4b80
                        );
    }
    plVar7 = (long *)(param_1 + 0x58);
    *plVar7 = lVar5;
    native_sub_4326e0(plVar7,lVar5);
    lVar5 = *plVar7;
    if (lVar5 != 0) {
      if (*(long *)(lVar5 + 0x18) == 0) {
        if (*(int *)(param_1 + 0x38) != 0) {
          lVar4 = *(long *)(param_1 + 0x18);
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          if ((bRam000000000133f5b1 & 1) == 0) {
            native_sub_43273c(&NGUITools_TypeInfo_12d53c8,0,0);
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
          uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar4,0);
          if ((uVar3 & 1) != 0) {
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            lVar4 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar4,0);
            if (((*(ushort *)(_NGUITools_TypeInfo_12d53c8 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
              native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
            }
            if ((bRam000000000133f5b0 & 1) == 0) {
              native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
              bRam000000000133f5b0 = 1;
            }
            if (lVar4 != 0) {
              lVar4 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
              if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
              }
              if (lVar4 != 0) {
                if (pcRam0000000001340bf8 == (code *)0x0) {
                  pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
                }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pcRam0000000001340bf8)(lVar4,0);
                return;
              }
            }
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          return;
        }
      }
      else {
        bVar2 = *(int *)(param_1 + 0x28) == -1;
        iVar9 = (int)*(long *)(lVar5 + 0x18);
        if (0 < iVar9) {
          uVar10 = 0;
          bVar1 = false;
          do {
            if (*(uint *)(lVar5 + 0x18) <= uVar10) {
              uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar6,0);
            }
            plVar8 = *(long **)(lVar5 + (long)(int)uVar10 * 8 + 0x20);
            if (plVar8 == (long *)0x0) break;
            if (*(int *)((long)plVar8 + 0x3c) == *(int *)(param_1 + 0x20)) {
              if (bVar1) {
                bVar1 = true;
              }
              else {
                if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar3 = native_NGUITools__GetActive_72d0d4(lVar4,0);
                if ((uVar3 & 1) == 0) {
                  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  bVar1 = true;
                  native_NGUITools__SetActive_731af8(lVar4,1,0);
                }
                else {
                  bVar1 = false;
                }
              }
              *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
              if (*(int *)(param_1 + 0x28) == 0) {
                lVar5 = plVar8[9];
                uVar6 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
                native_EventDelegate_Callback___ctor_54bd18
                          (uVar6,param_1,_Method_UIPlayTween_OnFinished___12e7870,0);
                if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                native_EventDelegate__Add_def180(lVar5,uVar6,1,0);
                native_UITweener__Toggle_94901c(plVar8,0);
              }
              else {
                if ((*(char *)(param_1 + 0x2c) != '\0') ||
                   ((*(char *)(param_1 + 0x2d) != '\0' &&
                    (uVar3 = native_UnityEngine_Behaviour__get_enabled_8d7acc(plVar8,0),
                    (uVar3 & 1) == 0)))) {
                  (**(code **)(*plVar8 + 0x198))(plVar8,bVar2,*(undefined8 *)(*plVar8 + 0x1a0));
                  native_UITweener__ResetToBeginning_948fd4(plVar8,0);
                }
                lVar5 = plVar8[9];
                uVar6 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
                native_EventDelegate_Callback___ctor_54bd18
                          (uVar6,param_1,_Method_UIPlayTween_OnFinished___12e7870,0);
                if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                native_EventDelegate__Add_def180(lVar5,uVar6,1,0);
                (**(code **)(*plVar8 + 0x198))(plVar8,bVar2,*(undefined8 *)(*plVar8 + 0x1a0));
              }
            }
            uVar10 = uVar10 + 1;
            if (iVar9 <= (int)uVar10) {
              return;
            }
            lVar5 = *plVar7;
          } while (lVar5 != 0);
          goto LAB_00af7ca0;
        }
      }
      return;
    }
  }
LAB_00af7ca0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPlayTween$$Play @ 0xaf786c
 * void UIPlayTween__Play (UIPlayTween_o* __this, bool forward, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00731c0c) */
/* WARNING: Removing unreachable block (ram,0x00731c10) */
/* WARNING: Removing unreachable block (ram,0x00731c18) */
/* WARNING: Removing unreachable block (ram,0x00731c20) */
/* WARNING: Removing unreachable block (ram,0x00731ca8) */
/* WARNING: Removing unreachable block (ram,0x00731cd4) */
/* WARNING: Removing unreachable block (ram,0x00731cd8) */
/* WARNING: Removing unreachable block (ram,0x00731d04) */
/* WARNING: Removing unreachable block (ram,0x00731d0c) */
/* WARNING: Removing unreachable block (ram,0x00731d14) */
/* WARNING: Removing unreachable block (ram,0x00731d28) */
/* WARNING: Removing unreachable block (ram,0x00731d2c) */
/* WARNING: Removing unreachable block (ram,0x00731d38) */
/* WARNING: Removing unreachable block (ram,0x00731d4c) */
/* WARNING: Removing unreachable block (ram,0x00731d5c) */
/* WARNING: Removing unreachable block (ram,0x00731d7c) */
/* WARNING: Removing unreachable block (ram,0x00731d84) */
/* WARNING: Removing unreachable block (ram,0x00731d8c) */
/* WARNING: Removing unreachable block (ram,0x00731da0) */
/* WARNING: Removing unreachable block (ram,0x00731db4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayTween$$Play
   void UIPlayTween__Play (UIPlayTween_o* __this, bool forward, const MethodInfo* method); */

void native_UIPlayTween__Play_af786c(long param_1,byte param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  uint uVar9;
  
  if ((bRam0000000001342086 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentsInChildren_UITweener____12e4b80);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponents_UITweener____12e4b40);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&Method_UIPlayTween_OnFinished___12e7870);
    bRam0000000001342086 = 1;
  }
  *(undefined4 *)(param_1 + 100) = 0;
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar5,0,0);
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x18);
  }
  else {
    lVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_NGUITools__GetActive_72d0d4(lVar3,0);
  if ((uVar2 & 1) == 0) {
    if (*(int *)(param_1 + 0x34) != 1) {
      return;
    }
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_NGUITools__SetActive_731af8(lVar3,1,0);
  }
  if (lVar3 != 0) {
    if (*(char *)(param_1 + 0x3c) == '\0') {
      lVar4 = native_UnityEngine_GameObject__GetComponents_object__4a24c0
                        (lVar3,_Method_UnityEngine_GameObject_GetComponents_UITweener____12e4b40);
    }
    else {
      lVar4 = native_UnityEngine_GameObject__GetComponentsInChildren_Collider__4a2650
                        (lVar3,
                         _Method_UnityEngine_GameObject_GetComponentsInChildren_UITweener____12e4b80
                        );
    }
    plVar6 = (long *)(param_1 + 0x58);
    *plVar6 = lVar4;
    native_sub_4326e0(plVar6,lVar4);
    lVar4 = *plVar6;
    if (lVar4 != 0) {
      if (*(long *)(lVar4 + 0x18) == 0) {
        if (*(int *)(param_1 + 0x38) != 0) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          if ((bRam000000000133f5b1 & 1) == 0) {
            native_sub_43273c(&NGUITools_TypeInfo_12d53c8,0,0);
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
          uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar3,0);
          if ((uVar2 & 1) != 0) {
            if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            lVar3 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0);
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
          return;
        }
      }
      else {
        iVar8 = (int)*(long *)(lVar4 + 0x18);
        if (0 < iVar8) {
          uVar9 = 0;
          bVar1 = false;
          param_2 = *(int *)(param_1 + 0x28) == -1 ^ param_2;
          do {
            if (*(uint *)(lVar4 + 0x18) <= uVar9) {
              uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar5,0);
            }
            plVar7 = *(long **)(lVar4 + (long)(int)uVar9 * 8 + 0x20);
            if (plVar7 == (long *)0x0) break;
            if (*(int *)((long)plVar7 + 0x3c) == *(int *)(param_1 + 0x20)) {
              if (bVar1) {
                bVar1 = true;
              }
              else {
                if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar2 = native_NGUITools__GetActive_72d0d4(lVar3,0);
                if ((uVar2 & 1) == 0) {
                  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  bVar1 = true;
                  native_NGUITools__SetActive_731af8(lVar3,1,0);
                }
                else {
                  bVar1 = false;
                }
              }
              *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
              if (*(int *)(param_1 + 0x28) == 0) {
                lVar4 = plVar7[9];
                uVar5 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
                native_EventDelegate_Callback___ctor_54bd18
                          (uVar5,param_1,_Method_UIPlayTween_OnFinished___12e7870,0);
                if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                native_EventDelegate__Add_def180(lVar4,uVar5,1,0);
                native_UITweener__Toggle_94901c(plVar7,0);
              }
              else {
                if ((*(char *)(param_1 + 0x2c) != '\0') ||
                   ((*(char *)(param_1 + 0x2d) != '\0' &&
                    (uVar2 = native_UnityEngine_Behaviour__get_enabled_8d7acc(plVar7,0),
                    (uVar2 & 1) == 0)))) {
                  (**(code **)(*plVar7 + 0x198))
                            (plVar7,param_2 & 1,*(undefined8 *)(*plVar7 + 0x1a0));
                  native_UITweener__ResetToBeginning_948fd4(plVar7,0);
                }
                lVar4 = plVar7[9];
                uVar5 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
                native_EventDelegate_Callback___ctor_54bd18
                          (uVar5,param_1,_Method_UIPlayTween_OnFinished___12e7870,0);
                if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                native_EventDelegate__Add_def180(lVar4,uVar5,1,0);
                (**(code **)(*plVar7 + 0x198))(plVar7,param_2 & 1,*(undefined8 *)(*plVar7 + 0x1a0));
              }
            }
            uVar9 = uVar9 + 1;
            if (iVar8 <= (int)uVar9) {
              return;
            }
            lVar4 = *plVar6;
          } while (lVar4 != 0);
          goto LAB_00af7ca0;
        }
      }
      return;
    }
  }
LAB_00af7ca0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPlayTween$$OnFinished @ 0xaf8418
 * void UIPlayTween__OnFinished (UIPlayTween_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayTween$$OnFinished
   void UIPlayTween__OnFinished (UIPlayTween_o* __this, const MethodInfo* method); */

void native_UIPlayTween__OnFinished_af8418(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  if ((bRam0000000001342087 & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIPlayTween_TypeInfo_12d6488);
    bRam0000000001342087 = 1;
  }
  iVar4 = *(int *)(param_1 + 100) + -1;
  *(int *)(param_1 + 100) = iVar4;
  if (iVar4 == 0) {
    uVar8 = **(undefined8 **)(_UIPlayTween_TypeInfo_12d6488 + 0xb8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar8,0,0);
    if ((uVar5 & 1) != 0) {
      plVar6 = *(long **)(_UIPlayTween_TypeInfo_12d6488 + 0xb8);
      *plVar6 = param_1;
      native_sub_4326e0(plVar6,param_1);
      uVar8 = *(undefined8 *)(param_1 + 0x40);
      if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_EventDelegate__Execute_deecbc(uVar8,0);
      plVar6 = (long *)(param_1 + 0x48);
      lVar9 = *plVar6;
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar9,0,0);
      if (((uVar5 & 1) != 0) &&
         (uVar5 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x50),0),
         (uVar5 & 1) == 0)) {
        if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        native_UnityEngine_GameObject__SendMessage_8de464
                  (*plVar6,*(undefined8 *)(param_1 + 0x50),1,0);
      }
      *plVar6 = 0;
      native_sub_4326e0(plVar6,0);
      puVar7 = *(undefined8 **)(_UIPlayTween_TypeInfo_12d6488 + 0xb8);
      *puVar7 = 0;
      if (iRam0000000001345318 != 0) {
        puVar1 = (ulong *)(((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
  }
  return;
}



/* UIPlayTween$$.ctor @ 0xaf85bc
 * void UIPlayTween___ctor (UIPlayTween_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayTween$$.ctor
   void UIPlayTween___ctor (UIPlayTween_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIPlayTween___ctor_af85bc(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000001342088 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
    native_sub_43273c(&System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
    bRam0000000001342088 = 1;
  }
  *(undefined4 *)(param_1 + 0x28) = 1;
  uVar1 = native_sub_432808(_System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  native_sub_4326e0(param_1 + 0x40,uVar1);
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


