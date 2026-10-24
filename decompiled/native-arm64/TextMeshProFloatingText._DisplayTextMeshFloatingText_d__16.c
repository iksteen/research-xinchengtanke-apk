/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.Examples.TextMeshProFloatingText.<DisplayTextMeshFloatingText>d__16$$.ctor @ 0x54e99c
 * void TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_d__16___ctor (TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_d__16_o* __this, int32_t __1__state, const MethodInfo* method); */

/* TMPro.Examples.TextMeshProFloatingText.<DisplayTextMeshFloatingText>d__16$$.ctor
   void TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_d__16___ctor
   (TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_d__16_o* __this, int32_t
   __1__state, const MethodInfo* method); */

void native_TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_d__16___ctor_54e99c
               (long param_1,undefined4 param_2)

{
  native_System_Object___ctor_ad2798(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* TMPro.Examples.TextMeshProFloatingText.<DisplayTextMeshFloatingText>d__16$$System.IDisposable.Dispose @ 0x54e9c8
 * void TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_d__16__System_IDisposable_Dispose (TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_d__16_o* __this, const MethodInfo* method); */

/* TMPro.Examples.TextMeshProFloatingText.<DisplayTextMeshFloatingText>d__16$$System.IDisposable.Dispose
   void 
   TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_d__16__System_IDisposable_Dispose
   (TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_d__16_o* __this, const
   MethodInfo* method); */

void native_TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_d__16__System_IDisposable_Dispose_54e9c8
               (void)

{
  return;
}



/* TMPro.Examples.TextMeshProFloatingText.<DisplayTextMeshFloatingText>d__16$$MoveNext @ 0x54e9cc
 * bool TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_d__16__MoveNext (TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_d__16_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TextMeshProFloatingText.<DisplayTextMeshFloatingText>d__16$$MoveNext
   bool TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_d__16__MoveNext
   (TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_d__16_o* __this, const
   MethodInfo* method); */

undefined8
native_TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_d__16__MoveNext_54e9cc
          (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  if ((bRam000000000133e9e5 & 1) == 0) {
    native_sub_43273c(&TMPro_Examples_TextMeshProFloatingText_TypeInfo_12d61c0);
    bRam000000000133e9e5 = 1;
  }
  iStack_24 = 0;
  iVar1 = *(int *)(param_4 + 0x10);
  lVar5 = *(long *)(param_4 + 0x20);
  if (iVar1 == 2) {
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0x40) != 0)) {
      native_UnityEngine_Transform__set_position_77174c
                (*(undefined4 *)(param_4 + 0x34),*(undefined4 *)(param_4 + 0x38),
                 *(undefined4 *)(param_4 + 0x3c),*(long *)(lVar5 + 0x40),0);
      uVar4 = native_TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_6e1de8
                        (lVar5,0);
      native_UnityEngine_MonoBehaviour__StartCoroutine_8e9174(lVar5,uVar4,0);
      return 0;
    }
    goto LAB_0054ee10;
  }
  if (iVar1 == 1) {
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    uVar15 = 0x41a00000;
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    *(undefined4 *)(param_4 + 0x28) = 0x40000000;
    uVar7 = native_UnityEngine_Random__Range_76305c(0x40a00000,0);
    *(undefined4 *)(param_4 + 0x2c) = uVar7;
    *(undefined4 *)(param_4 + 0x30) = uVar7;
    if ((lVar5 == 0) || (*(long *)(lVar5 + 0x40) == 0)) goto LAB_0054ee10;
    uVar7 = native_UnityEngine_Transform__get_position_77169c(*(long *)(lVar5 + 0x40),0);
    *(undefined4 *)(param_4 + 0x34) = uVar7;
    *(undefined4 *)(param_4 + 0x38) = uVar15;
    *(undefined4 *)(param_4 + 0x3c) = param_3;
    if (*(long *)(lVar5 + 0x30) == 0) goto LAB_0054ee10;
    native_UnityEngine_TextMesh__get_color_db59a0(*(long *)(lVar5 + 0x30),0);
    uVar7 = native_UnityEngine_Color32__op_Implicit_8d9fb4(0);
    *(undefined4 *)(param_4 + 0x40) = uVar7;
    *(undefined4 *)(param_4 + 0x44) = 0x437f0000;
    *(float *)(param_4 + 0x48) = (3.0 / *(float *)(param_4 + 0x2c)) * *(float *)(param_4 + 0x28);
  }
  iStack_24 = 0;
  fVar13 = *(float *)(param_4 + 0x30);
  if (fVar13 <= 0.0) {
    if (((*(byte *)(_TMPro_Examples_TextMeshProFloatingText_TypeInfo_12d61c0 + 0x133) >> 2 & 1) != 0
        ) && (*(int *)(_TMPro_Examples_TextMeshProFloatingText_TypeInfo_12d61c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar5 = *(long *)(*(long *)(_TMPro_Examples_TextMeshProFloatingText_TypeInfo_12d61c0 + 0xb8) + 8
                     );
    uVar2 = native_UnityEngine_Random__Range_7630a8(0,0x14,0);
    if (lVar5 != 0) {
      if (uVar2 < *(uint *)(lVar5 + 0x18)) {
        *(undefined8 *)(param_4 + 0x18) = *(undefined8 *)(lVar5 + (long)(int)uVar2 * 8 + 0x20);
        native_sub_4326e0((undefined8 *)(param_4 + 0x18));
        *(undefined4 *)(param_4 + 0x10) = 2;
        return 1;
      }
      uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar4,0);
    }
  }
  else {
    fVar8 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
    fVar13 = fVar13 - (fVar8 / *(float *)(param_4 + 0x28)) * *(float *)(param_4 + 0x2c);
    *(float *)(param_4 + 0x30) = fVar13;
    if (fVar13 <= 3.0) {
      fVar8 = *(float *)(param_4 + 0x44);
      fVar13 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
      uVar7 = native_UnityEngine_Mathf__Clamp_8e51ec
                        (fVar8 - (fVar13 / *(float *)(param_4 + 0x48)) * 255.0,0,0);
      fVar13 = *(float *)(param_4 + 0x30);
      *(undefined4 *)(param_4 + 0x44) = uVar7;
    }
    dVar12 = (double)fVar13;
    dVar11 = -dVar12;
    if (fVar13 != INFINITY) {
      dVar11 = dVar12;
    }
    iStack_24 = (int)dVar11;
    if (lVar5 == 0) goto LAB_0054ee10;
    lVar6 = *(long *)(lVar5 + 0x30);
    uVar4 = native_System_Int32__ToString_83c60c(&iStack_24,0);
    fVar8 = SUB84(dVar12,0);
    if (lVar6 == 0) goto LAB_0054ee10;
    native_UnityEngine_TextMesh__set_text_db5820(lVar6,uVar4,0);
    lVar6 = *(long *)(lVar5 + 0x30);
    uStack_28 = 0;
    native_UnityEngine_Color32___ctor_8d9fa0
              (&uStack_28,*(undefined1 *)(param_4 + 0x40),*(undefined1 *)(param_4 + 0x41),
               *(undefined1 *)(param_4 + 0x42),(int)*(float *)(param_4 + 0x44),0);
    native_UnityEngine_Color32__op_Implicit_8da288(uStack_28,0);
    if (lVar6 == 0) goto LAB_0054ee10;
    native_UnityEngine_TextMesh__set_color_db5a4c(lVar6,0);
    lVar6 = *(long *)(lVar5 + 0x40);
    if (lVar6 == 0) goto LAB_0054ee10;
    fVar9 = (float)native_UnityEngine_Transform__get_position_77169c(lVar6,0);
    fVar16 = *(float *)(param_4 + 0x2c);
    fVar10 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
    native_UnityEngine_Transform__set_position_77174c
              (fVar9 + 0.0,fVar13 + fVar16 * fVar10,fVar8 + 0.0,lVar6,0);
    if (*(long *)(lVar5 + 0x48) == 0) goto LAB_0054ee10;
    uVar14 = *(undefined4 *)(lVar5 + 0x50);
    uVar15 = *(undefined4 *)(lVar5 + 0x54);
    fVar13 = *(float *)(lVar5 + 0x58);
    uVar7 = native_UnityEngine_Transform__get_position_77169c(*(long *)(lVar5 + 0x48),0);
    uVar3 = native_TMPro_TMPro_ExtensionMethods__Compare_6ae670(uVar14,1000,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(lVar5 + 0x48) == 0) goto LAB_0054ee10;
      uVar14 = *(undefined4 *)(lVar5 + 0x5c);
      uVar15 = *(undefined4 *)(lVar5 + 0x60);
      fVar13 = *(float *)(lVar5 + 100);
      uVar7 = *(undefined4 *)(lVar5 + 0x68);
      native_UnityEngine_Transform__get_rotation_771a30(*(long *)(lVar5 + 0x48),0);
      uVar3 = native_TMPro_TMPro_ExtensionMethods__Compare_6ae730(uVar14,1000,0);
      if ((uVar3 & 1) != 0) goto LAB_0054edb8;
    }
    if (*(long *)(lVar5 + 0x48) != 0) {
      uVar14 = native_UnityEngine_Transform__get_position_77169c(*(long *)(lVar5 + 0x48),0);
      *(undefined4 *)(lVar5 + 0x50) = uVar14;
      *(undefined4 *)(lVar5 + 0x54) = uVar15;
      *(float *)(lVar5 + 0x58) = fVar13;
      if (*(long *)(lVar5 + 0x48) != 0) {
        uVar14 = native_UnityEngine_Transform__get_rotation_771a30(*(long *)(lVar5 + 0x48),0);
        *(undefined4 *)(lVar5 + 0x5c) = uVar14;
        *(undefined4 *)(lVar5 + 0x60) = uVar15;
        *(float *)(lVar5 + 100) = fVar13;
        *(undefined4 *)(lVar5 + 0x68) = uVar7;
        if (*(long *)(lVar5 + 0x40) != 0) {
          native_UnityEngine_Transform__set_rotation_771b8c(*(long *)(lVar5 + 0x40),0);
          if (*(long *)(lVar5 + 0x38) != 0) {
            fVar8 = (float)native_UnityEngine_Transform__get_position_77169c
                                     (*(long *)(lVar5 + 0x38),0);
            if (*(long *)(lVar5 + 0x38) != 0) {
              native_UnityEngine_Transform__set_forward_771b30
                        (fVar8 - *(float *)(lVar5 + 0x50),0,fVar13 - *(float *)(lVar5 + 0x58),
                         *(long *)(lVar5 + 0x38),0);
LAB_0054edb8:
              if (((*(byte *)(_TMPro_Examples_TextMeshProFloatingText_TypeInfo_12d61c0 + 0x133) >> 2
                   & 1) != 0) &&
                 (*(int *)(_TMPro_Examples_TextMeshProFloatingText_TypeInfo_12d61c0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              *(undefined8 *)(param_4 + 0x18) =
                   **(undefined8 **)
                     (_TMPro_Examples_TextMeshProFloatingText_TypeInfo_12d61c0 + 0xb8);
              native_sub_4326e0((undefined8 *)(param_4 + 0x18));
              *(undefined4 *)(param_4 + 0x10) = 1;
              return 1;
            }
          }
        }
      }
    }
  }
LAB_0054ee10:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.TextMeshProFloatingText.<DisplayTextMeshFloatingText>d__16$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ 0x54ee20
 * Il2CppObject* TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_d__16__System_Collections_Generic_IEnumerator_System_Object__get_Current (TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_d__16_o* __this, const MethodInfo* method); */

/* TMPro.Examples.TextMeshProFloatingText.<DisplayTextMeshFloatingText>d__16$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
   Il2CppObject*
   TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_d__16__System_Collections_Generic_IEnumerator_System_Object__get_Current
   (TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_d__16_o* __this, const
   MethodInfo* method); */

undefined8
native_TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_d__16__System_Collections_Generic_IEnumerator_System_Object__get_Current_54ee20
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* TMPro.Examples.TextMeshProFloatingText.<DisplayTextMeshFloatingText>d__16$$System.Collections.IEnumerator.Reset @ 0x54ee28
 * void TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_d__16__System_Collections_IEnumerator_Reset (TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_d__16_o* __this, const MethodInfo* method); */

/* TMPro.Examples.TextMeshProFloatingText.<DisplayTextMeshFloatingText>d__16$$System.Collections.IEnumerator.Reset
   void 
   TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_d__16__System_Collections_IEnumerator_Reset
   (TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_d__16_o* __this, const
   MethodInfo* method); */

void native_TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_d__16__System_Collections_IEnumerator_Reset_54ee28
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  native_sub_432740(&System_NotSupportedException_TypeInfo_12d5468);
  uVar1 = native_sub_432808();
  native_System_NotSupportedException___ctor_ad264c(uVar1,0);
  uVar2 = native_sub_432740(&
                            Method_TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_d__16_System_Collections_IEnumerator_Reset___12ea038
                           );
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,uVar2);
}



/* TMPro.Examples.TextMeshProFloatingText.<DisplayTextMeshFloatingText>d__16$$System.Collections.IEnumerator.get_Current @ 0x54ee68
 * Il2CppObject* TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_d__16__System_Collections_IEnumerator_get_Current (TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_d__16_o* __this, const MethodInfo* method); */

/* TMPro.Examples.TextMeshProFloatingText.<DisplayTextMeshFloatingText>d__16$$System.Collections.IEnumerator.get_Current
   Il2CppObject*
   TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_d__16__System_Collections_IEnumerator_get_Current
   (TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_d__16_o* __this, const
   MethodInfo* method); */

undefined8
native_TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshFloatingText_d__16__System_Collections_IEnumerator_get_Current_54ee68
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


