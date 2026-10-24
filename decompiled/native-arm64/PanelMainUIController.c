/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* PanelMainUIController$$get_Instance @ 0x738fb0
 * PanelMainUIController_o* PanelMainUIController__get_Instance (const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0073930c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PanelMainUIController$$get_Instance
   PanelMainUIController_o* PanelMainUIController__get_Instance (const MethodInfo* method); */

undefined8 native_PanelMainUIController__get_Instance_738fb0(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char acStack_34 [4];
  
  if ((bRam000000000133f5e3 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_PanelMainUIController____12e2ac0);
    native_sub_43273c(&GameResourcesManager_TypeInfo_12d47e0);
    native_sub_43273c(&Method_UnityEngine_Object_Instantiate_GameObject____12e5a40);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_UIMain_12f2938);
    native_sub_43273c(&StringLiteral_UIMain_Clone__12f2940);
    native_sub_43273c(&StringLiteral_Camera_PanelMain_12ecb88);
    bRam000000000133f5e3 = 1;
  }
  acStack_34[0] = '\0';
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = **(undefined8 **)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,0,0);
  if ((uVar1 & 1) != 0) {
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 8);
    acStack_34[0] = '\0';
    native_System_Threading_Monitor__Enter_90d874(uVar4,acStack_34,0);
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = **(undefined8 **)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar5,0,0);
    if ((uVar1 & 1) != 0) {
      lVar2 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_UIMain_12f2938,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar2,0,0);
      if ((uVar1 & 1) != 0) {
        lVar2 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_UIMain_Clone__12f2940,0);
      }
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar2,0,0);
      if ((uVar1 & 1) != 0) {
        if (((*(byte *)(_GameResourcesManager_TypeInfo_12d47e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_GameResourcesManager_TypeInfo_12d47e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar5 = native_GameResourcesManager__GetUIPrefab_defa08(_StringLiteral_UIMain_12f2938,0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar2 = native_UnityEngine_Object__Instantiate_GameObject__4a6428
                          (uVar5,_Method_UnityEngine_Object_Instantiate_GameObject____12e5a40);
      }
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      lVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar2,0);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      lVar2 = native_UnityEngine_Transform__Find_772c0c
                        (lVar2,_StringLiteral_Camera_PanelMain_12ecb88,0);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      uVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (lVar2,
                         _Method_UnityEngine_Component_GetComponent_PanelMainUIController____12e2ac0
                        );
      if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      puVar3 = *(undefined8 **)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8);
      *puVar3 = uVar5;
      native_sub_4326e0(puVar3,uVar5);
    }
    if (acStack_34[0] != '\0') {
      native_System_Threading_Monitor__Exit_90d894(uVar4,0);
    }
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  return **(undefined8 **)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8);
}



/* PanelMainUIController$$GetDeviceUniqueIdentifier @ 0x739380
 * System_String_o* PanelMainUIController__GetDeviceUniqueIdentifier (PanelMainUIController_o* __this, const MethodInfo* method); */

/* PanelMainUIController$$GetDeviceUniqueIdentifier
   System_String_o* PanelMainUIController__GetDeviceUniqueIdentifier (PanelMainUIController_o*
   __this, const MethodInfo* method); */

void native_PanelMainUIController__GetDeviceUniqueIdentifier_739380(void)

{
  if (pcRam000000000133fc58 == (code *)0x0) {
    pcRam000000000133fc58 = (code *)native_sub_4326f0(&UNK_00e29aae);
  }
                    /* WARNING: Could not recover jumptable at 0x0076ded0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000133fc58)();
  return;
}



/* PanelMainUIController$$Start @ 0x739388
 * void PanelMainUIController__Start (PanelMainUIController_o* __this, const MethodInfo* method); */

/* PanelMainUIController$$Start
   void PanelMainUIController__Start (PanelMainUIController_o* __this, const MethodInfo* method); */

void native_PanelMainUIController__Start_739388(void)

{
  return;
}



/* PanelMainUIController$$Update @ 0x73938c
 * void PanelMainUIController__Update (PanelMainUIController_o* __this, const MethodInfo* method); */

/* PanelMainUIController$$Update
   void PanelMainUIController__Update (PanelMainUIController_o* __this, const MethodInfo* method);
    */

void native_PanelMainUIController__Update_73938c(void)

{
  return;
}



/* PanelMainUIController$$OnDestroy @ 0x739390
 * void PanelMainUIController__OnDestroy (PanelMainUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PanelMainUIController$$OnDestroy
   void PanelMainUIController__OnDestroy (PanelMainUIController_o* __this, const MethodInfo*
   method); */

void native_PanelMainUIController__OnDestroy_739390(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if ((bRam000000000133f5e4 & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    bRam000000000133f5e4 = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  puVar4 = *(undefined8 **)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8);
  *puVar4 = 0;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* PanelMainUIController$$GetLayerContainer @ 0x7393f8
 * UnityEngine_GameObject_o* PanelMainUIController__GetLayerContainer (PanelMainUIController_o* __this, int32_t ul, const MethodInfo* method); */

/* PanelMainUIController$$GetLayerContainer
   UnityEngine_GameObject_o* PanelMainUIController__GetLayerContainer (PanelMainUIController_o*
   __this, int32_t ul, const MethodInfo* method); */

undefined8 native_PanelMainUIController__GetLayerContainer_7393f8(long param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  switch(param_2) {
  case 1:
    puVar1 = (undefined8 *)(param_1 + 0x18);
    break;
  case 2:
    puVar1 = (undefined8 *)(param_1 + 0x30);
    break;
  case 3:
    puVar1 = (undefined8 *)(param_1 + 0x60);
    break;
  case 4:
    puVar1 = (undefined8 *)(param_1 + 0x48);
    break;
  case 5:
    puVar1 = (undefined8 *)(param_1 + 0x78);
    break;
  default:
    return 0;
  }
  return *puVar1;
}



/* PanelMainUIController$$AddUI @ 0x73944c
 * UnityEngine_GameObject_o* PanelMainUIController__AddUI (PanelMainUIController_o* __this, int32_t layer, System_String_o* uiName, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072f0b0) */
/* WARNING: Removing unreachable block (ram,0x0072f0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PanelMainUIController$$AddUI
   UnityEngine_GameObject_o* PanelMainUIController__AddUI (PanelMainUIController_o* __this, int32_t
   layer, System_String_o* uiName, const MethodInfo* method); */

long native_PanelMainUIController__AddUI_73944c(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  if ((bRam000000000133f5e5 & 1) == 0) {
    native_sub_43273c(&GameResourcesManager_TypeInfo_12d47e0);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5e5 = 1;
  }
  if (((*(byte *)(_GameResourcesManager_TypeInfo_12d47e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_GameResourcesManager_TypeInfo_12d47e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = native_GameResourcesManager__GetUIPrefab_defa08(param_3,0);
  switch(param_2) {
  case 1:
    plVar7 = (long *)(param_1 + 0x18);
    break;
  case 2:
    plVar7 = (long *)(param_1 + 0x30);
    break;
  case 3:
    plVar7 = (long *)(param_1 + 0x60);
    break;
  case 4:
    plVar7 = (long *)(param_1 + 0x48);
    break;
  case 5:
    plVar7 = (long *)(param_1 + 0x78);
    break;
  default:
    lVar8 = 0;
    goto LAB_00739514;
  }
  lVar8 = *plVar7;
LAB_00739514:
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
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
  if (lVar8 != 0) {
    uVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar8,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    lVar3 = native_UnityEngine_Object__Instantiate_GameObject__4a6564
                      (lVar6,uVar2,_Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
    if ((uVar4 & 1) == 0) {
      return lVar3;
    }
    if ((lVar3 != 0) &&
       (lVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0), lVar6 != 0)) {
      uVar2 = native_UnityEngine_Object__get_name_8e8098(lVar6,0);
      native_UnityEngine_Object__set_name_8e9c08(lVar3,uVar2,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar8,0,0);
      if ((uVar4 & 1) != 0) {
        uVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar8,0);
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



/* PanelMainUIController$$CleanAllUI @ 0x73954c
 * void PanelMainUIController__CleanAllUI (PanelMainUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0073a0c4) */
/* WARNING: Removing unreachable block (ram,0x0073a0a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PanelMainUIController$$CleanAllUI
   void PanelMainUIController__CleanAllUI (PanelMainUIController_o* __this, const MethodInfo*
   method); */

void native_PanelMainUIController__CleanAllUI_73954c(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  int aiStack_68 [5];
  int iStack_54;
  
  if ((bRam000000000133f5e6 & 1) == 0) {
    native_sub_43273c(&System_IDisposable_TypeInfo_12d4b00);
    native_sub_43273c(&System_Collections_IEnumerator_TypeInfo_12d4b80);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_Transform_TypeInfo_12d6300);
    bRam000000000133f5e6 = 1;
  }
  iStack_54 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar1 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_1 + 0x18),0),
     lVar1 != 0)) {
    plVar2 = (long *)native_UnityEngine_Transform__GetEnumerator_772e40(lVar1,0);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    do {
      lVar1 = *plVar2;
      if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_00739644;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar1 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar2,_System_Collections_IEnumerator_TypeInfo_12d4b80,0);
LAB_00739644:
      uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((uVar6 & 1) == 0) {
        aiStack_68[iStack_54] = 0x43;
        iStack_54 = iStack_54 + 1;
        plVar2 = (long *)native_sub_4327f8(plVar2,_System_IDisposable_TypeInfo_12d4b00);
        if (plVar2 == (long *)0x0) goto LAB_007397b8;
        lVar1 = *plVar2;
        if ((ulong)*(ushort *)(lVar1 + 0x12a) == 0) goto LAB_00739790;
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        goto LAB_00739774;
      }
      lVar1 = *plVar2;
      if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar3 = (undefined8 *)(lVar1 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_007396ac;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar1 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar2,_System_Collections_IEnumerator_TypeInfo_12d4b80,1);
LAB_007396ac:
      plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
      if (plVar4 == (long *)0x0) goto LAB_0073a08c;
      if ((*(byte *)(*plVar4 + 300) < *(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300)) ||
         (*(long *)(*(long *)(*plVar4 + 200) +
                    (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300) * 8 + -8) !=
          _UnityEngine_Transform_TypeInfo_12d6300)) goto LAB_0073a078;
      uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(plVar4,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UnityEngine_Object__Destroy_8ea574(uVar5,0);
    } while( true );
  }
  goto LAB_0073a0a0;
  while( true ) {
    uVar6 = uVar6 + 1;
    piVar7 = piVar7 + 4;
    if (*(ushort *)(lVar1 + 0x12a) <= uVar6) break;
LAB_00739774:
    if (*(long *)(piVar7 + -2) == _System_IDisposable_TypeInfo_12d4b00) {
      puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_007397ac;
    }
  }
LAB_00739790:
  puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_System_IDisposable_TypeInfo_12d4b00,0);
LAB_007397ac:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_007397b8:
  if ((iStack_54 != 0) && (aiStack_68[iStack_54 + -1] == 0x43)) {
    iStack_54 = iStack_54 + -1;
  }
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (lVar1 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_1 + 0x30),0),
     lVar1 != 0)) {
    plVar2 = (long *)native_UnityEngine_Transform__GetEnumerator_772e40(lVar1,0);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    do {
      lVar1 = *plVar2;
      if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0073986c;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar1 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar2,_System_Collections_IEnumerator_TypeInfo_12d4b80,0);
LAB_0073986c:
      uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((uVar6 & 1) == 0) {
        aiStack_68[iStack_54] = 0x86;
        iStack_54 = iStack_54 + 1;
        plVar2 = (long *)native_sub_4327f8(plVar2,_System_IDisposable_TypeInfo_12d4b00);
        if (plVar2 == (long *)0x0) goto LAB_007399d8;
        lVar1 = *plVar2;
        if ((ulong)*(ushort *)(lVar1 + 0x12a) == 0) goto LAB_007399b0;
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        goto LAB_00739994;
      }
      lVar1 = *plVar2;
      if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar3 = (undefined8 *)(lVar1 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_007398d4;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar1 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar2,_System_Collections_IEnumerator_TypeInfo_12d4b80,1);
LAB_007398d4:
      plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      if ((*(byte *)(*plVar4 + 300) < *(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300)) ||
         (*(long *)(*(long *)(*plVar4 + 200) +
                    (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300) * 8 + -8) !=
          _UnityEngine_Transform_TypeInfo_12d6300)) goto LAB_0073a07c;
      uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(plVar4,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UnityEngine_Object__Destroy_8ea574(uVar5,0);
    } while( true );
  }
  goto LAB_0073a0a0;
  while( true ) {
    uVar6 = uVar6 + 1;
    piVar7 = piVar7 + 4;
    if (*(ushort *)(lVar1 + 0x12a) <= uVar6) break;
LAB_00739994:
    if (*(long *)(piVar7 + -2) == _System_IDisposable_TypeInfo_12d4b00) {
      puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_007399cc;
    }
  }
LAB_007399b0:
  puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_System_IDisposable_TypeInfo_12d4b00,0);
LAB_007399cc:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_007399d8:
  if ((iStack_54 != 0) && (aiStack_68[iStack_54 + -1] == 0x86)) {
    iStack_54 = iStack_54 + -1;
  }
  if ((*(long *)(param_1 + 0x60) != 0) &&
     (lVar1 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_1 + 0x60),0),
     lVar1 != 0)) {
    plVar2 = (long *)native_UnityEngine_Transform__GetEnumerator_772e40(lVar1,0);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    do {
      lVar1 = *plVar2;
      if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_00739a8c;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar1 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar2,_System_Collections_IEnumerator_TypeInfo_12d4b80,0);
LAB_00739a8c:
      uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((uVar6 & 1) == 0) {
        aiStack_68[iStack_54] = 0xc9;
        iStack_54 = iStack_54 + 1;
        plVar2 = (long *)native_sub_4327f8(plVar2,_System_IDisposable_TypeInfo_12d4b00);
        if (plVar2 == (long *)0x0) goto LAB_00739bf8;
        lVar1 = *plVar2;
        if ((ulong)*(ushort *)(lVar1 + 0x12a) == 0) goto LAB_00739bd0;
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        goto LAB_00739bb4;
      }
      lVar1 = *plVar2;
      if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar3 = (undefined8 *)(lVar1 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_00739af4;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar1 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar2,_System_Collections_IEnumerator_TypeInfo_12d4b80,1);
LAB_00739af4:
      plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      if ((*(byte *)(*plVar4 + 300) < *(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300)) ||
         (*(long *)(*(long *)(*plVar4 + 200) +
                    (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300) * 8 + -8) !=
          _UnityEngine_Transform_TypeInfo_12d6300)) goto LAB_0073a080;
      uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(plVar4,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UnityEngine_Object__Destroy_8ea574(uVar5,0);
    } while( true );
  }
  goto LAB_0073a0a0;
  while( true ) {
    uVar6 = uVar6 + 1;
    piVar7 = piVar7 + 4;
    if (*(ushort *)(lVar1 + 0x12a) <= uVar6) break;
LAB_00739bb4:
    if (*(long *)(piVar7 + -2) == _System_IDisposable_TypeInfo_12d4b00) {
      puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_00739bec;
    }
  }
LAB_00739bd0:
  puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_System_IDisposable_TypeInfo_12d4b00,0);
LAB_00739bec:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_00739bf8:
  if ((iStack_54 != 0) && (aiStack_68[iStack_54 + -1] == 0xc9)) {
    iStack_54 = iStack_54 + -1;
  }
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (lVar1 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_1 + 0x48),0),
     lVar1 != 0)) {
    plVar2 = (long *)native_UnityEngine_Transform__GetEnumerator_772e40(lVar1,0);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    do {
      lVar1 = *plVar2;
      if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_00739cac;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar1 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar2,_System_Collections_IEnumerator_TypeInfo_12d4b80,0);
LAB_00739cac:
      uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((uVar6 & 1) == 0) {
        aiStack_68[iStack_54] = 0x10c;
        iStack_54 = iStack_54 + 1;
        plVar2 = (long *)native_sub_4327f8(plVar2,_System_IDisposable_TypeInfo_12d4b00);
        if (plVar2 == (long *)0x0) goto LAB_00739e18;
        lVar1 = *plVar2;
        if ((ulong)*(ushort *)(lVar1 + 0x12a) == 0) goto LAB_00739df0;
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        goto LAB_00739dd4;
      }
      lVar1 = *plVar2;
      if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar3 = (undefined8 *)(lVar1 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_00739d14;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar1 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar2,_System_Collections_IEnumerator_TypeInfo_12d4b80,1);
LAB_00739d14:
      plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      if ((*(byte *)(*plVar4 + 300) < *(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300)) ||
         (*(long *)(*(long *)(*plVar4 + 200) +
                    (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300) * 8 + -8) !=
          _UnityEngine_Transform_TypeInfo_12d6300)) goto LAB_0073a084;
      uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(plVar4,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UnityEngine_Object__Destroy_8ea574(uVar5,0);
    } while( true );
  }
  goto LAB_0073a0a0;
LAB_0073a078:
  native_sub_432b04();
LAB_0073a07c:
  native_sub_432b04();
LAB_0073a080:
  native_sub_432b04();
LAB_0073a084:
  native_sub_432b04();
LAB_0073a088:
  native_sub_432b04();
LAB_0073a08c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
  while( true ) {
    uVar6 = uVar6 + 1;
    piVar7 = piVar7 + 4;
    if (*(ushort *)(lVar1 + 0x12a) <= uVar6) break;
LAB_00739ff4:
    if (*(long *)(piVar7 + -2) == _System_IDisposable_TypeInfo_12d4b00) {
      puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0073a02c;
    }
  }
LAB_0073a010:
  puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_System_IDisposable_TypeInfo_12d4b00,0);
LAB_0073a02c:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
  while( true ) {
    uVar6 = uVar6 + 1;
    piVar7 = piVar7 + 4;
    if (*(ushort *)(lVar1 + 0x12a) <= uVar6) break;
LAB_00739dd4:
    if (*(long *)(piVar7 + -2) == _System_IDisposable_TypeInfo_12d4b00) {
      puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_00739e0c;
    }
  }
LAB_00739df0:
  puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_System_IDisposable_TypeInfo_12d4b00,0);
LAB_00739e0c:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_00739e18:
  if ((iStack_54 != 0) && (aiStack_68[iStack_54 + -1] == 0x10c)) {
    iStack_54 = iStack_54 + -1;
  }
  if ((*(long *)(param_1 + 0x78) != 0) &&
     (lVar1 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_1 + 0x78),0),
     lVar1 != 0)) {
    plVar2 = (long *)native_UnityEngine_Transform__GetEnumerator_772e40(lVar1,0);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    do {
      lVar1 = *plVar2;
      if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_00739ecc;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar1 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar2,_System_Collections_IEnumerator_TypeInfo_12d4b80,0);
LAB_00739ecc:
      uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((uVar6 & 1) == 0) {
        aiStack_68[iStack_54] = 0x14f;
        iStack_54 = iStack_54 + 1;
        plVar2 = (long *)native_sub_4327f8(plVar2,_System_IDisposable_TypeInfo_12d4b00);
        if (plVar2 == (long *)0x0) {
          return;
        }
        lVar1 = *plVar2;
        if ((ulong)*(ushort *)(lVar1 + 0x12a) == 0) goto LAB_0073a010;
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        goto LAB_00739ff4;
      }
      lVar1 = *plVar2;
      if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar3 = (undefined8 *)(lVar1 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_00739f34;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar1 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar2,_System_Collections_IEnumerator_TypeInfo_12d4b80,1);
LAB_00739f34:
      plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      if ((*(byte *)(*plVar4 + 300) < *(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300)) ||
         (*(long *)(*(long *)(*plVar4 + 200) +
                    (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300) * 8 + -8) !=
          _UnityEngine_Transform_TypeInfo_12d6300)) goto LAB_0073a088;
      uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(plVar4,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UnityEngine_Object__Destroy_8ea574(uVar5,0);
    } while( true );
  }
LAB_0073a0a0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* PanelMainUIController$$EnterRemoveCust @ 0x73a19c
 * void PanelMainUIController__EnterRemoveCust (PanelMainUIController_o* __this, System_String_o* custname, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072f0b0) */
/* WARNING: Removing unreachable block (ram,0x007394ec) */
/* WARNING: Removing unreachable block (ram,0x0072f0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PanelMainUIController$$EnterRemoveCust
   void PanelMainUIController__EnterRemoveCust (PanelMainUIController_o* __this, System_String_o*
   custname, const MethodInfo* method); */

long native_PanelMainUIController__EnterRemoveCust_73a19c(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  native_PanelMainUIController__CleanAllUI_73954c();
  if ((bRam000000000133f5e5 & 1) == 0) {
    native_sub_43273c(&GameResourcesManager_TypeInfo_12d47e0);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5e5 = 1;
  }
  if (((*(byte *)(_GameResourcesManager_TypeInfo_12d47e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_GameResourcesManager_TypeInfo_12d47e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = native_GameResourcesManager__GetUIPrefab_defa08(param_2,0);
  lVar7 = *(long *)(param_1 + 0x30);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
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
  if (lVar7 != 0) {
    uVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar7,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    lVar3 = native_UnityEngine_Object__Instantiate_GameObject__4a6564
                      (lVar6,uVar2,_Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
    if ((uVar4 & 1) == 0) {
      return lVar3;
    }
    if ((lVar3 != 0) &&
       (lVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0), lVar6 != 0)) {
      uVar2 = native_UnityEngine_Object__get_name_8e8098(lVar6,0);
      native_UnityEngine_Object__set_name_8e9c08(lVar3,uVar2,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
      if ((uVar4 & 1) != 0) {
        uVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar7,0);
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



/* PanelMainUIController$$EnterYinsi @ 0x73a1cc
 * void PanelMainUIController__EnterYinsi (PanelMainUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072f0b0) */
/* WARNING: Removing unreachable block (ram,0x007394ec) */
/* WARNING: Removing unreachable block (ram,0x0072f0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PanelMainUIController$$EnterYinsi
   void PanelMainUIController__EnterYinsi (PanelMainUIController_o* __this, const MethodInfo*
   method); */

long native_PanelMainUIController__EnterYinsi_73a1cc(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam000000000133f5e7 & 1) == 0) {
    native_sub_43273c(&StringLiteral_ContainerYinsi_12ed280);
    bRam000000000133f5e7 = 1;
  }
  native_PanelMainUIController__CleanAllUI_73954c(param_1);
  uVar2 = _StringLiteral_ContainerYinsi_12ed280;
  if ((bRam000000000133f5e5 & 1) == 0) {
    native_sub_43273c(&GameResourcesManager_TypeInfo_12d47e0);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5e5 = 1;
  }
  if (((*(byte *)(_GameResourcesManager_TypeInfo_12d47e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_GameResourcesManager_TypeInfo_12d47e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = native_GameResourcesManager__GetUIPrefab_defa08(uVar2,0);
  lVar7 = *(long *)(param_1 + 0x30);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
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
  if (lVar7 != 0) {
    uVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar7,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    lVar3 = native_UnityEngine_Object__Instantiate_GameObject__4a6564
                      (lVar6,uVar2,_Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
    if ((uVar4 & 1) == 0) {
      return lVar3;
    }
    if ((lVar3 != 0) &&
       (lVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0), lVar6 != 0)) {
      uVar2 = native_UnityEngine_Object__get_name_8e8098(lVar6,0);
      native_UnityEngine_Object__set_name_8e9c08(lVar3,uVar2,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
      if ((uVar4 & 1) != 0) {
        uVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar7,0);
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



/* PanelMainUIController$$EnterCompayintro @ 0x73a224
 * void PanelMainUIController__EnterCompayintro (PanelMainUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072f0b0) */
/* WARNING: Removing unreachable block (ram,0x007394ec) */
/* WARNING: Removing unreachable block (ram,0x0072f0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PanelMainUIController$$EnterCompayintro
   void PanelMainUIController__EnterCompayintro (PanelMainUIController_o* __this, const MethodInfo*
   method); */

long native_PanelMainUIController__EnterCompayintro_73a224(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam000000000133f5e8 & 1) == 0) {
    native_sub_43273c(&StringLiteral_ContainerCompayintro_12ed218);
    bRam000000000133f5e8 = 1;
  }
  native_PanelMainUIController__CleanAllUI_73954c(param_1);
  uVar2 = _StringLiteral_ContainerCompayintro_12ed218;
  if ((bRam000000000133f5e5 & 1) == 0) {
    native_sub_43273c(&GameResourcesManager_TypeInfo_12d47e0);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5e5 = 1;
  }
  if (((*(byte *)(_GameResourcesManager_TypeInfo_12d47e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_GameResourcesManager_TypeInfo_12d47e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = native_GameResourcesManager__GetUIPrefab_defa08(uVar2,0);
  lVar7 = *(long *)(param_1 + 0x30);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
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
  if (lVar7 != 0) {
    uVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar7,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    lVar3 = native_UnityEngine_Object__Instantiate_GameObject__4a6564
                      (lVar6,uVar2,_Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
    if ((uVar4 & 1) == 0) {
      return lVar3;
    }
    if ((lVar3 != 0) &&
       (lVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0), lVar6 != 0)) {
      uVar2 = native_UnityEngine_Object__get_name_8e8098(lVar6,0);
      native_UnityEngine_Object__set_name_8e9c08(lVar3,uVar2,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
      if ((uVar4 & 1) != 0) {
        uVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar7,0);
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



/* PanelMainUIController$$EnterOperdoc @ 0x73a27c
 * void PanelMainUIController__EnterOperdoc (PanelMainUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072f0b0) */
/* WARNING: Removing unreachable block (ram,0x007394ec) */
/* WARNING: Removing unreachable block (ram,0x0072f0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PanelMainUIController$$EnterOperdoc
   void PanelMainUIController__EnterOperdoc (PanelMainUIController_o* __this, const MethodInfo*
   method); */

long native_PanelMainUIController__EnterOperdoc_73a27c(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam000000000133f5e9 & 1) == 0) {
    native_sub_43273c(&StringLiteral_ContainerOperdoc_12ed228);
    bRam000000000133f5e9 = 1;
  }
  native_PanelMainUIController__CleanAllUI_73954c(param_1);
  uVar2 = _StringLiteral_ContainerOperdoc_12ed228;
  if ((bRam000000000133f5e5 & 1) == 0) {
    native_sub_43273c(&GameResourcesManager_TypeInfo_12d47e0);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5e5 = 1;
  }
  if (((*(byte *)(_GameResourcesManager_TypeInfo_12d47e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_GameResourcesManager_TypeInfo_12d47e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = native_GameResourcesManager__GetUIPrefab_defa08(uVar2,0);
  lVar7 = *(long *)(param_1 + 0x30);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
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
  if (lVar7 != 0) {
    uVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar7,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    lVar3 = native_UnityEngine_Object__Instantiate_GameObject__4a6564
                      (lVar6,uVar2,_Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
    if ((uVar4 & 1) == 0) {
      return lVar3;
    }
    if ((lVar3 != 0) &&
       (lVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0), lVar6 != 0)) {
      uVar2 = native_UnityEngine_Object__get_name_8e8098(lVar6,0);
      native_UnityEngine_Object__set_name_8e9c08(lVar3,uVar2,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
      if ((uVar4 & 1) != 0) {
        uVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar7,0);
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



/* PanelMainUIController$$SwitchLandscapescreen @ 0x73a2d4
 * void PanelMainUIController__SwitchLandscapescreen (PanelMainUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0076a700) */
/* WARNING: Removing unreachable block (ram,0x0076a714) */
/* WARNING: Removing unreachable block (ram,0x0076a71c) */
/* WARNING: Removing unreachable block (ram,0x0076a720) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PanelMainUIController$$SwitchLandscapescreen
   void PanelMainUIController__SwitchLandscapescreen (PanelMainUIController_o* __this, const
   MethodInfo* method); */

void native_PanelMainUIController__SwitchLandscapescreen_73a2d4(void)

{
  long lVar1;
  
  if ((bRam000000000133f5ea & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIRoot____12e4ad8);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_UIMain_12f2938);
    bRam000000000133f5ea = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  *(undefined1 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x90) = 1;
  lVar1 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_UIMain_12f2938,0);
  if (((lVar1 != 0) &&
      (lVar1 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar1,0), lVar1 != 0)) &&
     (lVar1 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                        (lVar1,_Method_UnityEngine_GameObject_GetComponent_UIRoot____12e4ad8),
     lVar1 != 0)) {
    *(undefined2 *)(lVar1 + 0x2c) = 0x100;
    *(undefined8 *)(lVar1 + 0x1c) = 0x78000000438;
    native_UnityEngine_Screen__set_fullScreen_76a7dc(0,0);
    if ((bRam000000000133faa8 & 1) == 0) {
      native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338,0);
      native_sub_43273c(&
                        StringLiteral_ScreenOrientation_Unknown_is_deprecated__Please_use_ScreenOrientation_AutoRotation_12f0c98
                       );
      bRam000000000133faa8 = 1;
    }
    if (pcRam000000000133faa0 == (code *)0x0) {
      pcRam000000000133faa0 = (code *)native_sub_4326f0(&UNK_00e29071);
    }
                    /* WARNING: Could not recover jumptable at 0x0076a764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000133faa0)(1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* PanelMainUIController$$SwitchVerticalscreen @ 0x73a3b8
 * void PanelMainUIController__SwitchVerticalscreen (PanelMainUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0076a700) */
/* WARNING: Removing unreachable block (ram,0x0076a714) */
/* WARNING: Removing unreachable block (ram,0x0076a71c) */
/* WARNING: Removing unreachable block (ram,0x0076a720) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PanelMainUIController$$SwitchVerticalscreen
   void PanelMainUIController__SwitchVerticalscreen (PanelMainUIController_o* __this, const
   MethodInfo* method); */

void native_PanelMainUIController__SwitchVerticalscreen_73a3b8(void)

{
  long lVar1;
  
  if ((bRam000000000133f5eb & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIRoot____12e4ad8);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_UIMain_12f2938);
    bRam000000000133f5eb = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  *(undefined1 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x90) = 0;
  lVar1 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_UIMain_12f2938,0);
  if (((lVar1 != 0) &&
      (lVar1 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar1,0), lVar1 != 0)) &&
     (lVar1 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                        (lVar1,_Method_UnityEngine_GameObject_GetComponent_UIRoot____12e4ad8),
     lVar1 != 0)) {
    *(undefined2 *)(lVar1 + 0x2c) = 1;
    *(undefined8 *)(lVar1 + 0x1c) = 0x43800000780;
    native_UnityEngine_Screen__set_fullScreen_76a7dc(1,0);
    if ((bRam000000000133faa8 & 1) == 0) {
      native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338,0);
      native_sub_43273c(&
                        StringLiteral_ScreenOrientation_Unknown_is_deprecated__Please_use_ScreenOrientation_AutoRotation_12f0c98
                       );
      bRam000000000133faa8 = 1;
    }
    if (pcRam000000000133faa0 == (code *)0x0) {
      pcRam000000000133faa0 = (code *)native_sub_4326f0(&UNK_00e29071);
    }
                    /* WARNING: Could not recover jumptable at 0x0076a764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000000133faa0)(3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* PanelMainUIController$$ClearNowScene @ 0x73a498
 * void PanelMainUIController__ClearNowScene (PanelMainUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0073a0c4) */
/* WARNING: Removing unreachable block (ram,0x0073a0a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PanelMainUIController$$ClearNowScene
   void PanelMainUIController__ClearNowScene (PanelMainUIController_o* __this, const MethodInfo*
   method); */

void native_PanelMainUIController__ClearNowScene_73a498(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  int aiStack_68 [5];
  int iStack_54;
  
  if ((bRam000000000133f5e6 & 1) == 0) {
    native_sub_43273c(&System_IDisposable_TypeInfo_12d4b00);
    native_sub_43273c(&System_Collections_IEnumerator_TypeInfo_12d4b80);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_Transform_TypeInfo_12d6300);
    bRam000000000133f5e6 = 1;
  }
  iStack_54 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar1 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_1 + 0x18),0),
     lVar1 != 0)) {
    plVar2 = (long *)native_UnityEngine_Transform__GetEnumerator_772e40(lVar1,0);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    do {
      lVar1 = *plVar2;
      if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_00739644;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar1 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar2,_System_Collections_IEnumerator_TypeInfo_12d4b80,0);
LAB_00739644:
      uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((uVar6 & 1) == 0) {
        aiStack_68[iStack_54] = 0x43;
        iStack_54 = iStack_54 + 1;
        plVar2 = (long *)native_sub_4327f8(plVar2,_System_IDisposable_TypeInfo_12d4b00);
        if (plVar2 == (long *)0x0) goto LAB_007397b8;
        lVar1 = *plVar2;
        if ((ulong)*(ushort *)(lVar1 + 0x12a) == 0) goto LAB_00739790;
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        goto LAB_00739774;
      }
      lVar1 = *plVar2;
      if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar3 = (undefined8 *)(lVar1 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_007396ac;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar1 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar2,_System_Collections_IEnumerator_TypeInfo_12d4b80,1);
LAB_007396ac:
      plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
      if (plVar4 == (long *)0x0) goto LAB_0073a08c;
      if ((*(byte *)(*plVar4 + 300) < *(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300)) ||
         (*(long *)(*(long *)(*plVar4 + 200) +
                    (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300) * 8 + -8) !=
          _UnityEngine_Transform_TypeInfo_12d6300)) goto LAB_0073a078;
      uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(plVar4,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UnityEngine_Object__Destroy_8ea574(uVar5,0);
    } while( true );
  }
  goto LAB_0073a0a0;
  while( true ) {
    uVar6 = uVar6 + 1;
    piVar7 = piVar7 + 4;
    if (*(ushort *)(lVar1 + 0x12a) <= uVar6) break;
LAB_00739774:
    if (*(long *)(piVar7 + -2) == _System_IDisposable_TypeInfo_12d4b00) {
      puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_007397ac;
    }
  }
LAB_00739790:
  puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_System_IDisposable_TypeInfo_12d4b00,0);
LAB_007397ac:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_007397b8:
  if ((iStack_54 != 0) && (aiStack_68[iStack_54 + -1] == 0x43)) {
    iStack_54 = iStack_54 + -1;
  }
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (lVar1 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_1 + 0x30),0),
     lVar1 != 0)) {
    plVar2 = (long *)native_UnityEngine_Transform__GetEnumerator_772e40(lVar1,0);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    do {
      lVar1 = *plVar2;
      if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0073986c;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar1 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar2,_System_Collections_IEnumerator_TypeInfo_12d4b80,0);
LAB_0073986c:
      uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((uVar6 & 1) == 0) {
        aiStack_68[iStack_54] = 0x86;
        iStack_54 = iStack_54 + 1;
        plVar2 = (long *)native_sub_4327f8(plVar2,_System_IDisposable_TypeInfo_12d4b00);
        if (plVar2 == (long *)0x0) goto LAB_007399d8;
        lVar1 = *plVar2;
        if ((ulong)*(ushort *)(lVar1 + 0x12a) == 0) goto LAB_007399b0;
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        goto LAB_00739994;
      }
      lVar1 = *plVar2;
      if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar3 = (undefined8 *)(lVar1 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_007398d4;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar1 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar2,_System_Collections_IEnumerator_TypeInfo_12d4b80,1);
LAB_007398d4:
      plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      if ((*(byte *)(*plVar4 + 300) < *(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300)) ||
         (*(long *)(*(long *)(*plVar4 + 200) +
                    (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300) * 8 + -8) !=
          _UnityEngine_Transform_TypeInfo_12d6300)) goto LAB_0073a07c;
      uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(plVar4,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UnityEngine_Object__Destroy_8ea574(uVar5,0);
    } while( true );
  }
  goto LAB_0073a0a0;
  while( true ) {
    uVar6 = uVar6 + 1;
    piVar7 = piVar7 + 4;
    if (*(ushort *)(lVar1 + 0x12a) <= uVar6) break;
LAB_00739994:
    if (*(long *)(piVar7 + -2) == _System_IDisposable_TypeInfo_12d4b00) {
      puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_007399cc;
    }
  }
LAB_007399b0:
  puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_System_IDisposable_TypeInfo_12d4b00,0);
LAB_007399cc:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_007399d8:
  if ((iStack_54 != 0) && (aiStack_68[iStack_54 + -1] == 0x86)) {
    iStack_54 = iStack_54 + -1;
  }
  if ((*(long *)(param_1 + 0x60) != 0) &&
     (lVar1 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_1 + 0x60),0),
     lVar1 != 0)) {
    plVar2 = (long *)native_UnityEngine_Transform__GetEnumerator_772e40(lVar1,0);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    do {
      lVar1 = *plVar2;
      if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_00739a8c;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar1 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar2,_System_Collections_IEnumerator_TypeInfo_12d4b80,0);
LAB_00739a8c:
      uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((uVar6 & 1) == 0) {
        aiStack_68[iStack_54] = 0xc9;
        iStack_54 = iStack_54 + 1;
        plVar2 = (long *)native_sub_4327f8(plVar2,_System_IDisposable_TypeInfo_12d4b00);
        if (plVar2 == (long *)0x0) goto LAB_00739bf8;
        lVar1 = *plVar2;
        if ((ulong)*(ushort *)(lVar1 + 0x12a) == 0) goto LAB_00739bd0;
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        goto LAB_00739bb4;
      }
      lVar1 = *plVar2;
      if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar3 = (undefined8 *)(lVar1 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_00739af4;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar1 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar2,_System_Collections_IEnumerator_TypeInfo_12d4b80,1);
LAB_00739af4:
      plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      if ((*(byte *)(*plVar4 + 300) < *(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300)) ||
         (*(long *)(*(long *)(*plVar4 + 200) +
                    (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300) * 8 + -8) !=
          _UnityEngine_Transform_TypeInfo_12d6300)) goto LAB_0073a080;
      uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(plVar4,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UnityEngine_Object__Destroy_8ea574(uVar5,0);
    } while( true );
  }
  goto LAB_0073a0a0;
  while( true ) {
    uVar6 = uVar6 + 1;
    piVar7 = piVar7 + 4;
    if (*(ushort *)(lVar1 + 0x12a) <= uVar6) break;
LAB_00739bb4:
    if (*(long *)(piVar7 + -2) == _System_IDisposable_TypeInfo_12d4b00) {
      puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_00739bec;
    }
  }
LAB_00739bd0:
  puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_System_IDisposable_TypeInfo_12d4b00,0);
LAB_00739bec:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_00739bf8:
  if ((iStack_54 != 0) && (aiStack_68[iStack_54 + -1] == 0xc9)) {
    iStack_54 = iStack_54 + -1;
  }
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (lVar1 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_1 + 0x48),0),
     lVar1 != 0)) {
    plVar2 = (long *)native_UnityEngine_Transform__GetEnumerator_772e40(lVar1,0);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    do {
      lVar1 = *plVar2;
      if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_00739cac;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar1 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar2,_System_Collections_IEnumerator_TypeInfo_12d4b80,0);
LAB_00739cac:
      uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((uVar6 & 1) == 0) {
        aiStack_68[iStack_54] = 0x10c;
        iStack_54 = iStack_54 + 1;
        plVar2 = (long *)native_sub_4327f8(plVar2,_System_IDisposable_TypeInfo_12d4b00);
        if (plVar2 == (long *)0x0) goto LAB_00739e18;
        lVar1 = *plVar2;
        if ((ulong)*(ushort *)(lVar1 + 0x12a) == 0) goto LAB_00739df0;
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        goto LAB_00739dd4;
      }
      lVar1 = *plVar2;
      if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar3 = (undefined8 *)(lVar1 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_00739d14;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar1 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar2,_System_Collections_IEnumerator_TypeInfo_12d4b80,1);
LAB_00739d14:
      plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      if ((*(byte *)(*plVar4 + 300) < *(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300)) ||
         (*(long *)(*(long *)(*plVar4 + 200) +
                    (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300) * 8 + -8) !=
          _UnityEngine_Transform_TypeInfo_12d6300)) goto LAB_0073a084;
      uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(plVar4,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UnityEngine_Object__Destroy_8ea574(uVar5,0);
    } while( true );
  }
  goto LAB_0073a0a0;
LAB_0073a078:
  native_sub_432b04();
LAB_0073a07c:
  native_sub_432b04();
LAB_0073a080:
  native_sub_432b04();
LAB_0073a084:
  native_sub_432b04();
LAB_0073a088:
  native_sub_432b04();
LAB_0073a08c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
  while( true ) {
    uVar6 = uVar6 + 1;
    piVar7 = piVar7 + 4;
    if (*(ushort *)(lVar1 + 0x12a) <= uVar6) break;
LAB_00739ff4:
    if (*(long *)(piVar7 + -2) == _System_IDisposable_TypeInfo_12d4b00) {
      puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0073a02c;
    }
  }
LAB_0073a010:
  puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_System_IDisposable_TypeInfo_12d4b00,0);
LAB_0073a02c:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
  while( true ) {
    uVar6 = uVar6 + 1;
    piVar7 = piVar7 + 4;
    if (*(ushort *)(lVar1 + 0x12a) <= uVar6) break;
LAB_00739dd4:
    if (*(long *)(piVar7 + -2) == _System_IDisposable_TypeInfo_12d4b00) {
      puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_00739e0c;
    }
  }
LAB_00739df0:
  puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_System_IDisposable_TypeInfo_12d4b00,0);
LAB_00739e0c:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_00739e18:
  if ((iStack_54 != 0) && (aiStack_68[iStack_54 + -1] == 0x10c)) {
    iStack_54 = iStack_54 + -1;
  }
  if ((*(long *)(param_1 + 0x78) != 0) &&
     (lVar1 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_1 + 0x78),0),
     lVar1 != 0)) {
    plVar2 = (long *)native_UnityEngine_Transform__GetEnumerator_772e40(lVar1,0);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    do {
      lVar1 = *plVar2;
      if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_00739ecc;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar1 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar2,_System_Collections_IEnumerator_TypeInfo_12d4b80,0);
LAB_00739ecc:
      uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((uVar6 & 1) == 0) {
        aiStack_68[iStack_54] = 0x14f;
        iStack_54 = iStack_54 + 1;
        plVar2 = (long *)native_sub_4327f8(plVar2,_System_IDisposable_TypeInfo_12d4b00);
        if (plVar2 == (long *)0x0) {
          return;
        }
        lVar1 = *plVar2;
        if ((ulong)*(ushort *)(lVar1 + 0x12a) == 0) goto LAB_0073a010;
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        goto LAB_00739ff4;
      }
      lVar1 = *plVar2;
      if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar3 = (undefined8 *)(lVar1 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_00739f34;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar1 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar2,_System_Collections_IEnumerator_TypeInfo_12d4b80,1);
LAB_00739f34:
      plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      if ((*(byte *)(*plVar4 + 300) < *(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300)) ||
         (*(long *)(*(long *)(*plVar4 + 200) +
                    (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300) * 8 + -8) !=
          _UnityEngine_Transform_TypeInfo_12d6300)) goto LAB_0073a088;
      uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(plVar4,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UnityEngine_Object__Destroy_8ea574(uVar5,0);
    } while( true );
  }
LAB_0073a0a0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* PanelMainUIController$$EnterRemoveBeforeLogin @ 0x73a49c
 * void PanelMainUIController__EnterRemoveBeforeLogin (PanelMainUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072f0b0) */
/* WARNING: Removing unreachable block (ram,0x007394ec) */
/* WARNING: Removing unreachable block (ram,0x0072f0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PanelMainUIController$$EnterRemoveBeforeLogin
   void PanelMainUIController__EnterRemoveBeforeLogin (PanelMainUIController_o* __this, const
   MethodInfo* method); */

long native_PanelMainUIController__EnterRemoveBeforeLogin_73a49c(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam000000000133f5ec & 1) == 0) {
    native_sub_43273c(&StringLiteral_ContainerBeforeLogin_12ed200);
    bRam000000000133f5ec = 1;
  }
  native_PanelMainUIController__CleanAllUI_73954c(param_1);
  uVar2 = _StringLiteral_ContainerBeforeLogin_12ed200;
  if ((bRam000000000133f5e5 & 1) == 0) {
    native_sub_43273c(&GameResourcesManager_TypeInfo_12d47e0);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5e5 = 1;
  }
  if (((*(byte *)(_GameResourcesManager_TypeInfo_12d47e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_GameResourcesManager_TypeInfo_12d47e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = native_GameResourcesManager__GetUIPrefab_defa08(uVar2,0);
  lVar7 = *(long *)(param_1 + 0x30);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
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
  if (lVar7 != 0) {
    uVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar7,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    lVar3 = native_UnityEngine_Object__Instantiate_GameObject__4a6564
                      (lVar6,uVar2,_Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
    if ((uVar4 & 1) == 0) {
      return lVar3;
    }
    if ((lVar3 != 0) &&
       (lVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0), lVar6 != 0)) {
      uVar2 = native_UnityEngine_Object__get_name_8e8098(lVar6,0);
      native_UnityEngine_Object__set_name_8e9c08(lVar3,uVar2,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
      if ((uVar4 & 1) != 0) {
        uVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar7,0);
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



/* PanelMainUIController$$EnterRemoveBeforeSelect @ 0x73a4f4
 * void PanelMainUIController__EnterRemoveBeforeSelect (PanelMainUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072f0b0) */
/* WARNING: Removing unreachable block (ram,0x007394ec) */
/* WARNING: Removing unreachable block (ram,0x0072f0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PanelMainUIController$$EnterRemoveBeforeSelect
   void PanelMainUIController__EnterRemoveBeforeSelect (PanelMainUIController_o* __this, const
   MethodInfo* method); */

long native_PanelMainUIController__EnterRemoveBeforeSelect_73a4f4(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam000000000133f5ed & 1) == 0) {
    native_sub_43273c(&StringLiteral_ContainerBeforeSelect_12ed208);
    bRam000000000133f5ed = 1;
  }
  native_PanelMainUIController__CleanAllUI_73954c(param_1);
  uVar2 = _StringLiteral_ContainerBeforeSelect_12ed208;
  if ((bRam000000000133f5e5 & 1) == 0) {
    native_sub_43273c(&GameResourcesManager_TypeInfo_12d47e0);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5e5 = 1;
  }
  if (((*(byte *)(_GameResourcesManager_TypeInfo_12d47e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_GameResourcesManager_TypeInfo_12d47e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = native_GameResourcesManager__GetUIPrefab_defa08(uVar2,0);
  lVar7 = *(long *)(param_1 + 0x30);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
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
  if (lVar7 != 0) {
    uVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar7,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    lVar3 = native_UnityEngine_Object__Instantiate_GameObject__4a6564
                      (lVar6,uVar2,_Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
    if ((uVar4 & 1) == 0) {
      return lVar3;
    }
    if ((lVar3 != 0) &&
       (lVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0), lVar6 != 0)) {
      uVar2 = native_UnityEngine_Object__get_name_8e8098(lVar6,0);
      native_UnityEngine_Object__set_name_8e9c08(lVar3,uVar2,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
      if ((uVar4 & 1) != 0) {
        uVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar7,0);
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



/* PanelMainUIController$$EnterResultDevice @ 0x73a54c
 * void PanelMainUIController__EnterResultDevice (PanelMainUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072f0b0) */
/* WARNING: Removing unreachable block (ram,0x007394ec) */
/* WARNING: Removing unreachable block (ram,0x0072f0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PanelMainUIController$$EnterResultDevice
   void PanelMainUIController__EnterResultDevice (PanelMainUIController_o* __this, const MethodInfo*
   method); */

long native_PanelMainUIController__EnterResultDevice_73a54c(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  if ((bRam000000000133f5ee & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_car_12f3d28);
    bRam000000000133f5ee = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = native_System_String__op_Equality_afc18c
                    (*(undefined8 *)
                      (*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x58),
                     _StringLiteral_car_12f3d28,0);
  if ((uVar6 & 1) == 0) {
    if ((bRam000000000133f5f0 & 1) == 0) {
      native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
      native_sub_43273c(&StringLiteral_tank_12f6570);
      native_sub_43273c(&StringLiteral_ContainerSelectTankOper_12ed278);
      bRam000000000133f5f0 = 1;
    }
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x58) =
         _StringLiteral_tank_12f6570;
    native_sub_4326e0();
    native_PanelMainUIController__CleanAllUI_73954c(param_1);
    uVar2 = _StringLiteral_ContainerSelectTankOper_12ed278;
  }
  else {
    if ((bRam000000000133f5ef & 1) == 0) {
      native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
      native_sub_43273c(&StringLiteral_ContainerSelectCarOper_12ed270);
      native_sub_43273c(&StringLiteral_car_12f3d28);
      bRam000000000133f5ef = 1;
    }
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x58) =
         _StringLiteral_car_12f3d28;
    native_sub_4326e0();
    native_PanelMainUIController__CleanAllUI_73954c(param_1);
    uVar2 = _StringLiteral_ContainerSelectCarOper_12ed270;
  }
  if ((bRam000000000133f5e5 & 1) == 0) {
    native_sub_43273c(&GameResourcesManager_TypeInfo_12d47e0);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5e5 = 1;
  }
  if (((*(byte *)(_GameResourcesManager_TypeInfo_12d47e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_GameResourcesManager_TypeInfo_12d47e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar5 = native_GameResourcesManager__GetUIPrefab_defa08(uVar2,0);
  lVar7 = *(long *)(param_1 + 0x30);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
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
  if (lVar7 != 0) {
    uVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar7,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    lVar3 = native_UnityEngine_Object__Instantiate_GameObject__4a6564
                      (lVar5,uVar2,_Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
    uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
    if ((uVar6 & 1) == 0) {
      return lVar3;
    }
    if ((lVar3 != 0) &&
       (lVar4 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0), lVar5 != 0)) {
      uVar2 = native_UnityEngine_Object__get_name_8e8098(lVar5,0);
      native_UnityEngine_Object__set_name_8e9c08(lVar3,uVar2,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
      if ((uVar6 & 1) != 0) {
        uVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar7,0);
        native_UnityEngine_GameObject__set_layer_8de648(lVar3,uVar1,0);
      }
      native_UnityEngine_Vector3__get_zero_776668(0);
      if (lVar4 != 0) {
        native_UnityEngine_Transform__set_localPosition_7718a4(lVar4,0);
        native_UnityEngine_Quaternion__get_identity_7628fc(0);
        native_UnityEngine_Transform__set_localRotation_771984(lVar4,0);
        native_UnityEngine_Vector3__get_one_776a20(0);
        native_UnityEngine_Transform__set_localScale_771e30(lVar4,0);
        native_UnityEngine_GameObject__SetActive_8de698(lVar3,1,0);
        return lVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* PanelMainUIController$$EnterRemoteCar @ 0x73a5ec
 * void PanelMainUIController__EnterRemoteCar (PanelMainUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072f0b0) */
/* WARNING: Removing unreachable block (ram,0x007394ec) */
/* WARNING: Removing unreachable block (ram,0x0072f0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PanelMainUIController$$EnterRemoteCar
   void PanelMainUIController__EnterRemoteCar (PanelMainUIController_o* __this, const MethodInfo*
   method); */

long native_PanelMainUIController__EnterRemoteCar_73a5ec(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam000000000133f5ef & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_ContainerSelectCarOper_12ed270);
    native_sub_43273c(&StringLiteral_car_12f3d28);
    bRam000000000133f5ef = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x58) =
       _StringLiteral_car_12f3d28;
  native_sub_4326e0();
  native_PanelMainUIController__CleanAllUI_73954c(param_1);
  uVar2 = _StringLiteral_ContainerSelectCarOper_12ed270;
  if ((bRam000000000133f5e5 & 1) == 0) {
    native_sub_43273c(&GameResourcesManager_TypeInfo_12d47e0);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5e5 = 1;
  }
  if (((*(byte *)(_GameResourcesManager_TypeInfo_12d47e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_GameResourcesManager_TypeInfo_12d47e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = native_GameResourcesManager__GetUIPrefab_defa08(uVar2,0);
  lVar7 = *(long *)(param_1 + 0x30);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
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
  if (lVar7 != 0) {
    uVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar7,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    lVar3 = native_UnityEngine_Object__Instantiate_GameObject__4a6564
                      (lVar6,uVar2,_Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
    if ((uVar4 & 1) == 0) {
      return lVar3;
    }
    if ((lVar3 != 0) &&
       (lVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0), lVar6 != 0)) {
      uVar2 = native_UnityEngine_Object__get_name_8e8098(lVar6,0);
      native_UnityEngine_Object__set_name_8e9c08(lVar3,uVar2,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
      if ((uVar4 & 1) != 0) {
        uVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar7,0);
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



/* PanelMainUIController$$EnterRemoteTank @ 0x73a698
 * void PanelMainUIController__EnterRemoteTank (PanelMainUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072f0b0) */
/* WARNING: Removing unreachable block (ram,0x007394ec) */
/* WARNING: Removing unreachable block (ram,0x0072f0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PanelMainUIController$$EnterRemoteTank
   void PanelMainUIController__EnterRemoteTank (PanelMainUIController_o* __this, const MethodInfo*
   method); */

long native_PanelMainUIController__EnterRemoteTank_73a698(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam000000000133f5f0 & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_tank_12f6570);
    native_sub_43273c(&StringLiteral_ContainerSelectTankOper_12ed278);
    bRam000000000133f5f0 = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x58) =
       _StringLiteral_tank_12f6570;
  native_sub_4326e0();
  native_PanelMainUIController__CleanAllUI_73954c(param_1);
  uVar2 = _StringLiteral_ContainerSelectTankOper_12ed278;
  if ((bRam000000000133f5e5 & 1) == 0) {
    native_sub_43273c(&GameResourcesManager_TypeInfo_12d47e0);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5e5 = 1;
  }
  if (((*(byte *)(_GameResourcesManager_TypeInfo_12d47e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_GameResourcesManager_TypeInfo_12d47e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = native_GameResourcesManager__GetUIPrefab_defa08(uVar2,0);
  lVar7 = *(long *)(param_1 + 0x30);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
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
  if (lVar7 != 0) {
    uVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar7,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    lVar3 = native_UnityEngine_Object__Instantiate_GameObject__4a6564
                      (lVar6,uVar2,_Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
    if ((uVar4 & 1) == 0) {
      return lVar3;
    }
    if ((lVar3 != 0) &&
       (lVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0), lVar6 != 0)) {
      uVar2 = native_UnityEngine_Object__get_name_8e8098(lVar6,0);
      native_UnityEngine_Object__set_name_8e9c08(lVar3,uVar2,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
      if ((uVar4 & 1) != 0) {
        uVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar7,0);
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



/* PanelMainUIController$$EnterRemoveCarRoute @ 0x73a744
 * void PanelMainUIController__EnterRemoveCarRoute (PanelMainUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072f0b0) */
/* WARNING: Removing unreachable block (ram,0x007394ec) */
/* WARNING: Removing unreachable block (ram,0x0072f0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PanelMainUIController$$EnterRemoveCarRoute
   void PanelMainUIController__EnterRemoveCarRoute (PanelMainUIController_o* __this, const
   MethodInfo* method); */

long native_PanelMainUIController__EnterRemoveCarRoute_73a744(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam000000000133f5f1 & 1) == 0) {
    native_sub_43273c(&StringLiteral_ContainerRemoveCarRoute_12ed258);
    bRam000000000133f5f1 = 1;
  }
  native_PanelMainUIController__CleanAllUI_73954c(param_1);
  uVar2 = _StringLiteral_ContainerRemoveCarRoute_12ed258;
  if ((bRam000000000133f5e5 & 1) == 0) {
    native_sub_43273c(&GameResourcesManager_TypeInfo_12d47e0);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5e5 = 1;
  }
  if (((*(byte *)(_GameResourcesManager_TypeInfo_12d47e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_GameResourcesManager_TypeInfo_12d47e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = native_GameResourcesManager__GetUIPrefab_defa08(uVar2,0);
  lVar7 = *(long *)(param_1 + 0x30);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
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
  if (lVar7 != 0) {
    uVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar7,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    lVar3 = native_UnityEngine_Object__Instantiate_GameObject__4a6564
                      (lVar6,uVar2,_Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
    if ((uVar4 & 1) == 0) {
      return lVar3;
    }
    if ((lVar3 != 0) &&
       (lVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0), lVar6 != 0)) {
      uVar2 = native_UnityEngine_Object__get_name_8e8098(lVar6,0);
      native_UnityEngine_Object__set_name_8e9c08(lVar3,uVar2,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
      if ((uVar4 & 1) != 0) {
        uVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar7,0);
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



/* PanelMainUIController$$EnterRemoveCarPrograme @ 0x73a79c
 * void PanelMainUIController__EnterRemoveCarPrograme (PanelMainUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072f0b0) */
/* WARNING: Removing unreachable block (ram,0x007394ec) */
/* WARNING: Removing unreachable block (ram,0x0072f0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PanelMainUIController$$EnterRemoveCarPrograme
   void PanelMainUIController__EnterRemoveCarPrograme (PanelMainUIController_o* __this, const
   MethodInfo* method); */

long native_PanelMainUIController__EnterRemoveCarPrograme_73a79c(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam000000000133f5f2 & 1) == 0) {
    native_sub_43273c(&StringLiteral_ContainerRemoveCarPrograme_12ed250);
    bRam000000000133f5f2 = 1;
  }
  native_PanelMainUIController__CleanAllUI_73954c(param_1);
  uVar2 = _StringLiteral_ContainerRemoveCarPrograme_12ed250;
  if ((bRam000000000133f5e5 & 1) == 0) {
    native_sub_43273c(&GameResourcesManager_TypeInfo_12d47e0);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5e5 = 1;
  }
  if (((*(byte *)(_GameResourcesManager_TypeInfo_12d47e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_GameResourcesManager_TypeInfo_12d47e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = native_GameResourcesManager__GetUIPrefab_defa08(uVar2,0);
  lVar7 = *(long *)(param_1 + 0x30);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
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
  if (lVar7 != 0) {
    uVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar7,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    lVar3 = native_UnityEngine_Object__Instantiate_GameObject__4a6564
                      (lVar6,uVar2,_Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
    if ((uVar4 & 1) == 0) {
      return lVar3;
    }
    if ((lVar3 != 0) &&
       (lVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0), lVar6 != 0)) {
      uVar2 = native_UnityEngine_Object__get_name_8e8098(lVar6,0);
      native_UnityEngine_Object__set_name_8e9c08(lVar3,uVar2,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
      if ((uVar4 & 1) != 0) {
        uVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar7,0);
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



/* PanelMainUIController$$EnterRemoveCarGravity @ 0x73a7f4
 * void PanelMainUIController__EnterRemoveCarGravity (PanelMainUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072f0b0) */
/* WARNING: Removing unreachable block (ram,0x007394ec) */
/* WARNING: Removing unreachable block (ram,0x0072f0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PanelMainUIController$$EnterRemoveCarGravity
   void PanelMainUIController__EnterRemoveCarGravity (PanelMainUIController_o* __this, const
   MethodInfo* method); */

long native_PanelMainUIController__EnterRemoveCarGravity_73a7f4(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam000000000133f5f3 & 1) == 0) {
    native_sub_43273c(&StringLiteral_ContainerRemoveCarGravity_12ed248);
    bRam000000000133f5f3 = 1;
  }
  native_PanelMainUIController__CleanAllUI_73954c(param_1);
  uVar2 = _StringLiteral_ContainerRemoveCarGravity_12ed248;
  if ((bRam000000000133f5e5 & 1) == 0) {
    native_sub_43273c(&GameResourcesManager_TypeInfo_12d47e0);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5e5 = 1;
  }
  if (((*(byte *)(_GameResourcesManager_TypeInfo_12d47e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_GameResourcesManager_TypeInfo_12d47e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = native_GameResourcesManager__GetUIPrefab_defa08(uVar2,0);
  lVar7 = *(long *)(param_1 + 0x30);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
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
  if (lVar7 != 0) {
    uVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar7,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    lVar3 = native_UnityEngine_Object__Instantiate_GameObject__4a6564
                      (lVar6,uVar2,_Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
    if ((uVar4 & 1) == 0) {
      return lVar3;
    }
    if ((lVar3 != 0) &&
       (lVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0), lVar6 != 0)) {
      uVar2 = native_UnityEngine_Object__get_name_8e8098(lVar6,0);
      native_UnityEngine_Object__set_name_8e9c08(lVar3,uVar2,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
      if ((uVar4 & 1) != 0) {
        uVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar7,0);
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



/* PanelMainUIController$$EnterRemoveTankGravity @ 0x73a84c
 * void PanelMainUIController__EnterRemoveTankGravity (PanelMainUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072f0b0) */
/* WARNING: Removing unreachable block (ram,0x007394ec) */
/* WARNING: Removing unreachable block (ram,0x0072f0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PanelMainUIController$$EnterRemoveTankGravity
   void PanelMainUIController__EnterRemoveTankGravity (PanelMainUIController_o* __this, const
   MethodInfo* method); */

long native_PanelMainUIController__EnterRemoveTankGravity_73a84c(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam000000000133f5f4 & 1) == 0) {
    native_sub_43273c(&StringLiteral_ContainerRemoveTankGravity_12ed260);
    bRam000000000133f5f4 = 1;
  }
  native_PanelMainUIController__CleanAllUI_73954c(param_1);
  uVar2 = _StringLiteral_ContainerRemoveTankGravity_12ed260;
  if ((bRam000000000133f5e5 & 1) == 0) {
    native_sub_43273c(&GameResourcesManager_TypeInfo_12d47e0);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5e5 = 1;
  }
  if (((*(byte *)(_GameResourcesManager_TypeInfo_12d47e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_GameResourcesManager_TypeInfo_12d47e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = native_GameResourcesManager__GetUIPrefab_defa08(uVar2,0);
  lVar7 = *(long *)(param_1 + 0x30);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
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
  if (lVar7 != 0) {
    uVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar7,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    lVar3 = native_UnityEngine_Object__Instantiate_GameObject__4a6564
                      (lVar6,uVar2,_Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
    if ((uVar4 & 1) == 0) {
      return lVar3;
    }
    if ((lVar3 != 0) &&
       (lVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0), lVar6 != 0)) {
      uVar2 = native_UnityEngine_Object__get_name_8e8098(lVar6,0);
      native_UnityEngine_Object__set_name_8e9c08(lVar3,uVar2,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
      if ((uVar4 & 1) != 0) {
        uVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar7,0);
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



/* PanelMainUIController$$EnterLoginScreen @ 0x73a8a4
 * void PanelMainUIController__EnterLoginScreen (PanelMainUIController_o* __this, System_String_o* nscreen, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PanelMainUIController$$EnterLoginScreen
   void PanelMainUIController__EnterLoginScreen (PanelMainUIController_o* __this, System_String_o*
   nscreen, const MethodInfo* method); */

void native_PanelMainUIController__EnterLoginScreen_73a8a4(undefined8 param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if ((bRam000000000133f5f5 & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam000000000133f5f5 = 1;
  }
  native_PanelMainUIController__CleanAllUI_73954c(param_1);
  native_PanelMainUIController__AddUI_73944c(param_1,2,param_2);
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  puVar4 = (undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x10);
  *puVar4 = _StringLiteral__12eaac0;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* PanelMainUIController$$EnterRcTrack @ 0x73a948
 * void PanelMainUIController__EnterRcTrack (PanelMainUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072f0b0) */
/* WARNING: Removing unreachable block (ram,0x007394ec) */
/* WARNING: Removing unreachable block (ram,0x0072f0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PanelMainUIController$$EnterRcTrack
   void PanelMainUIController__EnterRcTrack (PanelMainUIController_o* __this, const MethodInfo*
   method); */

long native_PanelMainUIController__EnterRcTrack_73a948(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam000000000133f5f6 & 1) == 0) {
    native_sub_43273c(&ContainerScreenLoadingUIController_TypeInfo_12d3f80);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_ContainerSelectCarOper_12ed270);
    native_sub_43273c(&StringLiteral_ContainerScreenLoading_12ed268);
    native_sub_43273c(&StringLiteral_SceneTrack_12f0c70);
    bRam000000000133f5f6 = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x10) =
       _StringLiteral_ContainerSelectCarOper_12ed270;
  native_sub_4326e0();
  if (((*(byte *)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  **(undefined8 **)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0xb8) =
       _StringLiteral_SceneTrack_12f0c70;
  native_sub_4326e0();
  native_PanelMainUIController__CleanAllUI_73954c(param_1);
  uVar2 = _StringLiteral_ContainerScreenLoading_12ed268;
  if ((bRam000000000133f5e5 & 1) == 0) {
    native_sub_43273c(&GameResourcesManager_TypeInfo_12d47e0);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5e5 = 1;
  }
  if (((*(byte *)(_GameResourcesManager_TypeInfo_12d47e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_GameResourcesManager_TypeInfo_12d47e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = native_GameResourcesManager__GetUIPrefab_defa08(uVar2,0);
  lVar7 = *(long *)(param_1 + 0x30);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
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
  if (lVar7 != 0) {
    uVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar7,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    lVar3 = native_UnityEngine_Object__Instantiate_GameObject__4a6564
                      (lVar6,uVar2,_Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
    if ((uVar4 & 1) == 0) {
      return lVar3;
    }
    if ((lVar3 != 0) &&
       (lVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0), lVar6 != 0)) {
      uVar2 = native_UnityEngine_Object__get_name_8e8098(lVar6,0);
      native_UnityEngine_Object__set_name_8e9c08(lVar3,uVar2,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
      if ((uVar4 & 1) != 0) {
        uVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar7,0);
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



/* PanelMainUIController$$EnterRcTrackCeshi @ 0x73aa48
 * void PanelMainUIController__EnterRcTrackCeshi (PanelMainUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072f0b0) */
/* WARNING: Removing unreachable block (ram,0x007394ec) */
/* WARNING: Removing unreachable block (ram,0x0072f0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PanelMainUIController$$EnterRcTrackCeshi
   void PanelMainUIController__EnterRcTrackCeshi (PanelMainUIController_o* __this, const MethodInfo*
   method); */

long native_PanelMainUIController__EnterRcTrackCeshi_73aa48(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam000000000133f5f7 & 1) == 0) {
    native_sub_43273c(&StringLiteral_ContainerRemoteTankCeshi_12ed240);
    bRam000000000133f5f7 = 1;
  }
  native_PanelMainUIController__CleanAllUI_73954c(param_1);
  uVar2 = _StringLiteral_ContainerRemoteTankCeshi_12ed240;
  if ((bRam000000000133f5e5 & 1) == 0) {
    native_sub_43273c(&GameResourcesManager_TypeInfo_12d47e0);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5e5 = 1;
  }
  if (((*(byte *)(_GameResourcesManager_TypeInfo_12d47e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_GameResourcesManager_TypeInfo_12d47e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = native_GameResourcesManager__GetUIPrefab_defa08(uVar2,0);
  lVar7 = *(long *)(param_1 + 0x30);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
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
  if (lVar7 != 0) {
    uVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar7,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    lVar3 = native_UnityEngine_Object__Instantiate_GameObject__4a6564
                      (lVar6,uVar2,_Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
    if ((uVar4 & 1) == 0) {
      return lVar3;
    }
    if ((lVar3 != 0) &&
       (lVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0), lVar6 != 0)) {
      uVar2 = native_UnityEngine_Object__get_name_8e8098(lVar6,0);
      native_UnityEngine_Object__set_name_8e9c08(lVar3,uVar2,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
      if ((uVar4 & 1) != 0) {
        uVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar7,0);
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



/* PanelMainUIController$$EnterRcIndoor @ 0x73aaa0
 * void PanelMainUIController__EnterRcIndoor (PanelMainUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072f0b0) */
/* WARNING: Removing unreachable block (ram,0x007394ec) */
/* WARNING: Removing unreachable block (ram,0x0072f0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PanelMainUIController$$EnterRcIndoor
   void PanelMainUIController__EnterRcIndoor (PanelMainUIController_o* __this, const MethodInfo*
   method); */

long native_PanelMainUIController__EnterRcIndoor_73aaa0(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam000000000133f5f8 & 1) == 0) {
    native_sub_43273c(&ContainerScreenLoadingUIController_TypeInfo_12d3f80);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_ContainerSelectCarOper_12ed270);
    native_sub_43273c(&StringLiteral_ContainerScreenLoading_12ed268);
    native_sub_43273c(&StringLiteral_SceneIndoor_12f0c60);
    bRam000000000133f5f8 = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x10) =
       _StringLiteral_ContainerSelectCarOper_12ed270;
  native_sub_4326e0();
  if (((*(byte *)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  **(undefined8 **)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0xb8) =
       _StringLiteral_SceneIndoor_12f0c60;
  native_sub_4326e0();
  native_PanelMainUIController__CleanAllUI_73954c(param_1);
  uVar2 = _StringLiteral_ContainerScreenLoading_12ed268;
  if ((bRam000000000133f5e5 & 1) == 0) {
    native_sub_43273c(&GameResourcesManager_TypeInfo_12d47e0);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5e5 = 1;
  }
  if (((*(byte *)(_GameResourcesManager_TypeInfo_12d47e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_GameResourcesManager_TypeInfo_12d47e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = native_GameResourcesManager__GetUIPrefab_defa08(uVar2,0);
  lVar7 = *(long *)(param_1 + 0x30);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
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
  if (lVar7 != 0) {
    uVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar7,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    lVar3 = native_UnityEngine_Object__Instantiate_GameObject__4a6564
                      (lVar6,uVar2,_Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
    if ((uVar4 & 1) == 0) {
      return lVar3;
    }
    if ((lVar3 != 0) &&
       (lVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0), lVar6 != 0)) {
      uVar2 = native_UnityEngine_Object__get_name_8e8098(lVar6,0);
      native_UnityEngine_Object__set_name_8e9c08(lVar3,uVar2,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
      if ((uVar4 & 1) != 0) {
        uVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar7,0);
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



/* PanelMainUIController$$EnterRcForest @ 0x73aba0
 * void PanelMainUIController__EnterRcForest (PanelMainUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072f0b0) */
/* WARNING: Removing unreachable block (ram,0x007394ec) */
/* WARNING: Removing unreachable block (ram,0x0072f0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PanelMainUIController$$EnterRcForest
   void PanelMainUIController__EnterRcForest (PanelMainUIController_o* __this, const MethodInfo*
   method); */

long native_PanelMainUIController__EnterRcForest_73aba0(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam000000000133f5f9 & 1) == 0) {
    native_sub_43273c(&ContainerScreenLoadingUIController_TypeInfo_12d3f80);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_SceneForest_12f0c58);
    native_sub_43273c(&StringLiteral_ContainerScreenLoading_12ed268);
    native_sub_43273c(&StringLiteral_ContainerSelectTankOper_12ed278);
    bRam000000000133f5f9 = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x10) =
       _StringLiteral_ContainerSelectTankOper_12ed278;
  native_sub_4326e0();
  if (((*(byte *)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  **(undefined8 **)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0xb8) =
       _StringLiteral_SceneForest_12f0c58;
  native_sub_4326e0();
  native_PanelMainUIController__CleanAllUI_73954c(param_1);
  uVar2 = _StringLiteral_ContainerScreenLoading_12ed268;
  if ((bRam000000000133f5e5 & 1) == 0) {
    native_sub_43273c(&GameResourcesManager_TypeInfo_12d47e0);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5e5 = 1;
  }
  if (((*(byte *)(_GameResourcesManager_TypeInfo_12d47e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_GameResourcesManager_TypeInfo_12d47e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = native_GameResourcesManager__GetUIPrefab_defa08(uVar2,0);
  lVar7 = *(long *)(param_1 + 0x30);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
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
  if (lVar7 != 0) {
    uVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar7,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    lVar3 = native_UnityEngine_Object__Instantiate_GameObject__4a6564
                      (lVar6,uVar2,_Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
    if ((uVar4 & 1) == 0) {
      return lVar3;
    }
    if ((lVar3 != 0) &&
       (lVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0), lVar6 != 0)) {
      uVar2 = native_UnityEngine_Object__get_name_8e8098(lVar6,0);
      native_UnityEngine_Object__set_name_8e9c08(lVar3,uVar2,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
      if ((uVar4 & 1) != 0) {
        uVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar7,0);
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



/* PanelMainUIController$$EnterRcSnow @ 0x73aca0
 * void PanelMainUIController__EnterRcSnow (PanelMainUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072f0b0) */
/* WARNING: Removing unreachable block (ram,0x007394ec) */
/* WARNING: Removing unreachable block (ram,0x0072f0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PanelMainUIController$$EnterRcSnow
   void PanelMainUIController__EnterRcSnow (PanelMainUIController_o* __this, const MethodInfo*
   method); */

long native_PanelMainUIController__EnterRcSnow_73aca0(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam000000000133f5fa & 1) == 0) {
    native_sub_43273c(&ContainerScreenLoadingUIController_TypeInfo_12d3f80);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_ContainerScreenLoading_12ed268);
    native_sub_43273c(&StringLiteral_ContainerSelectTankOper_12ed278);
    native_sub_43273c(&StringLiteral_SceneSnow_12f0c68);
    bRam000000000133f5fa = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x10) =
       _StringLiteral_ContainerSelectTankOper_12ed278;
  native_sub_4326e0();
  if (((*(byte *)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  **(undefined8 **)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0xb8) =
       _StringLiteral_SceneSnow_12f0c68;
  native_sub_4326e0();
  native_PanelMainUIController__CleanAllUI_73954c(param_1);
  uVar2 = _StringLiteral_ContainerScreenLoading_12ed268;
  if ((bRam000000000133f5e5 & 1) == 0) {
    native_sub_43273c(&GameResourcesManager_TypeInfo_12d47e0);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5e5 = 1;
  }
  if (((*(byte *)(_GameResourcesManager_TypeInfo_12d47e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_GameResourcesManager_TypeInfo_12d47e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = native_GameResourcesManager__GetUIPrefab_defa08(uVar2,0);
  lVar7 = *(long *)(param_1 + 0x30);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
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
  if (lVar7 != 0) {
    uVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar7,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    lVar3 = native_UnityEngine_Object__Instantiate_GameObject__4a6564
                      (lVar6,uVar2,_Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
    if ((uVar4 & 1) == 0) {
      return lVar3;
    }
    if ((lVar3 != 0) &&
       (lVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0), lVar6 != 0)) {
      uVar2 = native_UnityEngine_Object__get_name_8e8098(lVar6,0);
      native_UnityEngine_Object__set_name_8e9c08(lVar3,uVar2,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
      if ((uVar4 & 1) != 0) {
        uVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar7,0);
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



/* PanelMainUIController$$EnterRemoteHandTank @ 0x73ada0
 * void PanelMainUIController__EnterRemoteHandTank (PanelMainUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072f0b0) */
/* WARNING: Removing unreachable block (ram,0x007394ec) */
/* WARNING: Removing unreachable block (ram,0x0072f0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PanelMainUIController$$EnterRemoteHandTank
   void PanelMainUIController__EnterRemoteHandTank (PanelMainUIController_o* __this, const
   MethodInfo* method); */

long native_PanelMainUIController__EnterRemoteHandTank_73ada0(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam000000000133f5fb & 1) == 0) {
    native_sub_43273c(&StringLiteral_ContainerRemoteHandTank_12ed238);
    bRam000000000133f5fb = 1;
  }
  native_PanelMainUIController__CleanAllUI_73954c(param_1);
  uVar2 = _StringLiteral_ContainerRemoteHandTank_12ed238;
  if ((bRam000000000133f5e5 & 1) == 0) {
    native_sub_43273c(&GameResourcesManager_TypeInfo_12d47e0);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5e5 = 1;
  }
  if (((*(byte *)(_GameResourcesManager_TypeInfo_12d47e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_GameResourcesManager_TypeInfo_12d47e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = native_GameResourcesManager__GetUIPrefab_defa08(uVar2,0);
  lVar7 = *(long *)(param_1 + 0x30);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
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
  if (lVar7 != 0) {
    uVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar7,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    lVar3 = native_UnityEngine_Object__Instantiate_GameObject__4a6564
                      (lVar6,uVar2,_Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
    if ((uVar4 & 1) == 0) {
      return lVar3;
    }
    if ((lVar3 != 0) &&
       (lVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0), lVar6 != 0)) {
      uVar2 = native_UnityEngine_Object__get_name_8e8098(lVar6,0);
      native_UnityEngine_Object__set_name_8e9c08(lVar3,uVar2,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
      if ((uVar4 & 1) != 0) {
        uVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar7,0);
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



/* PanelMainUIController$$EnterRemoteHandCar @ 0x73adf8
 * void PanelMainUIController__EnterRemoteHandCar (PanelMainUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072f0b0) */
/* WARNING: Removing unreachable block (ram,0x007394ec) */
/* WARNING: Removing unreachable block (ram,0x0072f0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PanelMainUIController$$EnterRemoteHandCar
   void PanelMainUIController__EnterRemoteHandCar (PanelMainUIController_o* __this, const
   MethodInfo* method); */

long native_PanelMainUIController__EnterRemoteHandCar_73adf8(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam000000000133f5fc & 1) == 0) {
    native_sub_43273c(&StringLiteral_ContainerRemoteHandCar_12ed230);
    bRam000000000133f5fc = 1;
  }
  native_PanelMainUIController__CleanAllUI_73954c(param_1);
  uVar2 = _StringLiteral_ContainerRemoteHandCar_12ed230;
  if ((bRam000000000133f5e5 & 1) == 0) {
    native_sub_43273c(&GameResourcesManager_TypeInfo_12d47e0);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5e5 = 1;
  }
  if (((*(byte *)(_GameResourcesManager_TypeInfo_12d47e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_GameResourcesManager_TypeInfo_12d47e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = native_GameResourcesManager__GetUIPrefab_defa08(uVar2,0);
  lVar7 = *(long *)(param_1 + 0x30);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
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
  if (lVar7 != 0) {
    uVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar7,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    lVar3 = native_UnityEngine_Object__Instantiate_GameObject__4a6564
                      (lVar6,uVar2,_Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
    if ((uVar4 & 1) == 0) {
      return lVar3;
    }
    if ((lVar3 != 0) &&
       (lVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0), lVar6 != 0)) {
      uVar2 = native_UnityEngine_Object__get_name_8e8098(lVar6,0);
      native_UnityEngine_Object__set_name_8e9c08(lVar3,uVar2,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
      if ((uVar4 & 1) != 0) {
        uVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar7,0);
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



/* PanelMainUIController$$Awake @ 0x73ae50
 * void PanelMainUIController__Awake (PanelMainUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PanelMainUIController$$Awake
   void PanelMainUIController__Awake (PanelMainUIController_o* __this, const MethodInfo* method); */

void native_PanelMainUIController__Awake_73ae50
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  
  if ((bRam000000000133f5fd & 1) == 0) {
    native_sub_43273c(&StringLiteral_PanelPopupTip_12f0500);
    native_sub_43273c(&StringLiteral_PanelTop_12f0510);
    native_sub_43273c(&StringLiteral_PanelDebug_12f04f8);
    native_sub_43273c(&StringLiteral_PanelBackground_12f04e8);
    native_sub_43273c(&StringLiteral_PanelPopupWindow_12f0508);
    native_sub_43273c(&StringLiteral_PanelButtom_12f04f0);
    bRam000000000133f5fd = 1;
  }
  lVar1 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
  if ((lVar1 != 0) &&
     (lVar1 = native_UnityEngine_Transform__Find_772c0c
                        (lVar1,_StringLiteral_PanelBackground_12f04e8,0), lVar1 != 0)) {
    lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(lVar1,0);
    plVar2 = (long *)(param_4 + 0x18);
    *plVar2 = lVar1;
    native_sub_4326e0(plVar2,lVar1);
    if ((*plVar2 != 0) &&
       (lVar1 = native_UnityEngine_GameObject__get_transform_8de5c8(*plVar2,0), lVar1 != 0)) {
      uVar3 = native_UnityEngine_Transform__get_localPosition_7717f4(lVar1,0);
      *(undefined4 *)(param_4 + 0x20) = uVar3;
      *(undefined4 *)(param_4 + 0x24) = param_2;
      *(undefined4 *)(param_4 + 0x28) = param_3;
      lVar1 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
      if ((lVar1 != 0) &&
         (lVar1 = native_UnityEngine_Transform__Find_772c0c
                            (lVar1,_StringLiteral_PanelButtom_12f04f0,0), lVar1 != 0)) {
        lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(lVar1,0);
        plVar2 = (long *)(param_4 + 0x30);
        *plVar2 = lVar1;
        native_sub_4326e0(plVar2,lVar1);
        if ((*plVar2 != 0) &&
           (lVar1 = native_UnityEngine_GameObject__get_transform_8de5c8(*plVar2,0), lVar1 != 0)) {
          uVar3 = native_UnityEngine_Transform__get_localPosition_7717f4(lVar1,0);
          *(undefined4 *)(param_4 + 0x38) = uVar3;
          *(undefined4 *)(param_4 + 0x3c) = param_2;
          *(undefined4 *)(param_4 + 0x40) = param_3;
          lVar1 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
          if ((lVar1 != 0) &&
             (lVar1 = native_UnityEngine_Transform__Find_772c0c
                                (lVar1,_StringLiteral_PanelPopupTip_12f0500,0), lVar1 != 0)) {
            lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(lVar1,0);
            plVar2 = (long *)(param_4 + 0x48);
            *plVar2 = lVar1;
            native_sub_4326e0(plVar2,lVar1);
            if ((*plVar2 != 0) &&
               (lVar1 = native_UnityEngine_GameObject__get_transform_8de5c8(*plVar2,0), lVar1 != 0))
            {
              uVar3 = native_UnityEngine_Transform__get_localPosition_7717f4(lVar1,0);
              *(undefined4 *)(param_4 + 0x50) = uVar3;
              *(undefined4 *)(param_4 + 0x54) = param_2;
              *(undefined4 *)(param_4 + 0x58) = param_3;
              lVar1 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
              if ((lVar1 != 0) &&
                 (lVar1 = native_UnityEngine_Transform__Find_772c0c
                                    (lVar1,_StringLiteral_PanelPopupWindow_12f0508,0), lVar1 != 0))
              {
                lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(lVar1,0);
                plVar2 = (long *)(param_4 + 0x60);
                *plVar2 = lVar1;
                native_sub_4326e0(plVar2,lVar1);
                if ((*plVar2 != 0) &&
                   (lVar1 = native_UnityEngine_GameObject__get_transform_8de5c8(*plVar2,0),
                   lVar1 != 0)) {
                  uVar3 = native_UnityEngine_Transform__get_localPosition_7717f4(lVar1,0);
                  *(undefined4 *)(param_4 + 0x68) = uVar3;
                  *(undefined4 *)(param_4 + 0x6c) = param_2;
                  *(undefined4 *)(param_4 + 0x70) = param_3;
                  lVar1 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
                  if ((lVar1 != 0) &&
                     (lVar1 = native_UnityEngine_Transform__Find_772c0c
                                        (lVar1,_StringLiteral_PanelTop_12f0510,0), lVar1 != 0)) {
                    lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(lVar1,0);
                    plVar2 = (long *)(param_4 + 0x78);
                    *plVar2 = lVar1;
                    native_sub_4326e0(plVar2,lVar1);
                    if ((*plVar2 != 0) &&
                       (lVar1 = native_UnityEngine_GameObject__get_transform_8de5c8(*plVar2,0),
                       lVar1 != 0)) {
                      uVar3 = native_UnityEngine_Transform__get_localPosition_7717f4(lVar1,0);
                      *(undefined4 *)(param_4 + 0x80) = uVar3;
                      *(undefined4 *)(param_4 + 0x84) = param_2;
                      *(undefined4 *)(param_4 + 0x88) = param_3;
                      lVar1 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
                      if ((lVar1 != 0) &&
                         (lVar1 = native_UnityEngine_Transform__Find_772c0c
                                            (lVar1,_StringLiteral_PanelDebug_12f04f8,0), lVar1 != 0)
                         ) {
                        lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(lVar1,0);
                        plVar2 = (long *)(param_4 + 0x90);
                        *plVar2 = lVar1;
                        native_sub_4326e0(plVar2,lVar1);
                        if ((*plVar2 != 0) &&
                           (lVar1 = native_UnityEngine_GameObject__get_transform_8de5c8(*plVar2,0),
                           lVar1 != 0)) {
                          uVar3 = native_UnityEngine_Transform__get_localPosition_7717f4(lVar1,0);
                          *(undefined4 *)(param_4 + 0x98) = uVar3;
                          *(undefined4 *)(param_4 + 0x9c) = param_2;
                          *(undefined4 *)(param_4 + 0xa0) = param_3;
                          return;
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
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* PanelMainUIController$$.ctor @ 0x73b13c
 * void PanelMainUIController___ctor (PanelMainUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PanelMainUIController$$.ctor
   void PanelMainUIController___ctor (PanelMainUIController_o* __this, const MethodInfo* method); */

undefined1  [16] native_PanelMainUIController___ctor_73b13c(ulong param_1)

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



/* PanelMainUIController$$.cctor @ 0x73b144
 * void PanelMainUIController___cctor (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PanelMainUIController$$.cctor
   void PanelMainUIController___cctor (const MethodInfo* method); */

void native_PanelMainUIController___cctor_73b144(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if ((bRam000000000133f5fe & 1) == 0) {
    native_sub_43273c(&byte___TypeInfo_12d3060);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&object_TypeInfo_12d54d8);
    native_sub_43273c(&StringLiteral__________12f74a8);
    native_sub_43273c(&StringLiteral___________12f74f8);
    native_sub_43273c(&StringLiteral______________12f7470);
    native_sub_43273c(&StringLiteral______________App_12f7518);
    native_sub_43273c(&StringLiteral_yonghuxieyi_12f6e48);
    native_sub_43273c(&StringLiteral_scene1_12f5f20);
    native_sub_43273c(&StringLiteral_car_12f3d28);
    native_sub_43273c(&StringLiteral_tank1_12f6578);
    native_sub_43273c(&StringLiteral__________12f7460);
    native_sub_43273c(&StringLiteral___________12f74f0);
    native_sub_43273c(&StringLiteral__12eaac0);
    native_sub_43273c(&StringLiteral______________12f7468);
    native_sub_43273c(&StringLiteral__________12f74a0);
    native_sub_43273c(&StringLiteral_car1_12f3d30);
    bRam000000000133f5fe = 1;
  }
  uVar5 = native_sub_432808(_object_TypeInfo_12d54d8);
  native_System_Object___ctor_ad2798(uVar5,0);
  puVar6 = (undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 8);
  *puVar6 = uVar5;
  native_sub_4326e0(puVar6,uVar5);
  *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x10) =
       _StringLiteral__12eaac0;
  native_sub_4326e0();
  uVar5 = native_sub_432750(_byte___TypeInfo_12d3060,3);
  puVar6 = (undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x18);
  *puVar6 = uVar5;
  native_sub_4326e0(puVar6,uVar5);
  lVar4 = _PanelMainUIController_TypeInfo_12d5600;
  *(undefined1 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x20) = 0;
  *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x28) = _StringLiteral__12eaac0;
  native_sub_4326e0();
  *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x30) =
       _StringLiteral_yonghuxieyi_12f6e48;
  native_sub_4326e0();
  lVar4 = _PanelMainUIController_TypeInfo_12d5600;
  *(undefined1 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x38) = 0;
  *(undefined1 *)(*(long *)(lVar4 + 0xb8) + 0x39) = 0;
  *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x3c) = 0;
  *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x40) = 0;
  *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x44) = 100;
  *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x48) = 0x3f800000;
  *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x4c) = 0;
  *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x50) = 0;
  *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x58) = _StringLiteral_car_12f3d28;
  native_sub_4326e0();
  *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x60) =
       _StringLiteral_car1_12f3d30;
  native_sub_4326e0();
  *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x68) =
       _StringLiteral_tank1_12f6578;
  native_sub_4326e0();
  *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x70) =
       _StringLiteral_scene1_12f5f20;
  native_sub_4326e0();
  *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x78) =
       _StringLiteral_scene1_12f5f20;
  native_sub_4326e0();
  *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x80) =
       _StringLiteral__12eaac0;
  native_sub_4326e0();
  *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x88) =
       _StringLiteral__12eaac0;
  native_sub_4326e0();
  lVar4 = _PanelMainUIController_TypeInfo_12d5600;
  *(undefined1 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x90) = 0;
  *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x94) = 0;
  *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x98) = 0;
  *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x9c) = 0;
  *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0xa0) = 0;
  *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0xa4) = 0;
  *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0xa8) = 5;
  *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0xac) = 0;
  *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0xb0) = 0;
  *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0xb4) = 0;
  *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0xb8) = 0;
  *(undefined1 *)(*(long *)(lVar4 + 0xb8) + 0xbc) = 0;
  *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0xc0) = _StringLiteral__________12f7460;
  native_sub_4326e0();
  *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 200) =
       _StringLiteral___________12f74f8;
  native_sub_4326e0();
  *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xd0) =
       _StringLiteral___________12f74f0;
  native_sub_4326e0();
  *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xd8) =
       _StringLiteral______________12f7468;
  native_sub_4326e0();
  *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xe0) =
       _StringLiteral______________12f7470;
  native_sub_4326e0();
  *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xe8) =
       _StringLiteral__________12f74a8;
  native_sub_4326e0();
  *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xf0) =
       _StringLiteral__________12f74a0;
  native_sub_4326e0();
  puVar6 = (undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xf8);
  *puVar6 = _StringLiteral______________App_12f7518;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


