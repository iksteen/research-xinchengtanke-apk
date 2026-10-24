/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TweenFill$$Cache @ 0x6e3d24
 * void TweenFill__Cache (TweenFill_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenFill$$Cache
   void TweenFill__Cache (TweenFill_o* __this, const MethodInfo* method); */

void native_TweenFill__Cache_6e3d24(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133f398 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UISprite____12e2c18);
    bRam000000000133f398 = 1;
  }
  *(undefined1 *)(param_1 + 0x88) = 1;
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_UISprite____12e2c18);
  *(undefined8 *)(param_1 + 0x90) = uVar4;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)((param_1 + 0x90U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x90U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* TweenFill$$get_value @ 0x6e3d88
 * float TweenFill__get_value (TweenFill_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenFill$$get_value
   float TweenFill__get_value (TweenFill_o* __this, const MethodInfo* method); */

undefined4 native_TweenFill__get_value_6e3d88(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  if ((bRam000000000133f399 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f399 = 1;
  }
  if (*(char *)(param_1 + 0x88) == '\0') {
    native_TweenFill__Cache_6e3d24(param_1);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,0,0);
  uVar3 = 0;
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810(0);
    }
    uVar3 = *(undefined4 *)(*(long *)(param_1 + 0x90) + 0x198);
  }
  return uVar3;
}



/* TweenFill$$set_value @ 0x6e3e20
 * void TweenFill__set_value (TweenFill_o* __this, float value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenFill$$set_value
   void TweenFill__set_value (TweenFill_o* __this, float value, const MethodInfo* method); */

void native_TweenFill__set_value_6e3e20(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  
  if ((bRam000000000133f39a & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f39a = 1;
  }
  if (*(char *)(param_2 + 0x88) == '\0') {
    native_TweenFill__Cache_6e3d24(param_2);
  }
  uVar3 = *(undefined8 *)(param_2 + 0x90);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(param_2 + 0x90);
    if (lVar2 != 0) {
      fVar4 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(param_1,0,0);
      if (*(float *)(lVar2 + 0x198) != fVar4) {
        *(float *)(lVar2 + 0x198) = fVar4;
        *(undefined1 *)(lVar2 + 0x58) = 1;
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return;
}



/* TweenFill$$OnUpdate @ 0x6e3ed4
 * void TweenFill__OnUpdate (TweenFill_o* __this, float factor, bool isFinished, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenFill$$OnUpdate
   void TweenFill__OnUpdate (TweenFill_o* __this, float factor, bool isFinished, const MethodInfo*
   method); */

void native_TweenFill__OnUpdate_6e3ed4(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 uVar5;
  
  uVar5 = native_UnityEngine_Mathf__Lerp_8e5224
                    (*(undefined4 *)(param_2 + 0x80),*(undefined4 *)(param_2 + 0x84),param_1,0);
  if ((bRam000000000133f39a & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f39a = 1;
  }
  if (*(char *)(param_2 + 0x88) == '\0') {
    native_TweenFill__Cache_6e3d24(param_2);
  }
  uVar3 = *(undefined8 *)(param_2 + 0x90);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(param_2 + 0x90);
    if (lVar2 != 0) {
      fVar4 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(uVar5,0,0);
      if (*(float *)(lVar2 + 0x198) != fVar4) {
        *(float *)(lVar2 + 0x198) = fVar4;
        *(undefined1 *)(lVar2 + 0x58) = 1;
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return;
}



/* TweenFill$$Begin @ 0x6e3f0c
 * TweenFill_o* TweenFill__Begin (UnityEngine_GameObject_o* go, float duration, float fill, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenFill$$Begin
   TweenFill_o* TweenFill__Begin (UnityEngine_GameObject_o* go, float duration, float fill, const
   MethodInfo* method); */

long native_TweenFill__Begin_6e3f0c(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  
  if ((bRam000000000133f39b & 1) == 0) {
    native_sub_43273c(&Method_UITweener_Begin_TweenFill____12e7910);
    bRam000000000133f39b = 1;
  }
  lVar1 = native_UITweener__Begin_object__d8710c
                    (param_1,0,param_3,_Method_UITweener_Begin_TweenFill____12e7910);
  if (lVar1 != 0) {
    uVar2 = native_TweenFill__get_value_6e3d88();
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



/* TweenFill$$SetStartToCurrentValue @ 0x6e3fb8
 * void TweenFill__SetStartToCurrentValue (TweenFill_o* __this, const MethodInfo* method); */

/* TweenFill$$SetStartToCurrentValue
   void TweenFill__SetStartToCurrentValue (TweenFill_o* __this, const MethodInfo* method); */

void native_TweenFill__SetStartToCurrentValue_6e3fb8(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = native_TweenFill__get_value_6e3d88();
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  return;
}



/* TweenFill$$SetEndToCurrentValue @ 0x6e3fdc
 * void TweenFill__SetEndToCurrentValue (TweenFill_o* __this, const MethodInfo* method); */

/* TweenFill$$SetEndToCurrentValue
   void TweenFill__SetEndToCurrentValue (TweenFill_o* __this, const MethodInfo* method); */

void native_TweenFill__SetEndToCurrentValue_6e3fdc(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = native_TweenFill__get_value_6e3d88();
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  return;
}



/* TweenFill$$.ctor @ 0x6e4000
 * void TweenFill___ctor (TweenFill_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenFill$$.ctor
   void TweenFill___ctor (TweenFill_o* __this, const MethodInfo* method); */

void native_TweenFill___ctor_6e4000(long param_1)

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


