/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.Examples.Benchmark01.<Start>d__10$$.ctor @ 0x549654
 * void TMPro_Examples_Benchmark01__Start_d__10___ctor (TMPro_Examples_Benchmark01__Start_d__10_o* __this, int32_t __1__state, const MethodInfo* method); */

/* TMPro.Examples.Benchmark01.<Start>d__10$$.ctor
   void TMPro_Examples_Benchmark01__Start_d__10___ctor (TMPro_Examples_Benchmark01__Start_d__10_o*
   __this, int32_t __1__state, const MethodInfo* method); */

void native_TMPro_Examples_Benchmark01__Start_d__10___ctor_549654(long param_1,undefined4 param_2)

{
  native_System_Object___ctor_ad2798(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* TMPro.Examples.Benchmark01.<Start>d__10$$System.IDisposable.Dispose @ 0x549680
 * void TMPro_Examples_Benchmark01__Start_d__10__System_IDisposable_Dispose (TMPro_Examples_Benchmark01__Start_d__10_o* __this, const MethodInfo* method); */

/* TMPro.Examples.Benchmark01.<Start>d__10$$System.IDisposable.Dispose
   void TMPro_Examples_Benchmark01__Start_d__10__System_IDisposable_Dispose
   (TMPro_Examples_Benchmark01__Start_d__10_o* __this, const MethodInfo* method); */

void native_TMPro_Examples_Benchmark01__Start_d__10__System_IDisposable_Dispose_549680(void)

{
  return;
}



/* TMPro.Examples.Benchmark01.<Start>d__10$$MoveNext @ 0x549684
 * bool TMPro_Examples_Benchmark01__Start_d__10__MoveNext (TMPro_Examples_Benchmark01__Start_d__10_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.Benchmark01.<Start>d__10$$MoveNext
   bool TMPro_Examples_Benchmark01__Start_d__10__MoveNext
   (TMPro_Examples_Benchmark01__Start_d__10_o* __this, const MethodInfo* method); */

char * native_TMPro_Examples_Benchmark01__Start_d__10__MoveNext_549684(long param_1)

{
  char *pcVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iStack_34;
  
  if ((bRam000000000133e9b3 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Renderer____12e2ad8);
    native_sub_43273c(&UnityEngine_Font_var_12d14a0);
    native_sub_43273c(&UnityEngine_Font_TypeInfo_12d46d8);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_TextMeshPro____12e48a8);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_TextMesh____12e48a0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&Method_UnityEngine_Resources_Load_Material____12e6330);
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    native_sub_43273c(&StringLiteral_The__color__0050FF_count_is____color__12f1788);
    native_sub_43273c(&StringLiteral_Fonts_ARIAL_12ee040);
    native_sub_43273c(&StringLiteral_The___0050FF_count_is____color__0__12f1780);
    native_sub_43273c(&StringLiteral_Fonts___Materials_LiberationSans_SDF___Drop_Shadow_12ee030);
    bRam000000000133e9b3 = 1;
  }
  iStack_34 = 0;
  iVar6 = *(int *)(param_1 + 0x10);
  pcVar1 = (char *)0x0;
  if (iVar6 == 2) {
    uVar7 = 0xffffffff;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x20);
    if (iVar6 == 1) {
      iStack_34 = *(int *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      iVar6 = iStack_34 + 1;
      *(int *)(param_1 + 0x28) = iVar6;
      if (1000000 < iVar6) {
        *(undefined8 *)(param_1 + 0x18) = 0;
        native_sub_4326e0((undefined8 *)(param_1 + 0x18),0);
        pcVar1 = Elf64_Ehdr_00000000.e_ident_magic_str;
        uVar7 = 2;
        goto LAB_00549c50;
      }
      if (lVar8 == 0) goto LAB_00549c68;
    }
    else {
      if (iVar6 != 0) {
        return (char *)0x0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar8 == 0) goto LAB_00549c68;
      if (*(int *)(lVar8 + 0x18) == 1) {
        lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(lVar8,0);
        pcVar1 = (char *)0x0;
        if (lVar2 == 0) goto LAB_00549c68;
        lVar2 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                          (lVar2,_Method_UnityEngine_GameObject_AddComponent_TextMesh____12e48a0);
        plVar3 = (long *)(lVar8 + 0x40);
        *plVar3 = lVar2;
        native_sub_4326e0(plVar3,lVar2);
        uVar10 = *(undefined8 *)(lVar8 + 0x28);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        pcVar1 = (char *)native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
        uVar10 = _UnityEngine_Font_var_12d14a0;
        lVar2 = *plVar3;
        if (((ulong)pcVar1 & 1) == 0) {
          if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar10 = native_System_Type__GetTypeFromHandle_b0fb24(uVar10,0);
          pcVar1 = (char *)native_UnityEngine_Resources__Load_76941c
                                     (_StringLiteral_Fonts_ARIAL_12ee040,uVar10,0);
          if (lVar2 == 0) goto LAB_00549c68;
          if (pcVar1 == (char *)0x0) {
            pcVar1 = (char *)0x0;
          }
          else if (*(long *)pcVar1 != _UnityEngine_Font_TypeInfo_12d46d8) {
            pcVar1 = (char *)0x0;
          }
          native_UnityEngine_TextMesh__set_font_db58b0(lVar2,pcVar1,0);
          lVar2 = *plVar3;
          pcVar1 = (char *)0x0;
          if (lVar2 == 0) goto LAB_00549c68;
        }
        else {
          if (lVar2 == 0) goto LAB_00549c68;
          native_UnityEngine_TextMesh__set_font_db58b0(lVar2,*(undefined8 *)(lVar8 + 0x28),0);
          lVar2 = *(long *)(lVar8 + 0x40);
          if (lVar2 == 0) {
            pcVar1 = (char *)0x0;
            goto LAB_00549c68;
          }
        }
        pcVar5 = (char *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                   (lVar2,
                                    _Method_UnityEngine_Component_GetComponent_Renderer____12e2ad8);
        pcVar1 = pcVar5;
        if (*plVar3 == 0) goto LAB_00549c68;
        lVar2 = native_UnityEngine_TextMesh__get_font_db5870(*plVar3,0);
        pcVar1 = (char *)0x0;
        if ((lVar2 == 0) ||
           (pcVar1 = (char *)native_UnityEngine_Font__get_material_db3b30(lVar2,0),
           pcVar5 == (char *)0x0)) goto LAB_00549c68;
        native_UnityEngine_Renderer__set_sharedMaterial_768f9c(pcVar5,pcVar1,0);
        pcVar1 = (char *)0x0;
        if (*plVar3 == 0) goto LAB_00549c68;
        native_UnityEngine_TextMesh__set_fontSize_db5900(*plVar3,0x30,0);
        pcVar1 = (char *)0x0;
        if (*plVar3 == 0) goto LAB_00549c68;
        native_UnityEngine_TextMesh__set_anchor_db5950(*plVar3,4,0);
      }
      else if (*(int *)(lVar8 + 0x18) == 0) {
        lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(lVar8,0);
        pcVar1 = (char *)0x0;
        if (lVar2 == 0) goto LAB_00549c68;
        lVar2 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                          (lVar2,_Method_UnityEngine_GameObject_AddComponent_TextMeshPro____12e48a8)
        ;
        plVar9 = (long *)(lVar8 + 0x30);
        *plVar9 = lVar2;
        native_sub_4326e0(plVar9,lVar2);
        plVar3 = (long *)*plVar9;
        pcVar1 = (char *)0x0;
        if (plVar3 == (long *)0x0) goto LAB_00549c68;
        (**(code **)(*plVar3 + 0x5f8))(plVar3,1,*(undefined8 *)(*plVar3 + 0x600));
        uVar10 = *(undefined8 *)(lVar8 + 0x20);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
        if ((uVar4 & 1) != 0) {
          pcVar1 = (char *)0x0;
          if (*plVar9 == 0) goto LAB_00549c68;
          native_TMPro_TMP_Text__set_font_4ba17c(*plVar9,*(undefined8 *)(lVar8 + 0x20),0);
        }
        pcVar1 = (char *)0x0;
        if (*plVar9 == 0) goto LAB_00549c68;
        native_TMPro_TMP_Text__set_fontSize_4bae20(0x42400000,*plVar9,0);
        pcVar1 = (char *)0x0;
        if (*plVar9 == 0) goto LAB_00549c68;
        native_TMPro_TMP_Text__set_alignment_4bb268(*plVar9,0x202,0);
        pcVar1 = (char *)0x0;
        if (*plVar9 == 0) goto LAB_00549c68;
        native_TMPro_TMP_Text__set_extraPadding_4bba10(*plVar9,1,0);
        pcVar1 = (char *)0x0;
        if (*plVar9 == 0) goto LAB_00549c68;
        pcVar1 = (char *)native_TMPro_TMP_Text__set_enableWordWrapping_4bb4f4(*plVar9,0,0);
        if ((*plVar9 == 0) || (lVar2 = *(long *)(*plVar9 + 0xf0), lVar2 == 0)) goto LAB_00549c68;
        *(undefined8 *)(lVar8 + 0x48) = *(undefined8 *)(lVar2 + 0x20);
        native_sub_4326e0((undefined8 *)(lVar8 + 0x48));
        uVar10 = native_UnityEngine_Resources__Load_Font__4a7de0
                           (_StringLiteral_Fonts___Materials_LiberationSans_SDF___Drop_Shadow_12ee030
                            ,_Method_UnityEngine_Resources_Load_Material____12e6330);
        *(undefined8 *)(lVar8 + 0x50) = uVar10;
        native_sub_4326e0(lVar8 + 0x50);
      }
      iVar6 = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    if (*(int *)(lVar8 + 0x18) == 1) {
      lVar8 = *(long *)(lVar8 + 0x40);
      iStack_34 = iVar6 % 1000;
      uVar10 = native_System_Int32__ToString_83c60c(&iStack_34,0);
      pcVar1 = (char *)native_System_String__Concat_afbd68
                                 (_StringLiteral_The__color__0050FF_count_is____color__12f1788,
                                  uVar10,0);
      if (lVar8 == 0) goto LAB_00549c68;
      native_UnityEngine_TextMesh__set_text_db5820(lVar8,pcVar1,0);
    }
    else if (*(int *)(lVar8 + 0x18) == 0) {
      pcVar1 = (char *)0x0;
      if (*(long *)(lVar8 + 0x30) == 0) {
LAB_00549c68:
                    /* WARNING: Subroutine does not return */
        native_sub_432810(pcVar1);
      }
      pcVar1 = (char *)native_TMPro_TMP_Text__SetText_4bf80c
                                 ((float)(iVar6 % 1000),*(long *)(lVar8 + 0x30),
                                  _StringLiteral_The___0050FF_count_is____color__0__12f1780,0);
      if (*(int *)(param_1 + 0x28) % 1000 == 999) {
        plVar3 = *(long **)(lVar8 + 0x30);
        if (plVar3 == (long *)0x0) goto LAB_00549c68;
        uVar10 = (**(code **)(*plVar3 + 0x568))(plVar3,*(undefined8 *)(*plVar3 + 0x570));
        uVar11 = *(undefined8 *)(lVar8 + 0x48);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        pcVar1 = (char *)native_UnityEngine_Object__op_Equality_8e9a3c(uVar10,uVar11,0);
        plVar9 = *(long **)(lVar8 + 0x30);
        if (((ulong)pcVar1 & 1) == 0) {
          if (plVar9 == (long *)0x0) goto LAB_00549c68;
          lVar2 = *plVar9;
          uVar10 = *(undefined8 *)(lVar8 + 0x48);
        }
        else {
          if (plVar9 == (long *)0x0) goto LAB_00549c68;
          lVar2 = *plVar9;
          uVar10 = *(undefined8 *)(lVar8 + 0x50);
        }
        (**(code **)(lVar2 + 0x578))(plVar9,uVar10,*(undefined8 *)(lVar2 + 0x580));
        (**(code **)(*plVar3 + 0x578))(plVar3,uVar10,*(undefined8 *)(*plVar3 + 0x580));
      }
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    native_sub_4326e0((undefined8 *)(param_1 + 0x18),0);
    uVar7 = 1;
    pcVar1 = Elf64_Ehdr_00000000.e_ident_magic_str;
  }
LAB_00549c50:
  *(undefined4 *)(param_1 + 0x10) = uVar7;
  return pcVar1;
}



/* TMPro.Examples.Benchmark01.<Start>d__10$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ 0x549c6c
 * Il2CppObject* TMPro_Examples_Benchmark01__Start_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current (TMPro_Examples_Benchmark01__Start_d__10_o* __this, const MethodInfo* method); */

/* TMPro.Examples.Benchmark01.<Start>d__10$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
   Il2CppObject*
   TMPro_Examples_Benchmark01__Start_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current
   (TMPro_Examples_Benchmark01__Start_d__10_o* __this, const MethodInfo* method); */

undefined8
native_TMPro_Examples_Benchmark01__Start_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current_549c6c
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* TMPro.Examples.Benchmark01.<Start>d__10$$System.Collections.IEnumerator.Reset @ 0x549c74
 * void TMPro_Examples_Benchmark01__Start_d__10__System_Collections_IEnumerator_Reset (TMPro_Examples_Benchmark01__Start_d__10_o* __this, const MethodInfo* method); */

/* TMPro.Examples.Benchmark01.<Start>d__10$$System.Collections.IEnumerator.Reset
   void TMPro_Examples_Benchmark01__Start_d__10__System_Collections_IEnumerator_Reset
   (TMPro_Examples_Benchmark01__Start_d__10_o* __this, const MethodInfo* method); */

void native_TMPro_Examples_Benchmark01__Start_d__10__System_Collections_IEnumerator_Reset_549c74
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  native_sub_432740(&System_NotSupportedException_TypeInfo_12d5468);
  uVar1 = native_sub_432808();
  native_System_NotSupportedException___ctor_ad264c(uVar1,0);
  uVar2 = native_sub_432740(&
                            Method_TMPro_Examples_Benchmark01__Start_d__10_System_Collections_IEnumerator_Reset___12e96e0
                           );
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,uVar2);
}



/* TMPro.Examples.Benchmark01.<Start>d__10$$System.Collections.IEnumerator.get_Current @ 0x549cb4
 * Il2CppObject* TMPro_Examples_Benchmark01__Start_d__10__System_Collections_IEnumerator_get_Current (TMPro_Examples_Benchmark01__Start_d__10_o* __this, const MethodInfo* method); */

/* TMPro.Examples.Benchmark01.<Start>d__10$$System.Collections.IEnumerator.get_Current
   Il2CppObject* TMPro_Examples_Benchmark01__Start_d__10__System_Collections_IEnumerator_get_Current
   (TMPro_Examples_Benchmark01__Start_d__10_o* __this, const MethodInfo* method); */

undefined8
native_TMPro_Examples_Benchmark01__Start_d__10__System_Collections_IEnumerator_get_Current_549cb4
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


