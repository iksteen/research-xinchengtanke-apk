/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TweenOrthoSize$$get_cachedCamera @ 0x6e5718
 * UnityEngine_Camera_o* TweenOrthoSize__get_cachedCamera (TweenOrthoSize_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenOrthoSize$$get_cachedCamera
   UnityEngine_Camera_o* TweenOrthoSize__get_cachedCamera (TweenOrthoSize_o* __this, const
   MethodInfo* method); */

undefined8 native_TweenOrthoSize__get_cachedCamera_6e5718(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133f3a7 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Camera____12e29a8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f3a7 = 1;
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



/* TweenOrthoSize$$get_orthoSize @ 0x6e57cc
 * float TweenOrthoSize__get_orthoSize (TweenOrthoSize_o* __this, const MethodInfo* method); */

/* TweenOrthoSize$$get_orthoSize
   float TweenOrthoSize__get_orthoSize (TweenOrthoSize_o* __this, const MethodInfo* method); */

void native_TweenOrthoSize__get_orthoSize_6e57cc(void)

{
  long lVar1;
  
  lVar1 = native_TweenOrthoSize__get_cachedCamera_6e5718();
  if (lVar1 != 0) {
    if (pcRam00000000013409a0 == (code *)0x0) {
      pcRam00000000013409a0 = (code *)native_sub_4326f0(&UNK_00e2c8c9);
    }
                    /* WARNING: Could not recover jumptable at 0x008d866c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000000013409a0)(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenOrthoSize$$set_orthoSize @ 0x6e57f0
 * void TweenOrthoSize__set_orthoSize (TweenOrthoSize_o* __this, float value, const MethodInfo* method); */

/* TweenOrthoSize$$set_orthoSize
   void TweenOrthoSize__set_orthoSize (TweenOrthoSize_o* __this, float value, const MethodInfo*
   method); */

void native_TweenOrthoSize__set_orthoSize_6e57f0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = native_TweenOrthoSize__get_cachedCamera_6e5718();
  if (lVar1 != 0) {
    if (pcRam00000000013409a8 == (code *)0x0) {
      pcRam00000000013409a8 = (code *)native_sub_4326f0(&UNK_00e2c8f4);
    }
                    /* WARNING: Could not recover jumptable at 0x008d86bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000000013409a8)(param_1,lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenOrthoSize$$get_value @ 0x6e57d0
 * float TweenOrthoSize__get_value (TweenOrthoSize_o* __this, const MethodInfo* method); */

/* TweenOrthoSize$$get_value
   float TweenOrthoSize__get_value (TweenOrthoSize_o* __this, const MethodInfo* method); */

void native_TweenOrthoSize__get_value_6e57d0(void)

{
  long lVar1;
  
  lVar1 = native_TweenOrthoSize__get_cachedCamera_6e5718();
  if (lVar1 != 0) {
    if (pcRam00000000013409a0 == (code *)0x0) {
      pcRam00000000013409a0 = (code *)native_sub_4326f0(&UNK_00e2c8c9);
    }
                    /* WARNING: Could not recover jumptable at 0x008d866c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000000013409a0)(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenOrthoSize$$set_value @ 0x6e57f4
 * void TweenOrthoSize__set_value (TweenOrthoSize_o* __this, float value, const MethodInfo* method); */

/* TweenOrthoSize$$set_value
   void TweenOrthoSize__set_value (TweenOrthoSize_o* __this, float value, const MethodInfo* method);
    */

void native_TweenOrthoSize__set_value_6e57f4(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = native_TweenOrthoSize__get_cachedCamera_6e5718();
  if (lVar1 != 0) {
    if (pcRam00000000013409a8 == (code *)0x0) {
      pcRam00000000013409a8 = (code *)native_sub_4326f0(&UNK_00e2c8f4);
    }
                    /* WARNING: Could not recover jumptable at 0x008d86bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000000013409a8)(param_1,lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenOrthoSize$$OnUpdate @ 0x6e5824
 * void TweenOrthoSize__OnUpdate (TweenOrthoSize_o* __this, float factor, bool isFinished, const MethodInfo* method); */

/* TweenOrthoSize$$OnUpdate
   void TweenOrthoSize__OnUpdate (TweenOrthoSize_o* __this, float factor, bool isFinished, const
   MethodInfo* method); */

void native_TweenOrthoSize__OnUpdate_6e5824(float param_1,long param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)(param_2 + 0x80);
  fVar3 = *(float *)(param_2 + 0x84);
  lVar1 = native_TweenOrthoSize__get_cachedCamera_6e5718();
  if (lVar1 != 0) {
    if (pcRam00000000013409a8 == (code *)0x0) {
      pcRam00000000013409a8 = (code *)native_sub_4326f0(&UNK_00e2c8f4);
    }
                    /* WARNING: Could not recover jumptable at 0x008d86bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000000013409a8)((1.0 - param_1) * fVar2 + fVar3 * param_1,lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenOrthoSize$$Begin @ 0x6e5840
 * TweenOrthoSize_o* TweenOrthoSize__Begin (UnityEngine_GameObject_o* go, float duration, float to, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenOrthoSize$$Begin
   TweenOrthoSize_o* TweenOrthoSize__Begin (UnityEngine_GameObject_o* go, float duration, float to,
   const MethodInfo* method); */

long native_TweenOrthoSize__Begin_6e5840(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  
  if ((bRam000000000133f3a8 & 1) == 0) {
    native_sub_43273c(&Method_UITweener_Begin_TweenOrthoSize____12e7920);
    bRam000000000133f3a8 = 1;
  }
  lVar1 = native_UITweener__Begin_object__d8710c
                    (param_1,0,param_3,_Method_UITweener_Begin_TweenOrthoSize____12e7920);
  if (lVar1 != 0) {
    uVar2 = native_TweenOrthoSize__get_value_6e57d0();
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



/* TweenOrthoSize$$SetStartToCurrentValue @ 0x6e58ec
 * void TweenOrthoSize__SetStartToCurrentValue (TweenOrthoSize_o* __this, const MethodInfo* method); */

/* TweenOrthoSize$$SetStartToCurrentValue
   void TweenOrthoSize__SetStartToCurrentValue (TweenOrthoSize_o* __this, const MethodInfo* method);
    */

void native_TweenOrthoSize__SetStartToCurrentValue_6e58ec(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = native_TweenOrthoSize__get_value_6e57d0();
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  return;
}



/* TweenOrthoSize$$SetEndToCurrentValue @ 0x6e5910
 * void TweenOrthoSize__SetEndToCurrentValue (TweenOrthoSize_o* __this, const MethodInfo* method); */

/* TweenOrthoSize$$SetEndToCurrentValue
   void TweenOrthoSize__SetEndToCurrentValue (TweenOrthoSize_o* __this, const MethodInfo* method);
    */

void native_TweenOrthoSize__SetEndToCurrentValue_6e5910(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = native_TweenOrthoSize__get_value_6e57d0();
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  return;
}



/* TweenOrthoSize$$.ctor @ 0x6e5934
 * void TweenOrthoSize___ctor (TweenOrthoSize_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenOrthoSize$$.ctor
   void TweenOrthoSize___ctor (TweenOrthoSize_o* __this, const MethodInfo* method); */

void native_TweenOrthoSize___ctor_6e5934(long param_1)

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


