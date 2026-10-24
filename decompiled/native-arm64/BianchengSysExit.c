/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* BianchengSysExit$$Start @ 0xdd343c
 * void BianchengSysExit__Start (BianchengSysExit_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BianchengSysExit$$Start
   void BianchengSysExit__Start (BianchengSysExit_o* __this, const MethodInfo* method); */

void native_BianchengSysExit__Start_dd343c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam0000000001346e3b & 1) == 0) {
    native_sub_43273c(&Method_BianchengSysExit_sys_out___12e23d8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Button____12e29a0);
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam0000000001346e3b = 1;
  }
  uVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_Button____12e29a0);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  native_sub_4326e0(param_1 + 0x18);
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0xf8);
    uVar1 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    native_UnityEngine_Events_UnityAction___ctor_773130
              (uVar1,param_1,_Method_BianchengSysExit_sys_out___12e23d8,0);
    if (lVar2 != 0) {
      uVar1 = native_UnityEngine_Events_UnityEvent__GetDelegate_7734f8(uVar1,uVar1,0);
      lVar2 = *(long *)(lVar2 + 0x10);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      if ((bRam0000000001340cbd & 1) == 0) {
        native_sub_43273c(&Method_System_Collections_Generic_List_BaseInvokableCall__Add___12dc5b0,
                          uVar1,0);
        bRam0000000001340cbd = 1;
      }
      if (*(long *)(lVar2 + 0x18) != 0) {
        native_System_Collections_Generic_List_int_____Add_d40c00
                  (*(long *)(lVar2 + 0x18),uVar1,
                   _Method_System_Collections_Generic_List_BaseInvokableCall__Add___12dc5b0);
        *(undefined1 *)(lVar2 + 0x28) = 1;
        return;
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BianchengSysExit$$sys_out @ 0xdd3508
 * void BianchengSysExit__sys_out (BianchengSysExit_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BianchengSysExit$$sys_out
   void BianchengSysExit__sys_out (BianchengSysExit_o* __this, const MethodInfo* method); */

void native_BianchengSysExit__sys_out_dd3508(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  if ((bRam0000000001346e3c & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0);
    native_sub_43273c(&StringLiteral_Login_12ef660);
    native_sub_43273c(&StringLiteral_ContainerRemoveCarPrograme_12ed250);
    bRam0000000001346e3c = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x10) =
       _StringLiteral_ContainerRemoveCarPrograme_12ed250;
  native_sub_4326e0();
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



/* BianchengSysExit$$Update @ 0xdd35d0
 * void BianchengSysExit__Update (BianchengSysExit_o* __this, const MethodInfo* method); */

/* BianchengSysExit$$Update
   void BianchengSysExit__Update (BianchengSysExit_o* __this, const MethodInfo* method); */

void native_BianchengSysExit__Update_dd35d0(void)

{
  return;
}



/* BianchengSysExit$$.ctor @ 0xdd35d4
 * void BianchengSysExit___ctor (BianchengSysExit_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BianchengSysExit$$.ctor
   void BianchengSysExit___ctor (BianchengSysExit_o* __this, const MethodInfo* method); */

undefined1  [16] native_BianchengSysExit___ctor_dd35d4(ulong param_1)

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


