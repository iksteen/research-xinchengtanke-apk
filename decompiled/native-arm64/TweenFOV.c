/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TweenFOV$$get_cachedCamera @ 0x6e3ae4
 * UnityEngine_Camera_o* TweenFOV__get_cachedCamera (TweenFOV_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenFOV$$get_cachedCamera
   UnityEngine_Camera_o* TweenFOV__get_cachedCamera (TweenFOV_o* __this, const MethodInfo* method);
    */

undefined8 native_TweenFOV__get_cachedCamera_6e3ae4(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133f396 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Camera____12e29a8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f396 = 1;
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
                      (param_1,_Method_UnityEngine_Component_GetComponent_Camera____12e29a8);
    *(undefined8 *)(param_1 + 0x88) = uVar3;
    native_sub_4326e0(puVar2,uVar3);
  }
  return *puVar2;
}



/* TweenFOV$$get_fov @ 0x6e3b98
 * float TweenFOV__get_fov (TweenFOV_o* __this, const MethodInfo* method); */

/* TweenFOV$$get_fov
   float TweenFOV__get_fov (TweenFOV_o* __this, const MethodInfo* method); */

void native_TweenFOV__get_fov_6e3b98(void)

{
  long lVar1;
  
  lVar1 = native_TweenFOV__get_cachedCamera_6e3ae4();
  if (lVar1 != 0) {
    if (pcRam0000000001340990 == (code *)0x0) {
      pcRam0000000001340990 = (code *)native_sub_4326f0(&UNK_00e2c870);
    }
                    /* WARNING: Could not recover jumptable at 0x008d85dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000001340990)(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenFOV$$set_fov @ 0x6e3bbc
 * void TweenFOV__set_fov (TweenFOV_o* __this, float value, const MethodInfo* method); */

/* TweenFOV$$set_fov
   void TweenFOV__set_fov (TweenFOV_o* __this, float value, const MethodInfo* method); */

void native_TweenFOV__set_fov_6e3bbc(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = native_TweenFOV__get_cachedCamera_6e3ae4();
  if (lVar1 != 0) {
    if (pcRam0000000001340998 == (code *)0x0) {
      pcRam0000000001340998 = (code *)native_sub_4326f0(&UNK_00e2c896);
    }
                    /* WARNING: Could not recover jumptable at 0x008d862c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000001340998)(param_1,lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenFOV$$get_value @ 0x6e3b9c
 * float TweenFOV__get_value (TweenFOV_o* __this, const MethodInfo* method); */

/* TweenFOV$$get_value
   float TweenFOV__get_value (TweenFOV_o* __this, const MethodInfo* method); */

void native_TweenFOV__get_value_6e3b9c(void)

{
  long lVar1;
  
  lVar1 = native_TweenFOV__get_cachedCamera_6e3ae4();
  if (lVar1 != 0) {
    if (pcRam0000000001340990 == (code *)0x0) {
      pcRam0000000001340990 = (code *)native_sub_4326f0(&UNK_00e2c870);
    }
                    /* WARNING: Could not recover jumptable at 0x008d85dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000001340990)(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenFOV$$set_value @ 0x6e3bc0
 * void TweenFOV__set_value (TweenFOV_o* __this, float value, const MethodInfo* method); */

/* TweenFOV$$set_value
   void TweenFOV__set_value (TweenFOV_o* __this, float value, const MethodInfo* method); */

void native_TweenFOV__set_value_6e3bc0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = native_TweenFOV__get_cachedCamera_6e3ae4();
  if (lVar1 != 0) {
    if (pcRam0000000001340998 == (code *)0x0) {
      pcRam0000000001340998 = (code *)native_sub_4326f0(&UNK_00e2c896);
    }
                    /* WARNING: Could not recover jumptable at 0x008d862c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000001340998)(param_1,lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenFOV$$OnUpdate @ 0x6e3bf0
 * void TweenFOV__OnUpdate (TweenFOV_o* __this, float factor, bool isFinished, const MethodInfo* method); */

/* TweenFOV$$OnUpdate
   void TweenFOV__OnUpdate (TweenFOV_o* __this, float factor, bool isFinished, const MethodInfo*
   method); */

void native_TweenFOV__OnUpdate_6e3bf0(float param_1,long param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)(param_2 + 0x80);
  fVar3 = *(float *)(param_2 + 0x84);
  lVar1 = native_TweenFOV__get_cachedCamera_6e3ae4();
  if (lVar1 != 0) {
    if (pcRam0000000001340998 == (code *)0x0) {
      pcRam0000000001340998 = (code *)native_sub_4326f0(&UNK_00e2c896);
    }
                    /* WARNING: Could not recover jumptable at 0x008d862c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000001340998)((1.0 - param_1) * fVar2 + fVar3 * param_1,lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenFOV$$Begin @ 0x6e3c0c
 * TweenFOV_o* TweenFOV__Begin (UnityEngine_GameObject_o* go, float duration, float to, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenFOV$$Begin
   TweenFOV_o* TweenFOV__Begin (UnityEngine_GameObject_o* go, float duration, float to, const
   MethodInfo* method); */

long native_TweenFOV__Begin_6e3c0c(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  
  if ((bRam000000000133f397 & 1) == 0) {
    native_sub_43273c(&Method_UITweener_Begin_TweenFOV____12e7908);
    bRam000000000133f397 = 1;
  }
  lVar1 = native_UITweener__Begin_object__d8710c
                    (param_1,0,param_3,_Method_UITweener_Begin_TweenFOV____12e7908);
  if (lVar1 != 0) {
    uVar2 = native_TweenFOV__get_value_6e3b9c();
    *(undefined4 *)(lVar1 + 0x80) = uVar2;
    *(undefined4 *)(lVar1 + 0x84) = param_2;
    if ((float)param_1 <= 0.0) {
      native_UITweener__Sample_948a44(0x3f800000,lVar1,1,0);
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar1,0,0);
    }
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenFOV$$SetStartToCurrentValue @ 0x6e3cb8
 * void TweenFOV__SetStartToCurrentValue (TweenFOV_o* __this, const MethodInfo* method); */

/* TweenFOV$$SetStartToCurrentValue
   void TweenFOV__SetStartToCurrentValue (TweenFOV_o* __this, const MethodInfo* method); */

void native_TweenFOV__SetStartToCurrentValue_6e3cb8(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = native_TweenFOV__get_value_6e3b9c();
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  return;
}



/* TweenFOV$$SetEndToCurrentValue @ 0x6e3cdc
 * void TweenFOV__SetEndToCurrentValue (TweenFOV_o* __this, const MethodInfo* method); */

/* TweenFOV$$SetEndToCurrentValue
   void TweenFOV__SetEndToCurrentValue (TweenFOV_o* __this, const MethodInfo* method); */

void native_TweenFOV__SetEndToCurrentValue_6e3cdc(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = native_TweenFOV__get_value_6e3b9c();
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  return;
}



/* TweenFOV$$SetCurrentValueToStart @ 0x6e3d00
 * void TweenFOV__SetCurrentValueToStart (TweenFOV_o* __this, const MethodInfo* method); */

/* TweenFOV$$SetCurrentValueToStart
   void TweenFOV__SetCurrentValueToStart (TweenFOV_o* __this, const MethodInfo* method); */

void native_TweenFOV__SetCurrentValueToStart_6e3d00(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0x80);
  lVar1 = native_TweenFOV__get_cachedCamera_6e3ae4();
  if (lVar1 != 0) {
    if (pcRam0000000001340998 == (code *)0x0) {
      pcRam0000000001340998 = (code *)native_sub_4326f0(&UNK_00e2c896);
    }
                    /* WARNING: Could not recover jumptable at 0x008d862c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000001340998)(uVar2,lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenFOV$$SetCurrentValueToEnd @ 0x6e3d08
 * void TweenFOV__SetCurrentValueToEnd (TweenFOV_o* __this, const MethodInfo* method); */

/* TweenFOV$$SetCurrentValueToEnd
   void TweenFOV__SetCurrentValueToEnd (TweenFOV_o* __this, const MethodInfo* method); */

void native_TweenFOV__SetCurrentValueToEnd_6e3d08(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0x84);
  lVar1 = native_TweenFOV__get_cachedCamera_6e3ae4();
  if (lVar1 != 0) {
    if (pcRam0000000001340998 == (code *)0x0) {
      pcRam0000000001340998 = (code *)native_sub_4326f0(&UNK_00e2c896);
    }
                    /* WARNING: Could not recover jumptable at 0x008d862c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000001340998)(uVar2,lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenFOV$$.ctor @ 0x6e3d10
 * void TweenFOV___ctor (TweenFOV_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenFOV$$.ctor
   void TweenFOV___ctor (TweenFOV_o* __this, const MethodInfo* method); */

void native_TweenFOV___ctor_6e3d10(long param_1)

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
  
  *(undefined8 *)(param_1 + 0x80) = 0x4234000042340000;
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


