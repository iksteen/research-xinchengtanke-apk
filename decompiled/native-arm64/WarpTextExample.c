/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.Examples.WarpTextExample$$Awake @ 0x94f26c
 * void TMPro_Examples_WarpTextExample__Awake (TMPro_Examples_WarpTextExample_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.WarpTextExample$$Awake
   void TMPro_Examples_WarpTextExample__Awake (TMPro_Examples_WarpTextExample_o* __this, const
   MethodInfo* method); */

void native_TMPro_Examples_WarpTextExample__Awake_94f26c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if ((bRam000000000134148b & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_TMP_Text____12e4a50);
    bRam000000000134148b = 1;
  }
  lVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  if (lVar4 != 0) {
    uVar5 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (lVar4,_Method_UnityEngine_GameObject_GetComponent_TMP_Text____12e4a50);
    puVar6 = (undefined8 *)(param_1 + 0x18);
    *puVar6 = uVar5;
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.WarpTextExample$$Start @ 0x94f2d8
 * void TMPro_Examples_WarpTextExample__Start (TMPro_Examples_WarpTextExample_o* __this, const MethodInfo* method); */

/* TMPro.Examples.WarpTextExample$$Start
   void TMPro_Examples_WarpTextExample__Start (TMPro_Examples_WarpTextExample_o* __this, const
   MethodInfo* method); */

void native_TMPro_Examples_WarpTextExample__Start_94f2d8(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = native_TMPro_Examples_WarpTextExample__WarpText_94f304();
  if (lVar4 == 0) {
    native_sub_432740(&System_NullReferenceException_TypeInfo_12d5498,0,0);
    uVar2 = native_sub_432808();
    uVar3 = native_sub_432740(&StringLiteral_routine_is_null_12f5ec0);
    native_System_NullReferenceException___ctor_ad2894(uVar2,uVar3,0);
  }
  else {
    if (pcRam0000000001340fe8 == (code *)0x0) {
      pcRam0000000001340fe8 = (code *)native_sub_4326f0(&UNK_00e2f589);
    }
    uVar1 = (*pcRam0000000001340fe8)(param_1);
    if ((uVar1 & 1) != 0) {
      if (pcRam0000000001340ff8 == (code *)0x0) {
        pcRam0000000001340ff8 = (code *)native_sub_4326f0(&UNK_00e2f61c);
      }
                    /* WARNING: Could not recover jumptable at 0x008e91f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000001340ff8)(param_1,lVar4);
      return;
    }
    native_sub_432740(&System_ArgumentException_TypeInfo_12d3800);
    uVar2 = native_sub_432808();
    uVar3 = native_sub_432740(&
                              StringLiteral_Coroutines_can_only_be_stopped_on_a_MonoBehaviour_12ed328
                             );
    native_System_ArgumentException___ctor_953858(uVar2,uVar3,0);
  }
  uVar3 = native_sub_432740(&Method_UnityEngine_MonoBehaviour_StartCoroutine___12e55d8);
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar2,uVar3);
}



/* TMPro.Examples.WarpTextExample$$CopyAnimationCurve @ 0x94f37c
 * UnityEngine_AnimationCurve_o* TMPro_Examples_WarpTextExample__CopyAnimationCurve (TMPro_Examples_WarpTextExample_o* __this, UnityEngine_AnimationCurve_o* curve, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.WarpTextExample$$CopyAnimationCurve
   UnityEngine_AnimationCurve_o* TMPro_Examples_WarpTextExample__CopyAnimationCurve
   (TMPro_Examples_WarpTextExample_o* __this, UnityEngine_AnimationCurve_o* curve, const MethodInfo*
   method); */

long native_TMPro_Examples_WarpTextExample__CopyAnimationCurve_94f37c
               (undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam000000000134148c & 1) == 0) {
    native_sub_43273c(&UnityEngine_AnimationCurve_TypeInfo_12d3768);
    bRam000000000134148c = 1;
  }
  lVar1 = native_sub_432808(_UnityEngine_AnimationCurve_TypeInfo_12d3768);
  native_UnityEngine_AnimationCurve___ctor_8d5e50(lVar1,0);
  if ((param_2 != 0) &&
     (uVar2 = native_UnityEngine_AnimationCurve__get_keys_8d5c34(param_2,0), lVar1 != 0)) {
    native_UnityEngine_AnimationCurve__set_keys_8d5cb4(lVar1,uVar2,0);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.WarpTextExample$$WarpText @ 0x94f304
 * System_Collections_IEnumerator_o* TMPro_Examples_WarpTextExample__WarpText (TMPro_Examples_WarpTextExample_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.WarpTextExample$$WarpText
   System_Collections_IEnumerator_o* TMPro_Examples_WarpTextExample__WarpText
   (TMPro_Examples_WarpTextExample_o* __this, const MethodInfo* method); */

long native_TMPro_Examples_WarpTextExample__WarpText_94f304(undefined8 param_1)

{
  long lVar1;
  
  if ((bRam000000000134148d & 1) == 0) {
    native_sub_43273c(&TMPro_Examples_WarpTextExample__WarpText_d__8_TypeInfo_12d7ba0);
    bRam000000000134148d = 1;
  }
  lVar1 = native_sub_432808(_TMPro_Examples_WarpTextExample__WarpText_d__8_TypeInfo_12d7ba0);
  native_TMPro_Examples_WarpTextExample__WarpText_d__8___ctor_55f9e8(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x20),param_1);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.WarpTextExample$$.ctor @ 0x94f400
 * void TMPro_Examples_WarpTextExample___ctor (TMPro_Examples_WarpTextExample_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.WarpTextExample$$.ctor
   void TMPro_Examples_WarpTextExample___ctor (TMPro_Examples_WarpTextExample_o* __this, const
   MethodInfo* method); */

void native_TMPro_Examples_WarpTextExample___ctor_94f400(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined8 uStack_11c;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
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
  
  if ((bRam000000000134148e & 1) == 0) {
    native_sub_43273c(&UnityEngine_AnimationCurve_TypeInfo_12d3768);
    native_sub_43273c(&UnityEngine_Keyframe___TypeInfo_12d3298);
    bRam000000000134148e = 1;
  }
  lVar1 = native_sub_432750(_UnityEngine_Keyframe___TypeInfo_12d3298,5);
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  native_UnityEngine_Keyframe___ctor_8dfc48(0,0,&uStack_50,0);
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
      native_UnityEngine_Keyframe___ctor_8dfc48(0x3e800000,0x40000000,&uStack_90,0);
      uStack_9c = CONCAT44(uStack_78,uStack_7c);
      uStack_a0 = uStack_80;
      uStack_a8 = uStack_88;
      uStack_a4 = uStack_84;
      uStack_b0 = uStack_90;
      if (1 < *(uint *)(lVar1 + 0x18)) {
        *(undefined8 *)(lVar1 + 0x50) = uStack_9c;
        *(ulong *)(lVar1 + 0x48) = CONCAT44(uStack_80,uStack_84);
        *(ulong *)(lVar1 + 0x44) = CONCAT44(uStack_84,uStack_88);
        *(undefined8 *)(lVar1 + 0x3c) = uStack_90;
        uStack_d0 = 0;
        uStack_c8 = 0;
        uStack_c4 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_bc = 0;
        native_UnityEngine_Keyframe___ctor_8dfc48(0x3f000000,0,&uStack_d0,0);
        uStack_dc = CONCAT44(uStack_b8,uStack_bc);
        uStack_e0 = uStack_c0;
        uStack_e8 = uStack_c8;
        uStack_e4 = uStack_c4;
        uStack_f0 = uStack_d0;
        if (2 < *(uint *)(lVar1 + 0x18)) {
          *(undefined8 *)(lVar1 + 0x6c) = uStack_dc;
          *(ulong *)(lVar1 + 100) = CONCAT44(uStack_c0,uStack_c4);
          *(ulong *)(lVar1 + 0x60) = CONCAT44(uStack_c4,uStack_c8);
          *(undefined8 *)(lVar1 + 0x58) = uStack_d0;
          uStack_110 = 0;
          uStack_108 = 0;
          uStack_104 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          uStack_fc = 0;
          native_UnityEngine_Keyframe___ctor_8dfc48(0x3f400000,0x40000000,&uStack_110,0);
          uStack_11c = CONCAT44(uStack_f8,uStack_fc);
          uStack_120 = uStack_100;
          uStack_128 = uStack_108;
          uStack_124 = uStack_104;
          uStack_130 = uStack_110;
          if (3 < *(uint *)(lVar1 + 0x18)) {
            *(undefined8 *)(lVar1 + 0x88) = uStack_11c;
            *(ulong *)(lVar1 + 0x80) = CONCAT44(uStack_100,uStack_104);
            *(ulong *)(lVar1 + 0x7c) = CONCAT44(uStack_104,uStack_108);
            *(undefined8 *)(lVar1 + 0x74) = uStack_110;
            uStack_150 = 0;
            uStack_148 = 0;
            uStack_144 = 0;
            uStack_138 = 0;
            uStack_140 = 0;
            uStack_13c = 0;
            native_UnityEngine_Keyframe___ctor_8dfc48(0x3f800000,0,&uStack_150,0);
            if (4 < *(uint *)(lVar1 + 0x18)) {
              *(ulong *)(lVar1 + 0xa4) = CONCAT44(uStack_138,uStack_13c);
              *(ulong *)(lVar1 + 0x9c) = CONCAT44(uStack_140,uStack_144);
              *(ulong *)(lVar1 + 0x98) = CONCAT44(uStack_144,uStack_148);
              *(undefined8 *)(lVar1 + 0x90) = uStack_150;
              uVar2 = native_sub_432808(_UnityEngine_AnimationCurve_TypeInfo_12d3768);
              native_UnityEngine_AnimationCurve___ctor_8d5df4(uVar2,lVar1,0);
              *(undefined8 *)(param_1 + 0x20) = uVar2;
              native_sub_4326e0((undefined8 *)(param_1 + 0x20),uVar2);
              uVar2 = NEON_fmov(0x3f800000,4);
              *(undefined8 *)(param_1 + 0x28) = uVar2;
              *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
              native_UnityEngine_MonoBehaviour___ctor_8e971c(param_1,0);
              return;
            }
          }
        }
      }
    }
    uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar2,0);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}


