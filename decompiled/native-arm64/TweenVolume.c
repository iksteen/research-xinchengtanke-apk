/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TweenVolume$$get_audioSource @ 0x6e6ad0
 * UnityEngine_AudioSource_o* TweenVolume__get_audioSource (TweenVolume_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenVolume$$get_audioSource
   UnityEngine_AudioSource_o* TweenVolume__get_audioSource (TweenVolume_o* __this, const MethodInfo*
   method); */

undefined8 native_TweenVolume__get_audioSource_6e6ad0(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133f3b5 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_AudioSource____12e2918);
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_TweenVolume_needs_an_AudioSource_to_work_with_12f2810);
    bRam000000000133f3b5 = 1;
  }
  puVar2 = (undefined8 *)(param_1 + 0x88);
  uVar3 = *puVar2;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    uVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_1,_Method_UnityEngine_Component_GetComponent_AudioSource____12e2918);
    *(undefined8 *)(param_1 + 0x88) = uVar3;
    native_sub_4326e0(puVar2,uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x88);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      uVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (param_1,_Method_UnityEngine_Component_GetComponent_AudioSource____12e2918);
      *(undefined8 *)(param_1 + 0x88) = uVar3;
      native_sub_4326e0(puVar2,uVar3);
      uVar3 = *(undefined8 *)(param_1 + 0x88);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar3,0,0);
      if ((uVar1 & 1) != 0) {
        if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        native_UnityEngine_Debug__LogError_8dc6f8
                  (_StringLiteral_TweenVolume_needs_an_AudioSource_to_work_with_12f2810,param_1,0);
        native_UnityEngine_Behaviour__set_enabled_8d7b0c(param_1,0,0);
      }
    }
  }
  return *puVar2;
}



/* TweenVolume$$get_volume @ 0x6e6c68
 * float TweenVolume__get_volume (TweenVolume_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenVolume$$get_volume
   float TweenVolume__get_volume (TweenVolume_o* __this, const MethodInfo* method); */

undefined1  [16] native_TweenVolume__get_volume_6e6c68(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar4 [16];
  
  if ((bRam000000000133f3b6 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f3b6 = 1;
  }
  uVar1 = native_TweenVolume__get_audioSource_6e6ad0(param_1);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar1,0,0);
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(param_1 + 0x88);
    if (lVar3 != 0) {
      if (pcRam0000000001343c58 == (code *)0x0) {
        pcRam0000000001343c58 = (code *)native_sub_4326f0(&UNK_00ecde4a);
      }
                    /* WARNING: Could not recover jumptable at 0x00dc0f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000001343c58)(lVar3);
      auVar4._4_4_ = extraout_var;
      auVar4._0_4_ = extraout_s0;
      auVar4._8_8_ = extraout_var_00;
      return auVar4;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return ZEXT816(0);
}



/* TweenVolume$$set_volume @ 0x6e6d0c
 * void TweenVolume__set_volume (TweenVolume_o* __this, float value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenVolume$$set_volume
   void TweenVolume__set_volume (TweenVolume_o* __this, float value, const MethodInfo* method); */

void native_TweenVolume__set_volume_6e6d0c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  if ((bRam000000000133f3b7 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f3b7 = 1;
  }
  uVar1 = native_TweenVolume__get_audioSource_6e6ad0(param_2);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar1,0,0);
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(param_2 + 0x88);
    if (lVar3 != 0) {
      if (pcRam0000000001343c60 == (code *)0x0) {
        pcRam0000000001343c60 = (code *)native_sub_4326f0(&UNK_00ecde70);
      }
                    /* WARNING: Could not recover jumptable at 0x00dc0fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000001343c60)(param_1,lVar3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return;
}



/* TweenVolume$$get_value @ 0x6e6c6c
 * float TweenVolume__get_value (TweenVolume_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenVolume$$get_value
   float TweenVolume__get_value (TweenVolume_o* __this, const MethodInfo* method); */

undefined1  [16] native_TweenVolume__get_value_6e6c6c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar4 [16];
  
  if ((bRam000000000133f3b6 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f3b6 = 1;
  }
  uVar1 = native_TweenVolume__get_audioSource_6e6ad0(param_1);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar1,0,0);
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(param_1 + 0x88);
    if (lVar3 != 0) {
      if (pcRam0000000001343c58 == (code *)0x0) {
        pcRam0000000001343c58 = (code *)native_sub_4326f0(&UNK_00ecde4a);
      }
                    /* WARNING: Could not recover jumptable at 0x00dc0f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000001343c58)(lVar3);
      auVar4._4_4_ = extraout_var;
      auVar4._0_4_ = extraout_s0;
      auVar4._8_8_ = extraout_var_00;
      return auVar4;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return ZEXT816(0);
}



/* TweenVolume$$set_value @ 0x6e6d10
 * void TweenVolume__set_value (TweenVolume_o* __this, float value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenVolume$$set_value
   void TweenVolume__set_value (TweenVolume_o* __this, float value, const MethodInfo* method); */

void native_TweenVolume__set_value_6e6d10(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  if ((bRam000000000133f3b7 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f3b7 = 1;
  }
  uVar1 = native_TweenVolume__get_audioSource_6e6ad0(param_2);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar1,0,0);
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(param_2 + 0x88);
    if (lVar3 != 0) {
      if (pcRam0000000001343c60 == (code *)0x0) {
        pcRam0000000001343c60 = (code *)native_sub_4326f0(&UNK_00ecde70);
      }
                    /* WARNING: Could not recover jumptable at 0x00dc0fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000001343c60)(param_1,lVar3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return;
}



/* TweenVolume$$OnUpdate @ 0x6e6dc0
 * void TweenVolume__OnUpdate (TweenVolume_o* __this, float factor, bool isFinished, const MethodInfo* method); */

/* TweenVolume$$OnUpdate
   void TweenVolume__OnUpdate (TweenVolume_o* __this, float factor, bool isFinished, const
   MethodInfo* method); */

void native_TweenVolume__OnUpdate_6e6dc0(float param_1,long param_2)

{
  long lVar1;
  float fVar2;
  
  native_TweenVolume__set_value_6e6d10
            ((1.0 - param_1) * *(float *)(param_2 + 0x80) + *(float *)(param_2 + 0x84) * param_1);
  lVar1 = *(long *)(param_2 + 0x88);
  if (lVar1 != 0) {
    fVar2 = (float)native_UnityEngine_AudioSource__get_volume_dc0f58(lVar1,0);
    if (pcRam0000000001340948 == (code *)0x0) {
      pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
    }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000001340948)(lVar1,0.01 < fVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenVolume$$Begin @ 0x6e6e28
 * TweenVolume_o* TweenVolume__Begin (UnityEngine_GameObject_o* go, float duration, float targetVolume, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenVolume$$Begin
   TweenVolume_o* TweenVolume__Begin (UnityEngine_GameObject_o* go, float duration, float
   targetVolume, const MethodInfo* method); */

long native_TweenVolume__Begin_6e6e28(undefined8 param_1,float param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  
  if ((bRam000000000133f3b8 & 1) == 0) {
    native_sub_43273c(&Method_UITweener_Begin_TweenVolume____12e7948);
    bRam000000000133f3b8 = 1;
  }
  lVar1 = native_UITweener__Begin_object__d8710c
                    (param_1,0,param_3,_Method_UITweener_Begin_TweenVolume____12e7948);
  if (lVar1 != 0) {
    uVar3 = native_TweenVolume__get_value_6e6c6c();
    *(undefined4 *)(lVar1 + 0x80) = uVar3;
    *(float *)(lVar1 + 0x84) = param_2;
    if (0.0 < param_2) {
      lVar2 = native_TweenVolume__get_audioSource_6e6ad0(lVar1);
      if (lVar2 == 0) goto LAB_006e6ed4;
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar2,1,0);
      native_UnityEngine_AudioSource__Play_dc1088(lVar2,0);
    }
    return lVar1;
  }
LAB_006e6ed4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenVolume$$SetStartToCurrentValue @ 0x6e6ed8
 * void TweenVolume__SetStartToCurrentValue (TweenVolume_o* __this, const MethodInfo* method); */

/* TweenVolume$$SetStartToCurrentValue
   void TweenVolume__SetStartToCurrentValue (TweenVolume_o* __this, const MethodInfo* method); */

void native_TweenVolume__SetStartToCurrentValue_6e6ed8(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = native_TweenVolume__get_value_6e6c6c();
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  return;
}



/* TweenVolume$$SetEndToCurrentValue @ 0x6e6efc
 * void TweenVolume__SetEndToCurrentValue (TweenVolume_o* __this, const MethodInfo* method); */

/* TweenVolume$$SetEndToCurrentValue
   void TweenVolume__SetEndToCurrentValue (TweenVolume_o* __this, const MethodInfo* method); */

void native_TweenVolume__SetEndToCurrentValue_6e6efc(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = native_TweenVolume__get_value_6e6c6c();
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  return;
}



/* TweenVolume$$.ctor @ 0x6e6f20
 * void TweenVolume___ctor (TweenVolume_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenVolume$$.ctor
   void TweenVolume___ctor (TweenVolume_o* __this, const MethodInfo* method); */

void native_TweenVolume___ctor_6e6f20(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  uVar2 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(param_1 + 0x80) = uVar2;
  if ((bRam000000000134144a & 1) == 0) {
    native_sub_43273c(&UnityEngine_AnimationCurve_TypeInfo_12d3768,0);
    native_sub_43273c(&UnityEngine_Keyframe___TypeInfo_12d3298);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
    native_sub_43273c(&System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
    bRam000000000134144a = 1;
  }
  lVar1 = native_sub_432750(_UnityEngine_Keyframe___TypeInfo_12d3298,2);
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  native_UnityEngine_Keyframe___ctor_8dfc58(0,0,0,0x3f800000,&uStack_50,0);
  if (lVar1 != 0) {
    uStack_5c = CONCAT44(uStack_38,uStack_3c);
    uStack_60 = uStack_40;
    uStack_68 = uStack_48;
    uStack_64 = uStack_44;
    uStack_70 = uStack_50;
    if (*(int *)(lVar1 + 0x18) != 0) {
      *(undefined8 *)(lVar1 + 0x34) = uStack_5c;
      *(ulong *)(lVar1 + 0x2c) = CONCAT44(uStack_40,uStack_44);
      *(ulong *)(lVar1 + 0x28) = CONCAT44(uStack_44,uStack_48);
      *(undefined8 *)(lVar1 + 0x20) = uStack_50;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_84 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      native_UnityEngine_Keyframe___ctor_8dfc58(0x3f800000,0x3f800000,0x3f800000,0,&uStack_90,0);
      if (1 < *(uint *)(lVar1 + 0x18)) {
        *(ulong *)(lVar1 + 0x50) = CONCAT44(uStack_78,uStack_7c);
        *(ulong *)(lVar1 + 0x48) = CONCAT44(uStack_80,uStack_84);
        *(ulong *)(lVar1 + 0x44) = CONCAT44(uStack_84,uStack_88);
        *(undefined8 *)(lVar1 + 0x3c) = uStack_90;
        uVar2 = native_sub_432808(_UnityEngine_AnimationCurve_TypeInfo_12d3768);
        native_UnityEngine_AnimationCurve___ctor_8d5df4(uVar2,lVar1,0);
        *(undefined8 *)(param_1 + 0x20) = uVar2;
        native_sub_4326e0((undefined8 *)(param_1 + 0x20),uVar2);
        *(undefined1 *)(param_1 + 0x28) = 1;
        *(undefined8 *)(param_1 + 0x30) = 0x3f80000000000002;
        uVar2 = native_sub_432808(_System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
        native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
                  (uVar2,_Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
        *(undefined8 *)(param_1 + 0x48) = uVar2;
        native_sub_4326e0(param_1 + 0x48,uVar2);
        *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x70) = 0x447a0000;
        native_UnityEngine_MonoBehaviour___ctor_8e971c(param_1,0);
        return;
      }
    }
    uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar2,0);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}


