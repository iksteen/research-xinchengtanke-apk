/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TweenRotation$$get_cachedTransform @ 0x6e5e20
 * UnityEngine_Transform_o* TweenRotation__get_cachedTransform (TweenRotation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenRotation$$get_cachedTransform
   UnityEngine_Transform_o* TweenRotation__get_cachedTransform (TweenRotation_o* __this, const
   MethodInfo* method); */

undefined8 native_TweenRotation__get_cachedTransform_6e5e20(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133f3ae & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f3ae = 1;
  }
  puVar2 = (undefined8 *)(param_1 + 0xa0);
  uVar3 = *puVar2;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    uVar3 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    *(undefined8 *)(param_1 + 0xa0) = uVar3;
    native_sub_4326e0(puVar2,uVar3);
  }
  return *puVar2;
}



/* TweenRotation$$get_rotation @ 0x6e5ec0
 * UnityEngine_Quaternion_o TweenRotation__get_rotation (TweenRotation_o* __this, const MethodInfo* method); */

/* TweenRotation$$get_rotation
   UnityEngine_Quaternion_o TweenRotation__get_rotation (TweenRotation_o* __this, const MethodInfo*
   method); */

undefined4 native_TweenRotation__get_rotation_6e5ec0(void)

{
  long lVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = native_TweenRotation__get_cachedTransform_6e5e20();
  if (lVar1 != 0) {
    uStack_30 = 0;
    uStack_28 = 0;
    if (pcRam000000000133ff00 == (code *)0x0) {
      pcRam000000000133ff00 = (code *)native_sub_4326f0(&UNK_00e2ae77,0);
    }
    (*pcRam000000000133ff00)(lVar1,&uStack_30);
    return (undefined4)uStack_30;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenRotation$$set_rotation @ 0x6e5ee4
 * void TweenRotation__set_rotation (TweenRotation_o* __this, UnityEngine_Quaternion_o value, const MethodInfo* method); */

/* TweenRotation$$set_rotation
   void TweenRotation__set_rotation (TweenRotation_o* __this, UnityEngine_Quaternion_o value, const
   MethodInfo* method); */

void native_TweenRotation__set_rotation_6e5ee4(void)

{
  long lVar1;
  
  lVar1 = native_TweenRotation__get_cachedTransform_6e5e20();
  if (lVar1 != 0) {
    if (pcRam000000000133ff08 == (code *)0x0) {
      pcRam000000000133ff08 = (code *)native_sub_4326f0(&UNK_00e2aec2,0);
    }
    (*pcRam000000000133ff08)(lVar1,&stack0xffffffffffffffd0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenRotation$$get_value @ 0x6e5ec4
 * UnityEngine_Quaternion_o TweenRotation__get_value (TweenRotation_o* __this, const MethodInfo* method); */

/* TweenRotation$$get_value
   UnityEngine_Quaternion_o TweenRotation__get_value (TweenRotation_o* __this, const MethodInfo*
   method); */

undefined4 native_TweenRotation__get_value_6e5ec4(void)

{
  long lVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = native_TweenRotation__get_cachedTransform_6e5e20();
  if (lVar1 != 0) {
    uStack_30 = 0;
    uStack_28 = 0;
    if (pcRam000000000133ff00 == (code *)0x0) {
      pcRam000000000133ff00 = (code *)native_sub_4326f0(&UNK_00e2ae77,0);
    }
    (*pcRam000000000133ff00)(lVar1,&uStack_30);
    return (undefined4)uStack_30;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenRotation$$set_value @ 0x6e5ee8
 * void TweenRotation__set_value (TweenRotation_o* __this, UnityEngine_Quaternion_o value, const MethodInfo* method); */

/* TweenRotation$$set_value
   void TweenRotation__set_value (TweenRotation_o* __this, UnityEngine_Quaternion_o value, const
   MethodInfo* method); */

void native_TweenRotation__set_value_6e5ee8(void)

{
  long lVar1;
  
  lVar1 = native_TweenRotation__get_cachedTransform_6e5e20();
  if (lVar1 != 0) {
    if (pcRam000000000133ff08 == (code *)0x0) {
      pcRam000000000133ff08 = (code *)native_sub_4326f0(&UNK_00e2aec2,0);
    }
    (*pcRam000000000133ff08)(lVar1,&stack0xffffffffffffffd0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenRotation$$OnUpdate @ 0x6e5f38
 * void TweenRotation__OnUpdate (TweenRotation_o* __this, float factor, bool isFinished, const MethodInfo* method); */

/* TweenRotation$$OnUpdate
   void TweenRotation__OnUpdate (TweenRotation_o* __this, float factor, bool isFinished, const
   MethodInfo* method); */

void native_TweenRotation__OnUpdate_6e5f38(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_2 + 0x98) == '\0') {
    uVar2 = native_UnityEngine_Mathf__Lerp_8e5224
                      (*(undefined4 *)(param_2 + 0x80),*(undefined4 *)(param_2 + 0x8c),param_1,0);
    native_UnityEngine_Mathf__Lerp_8e5224
              (*(undefined4 *)(param_2 + 0x84),*(undefined4 *)(param_2 + 0x90),param_1,0);
    native_UnityEngine_Mathf__Lerp_8e5224
              (*(undefined4 *)(param_2 + 0x88),*(undefined4 *)(param_2 + 0x94),param_1,0);
    native_UnityEngine_Quaternion__Euler_762bdc(uVar2,0);
  }
  else {
    uVar2 = native_UnityEngine_Quaternion__Euler_762bdc(*(undefined4 *)(param_2 + 0x80),0);
    native_UnityEngine_Quaternion__Euler_762bdc
              (*(undefined4 *)(param_2 + 0x8c),*(undefined4 *)(param_2 + 0x90),
               *(undefined4 *)(param_2 + 0x94),0);
    native_UnityEngine_Quaternion__Slerp_7622b4(uVar2,0);
  }
  lVar1 = native_TweenRotation__get_cachedTransform_6e5e20(param_2);
  if (lVar1 != 0) {
    if (pcRam000000000133ff08 == (code *)0x0) {
      pcRam000000000133ff08 = (code *)native_sub_4326f0(&UNK_00e2aec2,0);
    }
    (*pcRam000000000133ff08)(lVar1,&stack0xffffffffffffffd0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenRotation$$Begin @ 0x6e6044
 * TweenRotation_o* TweenRotation__Begin (UnityEngine_GameObject_o* go, float duration, UnityEngine_Quaternion_o rot, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenRotation$$Begin
   TweenRotation_o* TweenRotation__Begin (UnityEngine_GameObject_o* go, float duration,
   UnityEngine_Quaternion_o rot, const MethodInfo* method); */

long native_TweenRotation__Begin_6e6044
               (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uStack_40 = param_2;
  uStack_3c = param_3;
  uStack_38 = param_4;
  uStack_34 = param_5;
  if ((bRam000000000133f3af & 1) == 0) {
    native_sub_43273c(&Method_UITweener_Begin_TweenRotation____12e7930);
    bRam000000000133f3af = 1;
  }
  uVar3 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  lVar1 = native_UITweener__Begin_object__d8710c
                    (param_1,param_6,_Method_UITweener_Begin_TweenRotation____12e7930);
  if (lVar1 != 0) {
    uVar2 = native_TweenRotation__get_value_6e5ec4();
    uStack_50 = CONCAT44(uVar3,uVar2);
    uStack_48 = CONCAT44(param_4,param_3);
    uVar2 = native_UnityEngine_Quaternion__get_eulerAngles_762b94(&uStack_50,0);
    *(undefined4 *)(lVar1 + 0x80) = uVar2;
    *(undefined4 *)(lVar1 + 0x84) = uVar3;
    *(undefined4 *)(lVar1 + 0x88) = param_3;
    uVar2 = native_UnityEngine_Quaternion__get_eulerAngles_762b94(&uStack_40,0);
    *(undefined4 *)(lVar1 + 0x8c) = uVar2;
    *(undefined4 *)(lVar1 + 0x90) = uVar3;
    *(undefined4 *)(lVar1 + 0x94) = param_3;
    if ((float)param_1 <= 0.0) {
      native_UITweener__Sample_948a44(0x3f800000,lVar1,1,0);
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar1,0,0);
    }
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenRotation$$SetStartToCurrentValue @ 0x6e612c
 * void TweenRotation__SetStartToCurrentValue (TweenRotation_o* __this, const MethodInfo* method); */

/* TweenRotation$$SetStartToCurrentValue
   void TweenRotation__SetStartToCurrentValue (TweenRotation_o* __this, const MethodInfo* method);
    */

void native_TweenRotation__SetStartToCurrentValue_6e612c
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined4 uVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_30 = native_TweenRotation__get_value_6e5ec4();
  uStack_2c = param_2;
  uStack_28 = param_3;
  uStack_24 = param_4;
  uVar1 = native_UnityEngine_Quaternion__get_eulerAngles_762b94(&uStack_30,0);
  *(undefined4 *)(param_5 + 0x80) = uVar1;
  *(undefined4 *)(param_5 + 0x84) = param_2;
  *(undefined4 *)(param_5 + 0x88) = param_3;
  return;
}



/* TweenRotation$$SetEndToCurrentValue @ 0x6e6170
 * void TweenRotation__SetEndToCurrentValue (TweenRotation_o* __this, const MethodInfo* method); */

/* TweenRotation$$SetEndToCurrentValue
   void TweenRotation__SetEndToCurrentValue (TweenRotation_o* __this, const MethodInfo* method); */

void native_TweenRotation__SetEndToCurrentValue_6e6170
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined4 uVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_30 = native_TweenRotation__get_value_6e5ec4();
  uStack_2c = param_2;
  uStack_28 = param_3;
  uStack_24 = param_4;
  uVar1 = native_UnityEngine_Quaternion__get_eulerAngles_762b94(&uStack_30,0);
  *(undefined4 *)(param_5 + 0x8c) = uVar1;
  *(undefined4 *)(param_5 + 0x90) = param_2;
  *(undefined4 *)(param_5 + 0x94) = param_3;
  return;
}



/* TweenRotation$$SetCurrentValueToStart @ 0x6e61b4
 * void TweenRotation__SetCurrentValueToStart (TweenRotation_o* __this, const MethodInfo* method); */

/* TweenRotation$$SetCurrentValueToStart
   void TweenRotation__SetCurrentValueToStart (TweenRotation_o* __this, const MethodInfo* method);
    */

void native_TweenRotation__SetCurrentValueToStart_6e61b4(long param_1)

{
  long lVar1;
  
  native_UnityEngine_Quaternion__Euler_762bdc(*(undefined4 *)(param_1 + 0x80),0);
  lVar1 = native_TweenRotation__get_cachedTransform_6e5e20(param_1);
  if (lVar1 != 0) {
    if (pcRam000000000133ff08 == (code *)0x0) {
      pcRam000000000133ff08 = (code *)native_sub_4326f0(&UNK_00e2aec2,0);
    }
    (*pcRam000000000133ff08)(lVar1,&stack0xffffffffffffffd0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenRotation$$SetCurrentValueToEnd @ 0x6e61e4
 * void TweenRotation__SetCurrentValueToEnd (TweenRotation_o* __this, const MethodInfo* method); */

/* TweenRotation$$SetCurrentValueToEnd
   void TweenRotation__SetCurrentValueToEnd (TweenRotation_o* __this, const MethodInfo* method); */

void native_TweenRotation__SetCurrentValueToEnd_6e61e4(long param_1)

{
  long lVar1;
  
  native_UnityEngine_Quaternion__Euler_762bdc(*(undefined4 *)(param_1 + 0x8c),0);
  lVar1 = native_TweenRotation__get_cachedTransform_6e5e20(param_1);
  if (lVar1 != 0) {
    if (pcRam000000000133ff08 == (code *)0x0) {
      pcRam000000000133ff08 = (code *)native_sub_4326f0(&UNK_00e2aec2,0);
    }
    (*pcRam000000000133ff08)(lVar1,&stack0xffffffffffffffd0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenRotation$$.ctor @ 0x6e6214
 * void TweenRotation___ctor (TweenRotation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenRotation$$.ctor
   void TweenRotation___ctor (TweenRotation_o* __this, const MethodInfo* method); */

void native_TweenRotation___ctor_6e6214(long param_1)

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


