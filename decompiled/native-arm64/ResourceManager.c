/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* ResourceManager$$get_Instance @ 0x73d0c8
 * ResourceManager_o* ResourceManager__get_Instance (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResourceManager$$get_Instance
   ResourceManager_o* ResourceManager__get_Instance (const MethodInfo* method); */

long native_ResourceManager__get_Instance_73d0c8(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if ((bRam000000000133f610 & 1) == 0) {
    native_sub_43273c(&ResourceManager_TypeInfo_12d5a60);
    bRam000000000133f610 = 1;
  }
  lVar3 = **(long **)(_ResourceManager_TypeInfo_12d5a60 + 0xb8);
  if (lVar3 == 0) {
    uVar1 = native_sub_432808();
    native_ResourceManager___ctor_73d148();
    puVar2 = *(undefined8 **)(_ResourceManager_TypeInfo_12d5a60 + 0xb8);
    *puVar2 = uVar1;
    native_sub_4326e0(puVar2,uVar1);
    lVar3 = **(long **)(_ResourceManager_TypeInfo_12d5a60 + 0xb8);
  }
  return lVar3;
}



/* ResourceManager$$get_DicAsset @ 0x73d218
 * System_Collections_Generic_Dictionary_string__Object__o* ResourceManager__get_DicAsset (ResourceManager_o* __this, const MethodInfo* method); */

/* ResourceManager$$get_DicAsset
   System_Collections_Generic_Dictionary_string__Object__o* ResourceManager__get_DicAsset
   (ResourceManager_o* __this, const MethodInfo* method); */

undefined8 native_ResourceManager__get_DicAsset_73d218(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* ResourceManager$$GetResource @ 0x73d220
 * UnityEngine_Object_o* ResourceManager__GetResource (ResourceManager_o* __this, System_String_o* name, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResourceManager$$GetResource
   UnityEngine_Object_o* ResourceManager__GetResource (ResourceManager_o* __this, System_String_o*
   name, const MethodInfo* method); */

undefined8 native_ResourceManager__GetResource_73d220(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  if ((bRam000000000133f611 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__WWW__ContainsKey___12d9978
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__Object__TryGetValue___12d9870
                     );
    native_sub_43273c(&StringLiteral__GetResource_Failed__Res_not_exist__res_Name____12ebe60);
    native_sub_43273c(&StringLiteral__GetResource_Failed__The_res_is_still_loading_12ebe68);
    bRam000000000133f611 = 1;
  }
  uStack_38 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____TryGetValue_cdc420
                      (*(long *)(param_1 + 0x10),param_2,&uStack_38,
                       _Method_System_Collections_Generic_Dictionary_string__Object__TryGetValue___12d9870
                      );
    if ((uVar1 & 1) == 0) {
      uVar2 = native_System_String__Concat_afbd68
                        (_StringLiteral__GetResource_Failed__Res_not_exist__res_Name____12ebe60,
                         param_2,0);
      if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Debug_TypeInfo_12d4338);
      }
      native_UnityEngine_Debug__LogWarning_8dca9c(uVar2,0);
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_0073d364;
      uVar1 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____ContainsKey_cda894
                        (*(long *)(param_1 + 0x18),param_2,
                         _Method_System_Collections_Generic_Dictionary_string__WWW__ContainsKey___12d9978
                        );
      if ((uVar1 & 1) != 0) {
        if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        native_UnityEngine_Debug__LogWarning_8dca9c
                  (_StringLiteral__GetResource_Failed__The_res_is_still_loading_12ebe68,0);
      }
    }
    return uStack_38;
  }
LAB_0073d364:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ResourceManager$$GetLoadType @ 0x73d368
 * System_Type_o* ResourceManager__GetLoadType (ResourceManager_o* __this, System_String_o* typeStr, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResourceManager$$GetLoadType
   System_Type_o* ResourceManager__GetLoadType (ResourceManager_o* __this, System_String_o* typeStr,
   const MethodInfo* method); */

undefined8 native_ResourceManager__GetLoadType_73d368(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133f612 & 1) == 0) {
    native_sub_43273c(&UnityEngine_AudioClip_var_12d12e0);
    native_sub_43273c(&UnityEngine_GameObject_var_12d14b0);
    native_sub_43273c(&UnityEngine_TextAsset_var_12d18c0);
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    native_sub_43273c(&StringLiteral_txt_12f67a0);
    native_sub_43273c(&StringLiteral_csv_12f4280);
    native_sub_43273c(&StringLiteral_wav_12f6ae8);
    native_sub_43273c(&StringLiteral_mp3_12f57b8);
    native_sub_43273c(&StringLiteral_xml_12f6da0);
    bRam000000000133f612 = 1;
  }
  if (param_2 != 0) {
    uVar1 = native_System_String__op_Equality_afc18c(param_2,_StringLiteral_txt_12f67a0,0);
    if ((((uVar1 & 1) != 0) ||
        (uVar1 = native_System_String__op_Equality_afc18c(param_2,_StringLiteral_csv_12f4280,0),
        (uVar1 & 1) != 0)) ||
       (uVar1 = native_System_String__op_Equality_afc18c(param_2,_StringLiteral_xml_12f6da0,0),
       (uVar1 & 1) != 0)) {
      puVar3 = (undefined8 *)&UnityEngine_TextAsset_var_12d18c0;
      goto LAB_0073d4cc;
    }
    uVar1 = native_System_String__op_Equality_afc18c(param_2,_StringLiteral_mp3_12f57b8,0);
    if (((uVar1 & 1) != 0) ||
       (uVar1 = native_System_String__op_Equality_afc18c(param_2,_StringLiteral_wav_12f6ae8,0),
       (uVar1 & 1) != 0)) {
      puVar3 = (undefined8 *)&UnityEngine_AudioClip_var_12d12e0;
      goto LAB_0073d4cc;
    }
  }
  puVar3 = (undefined8 *)&UnityEngine_GameObject_var_12d14b0;
LAB_0073d4cc:
  uVar4 = *puVar3;
  if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000134218b & 1) == 0) {
    native_sub_43273c(&IntPtr_TypeInfo_12d4ee0,0);
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    bRam000000000134218b = 1;
  }
  uVar1 = native_System_IntPtr__op_Equality_83db90(uVar4,0,0);
  uVar2 = 0;
  if ((uVar1 & 1) == 0) {
    if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_sub_3bca1c(uVar4);
  }
  return uVar2;
}



/* ResourceManager$$IsResLoading @ 0x73d4f8
 * bool ResourceManager__IsResLoading (ResourceManager_o* __this, System_String_o* name, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResourceManager$$IsResLoading
   bool ResourceManager__IsResLoading (ResourceManager_o* __this, System_String_o* name, const
   MethodInfo* method); */

uint native_ResourceManager__IsResLoading_73d4f8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  if ((bRam000000000133f613 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__WWW__ContainsKey___12d9978
                     );
    bRam000000000133f613 = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar1 = (*(code *)**(undefined8 **)
                          (*(long *)(*(long *)(
                                              _Method_System_Collections_Generic_Dictionary_string__WWW__ContainsKey___12d9978
                                              + 0x18) + 0xc0) + 0x40))();
      return (uint)(uVar1 >> 0x1f) & 1 ^ 1;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810(0,param_2);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ResourceManager$$IsResLoaded @ 0x73d55c
 * bool ResourceManager__IsResLoaded (ResourceManager_o* __this, System_String_o* name, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResourceManager$$IsResLoaded
   bool ResourceManager__IsResLoaded (ResourceManager_o* __this, System_String_o* name, const
   MethodInfo* method); */

uint native_ResourceManager__IsResLoaded_73d55c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  if ((bRam000000000133f614 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__Object__ContainsKey___12d9860
                     );
    bRam000000000133f614 = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar1 = (*(code *)**(undefined8 **)
                          (*(long *)(*(long *)(
                                              _Method_System_Collections_Generic_Dictionary_string__Object__ContainsKey___12d9860
                                              + 0x18) + 0xc0) + 0x40))();
      return (uint)(uVar1 >> 0x1f) & 1 ^ 1;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810(0,param_2);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ResourceManager$$GetLoadingWWW @ 0x73d5c0
 * UnityEngine_WWW_o* ResourceManager__GetLoadingWWW (ResourceManager_o* __this, System_String_o* name, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResourceManager$$GetLoadingWWW
   UnityEngine_WWW_o* ResourceManager__GetLoadingWWW (ResourceManager_o* __this, System_String_o*
   name, const MethodInfo* method); */

undefined8 native_ResourceManager__GetLoadingWWW_73d5c0(long param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  if ((bRam000000000133f615 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__WWW__TryGetValue___12d9980
                     );
    bRam000000000133f615 = 1;
  }
  uStack_28 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____TryGetValue_cdc420
              (*(long *)(param_1 + 0x18),param_2,&uStack_28,
               _Method_System_Collections_Generic_Dictionary_string__WWW__TryGetValue___12d9980);
    return uStack_28;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ResourceManager$$UnrefAsset @ 0x73d634
 * void ResourceManager__UnrefAsset (ResourceManager_o* __this, System_String_o* name, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResourceManager$$UnrefAsset
   void ResourceManager__UnrefAsset (ResourceManager_o* __this, System_String_o* name, const
   MethodInfo* method); */

undefined8 native_ResourceManager__UnrefAsset_73d634(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  uint uVar17;
  
  if ((bRam000000000133f616 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_string__Object__Remove___12d9868
                     );
    bRam000000000133f616 = 1;
  }
  lVar10 = _Method_System_Collections_Generic_Dictionary_string__Object__Remove___12d9868;
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (param_2 == 0) {
    native_sub_432740(&System_ArgumentNullException_TypeInfo_12d3808);
    uVar16 = native_sub_432808();
    uVar7 = native_sub_432740(&StringLiteral_key_12f5248);
    native_System_ArgumentNullException___ctor_951bd8(uVar16,uVar7,0);
    uVar7 = native_sub_432740(&
                              Method_System_Collections_Generic_Dictionary_object__object__Remove___12d9548
                             );
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar16,uVar7);
  }
  if (*(long *)(lVar5 + 0x10) == 0) {
    return 0;
  }
  plVar14 = *(long **)(lVar5 + 0x30);
  if (plVar14 != (long *)0x0) {
    lVar15 = *(long *)(*(long *)(*(long *)(
                                          _Method_System_Collections_Generic_Dictionary_string__Object__Remove___12d9868
                                          + 0x18) + 0xc0) + 0xe0);
    if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
      native_sub_3c9850(lVar15);
    }
    lVar8 = *plVar14;
    if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
      uVar12 = 0;
      piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar15) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto code_r0x00cdc144;
        }
        uVar12 = uVar12 + 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 < *(ushort *)(lVar8 + 0x12a));
    }
    puVar6 = (undefined8 *)native_sub_3c9b34(plVar14,lVar15,1);
code_r0x00cdc144:
    uVar4 = (*(code *)*puVar6)(plVar14,param_2,puVar6[1]);
    lVar15 = *(long *)(lVar5 + 0x10);
    if (lVar15 != 0) {
      uVar1 = *(uint *)(lVar15 + 0x18);
      uVar4 = uVar4 & 0x7fffffff;
      iVar3 = 0;
      if (uVar1 != 0) {
        iVar3 = (int)uVar4 / (int)uVar1;
      }
      uVar2 = uVar4 - iVar3 * uVar1;
      if (uVar1 <= uVar2) {
code_r0x00cdc3cc:
        uVar16 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar16,0);
      }
      uVar1 = *(uint *)(lVar15 + (ulong)uVar2 * 4 + 0x20);
      if ((int)uVar1 < 0) {
        return 0;
      }
      lVar15 = *(long *)(lVar5 + 0x18);
      uVar17 = 0xffffffff;
      while (uVar11 = uVar1, lVar15 != 0) {
        if (*(uint *)(lVar15 + 0x18) <= uVar11) goto code_r0x00cdc3cc;
        lVar8 = (long)(int)uVar11;
        if (*(uint *)(lVar15 + lVar8 * 0x18 + 0x20) == uVar4) {
          plVar14 = *(long **)(lVar5 + 0x30);
          if (plVar14 == (long *)0x0) break;
          uVar16 = *(undefined8 *)(lVar15 + lVar8 * 0x18 + 0x28);
          lVar15 = *(long *)(*(long *)(*(long *)(lVar10 + 0x18) + 0xc0) + 0xe0);
          if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
            native_sub_3c9850(lVar15);
          }
          lVar9 = *plVar14;
          if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
            uVar12 = 0;
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar15) {
                puVar6 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x00cdc240;
              }
              uVar12 = uVar12 + 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 < *(ushort *)(lVar9 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar14,lVar15,0);
code_r0x00cdc240:
          uVar12 = (*(code *)*puVar6)(plVar14,uVar16,param_2,puVar6[1]);
          if ((uVar12 & 1) != 0) {
            if ((int)uVar17 < 0) {
              lVar10 = *(long *)(lVar5 + 0x18);
              if (lVar10 == 0) break;
              if (*(uint *)(lVar10 + 0x18) <= uVar11) goto code_r0x00cdc3cc;
              lVar15 = *(long *)(lVar5 + 0x10);
              if (lVar15 == 0) break;
              if (*(uint *)(lVar15 + 0x18) <= uVar2) goto code_r0x00cdc3cc;
              *(undefined4 *)(lVar15 + (ulong)uVar2 * 4 + 0x20) =
                   *(undefined4 *)(lVar10 + lVar8 * 0x18 + 0x24);
            }
            else {
              lVar10 = *(long *)(lVar5 + 0x18);
              if (lVar10 == 0) break;
              if ((*(uint *)(lVar10 + 0x18) <= uVar11) || (*(uint *)(lVar10 + 0x18) <= uVar17))
              goto code_r0x00cdc3cc;
              *(undefined4 *)(lVar10 + 0x20 + (long)(int)uVar17 * 0x18 + 4) =
                   *(undefined4 *)(lVar10 + 0x20 + lVar8 * 0x18 + 4);
            }
            lVar10 = *(long *)(lVar5 + 0x18);
            if (lVar10 == 0) break;
            if (*(uint *)(lVar10 + 0x18) <= uVar11) goto code_r0x00cdc3cc;
            *(undefined4 *)(lVar10 + lVar8 * 0x18 + 0x20) = 0xffffffff;
            lVar10 = *(long *)(lVar5 + 0x18);
            if (lVar10 == 0) break;
            if (*(uint *)(lVar10 + 0x18) <= uVar11) goto code_r0x00cdc3cc;
            *(undefined4 *)(lVar10 + lVar8 * 0x18 + 0x24) = *(undefined4 *)(lVar5 + 0x28);
            lVar10 = *(long *)(lVar5 + 0x18);
            if (lVar10 == 0) break;
            if (*(uint *)(lVar10 + 0x18) <= uVar11) goto code_r0x00cdc3cc;
            *(undefined8 *)(lVar10 + lVar8 * 0x18 + 0x28) = 0;
            lVar10 = *(long *)(lVar5 + 0x18);
            if (lVar10 == 0) break;
            if (uVar11 < *(uint *)(lVar10 + 0x18)) {
              *(undefined8 *)(lVar10 + lVar8 * 0x18 + 0x30) = 0;
              *(uint *)(lVar5 + 0x28) = uVar11;
              *(int *)(lVar5 + 0x2c) = *(int *)(lVar5 + 0x2c) + 1;
              *(int *)(lVar5 + 0x24) = *(int *)(lVar5 + 0x24) + 1;
              return 1;
            }
            goto code_r0x00cdc3cc;
          }
          lVar15 = *(long *)(lVar5 + 0x18);
        }
        if (lVar15 == 0) break;
        if (*(uint *)(lVar15 + 0x18) <= uVar11) goto code_r0x00cdc3cc;
        uVar1 = *(uint *)(lVar15 + lVar8 * 0x18 + 0x24);
        uVar17 = uVar11;
        if ((int)uVar1 < 0) {
          return 0;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ResourceManager$$.ctor @ 0x73d148
 * void ResourceManager___ctor (ResourceManager_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ResourceManager$$.ctor
   void ResourceManager___ctor (ResourceManager_o* __this, const MethodInfo* method); */

undefined1  [16] native_ResourceManager___ctor_73d148(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam000000000133f617 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_string__WWW___ctor___12d9970);
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_string__Object___ctor___12d9858)
    ;
    native_sub_43273c(&System_Collections_Generic_Dictionary_string__WWW__TypeInfo_12d23e0);
    native_sub_43273c(&System_Collections_Generic_Dictionary_string__Object__TypeInfo_12d23a0);
    bRam000000000133f617 = 1;
  }
  uVar1 = native_sub_432808(_System_Collections_Generic_Dictionary_string__Object__TypeInfo_12d23a0)
  ;
  native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action_____ctor_cda13c
            (uVar1,_Method_System_Collections_Generic_Dictionary_string__Object___ctor___12d9858);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  native_sub_4326e0((undefined8 *)(param_1 + 0x10),uVar1);
  uVar1 = native_sub_432808(_System_Collections_Generic_Dictionary_string__WWW__TypeInfo_12d23e0);
  native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action_____ctor_cda13c
            (uVar1,_Method_System_Collections_Generic_Dictionary_string__WWW___ctor___12d9970);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  native_sub_4326e0(param_1 + 0x18,uVar1);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}


