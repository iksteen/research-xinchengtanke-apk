/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* VideoController$$Start @ 0x94ee68
 * void VideoController__Start (VideoController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VideoController$$Start
   void VideoController__Start (VideoController_o* __this, const MethodInfo* method); */

void native_VideoController__Start_94ee68(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  
  if ((bRam0000000001341489 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_VideoPlayer____12e2c48);
    native_sub_43273c(&UnityEngine_RenderTexture_TypeInfo_12d5a30);
    bRam0000000001341489 = 1;
  }
  uVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_VideoPlayer____12e2c48);
  plVar6 = (long *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  native_sub_4326e0(plVar6,uVar3);
  if (*(long *)(param_1 + 0x20) != 0) {
    native_UnityEngine_Video_VideoPlayer__Play_dc237c(*(long *)(param_1 + 0x20),0);
    lVar7 = *plVar6;
    if ((lVar7 != 0) &&
       (lVar4 = native_UnityEngine_Video_VideoPlayer__get_clip_dc22ac(lVar7,0), lVar4 != 0)) {
      uVar1 = native_UnityEngine_Video_VideoClip__get_width_dc219c(lVar4,0);
      if (*plVar6 != 0) {
        lVar4 = native_UnityEngine_Video_VideoPlayer__get_clip_dc22ac(*plVar6,0);
        if (lVar4 != 0) {
          uVar2 = native_UnityEngine_Video_VideoClip__get_height_dc21dc(lVar4,0);
          uVar3 = native_sub_432808(_UnityEngine_RenderTexture_TypeInfo_12d5a30);
          native_UnityEngine_RenderTexture___ctor_7685f4(uVar3,uVar1,uVar2,0x18,0);
          native_UnityEngine_Video_VideoPlayer__set_targetTexture_dc232c(lVar7,uVar3,0);
          if (*(long *)(param_1 + 0x20) != 0) {
            plVar6 = *(long **)(param_1 + 0x18);
            lVar7 = native_UnityEngine_Video_VideoPlayer__get_targetTexture_dc22ec
                              (*(long *)(param_1 + 0x20),0);
            if (plVar6 != (long *)0x0) {
              if ((bRam0000000001341db3 & 1) == 0) {
                native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,lVar7,0);
                bRam0000000001341db3 = 1;
              }
              lVar4 = plVar6[0x1a];
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar4,lVar7,0);
              if ((uVar5 & 1) != 0) {
                return;
              }
              plVar6[0x1a] = lVar7;
              native_sub_4326e0(plVar6 + 0x1a,lVar7);
              (**(code **)(*plVar6 + 0x2f8))(plVar6,*(undefined8 *)(*plVar6 + 0x300));
                    /* WARNING: Could not recover jumptable at 0x00a85908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar6 + 0x308))(plVar6,*(undefined8 *)(*plVar6 + 0x310));
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* VideoController$$Update @ 0x94efa4
 * void VideoController__Update (VideoController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VideoController$$Update
   void VideoController__Update (VideoController_o* __this, const MethodInfo* method); */

void native_VideoController__Update_94efa4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uStack_28;
  
  if ((bRam000000000134148a & 1) == 0) {
    native_sub_43273c(&UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0);
    native_sub_43273c(&StringLiteral_Login_12ef660);
    bRam000000000134148a = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar3 = native_UnityEngine_Video_VideoPlayer__get_isPlaying_dc23bc(*(long *)(param_1 + 0x20),0);
    if ((uVar3 & 1) == 0) {
      if (*(char *)(param_1 + 0x28) == '\0') {
        return;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x28) = 1;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar3 = native_UnityEngine_Video_VideoPlayer__get_isPlaying_dc23bc
                        (*(long *)(param_1 + 0x20),0);
      if ((uVar3 & 1) != 0) {
        return;
      }
      *(undefined1 *)(param_1 + 0x28) = 0;
      if (((*(byte *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0 + 0x133) >> 2 & 1)
           != 0) &&
         (*(int *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0 + 0xe0) == 0)) {
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
      if (((*(byte *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0 + 0x133) >> 2 & 1)
           != 0) &&
         (*(int *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UnityEngine_SceneManagement_SceneManager__LoadScene_769edc(uVar1,uVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* VideoController$$.ctor @ 0x94f06c
 * void VideoController___ctor (VideoController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VideoController$$.ctor
   void VideoController___ctor (VideoController_o* __this, const MethodInfo* method); */

undefined1  [16] native_VideoController___ctor_94f06c(ulong param_1)

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


