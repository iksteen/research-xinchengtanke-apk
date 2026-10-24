/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TweenTransform$$OnUpdate @ 0x6e663c
 * void TweenTransform__OnUpdate (TweenTransform_o* __this, float factor, bool isFinished, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenTransform$$OnUpdate
   void TweenTransform__OnUpdate (TweenTransform_o* __this, float factor, bool isFinished, const
   MethodInfo* method); */

void native_TweenTransform__OnUpdate_6e663c
               (float param_1,float param_2,float param_3,undefined4 param_4,long param_5,
               ulong param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  ulong uVar19;
  
  if ((bRam000000000133f3b3 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f3b3 = 1;
  }
  uVar2 = *(undefined8 *)(param_5 + 0x88);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  plVar3 = (long *)(param_5 + 0x98);
  lVar4 = *plVar3;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar4,0,0);
  if ((uVar1 & 1) != 0) {
    uVar2 = native_UnityEngine_Component__get_transform_8da62c(param_5,0);
    *(undefined8 *)(param_5 + 0x98) = uVar2;
    native_sub_4326e0(plVar3,uVar2);
    if (*(long *)(param_5 + 0x98) == 0) goto LAB_006e69ec;
    uVar6 = native_UnityEngine_Transform__get_position_77169c(*(long *)(param_5 + 0x98),0);
    *(undefined4 *)(param_5 + 0xa0) = uVar6;
    *(float *)(param_5 + 0xa4) = param_2;
    *(float *)(param_5 + 0xa8) = param_3;
    if (*(long *)(param_5 + 0x98) == 0) goto LAB_006e69ec;
    uVar6 = native_UnityEngine_Transform__get_rotation_771a30(*(long *)(param_5 + 0x98),0);
    *(undefined4 *)(param_5 + 0xac) = uVar6;
    *(float *)(param_5 + 0xb0) = param_2;
    *(float *)(param_5 + 0xb4) = param_3;
    *(undefined4 *)(param_5 + 0xb8) = param_4;
    if (*(long *)(param_5 + 0x98) == 0) goto LAB_006e69ec;
    uVar6 = native_UnityEngine_Transform__get_localScale_771d80(*(long *)(param_5 + 0x98),0);
    *(undefined4 *)(param_5 + 0xbc) = uVar6;
    *(float *)(param_5 + 0xc0) = param_2;
    *(float *)(param_5 + 0xc4) = param_3;
  }
  uVar2 = *(undefined8 *)(param_5 + 0x80);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,0,0);
  lVar4 = *plVar3;
  if ((uVar1 & 1) == 0) {
    if (*(long *)(param_5 + 0x88) == 0) goto LAB_006e69ec;
    fVar11 = *(float *)(param_5 + 0xa0);
    fVar12 = *(float *)(param_5 + 0xa4);
    fVar8 = *(float *)(param_5 + 0xa8);
    fVar7 = (float)native_UnityEngine_Transform__get_position_77169c(*(long *)(param_5 + 0x88),0);
    if (lVar4 == 0) goto LAB_006e69ec;
    fVar18 = 1.0 - param_1;
    fVar12 = fVar18 * fVar12 + param_2 * param_1;
    fVar8 = fVar18 * fVar8 + param_3 * param_1;
    native_UnityEngine_Transform__set_position_77174c
              (fVar18 * fVar11 + fVar7 * param_1,fVar12,fVar8,lVar4,0);
    if (*(long *)(param_5 + 0x88) == 0) goto LAB_006e69ec;
    lVar4 = *(long *)(param_5 + 0x98);
    fVar11 = *(float *)(param_5 + 0xbc);
    fVar9 = *(float *)(param_5 + 0xc0);
    fVar15 = *(float *)(param_5 + 0xc4);
    fVar7 = (float)native_UnityEngine_Transform__get_localScale_771d80(*(long *)(param_5 + 0x88),0);
    if (lVar4 == 0) goto LAB_006e69ec;
    fVar11 = fVar18 * fVar11;
    uVar14 = (ulong)(uint)fVar11;
    uVar1 = (ulong)(uint)(fVar18 * fVar9 + fVar12 * param_1);
    uVar13 = (ulong)(uint)(fVar18 * fVar15 + fVar8 * param_1);
    native_UnityEngine_Transform__set_localScale_771e30
              (fVar11 + fVar7 * param_1,uVar1,uVar13,lVar4,0);
    lVar4 = *(long *)(param_5 + 0x88);
    if (lVar4 == 0) goto LAB_006e69ec;
    lVar5 = *(long *)(param_5 + 0x98);
    uVar10 = (ulong)*(uint *)(param_5 + 0xac);
    uVar16 = (ulong)*(uint *)(param_5 + 0xb0);
    uVar17 = (ulong)*(uint *)(param_5 + 0xb4);
    uVar19 = (ulong)*(uint *)(param_5 + 0xb8);
  }
  else {
    if (*(long *)(param_5 + 0x80) == 0) goto LAB_006e69ec;
    fVar7 = (float)native_UnityEngine_Transform__get_position_77169c(*(long *)(param_5 + 0x80),0);
    if ((*(long *)(param_5 + 0x88) == 0) ||
       (fVar11 = param_2, fVar12 = param_3,
       fVar8 = (float)native_UnityEngine_Transform__get_position_77169c(*(long *)(param_5 + 0x88),0)
       , lVar4 == 0)) goto LAB_006e69ec;
    fVar18 = 1.0 - param_1;
    fVar11 = fVar18 * param_2 + fVar11 * param_1;
    fVar12 = fVar18 * param_3 + fVar12 * param_1;
    native_UnityEngine_Transform__set_position_77174c
              (fVar18 * fVar7 + fVar8 * param_1,fVar11,fVar12,lVar4,0);
    if (*(long *)(param_5 + 0x80) == 0) goto LAB_006e69ec;
    lVar4 = *(long *)(param_5 + 0x98);
    fVar7 = (float)native_UnityEngine_Transform__get_localScale_771d80(*(long *)(param_5 + 0x80),0);
    if ((*(long *)(param_5 + 0x88) == 0) ||
       (fVar8 = fVar11, fVar15 = fVar12,
       fVar9 = (float)native_UnityEngine_Transform__get_localScale_771d80
                                (*(long *)(param_5 + 0x88),0), lVar4 == 0)) goto LAB_006e69ec;
    uVar14 = (ulong)(uint)(fVar18 * fVar7);
    uVar1 = (ulong)(uint)(fVar18 * fVar11 + fVar8 * param_1);
    uVar13 = (ulong)(uint)(fVar18 * fVar12 + fVar15 * param_1);
    native_UnityEngine_Transform__set_localScale_771e30
              (fVar18 * fVar7 + fVar9 * param_1,uVar1,uVar13,lVar4,0);
    if (*(long *)(param_5 + 0x80) == 0) goto LAB_006e69ec;
    lVar5 = *(long *)(param_5 + 0x98);
    uVar10 = native_UnityEngine_Transform__get_rotation_771a30(*(long *)(param_5 + 0x80),0);
    lVar4 = *(long *)(param_5 + 0x88);
    uVar16 = uVar1;
    uVar17 = uVar13;
    uVar19 = uVar14;
    if (lVar4 == 0) goto LAB_006e69ec;
  }
  uVar2 = native_UnityEngine_Transform__get_rotation_771a30(lVar4,0);
  native_UnityEngine_Quaternion__Slerp_7622b4
            (uVar10,uVar16,uVar17,uVar19,uVar2,uVar1,uVar13,uVar14,0);
  if (lVar5 != 0) {
    native_UnityEngine_Transform__set_rotation_771b8c(lVar5,0);
    if (*(char *)(param_5 + 0x90) == '\0') {
      return;
    }
    if ((param_6 & 1) == 0) {
      return;
    }
    plVar3 = (long *)*plVar3;
    if (plVar3 != (long *)0x0) {
      uVar2 = *(undefined8 *)(param_5 + 0x88);
      if ((bRam000000000133fe5a & 1) == 0) {
        native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338,uVar2,0);
        native_sub_43273c(&UnityEngine_RectTransform_TypeInfo_12d58f0);
        native_sub_43273c(&
                          StringLiteral_Parent_of_RectTransform_is_being_set_with_parent_property__Consider_using_the_SetParent_method_instead__with_the_worldPositionStays_argument_set_to_false__This_will_r_12f0548
                         );
        bRam000000000133fe5a = 1;
      }
      if ((plVar3 != (long *)0x0) && (*plVar3 == _UnityEngine_RectTransform_TypeInfo_12d58f0)) {
        if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        native_UnityEngine_Debug__LogWarning_8dcbc8
                  (_StringLiteral_Parent_of_RectTransform_is_being_set_with_parent_property__Consider_using_the_SetParent_method_instead__with_the_worldPositionStays_argument_set_to_false__This_will_r_12f0548
                   ,plVar3,0);
      }
      if (pcRam000000000133fe68 == (code *)0x0) {
        pcRam000000000133fe68 = (code *)native_sub_4326f0(&UNK_00e2aa86);
      }
                    /* WARNING: Could not recover jumptable at 0x00771ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000133fe68)(plVar3,uVar2,1);
      return;
    }
  }
LAB_006e69ec:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenTransform$$Begin @ 0x6e69f0
 * TweenTransform_o* TweenTransform__Begin (UnityEngine_GameObject_o* go, float duration, UnityEngine_Transform_o* to, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenTransform$$Begin
   TweenTransform_o* TweenTransform__Begin (UnityEngine_GameObject_o* go, float duration,
   UnityEngine_Transform_o* to, const MethodInfo* method); */

long native_TweenTransform__Begin_6e69f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if ((bRam000000000133f3b4 & 1) == 0) {
    native_sub_43273c(&Method_UITweener_Begin_TweenTransform____12e7940);
    bRam000000000133f3b4 = 1;
  }
  lVar1 = native_UITweener__Begin_object__d8710c
                    (param_1,0,param_2,_Method_UITweener_Begin_TweenTransform____12e7940);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x80) = 0;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x80),0);
    *(undefined8 *)(lVar1 + 0x88) = param_3;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x88),param_3);
    if ((float)param_1 <= 0.0) {
      native_UITweener__Sample_948a44(0x3f800000,lVar1,1,0);
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar1,0,0);
    }
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenTransform$$Begin @ 0x6e69fc
 * TweenTransform_o* TweenTransform__Begin (UnityEngine_GameObject_o* go, float duration, UnityEngine_Transform_o* from, UnityEngine_Transform_o* to, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenTransform$$Begin
   TweenTransform_o* TweenTransform__Begin (UnityEngine_GameObject_o* go, float duration,
   UnityEngine_Transform_o* from, UnityEngine_Transform_o* to, const MethodInfo* method); */

long native_TweenTransform__Begin_6e69fc
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  if ((bRam000000000133f3b4 & 1) == 0) {
    native_sub_43273c(&Method_UITweener_Begin_TweenTransform____12e7940);
    bRam000000000133f3b4 = 1;
  }
  lVar1 = native_UITweener__Begin_object__d8710c
                    (param_1,0,param_2,_Method_UITweener_Begin_TweenTransform____12e7940);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x80) = param_3;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x80),param_3);
    *(undefined8 *)(lVar1 + 0x88) = param_4;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x88),param_4);
    if ((float)param_1 <= 0.0) {
      native_UITweener__Sample_948a44(0x3f800000,lVar1,1,0);
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar1,0,0);
    }
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenTransform$$.ctor @ 0x6e6ac8
 * void TweenTransform___ctor (TweenTransform_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenTransform$$.ctor
   void TweenTransform___ctor (TweenTransform_o* __this, const MethodInfo* method); */

void native_TweenTransform___ctor_6e6ac8(long param_1)

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


