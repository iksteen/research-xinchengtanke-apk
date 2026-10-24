/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TweenScale$$get_cachedTransform @ 0x6e621c
 * UnityEngine_Transform_o* TweenScale__get_cachedTransform (TweenScale_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenScale$$get_cachedTransform
   UnityEngine_Transform_o* TweenScale__get_cachedTransform (TweenScale_o* __this, const MethodInfo*
   method); */

undefined8 native_TweenScale__get_cachedTransform_6e621c(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133f3b0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f3b0 = 1;
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



/* TweenScale$$get_value @ 0x6e62bc
 * UnityEngine_Vector3_o TweenScale__get_value (TweenScale_o* __this, const MethodInfo* method); */

/* TweenScale$$get_value
   UnityEngine_Vector3_o TweenScale__get_value (TweenScale_o* __this, const MethodInfo* method); */

undefined4 native_TweenScale__get_value_6e62bc(void)

{
  long lVar1;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  lVar1 = native_TweenScale__get_cachedTransform_6e621c();
  if (lVar1 != 0) {
    uStack_28 = 0;
    uStack_30 = 0;
    if (pcRam000000000133ff10 == (code *)0x0) {
      pcRam000000000133ff10 = (code *)native_sub_4326f0(&UNK_00e2af0d,0);
    }
    (*pcRam000000000133ff10)(lVar1,&uStack_30);
    return (undefined4)uStack_30;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenScale$$set_value @ 0x6e62dc
 * void TweenScale__set_value (TweenScale_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method); */

/* TweenScale$$set_value
   void TweenScale__set_value (TweenScale_o* __this, UnityEngine_Vector3_o value, const MethodInfo*
   method); */

void native_TweenScale__set_value_6e62dc(void)

{
  long lVar1;
  
  lVar1 = native_TweenScale__get_cachedTransform_6e621c();
  if (lVar1 != 0) {
    if (pcRam000000000133ff18 == (code *)0x0) {
      pcRam000000000133ff18 = (code *)native_sub_4326f0(&UNK_00e2af52,0);
    }
    (*pcRam000000000133ff18)(lVar1,&stack0xffffffffffffffd0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenScale$$get_scale @ 0x6e6324
 * UnityEngine_Vector3_o TweenScale__get_scale (TweenScale_o* __this, const MethodInfo* method); */

/* TweenScale$$get_scale
   UnityEngine_Vector3_o TweenScale__get_scale (TweenScale_o* __this, const MethodInfo* method); */

undefined4 native_TweenScale__get_scale_6e6324(void)

{
  long lVar1;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  lVar1 = native_TweenScale__get_cachedTransform_6e621c();
  if (lVar1 != 0) {
    uStack_28 = 0;
    uStack_30 = 0;
    if (pcRam000000000133ff10 == (code *)0x0) {
      pcRam000000000133ff10 = (code *)native_sub_4326f0(&UNK_00e2af0d,0);
    }
    (*pcRam000000000133ff10)(lVar1,&uStack_30);
    return (undefined4)uStack_30;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenScale$$set_scale @ 0x6e6328
 * void TweenScale__set_scale (TweenScale_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method); */

/* TweenScale$$set_scale
   void TweenScale__set_scale (TweenScale_o* __this, UnityEngine_Vector3_o value, const MethodInfo*
   method); */

void native_TweenScale__set_scale_6e6328(void)

{
  long lVar1;
  
  lVar1 = native_TweenScale__get_cachedTransform_6e621c();
  if (lVar1 != 0) {
    if (pcRam000000000133ff18 == (code *)0x0) {
      pcRam000000000133ff18 = (code *)native_sub_4326f0(&UNK_00e2af52,0);
    }
    (*pcRam000000000133ff18)(lVar1,&stack0xffffffffffffffd0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenScale$$OnUpdate @ 0x6e632c
 * void TweenScale__OnUpdate (TweenScale_o* __this, float factor, bool isFinished, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0094239c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenScale$$OnUpdate
   void TweenScale__OnUpdate (TweenScale_o* __this, float factor, bool isFinished, const MethodInfo*
   method); */

void native_TweenScale__OnUpdate_6e632c(float param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  if ((bRam000000000133f3b1 & 1) == 0) {
    native_sub_43273c(&Method_NGUITools_FindInParents_UITable____12e57a0);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f3b1 = 1;
  }
  fVar6 = 1.0 - param_1;
  fVar5 = (float)((ulong)*(undefined8 *)(param_2 + 0x80) >> 0x20) * fVar6 +
          (float)((ulong)*(undefined8 *)(param_2 + 0x8c) >> 0x20) * param_1;
  native_TweenScale__set_value_6e62dc
            (CONCAT44(fVar5,(float)*(undefined8 *)(param_2 + 0x80) * fVar6 +
                            (float)*(undefined8 *)(param_2 + 0x8c) * param_1),fVar5,
             fVar6 * *(float *)(param_2 + 0x88) + *(float *)(param_2 + 0x94) * param_1,param_2);
  if (*(char *)(param_2 + 0x98) == '\0') {
    return;
  }
  plVar3 = (long *)(param_2 + 0xa8);
  lVar4 = *plVar3;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar4,0,0);
  if ((uVar1 & 1) != 0) {
    uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_2,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    lVar4 = native_NGUITools__FindInParents_object__4a5c04
                      (uVar2,_Method_NGUITools_FindInParents_UITable____12e57a0);
    *plVar3 = lVar4;
    native_sub_4326e0(plVar3,lVar4);
    lVar4 = *plVar3;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar4,0,0);
    if ((uVar1 & 1) != 0) {
      *(undefined1 *)(param_2 + 0x98) = 0;
      return;
    }
  }
  lVar4 = *plVar3;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  *(undefined1 *)(lVar4 + 0x59) = 1;
  if (pcRam0000000001340948 == (code *)0x0) {
    pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
  }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000001340948)(lVar4,1);
  return;
}



/* TweenScale$$Begin @ 0x6e64cc
 * TweenScale_o* TweenScale__Begin (UnityEngine_GameObject_o* go, float duration, UnityEngine_Vector3_o scale, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenScale$$Begin
   TweenScale_o* TweenScale__Begin (UnityEngine_GameObject_o* go, float duration,
   UnityEngine_Vector3_o scale, const MethodInfo* method); */

long native_TweenScale__Begin_6e64cc
               (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = param_3;
  if ((bRam000000000133f3b2 & 1) == 0) {
    native_sub_43273c(&Method_UITweener_Begin_TweenScale____12e7938);
    bRam000000000133f3b2 = 1;
  }
  uVar3 = 0;
  lVar1 = native_UITweener__Begin_object__d8710c
                    (param_1,param_5,_Method_UITweener_Begin_TweenScale____12e7938);
  if (lVar1 != 0) {
    uVar2 = native_TweenScale__get_value_6e62bc();
    *(undefined4 *)(lVar1 + 0x80) = uVar2;
    *(undefined4 *)(lVar1 + 0x84) = uVar3;
    *(undefined4 *)(lVar1 + 0x88) = uVar4;
    *(undefined4 *)(lVar1 + 0x8c) = param_2;
    *(undefined4 *)(lVar1 + 0x90) = param_3;
    *(undefined4 *)(lVar1 + 0x94) = param_4;
    if ((float)param_1 <= 0.0) {
      native_UITweener__Sample_948a44(0x3f800000,lVar1,1,0);
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar1,0,0);
    }
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenScale$$SetStartToCurrentValue @ 0x6e6590
 * void TweenScale__SetStartToCurrentValue (TweenScale_o* __this, const MethodInfo* method); */

/* TweenScale$$SetStartToCurrentValue
   void TweenScale__SetStartToCurrentValue (TweenScale_o* __this, const MethodInfo* method); */

void native_TweenScale__SetStartToCurrentValue_6e6590
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined4 uVar1;
  
  uVar1 = native_TweenScale__get_value_6e62bc();
  *(undefined4 *)(param_4 + 0x80) = uVar1;
  *(undefined4 *)(param_4 + 0x84) = param_2;
  *(undefined4 *)(param_4 + 0x88) = param_3;
  return;
}



/* TweenScale$$SetEndToCurrentValue @ 0x6e65b8
 * void TweenScale__SetEndToCurrentValue (TweenScale_o* __this, const MethodInfo* method); */

/* TweenScale$$SetEndToCurrentValue
   void TweenScale__SetEndToCurrentValue (TweenScale_o* __this, const MethodInfo* method); */

void native_TweenScale__SetEndToCurrentValue_6e65b8
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined4 uVar1;
  
  uVar1 = native_TweenScale__get_value_6e62bc();
  *(undefined4 *)(param_4 + 0x8c) = uVar1;
  *(undefined4 *)(param_4 + 0x90) = param_2;
  *(undefined4 *)(param_4 + 0x94) = param_3;
  return;
}



/* TweenScale$$SetCurrentValueToStart @ 0x6e65e0
 * void TweenScale__SetCurrentValueToStart (TweenScale_o* __this, const MethodInfo* method); */

/* TweenScale$$SetCurrentValueToStart
   void TweenScale__SetCurrentValueToStart (TweenScale_o* __this, const MethodInfo* method); */

void native_TweenScale__SetCurrentValueToStart_6e65e0(void)

{
  long lVar1;
  
  lVar1 = native_TweenScale__get_cachedTransform_6e621c();
  if (lVar1 != 0) {
    if (pcRam000000000133ff18 == (code *)0x0) {
      pcRam000000000133ff18 = (code *)native_sub_4326f0(&UNK_00e2af52,0);
    }
    (*pcRam000000000133ff18)(lVar1,&stack0xffffffffffffffd0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenScale$$SetCurrentValueToEnd @ 0x6e65ec
 * void TweenScale__SetCurrentValueToEnd (TweenScale_o* __this, const MethodInfo* method); */

/* TweenScale$$SetCurrentValueToEnd
   void TweenScale__SetCurrentValueToEnd (TweenScale_o* __this, const MethodInfo* method); */

void native_TweenScale__SetCurrentValueToEnd_6e65ec(void)

{
  long lVar1;
  
  lVar1 = native_TweenScale__get_cachedTransform_6e621c();
  if (lVar1 != 0) {
    if (pcRam000000000133ff18 == (code *)0x0) {
      pcRam000000000133ff18 = (code *)native_sub_4326f0(&UNK_00e2af52,0);
    }
    (*pcRam000000000133ff18)(lVar1,&stack0xffffffffffffffd0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenScale$$.ctor @ 0x6e65f8
 * void TweenScale___ctor (TweenScale_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenScale$$.ctor
   void TweenScale___ctor (TweenScale_o* __this, const MethodInfo* method); */

void native_TweenScale___ctor_6e65f8
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
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
  
  uVar3 = native_UnityEngine_Vector3__get_one_776a20(0);
  *(undefined4 *)(param_4 + 0x80) = uVar3;
  *(undefined4 *)(param_4 + 0x84) = param_2;
  *(undefined4 *)(param_4 + 0x88) = param_3;
  uVar3 = native_UnityEngine_Vector3__get_one_776a20(0);
  *(undefined4 *)(param_4 + 0x8c) = uVar3;
  *(undefined4 *)(param_4 + 0x90) = param_2;
  *(undefined4 *)(param_4 + 0x94) = param_3;
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
        *(undefined8 *)(param_4 + 0x20) = uVar2;
        native_sub_4326e0((undefined8 *)(param_4 + 0x20),uVar2);
        *(undefined1 *)(param_4 + 0x28) = 1;
        *(undefined8 *)(param_4 + 0x30) = 0x3f80000000000002;
        uVar2 = native_sub_432808(_System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
        native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
                  (uVar2,_Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
        *(undefined8 *)(param_4 + 0x48) = uVar2;
        native_sub_4326e0(param_4 + 0x48,uVar2);
        *(undefined4 *)(param_4 + 0x60) = 0x3f800000;
        *(undefined4 *)(param_4 + 0x70) = 0x447a0000;
        native_UnityEngine_MonoBehaviour___ctor_8e971c(param_4,0);
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


