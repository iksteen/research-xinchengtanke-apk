/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* ContainerLookDocController$$Start @ 0xdd7934
 * void ContainerLookDocController__Start (ContainerLookDocController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerLookDocController$$Start
   void ContainerLookDocController__Start (ContainerLookDocController_o* __this, const MethodInfo*
   method); */

void native_ContainerLookDocController__Start_dd7934(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  if ((bRam0000000001346e5e & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Button____12e29a0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Text____12e2b40);
    native_sub_43273c(&Method_ContainerLookDocController_sys_out___12e2ff0);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    native_sub_43273c(&StringLiteral_Text_12f15d0);
    native_sub_43273c(&StringLiteral_yonghuxieyi_ScrollView_12f6e50);
    native_sub_43273c(&StringLiteral_yinshi_ScrollView_12f6e38);
    native_sub_43273c(&StringLiteral_yonghuxieyi_12f6e48);
    native_sub_43273c(&StringLiteral______12f7500);
    native_sub_43273c(&StringLiteral_Button_12ec858);
    native_sub_43273c(&StringLiteral______12f7520);
    bRam0000000001346e5e = 1;
  }
  lVar1 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if ((lVar1 != 0) &&
     (lVar1 = native_UnityEngine_Transform__FindChild_772e3c(lVar1,_StringLiteral_Button_12ec858,0),
     lVar1 != 0)) {
    lVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (lVar1,_Method_UnityEngine_Component_GetComponent_Button____12e29a0);
    plVar5 = (long *)(param_1 + 0x18);
    *plVar5 = lVar1;
    native_sub_4326e0(plVar5,lVar1);
    if (*plVar5 != 0) {
      lVar1 = *(long *)(*plVar5 + 0xf8);
      uVar2 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
      native_UnityEngine_Events_UnityAction___ctor_773130
                (uVar2,param_1,_Method_ContainerLookDocController_sys_out___12e2ff0,0);
      if (lVar1 != 0) {
        native_UnityEngine_Events_UnityEvent__AddListener_7734bc(lVar1,uVar2,0);
        if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar3 = native_System_String__op_Equality_afc18c
                          (*(undefined8 *)
                            (*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x30),
                           _StringLiteral_yonghuxieyi_12f6e48,0);
        lVar1 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
        if (((lVar1 != 0) &&
            (lVar1 = native_UnityEngine_Transform__FindChild_772e3c
                               (lVar1,_StringLiteral_Text_12f15d0,0), lVar1 != 0)) &&
           (plVar5 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                       (lVar1,
                                        _Method_UnityEngine_Component_GetComponent_Text____12e2b40),
           plVar5 != (long *)0x0)) {
          if ((uVar3 & 1) == 0) {
            (**(code **)(*plVar5 + 0x5e8))
                      (plVar5,_StringLiteral______12f7520,*(undefined8 *)(*plVar5 + 0x5f0));
            lVar1 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
            if (lVar1 == 0) goto LAB_00dd7ba8;
            puVar4 = (undefined8 *)&StringLiteral_yinshi_ScrollView_12f6e38;
          }
          else {
            (**(code **)(*plVar5 + 0x5e8))
                      (plVar5,_StringLiteral______12f7500,*(undefined8 *)(*plVar5 + 0x5f0));
            lVar1 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
            if (lVar1 == 0) goto LAB_00dd7ba8;
            puVar4 = (undefined8 *)&StringLiteral_yonghuxieyi_ScrollView_12f6e50;
          }
          lVar1 = native_UnityEngine_Transform__FindChild_772e3c(lVar1,*puVar4,0);
          if ((lVar1 != 0) &&
             (lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(lVar1,0), lVar1 != 0)) {
            if (pcRam0000000001340bf8 == (code *)0x0) {
              pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
            }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000001340bf8)(lVar1,1);
            return;
          }
        }
      }
    }
  }
LAB_00dd7ba8:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerLookDocController$$sys_out @ 0xdd7bac
 * void ContainerLookDocController__sys_out (ContainerLookDocController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerLookDocController$$sys_out
   void ContainerLookDocController__sys_out (ContainerLookDocController_o* __this, const MethodInfo*
   method); */

void native_ContainerLookDocController__sys_out_dd7bac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  if ((bRam0000000001346e5f & 1) == 0) {
    native_sub_43273c(&UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0);
    native_sub_43273c(&StringLiteral_Login_12ef660);
    bRam0000000001346e5f = 1;
  }
  if (((*(byte *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0 + 0x133) >> 2 & 1) != 0
      ) && (*(int *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = _StringLiteral_Login_12ef660;
  if ((bRam000000000133fa5d & 1) == 0) {
    native_sub_43273c(&UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0,0);
    bRam000000000133fa5d = 1;
  }
  uStack_28 = 0;
  native_UnityEngine_SceneManagement_LoadSceneParameters___ctor_8e2120(&uStack_28,0,0);
  uVar2 = uStack_28;
  if (((*(byte *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0 + 0x133) >> 2 & 1) != 0
      ) && (*(int *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_UnityEngine_SceneManagement_SceneManager__LoadScene_769edc(uVar1,uVar2);
  return;
}



/* ContainerLookDocController$$Update @ 0xdd7c20
 * void ContainerLookDocController__Update (ContainerLookDocController_o* __this, const MethodInfo* method); */

/* ContainerLookDocController$$Update
   void ContainerLookDocController__Update (ContainerLookDocController_o* __this, const MethodInfo*
   method); */

void native_ContainerLookDocController__Update_dd7c20(void)

{
  return;
}



/* ContainerLookDocController$$.ctor @ 0xdd7c24
 * void ContainerLookDocController___ctor (ContainerLookDocController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerLookDocController$$.ctor
   void ContainerLookDocController___ctor (ContainerLookDocController_o* __this, const MethodInfo*
   method); */

undefined1  [16] native_ContainerLookDocController___ctor_dd7c24(ulong param_1)

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


