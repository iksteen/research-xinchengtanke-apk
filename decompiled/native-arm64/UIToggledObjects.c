/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIToggledObjects$$Awake @ 0x94703c
 * void UIToggledObjects__Awake (UIToggledObjects_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIToggledObjects$$Awake
   void UIToggledObjects__Awake (UIToggledObjects_o* __this, const MethodInfo* method); */

long * native_UIToggledObjects__Awake_94703c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  
  if ((bRam0000000001341436 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIToggle____12e2c28);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_System_Collections_Generic_List_GameObject__Add___12dc828);
    native_sub_43273c(&Method_System_Collections_Generic_List_GameObject__get_Count___12dc840);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&Method_UIToggledObjects_Toggle___12e78f0);
    bRam0000000001341436 = 1;
  }
  puVar6 = (undefined8 *)(param_1 + 0x28);
  uVar7 = *puVar6;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 == 0) goto LAB_009471cc;
    if (*(int *)(lVar3 + 0x18) == 0) {
      lVar5 = *(long *)(param_1 + 0x20);
      if (lVar5 == 0) goto LAB_009471cc;
      if (*(int *)(lVar5 + 0x18) == 0) {
        if (*(char *)(param_1 + 0x30) != '\0') {
          lVar3 = lVar5;
        }
        native_System_Collections_Generic_List_int_____Add_d40c00
                  (lVar3,*(undefined8 *)(param_1 + 0x28),
                   _Method_System_Collections_Generic_List_GameObject__Add___12dc828);
        goto LAB_00947124;
      }
    }
    *puVar6 = 0;
    native_sub_4326e0(puVar6,0);
  }
LAB_00947124:
  lVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_UIToggle____12e2c28);
  if (lVar3 != 0) {
    lVar3 = *(long *)(lVar3 + 0x50);
    uVar7 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
    native_EventDelegate_Callback___ctor_54bd18
              (uVar7,param_1,_Method_UIToggledObjects_Toggle___12e78f0,0);
    if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if ((bRam0000000001346ef3 & 1) == 0) {
      native_sub_43273c(&EventDelegate_TypeInfo_12d4590,uVar7,0);
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
    if (lVar3 == 0) {
      if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UnityEngine_Debug__LogWarning_8dca9c
                (_StringLiteral_Attempting_to_add_a_callback_to_a_list_that_s_null_12ec670,0);
      plVar8 = (long *)0x0;
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (0 < (int)uVar1) {
        uVar2 = 0;
        lVar5 = (long)(int)uVar1;
        while( true ) {
          if (uVar1 <= uVar2) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          plVar8 = *(long **)(*(long *)(lVar3 + 0x10) + uVar2 * 8 + 0x20);
          if ((plVar8 != (long *)0x0) &&
             (uVar4 = (**(code **)(*plVar8 + 0x138))(plVar8,uVar7,*(undefined8 *)(*plVar8 + 0x140)),
             (uVar4 & 1) != 0)) {
            return plVar8;
          }
          uVar2 = uVar2 + 1;
          if (lVar5 <= (long)uVar2) break;
          uVar1 = *(uint *)(lVar3 + 0x18);
        }
      }
      plVar8 = (long *)native_sub_432808(_EventDelegate_TypeInfo_12d4590);
      native_System_Object___ctor_ad2798(plVar8,0);
      native_EventDelegate__Set_dedf08(plVar8,uVar7);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      *(undefined1 *)(plVar8 + 5) = 0;
      native_System_Collections_Generic_List_int_____Add_d40c00
                (lVar3,plVar8,_Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
    }
    return plVar8;
  }
LAB_009471cc:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIToggledObjects$$Toggle @ 0x9471d0
 * void UIToggledObjects__Toggle (UIToggledObjects_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIToggledObjects$$Toggle
   void UIToggledObjects__Toggle (UIToggledObjects_o* __this, const MethodInfo* method); */

void native_UIToggledObjects__Toggle_9471d0(long param_1)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  if ((bRam0000000001341437 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_GameObject__get_Count___12dc840);
    native_sub_43273c(&Method_System_Collections_Generic_List_GameObject__get_Item___12dc848);
    native_sub_43273c(&UIToggle_TypeInfo_12d64e0);
    bRam0000000001341437 = 1;
  }
  if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar4 = *(long *)(*(long *)(_UIToggle_TypeInfo_12d64e0 + 0xb8) + 8);
  if (lVar4 != 0) {
    lVar1 = 0x48;
    if (*(char *)(lVar4 + 0x89) != '\0') {
      lVar1 = 0x88;
    }
    cVar2 = *(char *)(lVar4 + lVar1);
    uVar3 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    lVar4 = *(long *)(param_1 + 0x18);
    if (lVar4 != 0) {
      uVar5 = 0;
      do {
        if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)uVar5) {
          lVar4 = *(long *)(param_1 + 0x20);
          if (lVar4 != 0) {
            uVar5 = 0;
            do {
              if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)uVar5) {
                return;
              }
              if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                uVar3 = native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
              }
              uVar3 = native_UIToggledObjects__Set_947330
                                (uVar3,*(undefined8 *)(*(long *)(lVar4 + 0x10) + uVar5 * 8 + 0x20),
                                 cVar2 == '\0');
              lVar4 = *(long *)(param_1 + 0x20);
              uVar5 = uVar5 + 1;
            } while (lVar4 != 0);
          }
          break;
        }
        if (*(uint *)(lVar4 + 0x18) <= uVar5) {
          uVar3 = native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        uVar3 = native_UIToggledObjects__Set_947330
                          (uVar3,*(undefined8 *)(*(long *)(lVar4 + 0x10) + uVar5 * 8 + 0x20),
                           cVar2 != '\0');
        lVar4 = *(long *)(param_1 + 0x18);
        uVar5 = uVar5 + 1;
      } while (lVar4 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIToggledObjects$$Set @ 0x947330
 * void UIToggledObjects__Set (UIToggledObjects_o* __this, UnityEngine_GameObject_o* go, bool state, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIToggledObjects$$Set
   void UIToggledObjects__Set (UIToggledObjects_o* __this, UnityEngine_GameObject_o* go, bool state,
   const MethodInfo* method); */

void native_UIToggledObjects__Set_947330(undefined8 param_1,long param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  
  if ((bRam0000000001341438 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341438 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(param_2,0,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f5b1 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8,param_3 & 1,0);
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
  uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(param_2,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(param_2,0);
  if ((param_3 & 1) == 0) {
    if (((*(ushort *)(_NGUITools_TypeInfo_12d53c8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    if ((bRam000000000133f5b0 & 1) == 0) {
      native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
      bRam000000000133f5b0 = 1;
    }
    if (lVar2 != 0) {
      lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(lVar2,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
      }
      if (lVar2 != 0) {
        if (pcRam0000000001340bf8 == (code *)0x0) {
          pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
        }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000001340bf8)(lVar2,0);
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
  native_NGUITools__Activate_7318f8(lVar2,1);
  lVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(param_2,0);
  if ((bRam000000000133f5b3 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f5b3 = 1;
  }
  if (lVar2 != 0) {
    lVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (lVar2,_Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
    if ((uVar5 & 1) != 0) {
      if (lVar3 == 0) goto LAB_00731db4;
      native_UIWidget__CreatePanel_949fec(lVar3,0);
    }
    iVar1 = native_UnityEngine_Transform__get_childCount_772a64(lVar2,0);
    if (0 < iVar1) {
      iVar6 = 0;
      do {
        uVar4 = native_UnityEngine_Transform__GetChild_772ef0(lVar2,iVar6,0);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
        }
        native_NGUITools__CallCreatePanel_731c84(uVar4);
        iVar6 = iVar6 + 1;
      } while (iVar1 != iVar6);
    }
    return;
  }
LAB_00731db4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIToggledObjects$$.ctor @ 0x9473f4
 * void UIToggledObjects___ctor (UIToggledObjects_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIToggledObjects$$.ctor
   void UIToggledObjects___ctor (UIToggledObjects_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIToggledObjects___ctor_9473f4(ulong param_1)

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


