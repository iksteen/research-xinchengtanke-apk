/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* NGUIAtlas$$get_spriteMaterial @ 0x7fcea0
 * UnityEngine_Material_o* NGUIAtlas__get_spriteMaterial (NGUIAtlas_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIAtlas$$get_spriteMaterial
   UnityEngine_Material_o* NGUIAtlas__get_spriteMaterial (NGUIAtlas_o* __this, const MethodInfo*
   method); */

undefined8 native_NGUIAtlas__get_spriteMaterial_7fcea0(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((bRam0000000001340410 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    bRam0000000001340410 = 1;
  }
  plVar1 = (long *)native_NGUIAtlas__get_replacement_7fcf60(param_1);
  if (plVar1 == (long *)0x0) {
    return *(undefined8 *)(param_1 + 0x18);
  }
  lVar4 = *plVar1;
  if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
    uVar5 = 0;
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_007fcf4c;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIAtlas_TypeInfo_12d4c68,0);
LAB_007fcf4c:
                    /* WARNING: Could not recover jumptable at 0x007fcf5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)*puVar2)(plVar1,puVar2[1]);
  return uVar3;
}



/* NGUIAtlas$$set_spriteMaterial @ 0x7fd000
 * void NGUIAtlas__set_spriteMaterial (NGUIAtlas_o* __this, UnityEngine_Material_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIAtlas$$set_spriteMaterial
   void NGUIAtlas__set_spriteMaterial (NGUIAtlas_o* __this, UnityEngine_Material_o* value, const
   MethodInfo* method); */

void native_NGUIAtlas__set_spriteMaterial_7fd000(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  uint uVar13;
  
  if ((bRam0000000001340411 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001340411 = 1;
  }
  plVar4 = (long *)native_NGUIAtlas__get_replacement_7fcf60(param_1);
  if (plVar4 != (long *)0x0) {
    lVar7 = *plVar4;
    if ((ulong)*(ushort *)(lVar7 + 0x12a) != 0) {
      uVar8 = 0;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_007fd110;
        }
        uVar8 = uVar8 + 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 < *(ushort *)(lVar7 + 0x12a));
    }
    puVar5 = (undefined8 *)native_sub_3c9b34(plVar4,_INGUIAtlas_TypeInfo_12d4c68,1);
LAB_007fd110:
                    /* WARNING: Could not recover jumptable at 0x007fd128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar5)(plVar4,param_2,puVar5[1]);
    return;
  }
  puVar5 = (undefined8 *)(param_1 + 0x18);
  uVar11 = *puVar5;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar8 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar11,0,0);
  if ((uVar8 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x18) = param_2;
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)(((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  native_NGUIAtlas__MarkAsChanged_7fd160(param_1);
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  native_sub_4326e0(puVar5,param_2);
  if ((bRam0000000001340420 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&Method_NGUITools_FindActive_UILabel____12e5710);
    native_sub_43273c(&Method_NGUITools_FindActive_UISprite____12e5720);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&Method_UnityEngine_Resources_FindObjectsOfTypeAll_NGUIFont____12e6308);
    native_sub_43273c(&Method_UnityEngine_Resources_FindObjectsOfTypeAll_UIFont____12e6310);
    bRam0000000001340420 = 1;
  }
  plVar4 = (long *)native_NGUIAtlas__get_replacement_7fcf60(param_1);
  if (plVar4 != (long *)0x0) {
    lVar7 = *plVar4;
    if ((ulong)*(ushort *)(lVar7 + 0x12a) != 0) {
      uVar8 = 0;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
          goto LAB_007fd248;
        }
        uVar8 = uVar8 + 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 < *(ushort *)(lVar7 + 0x12a));
    }
    puVar5 = (undefined8 *)native_sub_3c9b34(plVar4,_INGUIAtlas_TypeInfo_12d4c68,0xe);
LAB_007fd248:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar7 = native_NGUITools__FindActive_AudioListener__4a5b30
                    (_Method_NGUITools_FindActive_UISprite____12e5720);
  if (lVar7 != 0) {
    iVar12 = (int)*(undefined8 *)(lVar7 + 0x18);
    if (iVar12 < 1) {
LAB_007fd338:
      lVar7 = native_UnityEngine_Resources__FindObjectsOfTypeAll_NGUIFont__4a7c94
                        (_Method_UnityEngine_Resources_FindObjectsOfTypeAll_NGUIFont____12e6308);
      if (lVar7 == 0) goto LAB_007fd5d4;
      iVar12 = (int)*(undefined8 *)(lVar7 + 0x18);
      if (iVar12 < 1) {
LAB_007fd3f8:
        lVar7 = native_UnityEngine_Resources__FindObjectsOfTypeAll_NGUIFont__4a7c94
                          (_Method_UnityEngine_Resources_FindObjectsOfTypeAll_UIFont____12e6310);
        if (lVar7 == 0) goto LAB_007fd5d4;
        iVar12 = (int)*(undefined8 *)(lVar7 + 0x18);
        if (iVar12 < 1) {
LAB_007fd4bc:
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar7 = native_NGUITools__FindActive_AudioListener__4a5b30
                            (_Method_NGUITools_FindActive_UILabel____12e5710);
          if (lVar7 == 0) goto LAB_007fd5d4;
          iVar12 = (int)*(undefined8 *)(lVar7 + 0x18);
          if (iVar12 < 1) {
            return;
          }
          if (iVar12 != 0) {
            uVar13 = 0;
            do {
              lVar10 = *(long *)(lVar7 + (long)(int)uVar13 * 8 + 0x20);
              if (lVar10 == 0) goto LAB_007fd5d4;
              lVar6 = native_UILabel__get_atlas_ae7ac0(lVar10,0);
              if (lVar6 != 0) {
                uVar11 = native_UILabel__get_atlas_ae7ac0(lVar10,0);
                if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                  native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
                }
                uVar8 = native_NGUITools__CheckIfRelated_736edc(param_1,uVar11,0);
                if ((uVar8 & 1) != 0) {
                  native_UILabel__get_atlas_ae7ac0(lVar10,0);
                  uVar11 = native_UILabel__get_font_ae77e8(lVar10,0);
                  native_UILabel__set_font_ae79c4(lVar10,0,0);
                  native_UILabel__set_font_ae79c4(lVar10,uVar11,0);
                }
              }
              uVar13 = uVar13 + 1;
              if (iVar12 <= (int)uVar13) {
                return;
              }
            } while (uVar13 < *(uint *)(lVar7 + 0x18));
          }
        }
        else if (iVar12 != 0) {
          uVar13 = 0;
          do {
            lVar10 = *(long *)(lVar7 + (long)(int)uVar13 * 8 + 0x20);
            if (lVar10 == 0) goto LAB_007fd5d4;
            uVar11 = native_UIFont__get_atlas_9ebd3c(lVar10,0);
            if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
              native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
            }
            uVar8 = native_NGUITools__CheckIfRelated_736edc(param_1,uVar11,0);
            if ((uVar8 & 1) != 0) {
              uVar11 = native_UIFont__get_atlas_9ebd3c(lVar10,0);
              native_UIFont__set_atlas_9ebe18(lVar10,0,0);
              native_UIFont__set_atlas_9ebe18(lVar10,uVar11,0);
            }
            uVar13 = uVar13 + 1;
            if (iVar12 <= (int)uVar13) goto LAB_007fd4bc;
          } while (uVar13 < *(uint *)(lVar7 + 0x18));
        }
      }
      else if (iVar12 != 0) {
        uVar13 = 0;
        do {
          lVar10 = *(long *)(lVar7 + (long)(int)uVar13 * 8 + 0x20);
          if (lVar10 == 0) goto LAB_007fd5d4;
          lVar6 = native_NGUIFont__get_atlas_7fe8f0(lVar10);
          if (lVar6 != 0) {
            uVar11 = native_NGUIFont__get_atlas_7fe8f0(lVar10);
            if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
              native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
            }
            uVar8 = native_NGUITools__CheckIfRelated_736edc(param_1,uVar11,0);
            if ((uVar8 & 1) != 0) {
              uVar11 = native_NGUIFont__get_atlas_7fe8f0(lVar10);
              native_NGUIFont__set_atlas_7fe9f4(lVar10,0);
              native_NGUIFont__set_atlas_7fe9f4(lVar10,uVar11);
            }
          }
          uVar13 = uVar13 + 1;
          if (iVar12 <= (int)uVar13) goto LAB_007fd3f8;
        } while (uVar13 < *(uint *)(lVar7 + 0x18));
      }
    }
    else if (iVar12 != 0) {
      uVar13 = 0;
      do {
        lVar10 = *(long *)(lVar7 + (long)(int)uVar13 * 8 + 0x20);
        if (lVar10 == 0) goto LAB_007fd5d4;
        uVar11 = native_UISprite__get_atlas_c358c4(lVar10,0);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
        }
        uVar8 = native_NGUITools__CheckIfRelated_736edc(param_1,uVar11,0);
        if ((uVar8 & 1) != 0) {
          uVar11 = native_UISprite__get_atlas_c358c4(lVar10,0);
          native_UISprite__set_atlas_c35910(lVar10,0,0);
          native_UISprite__set_atlas_c35910(lVar10,uVar11,0);
        }
        uVar13 = uVar13 + 1;
        if (iVar12 <= (int)uVar13) goto LAB_007fd338;
      } while (uVar13 < *(uint *)(lVar7 + 0x18));
    }
    uVar11 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar11,0);
  }
LAB_007fd5d4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIAtlas$$get_premultipliedAlpha @ 0x7fd5d8
 * bool NGUIAtlas__get_premultipliedAlpha (NGUIAtlas_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIAtlas$$get_premultipliedAlpha
   bool NGUIAtlas__get_premultipliedAlpha (NGUIAtlas_o* __this, const MethodInfo* method); */

ulong native_NGUIAtlas__get_premultipliedAlpha_7fd5d8(long param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((bRam0000000001340412 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_Premultiplied_12f06a8);
    bRam0000000001340412 = 1;
  }
  plVar2 = (long *)native_NGUIAtlas__get_replacement_7fcf60(param_1);
  if (plVar2 != (long *)0x0) {
    lVar5 = *plVar2;
    if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 7) * 0x10 + 0x138);
          goto LAB_007fd760;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
    }
    puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_INGUIAtlas_TypeInfo_12d4c68,7);
LAB_007fd760:
                    /* WARNING: Could not recover jumptable at 0x007fd774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    return uVar6;
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  if (uVar1 != 0xffffffff) goto LAB_007fd780;
  lVar5 = native_NGUIAtlas__get_spriteMaterial_7fcea0(param_1);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
  if ((uVar6 & 1) == 0) {
LAB_007fd778:
    uVar1 = 0;
  }
  else {
    if (lVar5 == 0) {
LAB_007fd798:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar4 = native_UnityEngine_Material__get_shader_8e3078(lVar5,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
    if ((uVar6 & 1) == 0) goto LAB_007fd778;
    lVar5 = native_UnityEngine_Material__get_shader_8e3078(lVar5,0);
    if ((lVar5 == 0) || (lVar5 = native_UnityEngine_Object__get_name_8e8098(lVar5,0), lVar5 == 0))
    goto LAB_007fd798;
    uVar1 = native_System_String__Contains_b0bafc(lVar5,_StringLiteral_Premultiplied_12f06a8,0);
    uVar1 = uVar1 & 1;
  }
  *(uint *)(param_1 + 0x38) = uVar1;
LAB_007fd780:
  return (ulong)(uVar1 == 1);
}



/* NGUIAtlas$$get_spriteList @ 0x7fd79c
 * System_Collections_Generic_List_UISpriteData__o* NGUIAtlas__get_spriteList (NGUIAtlas_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIAtlas$$get_spriteList
   System_Collections_Generic_List_UISpriteData__o* NGUIAtlas__get_spriteList (NGUIAtlas_o* __this,
   const MethodInfo* method); */

undefined8 native_NGUIAtlas__get_spriteList_7fd79c(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((bRam0000000001340413 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    bRam0000000001340413 = 1;
  }
  plVar1 = (long *)native_NGUIAtlas__get_replacement_7fcf60(param_1);
  if (plVar1 == (long *)0x0) {
    return *(undefined8 *)(param_1 + 0x20);
  }
  lVar4 = *plVar1;
  if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
    uVar5 = 0;
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
        goto LAB_007fd84c;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIAtlas_TypeInfo_12d4c68,2);
LAB_007fd84c:
                    /* WARNING: Could not recover jumptable at 0x007fd85c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)*puVar2)(plVar1,puVar2[1]);
  return uVar3;
}



/* NGUIAtlas$$set_spriteList @ 0x7fd860
 * void NGUIAtlas__set_spriteList (NGUIAtlas_o* __this, System_Collections_Generic_List_UISpriteData__o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIAtlas$$set_spriteList
   void NGUIAtlas__set_spriteList (NGUIAtlas_o* __this,
   System_Collections_Generic_List_UISpriteData__o* value, const MethodInfo* method); */

void native_NGUIAtlas__set_spriteList_7fd860(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((bRam0000000001340414 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_string__int__Clear___12d97e8);
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    bRam0000000001340414 = 1;
  }
  plVar1 = (long *)native_NGUIAtlas__get_replacement_7fcf60(param_1);
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = param_2;
    native_sub_4326e0((undefined8 *)(param_1 + 0x20),param_2);
    uVar3 = _Method_System_Collections_Generic_Dictionary_string__int__Clear___12d97e8;
    lVar4 = *(long *)(param_1 + 0x40);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    if (*(int *)(lVar4 + 0x20) < 1) {
      return;
    }
    lVar5 = *(long *)(lVar4 + 0x10);
    if (lVar5 != 0) {
      uVar6 = 0;
      do {
        if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)uVar6) {
          native_System_Array__Clear_95191c
                    (*(undefined8 *)(lVar4 + 0x18),0,*(undefined4 *)(lVar4 + 0x20),0);
          *(undefined8 *)(lVar4 + 0x28) = 0xffffffff;
          *(undefined4 *)(lVar4 + 0x20) = 0;
          *(int *)(lVar4 + 0x24) = *(int *)(lVar4 + 0x24) + 1;
          return;
        }
        if (*(uint *)(lVar5 + 0x18) <= uVar6) {
          uVar3 = native_sub_43283c(lVar4,uVar3);
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar3,0);
        }
        *(undefined4 *)(lVar5 + uVar6 * 4 + 0x20) = 0xffffffff;
        lVar5 = *(long *)(lVar4 + 0x10);
        uVar6 = uVar6 + 1;
      } while (lVar5 != 0);
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar4 = *plVar1;
  if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
    uVar6 = 0;
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 3) * 0x10 + 0x138);
        goto LAB_007fd948;
      }
      uVar6 = uVar6 + 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIAtlas_TypeInfo_12d4c68,3);
LAB_007fd948:
                    /* WARNING: Could not recover jumptable at 0x007fd960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar1,param_2,puVar2[1]);
  return;
}



/* NGUIAtlas$$get_texture @ 0x7fd968
 * UnityEngine_Texture_o* NGUIAtlas__get_texture (NGUIAtlas_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIAtlas$$get_texture
   UnityEngine_Texture_o* NGUIAtlas__get_texture (NGUIAtlas_o* __this, const MethodInfo* method); */

undefined8 native_NGUIAtlas__get_texture_7fd968(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((bRam0000000001340415 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001340415 = 1;
  }
  plVar3 = (long *)native_NGUIAtlas__get_replacement_7fcf60(param_1);
  if (plVar3 == (long *)0x0) {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
    if ((uVar7 & 1) == 0) {
      return 0;
    }
    lVar6 = *(long *)(param_1 + 0x18);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    if ((bRam0000000001340db2 & 1) == 0) {
      native_sub_43273c(&StringLiteral__MainTex_12f3608,0);
      bRam0000000001340db2 = 1;
    }
    if (pcRam0000000001340db8 == (code *)0x0) {
      pcRam0000000001340db8 = (code *)native_sub_4326f0(&UNK_00e2e607);
    }
    iVar1 = (*pcRam0000000001340db8)(lVar6,0x80);
    if (-1 < iVar1) {
      if (pcRam0000000001340e28 == (code *)0x0) {
        pcRam0000000001340e28 = (code *)native_sub_4326f0(&UNK_00e2e907);
      }
                    /* WARNING: Could not recover jumptable at 0x008e33d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*pcRam0000000001340e28)(lVar6,iVar1);
      return uVar5;
    }
    uVar2 = native_UnityEngine_Shader__PropertyToID_76b308(_StringLiteral__MainTex_12f3608,0);
    if (pcRam0000000001340e28 == (code *)0x0) {
      pcRam0000000001340e28 = (code *)native_sub_4326f0(&UNK_00e2e907);
    }
                    /* WARNING: Could not recover jumptable at 0x008e349c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*pcRam0000000001340e28)(lVar6,uVar2);
    return uVar5;
  }
  lVar6 = *plVar3;
  if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
    uVar7 = 0;
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 4) * 0x10 + 0x138);
        goto LAB_007fda64;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
  }
  puVar4 = (undefined8 *)native_sub_3c9b34(plVar3,_INGUIAtlas_TypeInfo_12d4c68,4);
LAB_007fda64:
                    /* WARNING: Could not recover jumptable at 0x007fda74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
  return uVar5;
}



/* NGUIAtlas$$get_pixelSize @ 0x7fda8c
 * float NGUIAtlas__get_pixelSize (NGUIAtlas_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIAtlas$$get_pixelSize
   float NGUIAtlas__get_pixelSize (NGUIAtlas_o* __this, const MethodInfo* method); */

undefined1  [16] native_NGUIAtlas__get_pixelSize_7fda8c(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar6 [16];
  
  if ((bRam0000000001340416 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    bRam0000000001340416 = 1;
  }
  plVar1 = (long *)native_NGUIAtlas__get_replacement_7fcf60(param_1);
  if (plVar1 == (long *)0x0) {
    return ZEXT416(*(uint *)(param_1 + 0x28));
  }
  lVar3 = *plVar1;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar4 = 0;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
        goto LAB_007fdb3c;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIAtlas_TypeInfo_12d4c68,5);
LAB_007fdb3c:
                    /* WARNING: Could not recover jumptable at 0x007fdb4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  auVar6._4_4_ = extraout_var;
  auVar6._0_4_ = extraout_s0;
  auVar6._8_8_ = extraout_var_00;
  return auVar6;
}



/* NGUIAtlas$$set_pixelSize @ 0x7fdb50
 * void NGUIAtlas__set_pixelSize (NGUIAtlas_o* __this, float value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIAtlas$$set_pixelSize
   void NGUIAtlas__set_pixelSize (NGUIAtlas_o* __this, float value, const MethodInfo* method); */

void native_NGUIAtlas__set_pixelSize_7fdb50(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  float fVar11;
  
  if ((bRam0000000001340417 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    bRam0000000001340417 = 1;
  }
  plVar3 = (long *)native_NGUIAtlas__get_replacement_7fcf60(param_2);
  if (plVar3 != (long *)0x0) {
    lVar5 = *plVar3;
    if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 6) * 0x10 + 0x138);
          goto LAB_007fdc2c;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
    }
    puVar4 = (undefined8 *)native_sub_3c9b34(plVar3,_INGUIAtlas_TypeInfo_12d4c68,6);
LAB_007fdc2c:
                    /* WARNING: Could not recover jumptable at 0x007fdc44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar4)(param_1,plVar3,puVar4[1]);
    return;
  }
  fVar11 = (float)native_UnityEngine_Mathf__Clamp_8e51ec(param_1,0x3e800000,0x40800000);
  if (*(float *)(param_2 + 0x28) == fVar11) {
    return;
  }
  *(float *)(param_2 + 0x28) = fVar11;
  if ((bRam0000000001340420 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&Method_NGUITools_FindActive_UILabel____12e5710);
    native_sub_43273c(&Method_NGUITools_FindActive_UISprite____12e5720);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&Method_UnityEngine_Resources_FindObjectsOfTypeAll_NGUIFont____12e6308);
    native_sub_43273c(&Method_UnityEngine_Resources_FindObjectsOfTypeAll_UIFont____12e6310);
    bRam0000000001340420 = 1;
  }
  plVar3 = (long *)native_NGUIAtlas__get_replacement_7fcf60(param_2);
  if (plVar3 != (long *)0x0) {
    lVar5 = *plVar3;
    if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xe) * 0x10 + 0x138);
          goto LAB_007fd248;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
    }
    puVar4 = (undefined8 *)native_sub_3c9b34(plVar3,_INGUIAtlas_TypeInfo_12d4c68,0xe);
LAB_007fd248:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar5 = native_NGUITools__FindActive_AudioListener__4a5b30
                    (_Method_NGUITools_FindActive_UISprite____12e5720);
  if (lVar5 == 0) {
LAB_007fd5d4:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  iVar9 = (int)*(undefined8 *)(lVar5 + 0x18);
  if (iVar9 < 1) {
LAB_007fd338:
    lVar5 = native_UnityEngine_Resources__FindObjectsOfTypeAll_NGUIFont__4a7c94
                      (_Method_UnityEngine_Resources_FindObjectsOfTypeAll_NGUIFont____12e6308);
    if (lVar5 == 0) goto LAB_007fd5d4;
    iVar9 = (int)*(undefined8 *)(lVar5 + 0x18);
    if (iVar9 < 1) {
LAB_007fd3f8:
      lVar5 = native_UnityEngine_Resources__FindObjectsOfTypeAll_NGUIFont__4a7c94
                        (_Method_UnityEngine_Resources_FindObjectsOfTypeAll_UIFont____12e6310);
      if (lVar5 == 0) goto LAB_007fd5d4;
      iVar9 = (int)*(undefined8 *)(lVar5 + 0x18);
      if (iVar9 < 1) {
LAB_007fd4bc:
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar5 = native_NGUITools__FindActive_AudioListener__4a5b30
                          (_Method_NGUITools_FindActive_UILabel____12e5710);
        if (lVar5 == 0) goto LAB_007fd5d4;
        iVar9 = (int)*(undefined8 *)(lVar5 + 0x18);
        if (iVar9 < 1) {
          return;
        }
        if (iVar9 != 0) {
          uVar10 = 0;
          do {
            lVar8 = *(long *)(lVar5 + (long)(int)uVar10 * 8 + 0x20);
            if (lVar8 == 0) goto LAB_007fd5d4;
            lVar2 = native_UILabel__get_atlas_ae7ac0(lVar8,0);
            if (lVar2 != 0) {
              uVar1 = native_UILabel__get_atlas_ae7ac0(lVar8,0);
              if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
              }
              uVar6 = native_NGUITools__CheckIfRelated_736edc(param_2,uVar1,0);
              if ((uVar6 & 1) != 0) {
                native_UILabel__get_atlas_ae7ac0(lVar8,0);
                uVar1 = native_UILabel__get_font_ae77e8(lVar8,0);
                native_UILabel__set_font_ae79c4(lVar8,0,0);
                native_UILabel__set_font_ae79c4(lVar8,uVar1,0);
              }
            }
            uVar10 = uVar10 + 1;
            if (iVar9 <= (int)uVar10) {
              return;
            }
          } while (uVar10 < *(uint *)(lVar5 + 0x18));
        }
      }
      else if (iVar9 != 0) {
        uVar10 = 0;
        do {
          lVar8 = *(long *)(lVar5 + (long)(int)uVar10 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_007fd5d4;
          uVar1 = native_UIFont__get_atlas_9ebd3c(lVar8,0);
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
          }
          uVar6 = native_NGUITools__CheckIfRelated_736edc(param_2,uVar1,0);
          if ((uVar6 & 1) != 0) {
            uVar1 = native_UIFont__get_atlas_9ebd3c(lVar8,0);
            native_UIFont__set_atlas_9ebe18(lVar8,0,0);
            native_UIFont__set_atlas_9ebe18(lVar8,uVar1,0);
          }
          uVar10 = uVar10 + 1;
          if (iVar9 <= (int)uVar10) goto LAB_007fd4bc;
        } while (uVar10 < *(uint *)(lVar5 + 0x18));
      }
    }
    else if (iVar9 != 0) {
      uVar10 = 0;
      do {
        lVar8 = *(long *)(lVar5 + (long)(int)uVar10 * 8 + 0x20);
        if (lVar8 == 0) goto LAB_007fd5d4;
        lVar2 = native_NGUIFont__get_atlas_7fe8f0(lVar8);
        if (lVar2 != 0) {
          uVar1 = native_NGUIFont__get_atlas_7fe8f0(lVar8);
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
          }
          uVar6 = native_NGUITools__CheckIfRelated_736edc(param_2,uVar1,0);
          if ((uVar6 & 1) != 0) {
            uVar1 = native_NGUIFont__get_atlas_7fe8f0(lVar8);
            native_NGUIFont__set_atlas_7fe9f4(lVar8,0);
            native_NGUIFont__set_atlas_7fe9f4(lVar8,uVar1);
          }
        }
        uVar10 = uVar10 + 1;
        if (iVar9 <= (int)uVar10) goto LAB_007fd3f8;
      } while (uVar10 < *(uint *)(lVar5 + 0x18));
    }
  }
  else if (iVar9 != 0) {
    uVar10 = 0;
    do {
      lVar8 = *(long *)(lVar5 + (long)(int)uVar10 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_007fd5d4;
      uVar1 = native_UISprite__get_atlas_c358c4(lVar8,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
      }
      uVar6 = native_NGUITools__CheckIfRelated_736edc(param_2,uVar1,0);
      if ((uVar6 & 1) != 0) {
        uVar1 = native_UISprite__get_atlas_c358c4(lVar8,0);
        native_UISprite__set_atlas_c35910(lVar8,0,0);
        native_UISprite__set_atlas_c35910(lVar8,uVar1,0);
      }
      uVar10 = uVar10 + 1;
      if (iVar9 <= (int)uVar10) goto LAB_007fd338;
    } while (uVar10 < *(uint *)(lVar5 + 0x18));
  }
  uVar1 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,0);
}



/* NGUIAtlas$$get_replacement @ 0x7fcf60
 * INGUIAtlas_o* NGUIAtlas__get_replacement (NGUIAtlas_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIAtlas$$get_replacement
   INGUIAtlas_o* NGUIAtlas__get_replacement (NGUIAtlas_o* __this, const MethodInfo* method); */

long * native_NGUIAtlas__get_replacement_7fcf60(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *plStack_28;
  
  if ((bRam0000000001340418 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001340418 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar5,0,0);
  lVar1 = _INGUIAtlas_TypeInfo_12d4c68;
  if ((uVar3 & 1) == 0) {
    plVar4 = *(long **)(param_1 + 0x30);
    if (plVar4 != (long *)0x0) {
      lVar6 = *plVar4;
      uVar3 = native_sub_3c5e78(_INGUIAtlas_TypeInfo_12d4c68,lVar6);
      if ((uVar3 & 1) == 0) {
        if ((*(byte *)(lVar6 + 0x133) >> 4 & 1) == 0) {
          plVar4 = (long *)0x0;
        }
        else {
          if (((((*(byte *)(lVar1 + 0x114) >> 5 & 1) != 0) || (*(char *)(lVar1 + 0x2a) == '\x1e'))
              || (*(char *)(lVar1 + 0x2a) == '\x13')) &&
             ((*(long *)(lVar1 + 0x70) != 0 &&
              (lVar6 = *(long *)(*(long *)(lVar1 + 0x70) + 0x28), lVar6 != 0)))) {
            plStack_28 = (long *)native_sub_3d76d0(plVar4,lVar6);
            if (plStack_28 != (long *)0x0) {
              return plVar4;
            }
            iVar2 = (*(code *)**(undefined8 **)plVar4[2])((undefined8 *)plVar4[2],lVar6,&plStack_28)
            ;
            if (-1 < iVar2) {
              uVar3 = native_sub_3d7780(plVar4,lVar6,plStack_28);
              if ((uVar3 & 1) == 0) {
                (**(code **)(*plStack_28 + 0x10))(plStack_28);
                plStack_28 = (long *)native_sub_3d76d0(plVar4,lVar6);
              }
              if (plStack_28 != (long *)0x0) {
                return plVar4;
              }
            }
          }
          if (lRam00000000013443f8 != lVar1) {
            plVar4 = (long *)0x0;
          }
        }
      }
    }
    return plVar4;
  }
  return (long *)0x0;
}



/* NGUIAtlas$$set_replacement @ 0x7fdc58
 * void NGUIAtlas__set_replacement (NGUIAtlas_o* __this, INGUIAtlas_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIAtlas$$set_replacement
   void NGUIAtlas__set_replacement (NGUIAtlas_o* __this, INGUIAtlas_o* value, const MethodInfo*
   method); */

void native_NGUIAtlas__set_replacement_7fdc58(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  uint uVar12;
  
  if ((bRam0000000001340419 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001340419 = 1;
  }
  plVar10 = param_1 + 6;
  plVar1 = (long *)0x0;
  if (param_1 != param_2) {
    plVar1 = param_2;
  }
  plVar4 = (long *)native_sub_4327f8(*plVar10,_INGUIAtlas_TypeInfo_12d4c68);
  if (plVar4 == plVar1) {
    return;
  }
  if (plVar1 != (long *)0x0) {
    lVar6 = *plVar1;
    if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 8) * 0x10 + 0x138);
          goto LAB_007fdd38;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
    }
    puVar5 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIAtlas_TypeInfo_12d4c68,8);
LAB_007fdd38:
    plVar4 = (long *)(*(code *)*puVar5)(plVar1,puVar5[1]);
    if (plVar4 == param_1) {
      lVar6 = *plVar1;
      if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 9) * 0x10 + 0x138);
            goto LAB_007fdda4;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
      }
      puVar5 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIAtlas_TypeInfo_12d4c68,9);
LAB_007fdda4:
      (*(code *)*puVar5)(plVar1,0,puVar5[1]);
    }
  }
  lVar6 = *plVar10;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar6,0,0);
  if ((uVar7 & 1) != 0) {
    native_NGUIAtlas__MarkAsChanged_7fd160(param_1);
  }
  if (plVar1 == (long *)0x0) {
LAB_007fde10:
    plVar4 = (long *)0x0;
  }
  else {
    if (*(byte *)(*plVar1 + 300) < *(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 300))
    goto LAB_007fde10;
    plVar4 = plVar1;
    if (*(long *)(*(long *)(*plVar1 + 200) +
                  (ulong)*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 300) * 8 + -8) !=
        _UnityEngine_Object_TypeInfo_12d54e0) {
      plVar4 = (long *)0x0;
    }
  }
  *plVar10 = (long)plVar4;
  native_sub_4326e0(plVar10);
  if (plVar1 != (long *)0x0) {
    param_1[3] = 0;
    native_sub_4326e0(param_1 + 3,0);
  }
  if ((bRam0000000001340420 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&Method_NGUITools_FindActive_UILabel____12e5710);
    native_sub_43273c(&Method_NGUITools_FindActive_UISprite____12e5720);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&Method_UnityEngine_Resources_FindObjectsOfTypeAll_NGUIFont____12e6308);
    native_sub_43273c(&Method_UnityEngine_Resources_FindObjectsOfTypeAll_UIFont____12e6310);
    bRam0000000001340420 = 1;
  }
  plVar1 = (long *)native_NGUIAtlas__get_replacement_7fcf60(param_1);
  if (plVar1 != (long *)0x0) {
    lVar6 = *plVar1;
    if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
          goto LAB_007fd248;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
    }
    puVar5 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIAtlas_TypeInfo_12d4c68,0xe);
LAB_007fd248:
    (*(code *)*puVar5)(plVar1,puVar5[1]);
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = native_NGUITools__FindActive_AudioListener__4a5b30
                    (_Method_NGUITools_FindActive_UISprite____12e5720);
  if (lVar6 != 0) {
    iVar11 = (int)*(undefined8 *)(lVar6 + 0x18);
    if (iVar11 < 1) {
LAB_007fd338:
      lVar6 = native_UnityEngine_Resources__FindObjectsOfTypeAll_NGUIFont__4a7c94
                        (_Method_UnityEngine_Resources_FindObjectsOfTypeAll_NGUIFont____12e6308);
      if (lVar6 == 0) goto LAB_007fd5d4;
      iVar11 = (int)*(undefined8 *)(lVar6 + 0x18);
      if (iVar11 < 1) {
LAB_007fd3f8:
        lVar6 = native_UnityEngine_Resources__FindObjectsOfTypeAll_NGUIFont__4a7c94
                          (_Method_UnityEngine_Resources_FindObjectsOfTypeAll_UIFont____12e6310);
        if (lVar6 == 0) goto LAB_007fd5d4;
        iVar11 = (int)*(undefined8 *)(lVar6 + 0x18);
        if (iVar11 < 1) {
LAB_007fd4bc:
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar6 = native_NGUITools__FindActive_AudioListener__4a5b30
                            (_Method_NGUITools_FindActive_UILabel____12e5710);
          if (lVar6 == 0) goto LAB_007fd5d4;
          iVar11 = (int)*(undefined8 *)(lVar6 + 0x18);
          if (iVar11 < 1) {
            return;
          }
          if (iVar11 != 0) {
            uVar12 = 0;
            do {
              lVar9 = *(long *)(lVar6 + (long)(int)uVar12 * 8 + 0x20);
              if (lVar9 == 0) goto LAB_007fd5d4;
              lVar3 = native_UILabel__get_atlas_ae7ac0(lVar9,0);
              if (lVar3 != 0) {
                uVar2 = native_UILabel__get_atlas_ae7ac0(lVar9,0);
                if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                  native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
                }
                uVar7 = native_NGUITools__CheckIfRelated_736edc(param_1,uVar2,0);
                if ((uVar7 & 1) != 0) {
                  native_UILabel__get_atlas_ae7ac0(lVar9,0);
                  uVar2 = native_UILabel__get_font_ae77e8(lVar9,0);
                  native_UILabel__set_font_ae79c4(lVar9,0,0);
                  native_UILabel__set_font_ae79c4(lVar9,uVar2,0);
                }
              }
              uVar12 = uVar12 + 1;
              if (iVar11 <= (int)uVar12) {
                return;
              }
            } while (uVar12 < *(uint *)(lVar6 + 0x18));
          }
        }
        else if (iVar11 != 0) {
          uVar12 = 0;
          do {
            lVar9 = *(long *)(lVar6 + (long)(int)uVar12 * 8 + 0x20);
            if (lVar9 == 0) goto LAB_007fd5d4;
            uVar2 = native_UIFont__get_atlas_9ebd3c(lVar9,0);
            if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
              native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
            }
            uVar7 = native_NGUITools__CheckIfRelated_736edc(param_1,uVar2,0);
            if ((uVar7 & 1) != 0) {
              uVar2 = native_UIFont__get_atlas_9ebd3c(lVar9,0);
              native_UIFont__set_atlas_9ebe18(lVar9,0,0);
              native_UIFont__set_atlas_9ebe18(lVar9,uVar2,0);
            }
            uVar12 = uVar12 + 1;
            if (iVar11 <= (int)uVar12) goto LAB_007fd4bc;
          } while (uVar12 < *(uint *)(lVar6 + 0x18));
        }
      }
      else if (iVar11 != 0) {
        uVar12 = 0;
        do {
          lVar9 = *(long *)(lVar6 + (long)(int)uVar12 * 8 + 0x20);
          if (lVar9 == 0) goto LAB_007fd5d4;
          lVar3 = native_NGUIFont__get_atlas_7fe8f0(lVar9);
          if (lVar3 != 0) {
            uVar2 = native_NGUIFont__get_atlas_7fe8f0(lVar9);
            if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
              native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
            }
            uVar7 = native_NGUITools__CheckIfRelated_736edc(param_1,uVar2,0);
            if ((uVar7 & 1) != 0) {
              uVar2 = native_NGUIFont__get_atlas_7fe8f0(lVar9);
              native_NGUIFont__set_atlas_7fe9f4(lVar9,0);
              native_NGUIFont__set_atlas_7fe9f4(lVar9,uVar2);
            }
          }
          uVar12 = uVar12 + 1;
          if (iVar11 <= (int)uVar12) goto LAB_007fd3f8;
        } while (uVar12 < *(uint *)(lVar6 + 0x18));
      }
    }
    else if (iVar11 != 0) {
      uVar12 = 0;
      do {
        lVar9 = *(long *)(lVar6 + (long)(int)uVar12 * 8 + 0x20);
        if (lVar9 == 0) goto LAB_007fd5d4;
        uVar2 = native_UISprite__get_atlas_c358c4(lVar9,0);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
        }
        uVar7 = native_NGUITools__CheckIfRelated_736edc(param_1,uVar2,0);
        if ((uVar7 & 1) != 0) {
          uVar2 = native_UISprite__get_atlas_c358c4(lVar9,0);
          native_UISprite__set_atlas_c35910(lVar9,0,0);
          native_UISprite__set_atlas_c35910(lVar9,uVar2,0);
        }
        uVar12 = uVar12 + 1;
        if (iVar11 <= (int)uVar12) goto LAB_007fd338;
      } while (uVar12 < *(uint *)(lVar6 + 0x18));
    }
    uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar2,0);
  }
LAB_007fd5d4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIAtlas$$GetSprite @ 0x7fde64
 * UISpriteData_o* NGUIAtlas__GetSprite (NGUIAtlas_o* __this, System_String_o* name, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIAtlas$$GetSprite
   UISpriteData_o* NGUIAtlas__GetSprite (NGUIAtlas_o* __this, System_String_o* name, const
   MethodInfo* method); */

undefined8 native_NGUIAtlas__GetSprite_7fde64(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  int iVar11;
  uint uStack_54;
  
  if ((bRam000000000134041a & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__int__TryGetValue___12d9800
                     );
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_string__int__get_Count___12d9808
                     );
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_string__int__set_Item___12d9818)
    ;
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&Method_System_Collections_Generic_List_UISpriteData__get_Count___12dd3c8);
    native_sub_43273c(&Method_System_Collections_Generic_List_UISpriteData__get_Item___12dd3d0);
    bRam000000000134041a = 1;
  }
  uStack_54 = 0;
  plVar3 = (long *)native_NGUIAtlas__get_replacement_7fcf60(param_1);
  if (plVar3 == (long *)0x0) {
    uVar5 = native_System_String__IsNullOrEmpty_b09430(param_2,0);
    uVar8 = 0;
    if ((uVar5 & 1) != 0) {
      return 0;
    }
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_007fe0a0;
    if (*(int *)(*(long *)(param_1 + 0x20) + 0x18) != 0) {
      uVar8 = 0;
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_007fe0a0;
      uVar8 = native_System_Collections_Generic_Dictionary_object__int___get_Count_cd72cc
                        (*(long *)(param_1 + 0x40),
                         _Method_System_Collections_Generic_Dictionary_string__int__get_Count___12d9808
                        );
      if ((int)uVar8 == 0) {
        lVar7 = *(long *)(param_1 + 0x20);
        if (lVar7 == 0) goto LAB_007fe0a0;
        iVar1 = *(int *)(lVar7 + 0x18);
        if (0 < iVar1) {
          iVar11 = 1;
          do {
            lVar10 = *(long *)(param_1 + 0x40);
            uVar2 = iVar11 - 1;
            if (*(uint *)(lVar7 + 0x18) <= uVar2) {
              uVar8 = native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            }
            lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + (long)(int)uVar2 * 8 + 0x20);
            if ((lVar7 == 0) || (lVar10 == 0)) break;
            uVar8 = native_System_Collections_Generic_Dictionary_Font__int___set_Item_cd7510
                              (lVar10,*(undefined8 *)(lVar7 + 0x10),uVar2,
                               _Method_System_Collections_Generic_Dictionary_string__int__set_Item___12d9818
                              );
            if (iVar1 <= iVar11) goto LAB_007fe044;
            lVar7 = *(long *)(param_1 + 0x20);
            iVar11 = iVar11 + 1;
          } while (lVar7 != 0);
          goto LAB_007fe0a0;
        }
      }
LAB_007fe044:
      uVar8 = 0;
      if (*(long *)(param_1 + 0x40) == 0) {
LAB_007fe0a0:
                    /* WARNING: Subroutine does not return */
        native_sub_432810(uVar8);
      }
      uVar8 = native_System_Collections_Generic_Dictionary_Font__int___TryGetValue_cd92ec
                        (*(long *)(param_1 + 0x40),param_2,&uStack_54,
                         _Method_System_Collections_Generic_Dictionary_string__int__TryGetValue___12d9800
                        );
      if ((uVar8 & 1) != 0) {
        lVar7 = *(long *)(param_1 + 0x20);
        if (lVar7 != 0) {
          lVar10 = (long)(int)uStack_54;
          if (*(uint *)(lVar7 + 0x18) <= uStack_54) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          return *(undefined8 *)(*(long *)(lVar7 + 0x10) + lVar10 * 8 + 0x20);
        }
        goto LAB_007fe0a0;
      }
    }
    uVar6 = 0;
  }
  else {
    lVar7 = *plVar3;
    if ((ulong)*(ushort *)(lVar7 + 0x12a) != 0) {
      uVar8 = 0;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 10) * 0x10 + 0x138);
          goto LAB_007fe018;
        }
        uVar8 = uVar8 + 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 < *(ushort *)(lVar7 + 0x12a));
    }
    puVar4 = (undefined8 *)native_sub_3c9b34(plVar3,_INGUIAtlas_TypeInfo_12d4c68,10);
LAB_007fe018:
    uVar6 = (*(code *)*puVar4)(plVar3,param_2,puVar4[1]);
  }
  return uVar6;
}



/* NGUIAtlas$$RebuildSpriteCache @ 0x7fe0a4
 * void NGUIAtlas__RebuildSpriteCache (NGUIAtlas_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIAtlas$$RebuildSpriteCache
   void NGUIAtlas__RebuildSpriteCache (NGUIAtlas_o* __this, const MethodInfo* method); */

void native_NGUIAtlas__RebuildSpriteCache_7fe0a4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  if ((bRam000000000134041b & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_string__int__Clear___12d97e8);
    bRam000000000134041b = 1;
  }
  uVar2 = _Method_System_Collections_Generic_Dictionary_string__int__Clear___12d97e8;
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (*(int *)(lVar1 + 0x20) < 1) {
    return;
  }
  lVar4 = *(long *)(lVar1 + 0x10);
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)uVar3) {
        native_System_Array__Clear_95191c
                  (*(undefined8 *)(lVar1 + 0x18),0,*(undefined4 *)(lVar1 + 0x20),0);
        *(undefined8 *)(lVar1 + 0x28) = 0xffffffff;
        *(undefined4 *)(lVar1 + 0x20) = 0;
        *(int *)(lVar1 + 0x24) = *(int *)(lVar1 + 0x24) + 1;
        return;
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar3) {
        uVar2 = native_sub_43283c(lVar1,uVar2);
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar2,0);
      }
      *(undefined4 *)(lVar4 + uVar3 * 4 + 0x20) = 0xffffffff;
      lVar4 = *(long *)(lVar1 + 0x10);
      uVar3 = uVar3 + 1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIAtlas$$SortAlphabetically @ 0x7fe0f8
 * void NGUIAtlas__SortAlphabetically (NGUIAtlas_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIAtlas$$SortAlphabetically
   void NGUIAtlas__SortAlphabetically (NGUIAtlas_o* __this, const MethodInfo* method); */

void native_NGUIAtlas__SortAlphabetically_7fe0f8(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((bRam000000000134041c & 1) == 0) {
    native_sub_43273c(&Method_System_Comparison_UISpriteData___ctor___12d8b50);
    native_sub_43273c(&System_Comparison_UISpriteData__TypeInfo_12d21f0);
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_string__int__Clear___12d97e8);
    native_sub_43273c(&Method_System_Collections_Generic_List_UISpriteData__Sort___12dd3c0);
    native_sub_43273c(&Method_NGUIAtlas___c__SortAlphabetically_b__25_0___12e9c78);
    native_sub_43273c(&NGUIAtlas___c_TypeInfo_12d7470);
    bRam000000000134041c = 1;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if (((*(byte *)(_NGUIAtlas___c_TypeInfo_12d7470 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIAtlas___c_TypeInfo_12d7470 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  puVar2 = *(undefined8 **)(_NGUIAtlas___c_TypeInfo_12d7470 + 0xb8);
  lVar5 = puVar2[1];
  if (lVar5 == 0) {
    if (((*(byte *)(_NGUIAtlas___c_TypeInfo_12d7470 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIAtlas___c_TypeInfo_12d7470 + 0xe0) == 0)) {
      native_sub_4327ec();
      puVar2 = *(undefined8 **)(_NGUIAtlas___c_TypeInfo_12d7470 + 0xb8);
    }
    uVar6 = *puVar2;
    lVar5 = native_sub_432808(_System_Comparison_UISpriteData__TypeInfo_12d21f0);
    native_System_Comparison_ABSSequentiable____ctor_bbdf08
              (lVar5,uVar6,_Method_NGUIAtlas___c__SortAlphabetically_b__25_0___12e9c78,
               _Method_System_Comparison_UISpriteData___ctor___12d8b50);
    plVar1 = (long *)(*(long *)(_NGUIAtlas___c_TypeInfo_12d7470 + 0xb8) + 8);
    *plVar1 = lVar5;
    native_sub_4326e0(plVar1,lVar5);
  }
  if (lVar4 != 0) {
    native_System_Collections_Generic_List_ABSSequentiable___Sort_d4266c
              (lVar4,lVar5,_Method_System_Collections_Generic_List_UISpriteData__Sort___12dd3c0);
    uVar6 = _Method_System_Collections_Generic_Dictionary_string__int__Clear___12d97e8;
    lVar4 = *(long *)(param_1 + 0x40);
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x20) < 1) {
        return;
      }
      lVar5 = *(long *)(lVar4 + 0x10);
      if (lVar5 != 0) {
        uVar3 = 0;
        do {
          if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)uVar3) {
            native_System_Array__Clear_95191c
                      (*(undefined8 *)(lVar4 + 0x18),0,*(undefined4 *)(lVar4 + 0x20),0);
            *(undefined8 *)(lVar4 + 0x28) = 0xffffffff;
            *(undefined4 *)(lVar4 + 0x20) = 0;
            *(int *)(lVar4 + 0x24) = *(int *)(lVar4 + 0x24) + 1;
            return;
          }
          if (*(uint *)(lVar5 + 0x18) <= uVar3) {
            uVar6 = native_sub_43283c(lVar4,uVar6);
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar6,0);
          }
          *(undefined4 *)(lVar5 + uVar3 * 4 + 0x20) = 0xffffffff;
          lVar5 = *(long *)(lVar4 + 0x10);
          uVar3 = uVar3 + 1;
        } while (lVar5 != 0);
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIAtlas$$GetListOfSprites @ 0x7fe250
 * BetterList_string__o* NGUIAtlas__GetListOfSprites (NGUIAtlas_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIAtlas$$GetListOfSprites
   BetterList_string__o* NGUIAtlas__GetListOfSprites (NGUIAtlas_o* __this, const MethodInfo*
   method); */

long native_NGUIAtlas__GetListOfSprites_7fe250(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  
  if ((bRam000000000134041d & 1) == 0) {
    native_sub_43273c(&Method_BetterList_string__Add___12d8960);
    native_sub_43273c(&Method_BetterList_string___ctor___12d8958);
    native_sub_43273c(&BetterList_string__TypeInfo_12d2120);
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&Method_System_Collections_Generic_List_UISpriteData__get_Count___12dd3c8);
    native_sub_43273c(&Method_System_Collections_Generic_List_UISpriteData__get_Item___12dd3d0);
    bRam000000000134041d = 1;
  }
  plVar2 = (long *)native_NGUIAtlas__get_replacement_7fcf60(param_1);
  if (plVar2 == (long *)0x0) {
    lVar5 = native_sub_432808(_BetterList_string__TypeInfo_12d2120);
    native_BetterList_object____ctor_ba2d1c(lVar5,_Method_BetterList_string___ctor___12d8958);
    lVar8 = *(long *)(param_1 + 0x20);
    if (lVar8 != 0) {
      iVar1 = *(int *)(lVar8 + 0x18);
      if (iVar1 < 1) {
        return lVar5;
      }
      uVar6 = 0;
      do {
        if (*(uint *)(lVar8 + 0x18) <= uVar6) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0x10) + uVar6 * 8 + 0x20);
        if ((lVar8 != 0) &&
           (uVar4 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(lVar8 + 0x10),0),
           (uVar4 & 1) == 0)) {
          if (lVar5 == 0) break;
          native_BetterList_object___Add_ba24d8
                    (lVar5,*(undefined8 *)(lVar8 + 0x10),_Method_BetterList_string__Add___12d8960);
        }
        uVar6 = uVar6 + 1;
        if ((long)iVar1 <= (long)uVar6) {
          return lVar5;
        }
        lVar8 = *(long *)(param_1 + 0x20);
      } while (lVar8 != 0);
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar5 = *plVar2;
  if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
    uVar6 = 0;
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xb) * 0x10 + 0x138);
        goto LAB_007fe3f0;
      }
      uVar6 = uVar6 + 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
  }
  puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_INGUIAtlas_TypeInfo_12d4c68,0xb);
LAB_007fe3f0:
                    /* WARNING: Could not recover jumptable at 0x007fe408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  return lVar5;
}



/* NGUIAtlas$$GetListOfSprites @ 0x7fe40c
 * BetterList_string__o* NGUIAtlas__GetListOfSprites (NGUIAtlas_o* __this, System_String_o* match, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIAtlas$$GetListOfSprites
   BetterList_string__o* NGUIAtlas__GetListOfSprites (NGUIAtlas_o* __this, System_String_o* match,
   const MethodInfo* method); */

long native_NGUIAtlas__GetListOfSprites_7fe40c(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  
  if ((bRam000000000134041e & 1) == 0) {
    native_sub_43273c(&Method_BetterList_string__Add___12d8960);
    native_sub_43273c(&Method_BetterList_string___ctor___12d8958);
    native_sub_43273c(&BetterList_string__TypeInfo_12d2120);
    native_sub_43273c(&char___TypeInfo_12d3090);
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&Method_System_Collections_Generic_List_UISpriteData__get_Count___12dd3c8);
    native_sub_43273c(&Method_System_Collections_Generic_List_UISpriteData__get_Item___12dd3d0);
    bRam000000000134041e = 1;
  }
  plVar4 = (long *)native_NGUIAtlas__get_replacement_7fcf60(param_1);
  if (plVar4 == (long *)0x0) {
    uVar11 = native_System_String__IsNullOrEmpty_b09430(param_2,0);
    if ((uVar11 & 1) == 0) {
      lVar9 = native_sub_432808(_BetterList_string__TypeInfo_12d2120);
      native_BetterList_object____ctor_ba2d1c(lVar9,_Method_BetterList_string___ctor___12d8958);
      lVar15 = *(long *)(param_1 + 0x20);
      if (lVar15 != 0) {
        iVar1 = *(int *)(lVar15 + 0x18);
        if (iVar1 < 1) {
LAB_007fe600:
          lVar15 = native_sub_432750(_char___TypeInfo_12d3090,1);
          if (lVar15 != 0) {
            if (*(int *)(lVar15 + 0x18) == 0) {
LAB_007fe7ec:
              uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar7,0);
            }
            *(undefined2 *)(lVar15 + 0x20) = 0x20;
            if ((param_2 != 0) &&
               (plVar4 = (long *)native_System_String__Split_b09880(param_2,lVar15,1,0),
               plVar4 != (long *)0x0)) {
              uVar8 = *(uint *)(plVar4 + 3);
              if (0 < (int)uVar8) {
                uVar14 = 0;
                do {
                  if (uVar8 <= uVar14) goto LAB_007fe7ec;
                  plVar13 = plVar4 + (long)(int)uVar14 + 4;
                  if (*plVar13 == 0) goto LAB_007fe7ac;
                  lVar15 = native_System_String__ToLower_b0cf38(*plVar13,0);
                  if ((lVar15 != 0) &&
                     (lVar6 = native_sub_4327f8(lVar15,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)
                     ) {
                    uVar7 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
                    native_sub_4327dc(uVar7,0);
                  }
                  if (*(uint *)(plVar4 + 3) <= uVar14) goto LAB_007fe7ec;
                  *plVar13 = lVar15;
                  native_sub_4326e0(plVar13,lVar15);
                  uVar8 = *(uint *)(plVar4 + 3);
                  uVar14 = uVar14 + 1;
                } while ((int)uVar14 < (int)uVar8);
              }
              lVar15 = *(long *)(param_1 + 0x20);
              if (lVar15 != 0) {
                iVar1 = *(int *)(lVar15 + 0x18);
                if (iVar1 < 1) {
                  return lVar9;
                }
                uVar11 = 0;
                do {
                  if (*(uint *)(lVar15 + 0x18) <= uVar11) {
                    native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
                  }
                  lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + uVar11 * 8 + 0x20);
                  if ((lVar15 != 0) &&
                     (uVar3 = native_System_String__IsNullOrEmpty_b09430
                                        (*(undefined8 *)(lVar15 + 0x10),0), (uVar3 & 1) == 0)) {
                    if (*(long *)(lVar15 + 0x10) == 0) break;
                    lVar6 = native_System_String__ToLower_b0cf38(*(long *)(lVar15 + 0x10),0);
                    uVar8 = (uint)plVar4[3];
                    if ((int)uVar8 < 1) {
                      uVar14 = 0;
                    }
                    else {
                      uVar3 = 0;
                      uVar14 = 0;
                      uVar10 = plVar4[3] & 0xffffffff;
                      do {
                        if (uVar10 <= uVar3) goto LAB_007fe7ec;
                        if (lVar6 == 0) goto LAB_007fe7ac;
                        uVar2 = native_System_String__Contains_b0bafc(lVar6,plVar4[uVar3 + 4],0);
                        uVar8 = *(uint *)(plVar4 + 3);
                        uVar10 = (ulong)uVar8;
                        uVar3 = uVar3 + 1;
                        uVar14 = uVar14 + (uVar2 & 1);
                      } while ((long)uVar3 < (long)(int)uVar8);
                    }
                    if (uVar14 == uVar8) {
                      if (lVar9 == 0) break;
                      native_BetterList_object___Add_ba24d8
                                (lVar9,*(undefined8 *)(lVar15 + 0x10),
                                 _Method_BetterList_string__Add___12d8960);
                    }
                  }
                  uVar11 = uVar11 + 1;
                  if ((long)iVar1 <= (long)uVar11) {
                    return lVar9;
                  }
                  lVar15 = *(long *)(param_1 + 0x20);
                } while (lVar15 != 0);
              }
            }
          }
        }
        else {
          uVar11 = 0;
          do {
            if (*(uint *)(lVar15 + 0x18) <= uVar11) {
              native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            }
            lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + uVar11 * 8 + 0x20);
            if (((lVar15 != 0) &&
                (uVar3 = native_System_String__IsNullOrEmpty_b09430
                                   (*(undefined8 *)(lVar15 + 0x10),0), (uVar3 & 1) == 0)) &&
               (uVar3 = native_System_String__Equals_b090d0
                                  (param_2,*(undefined8 *)(lVar15 + 0x10),5,0), (uVar3 & 1) != 0)) {
              if (lVar9 != 0) {
                native_BetterList_object___Add_ba24d8
                          (lVar9,*(undefined8 *)(lVar15 + 0x10),
                           _Method_BetterList_string__Add___12d8960);
                return lVar9;
              }
              break;
            }
            uVar11 = uVar11 + 1;
            if ((long)iVar1 <= (long)uVar11) goto LAB_007fe600;
            lVar15 = *(long *)(param_1 + 0x20);
          } while (lVar15 != 0);
        }
      }
LAB_007fe7ac:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    if ((bRam000000000134041d & 1) == 0) {
      native_sub_43273c(&Method_BetterList_string__Add___12d8960);
      native_sub_43273c(&Method_BetterList_string___ctor___12d8958);
      native_sub_43273c(&BetterList_string__TypeInfo_12d2120);
      native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
      native_sub_43273c(&Method_System_Collections_Generic_List_UISpriteData__get_Count___12dd3c8);
      native_sub_43273c(&Method_System_Collections_Generic_List_UISpriteData__get_Item___12dd3d0);
      bRam000000000134041d = 1;
    }
    plVar4 = (long *)native_NGUIAtlas__get_replacement_7fcf60(param_1);
    if (plVar4 == (long *)0x0) {
      lVar9 = native_sub_432808(_BetterList_string__TypeInfo_12d2120);
      native_BetterList_object____ctor_ba2d1c(lVar9,_Method_BetterList_string___ctor___12d8958);
      lVar15 = *(long *)(param_1 + 0x20);
      if (lVar15 != 0) {
        iVar1 = *(int *)(lVar15 + 0x18);
        if (iVar1 < 1) {
          return lVar9;
        }
        uVar11 = 0;
        do {
          if (*(uint *)(lVar15 + 0x18) <= uVar11) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + uVar11 * 8 + 0x20);
          if ((lVar15 != 0) &&
             (uVar3 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(lVar15 + 0x10),0),
             (uVar3 & 1) == 0)) {
            if (lVar9 == 0) break;
            native_BetterList_object___Add_ba24d8
                      (lVar9,*(undefined8 *)(lVar15 + 0x10),_Method_BetterList_string__Add___12d8960
                      );
          }
          uVar11 = uVar11 + 1;
          if ((long)iVar1 <= (long)uVar11) {
            return lVar9;
          }
          lVar15 = *(long *)(param_1 + 0x20);
        } while (lVar15 != 0);
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    lVar9 = *plVar4;
    if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
      uVar11 = 0;
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar12 + 0xb) * 0x10 + 0x138);
          goto LAB_007fe3f0;
        }
        uVar11 = uVar11 + 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 < *(ushort *)(lVar9 + 0x12a));
    }
    puVar5 = (undefined8 *)native_sub_3c9b34(plVar4,_INGUIAtlas_TypeInfo_12d4c68,0xb);
LAB_007fe3f0:
                    /* WARNING: Could not recover jumptable at 0x007fe408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    return lVar9;
  }
  lVar9 = *plVar4;
  if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
    uVar11 = 0;
    piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
        puVar5 = (undefined8 *)(lVar9 + (long)(*piVar12 + 0xc) * 0x10 + 0x138);
        goto LAB_007fe538;
      }
      uVar11 = uVar11 + 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 < *(ushort *)(lVar9 + 0x12a));
  }
  puVar5 = (undefined8 *)native_sub_3c9b34(plVar4,_INGUIAtlas_TypeInfo_12d4c68,0xc);
LAB_007fe538:
                    /* WARNING: Could not recover jumptable at 0x007fe55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar9 = (*(code *)*puVar5)(plVar4,param_2,puVar5[1]);
  return lVar9;
}



/* NGUIAtlas$$References @ 0x7fe804
 * bool NGUIAtlas__References (NGUIAtlas_o* __this, INGUIAtlas_o* atlas, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIAtlas$$References
   bool NGUIAtlas__References (NGUIAtlas_o* __this, INGUIAtlas_o* atlas, const MethodInfo* method);
    */

undefined8 native_NGUIAtlas__References_7fe804(long param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((bRam000000000134041f & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    bRam000000000134041f = 1;
  }
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else if (param_1 == param_2) {
    uVar3 = 1;
  }
  else {
    plVar1 = (long *)native_NGUIAtlas__get_replacement_7fcf60(param_1);
    uVar3 = 0;
    if (plVar1 != (long *)0x0) {
      lVar4 = *plVar1;
      if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
        uVar5 = 0;
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xd) * 0x10 + 0x138);
            goto LAB_007fe8d4;
          }
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
      }
      puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIAtlas_TypeInfo_12d4c68,0xd);
LAB_007fe8d4:
                    /* WARNING: Could not recover jumptable at 0x007fe8ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)*puVar2)(plVar1,param_2,puVar2[1]);
      return uVar3;
    }
  }
  return uVar3;
}



/* NGUIAtlas$$MarkAsChanged @ 0x7fd160
 * void NGUIAtlas__MarkAsChanged (NGUIAtlas_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIAtlas$$MarkAsChanged
   void NGUIAtlas__MarkAsChanged (NGUIAtlas_o* __this, const MethodInfo* method); */

void native_NGUIAtlas__MarkAsChanged_7fd160(undefined8 param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  
  if ((bRam0000000001340420 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&Method_NGUITools_FindActive_UILabel____12e5710);
    native_sub_43273c(&Method_NGUITools_FindActive_UISprite____12e5720);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&Method_UnityEngine_Resources_FindObjectsOfTypeAll_NGUIFont____12e6308);
    native_sub_43273c(&Method_UnityEngine_Resources_FindObjectsOfTypeAll_UIFont____12e6310);
    bRam0000000001340420 = 1;
  }
  plVar1 = (long *)native_NGUIAtlas__get_replacement_7fcf60(param_1);
  if (plVar1 != (long *)0x0) {
    lVar5 = *plVar1;
    if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xe) * 0x10 + 0x138);
          goto LAB_007fd248;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
    }
    puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIAtlas_TypeInfo_12d4c68,0xe);
LAB_007fd248:
    (*(code *)*puVar2)(plVar1,puVar2[1]);
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar5 = native_NGUITools__FindActive_AudioListener__4a5b30
                    (_Method_NGUITools_FindActive_UISprite____12e5720);
  if (lVar5 != 0) {
    iVar9 = (int)*(undefined8 *)(lVar5 + 0x18);
    if (iVar9 < 1) {
LAB_007fd338:
      lVar5 = native_UnityEngine_Resources__FindObjectsOfTypeAll_NGUIFont__4a7c94
                        (_Method_UnityEngine_Resources_FindObjectsOfTypeAll_NGUIFont____12e6308);
      if (lVar5 == 0) goto LAB_007fd5d4;
      iVar9 = (int)*(undefined8 *)(lVar5 + 0x18);
      if (iVar9 < 1) {
LAB_007fd3f8:
        lVar5 = native_UnityEngine_Resources__FindObjectsOfTypeAll_NGUIFont__4a7c94
                          (_Method_UnityEngine_Resources_FindObjectsOfTypeAll_UIFont____12e6310);
        if (lVar5 == 0) goto LAB_007fd5d4;
        iVar9 = (int)*(undefined8 *)(lVar5 + 0x18);
        if (iVar9 < 1) {
LAB_007fd4bc:
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar5 = native_NGUITools__FindActive_AudioListener__4a5b30
                            (_Method_NGUITools_FindActive_UILabel____12e5710);
          if (lVar5 == 0) goto LAB_007fd5d4;
          iVar9 = (int)*(undefined8 *)(lVar5 + 0x18);
          if (iVar9 < 1) {
            return;
          }
          if (iVar9 != 0) {
            uVar10 = 0;
            do {
              lVar8 = *(long *)(lVar5 + (long)(int)uVar10 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_007fd5d4;
              lVar4 = native_UILabel__get_atlas_ae7ac0(lVar8,0);
              if (lVar4 != 0) {
                uVar3 = native_UILabel__get_atlas_ae7ac0(lVar8,0);
                if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                  native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
                }
                uVar6 = native_NGUITools__CheckIfRelated_736edc(param_1,uVar3,0);
                if ((uVar6 & 1) != 0) {
                  native_UILabel__get_atlas_ae7ac0(lVar8,0);
                  uVar3 = native_UILabel__get_font_ae77e8(lVar8,0);
                  native_UILabel__set_font_ae79c4(lVar8,0,0);
                  native_UILabel__set_font_ae79c4(lVar8,uVar3,0);
                }
              }
              uVar10 = uVar10 + 1;
              if (iVar9 <= (int)uVar10) {
                return;
              }
            } while (uVar10 < *(uint *)(lVar5 + 0x18));
          }
        }
        else if (iVar9 != 0) {
          uVar10 = 0;
          do {
            lVar8 = *(long *)(lVar5 + (long)(int)uVar10 * 8 + 0x20);
            if (lVar8 == 0) goto LAB_007fd5d4;
            uVar3 = native_UIFont__get_atlas_9ebd3c(lVar8,0);
            if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
              native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
            }
            uVar6 = native_NGUITools__CheckIfRelated_736edc(param_1,uVar3,0);
            if ((uVar6 & 1) != 0) {
              uVar3 = native_UIFont__get_atlas_9ebd3c(lVar8,0);
              native_UIFont__set_atlas_9ebe18(lVar8,0,0);
              native_UIFont__set_atlas_9ebe18(lVar8,uVar3,0);
            }
            uVar10 = uVar10 + 1;
            if (iVar9 <= (int)uVar10) goto LAB_007fd4bc;
          } while (uVar10 < *(uint *)(lVar5 + 0x18));
        }
      }
      else if (iVar9 != 0) {
        uVar10 = 0;
        do {
          lVar8 = *(long *)(lVar5 + (long)(int)uVar10 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_007fd5d4;
          lVar4 = native_NGUIFont__get_atlas_7fe8f0(lVar8);
          if (lVar4 != 0) {
            uVar3 = native_NGUIFont__get_atlas_7fe8f0(lVar8);
            if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
              native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
            }
            uVar6 = native_NGUITools__CheckIfRelated_736edc(param_1,uVar3,0);
            if ((uVar6 & 1) != 0) {
              uVar3 = native_NGUIFont__get_atlas_7fe8f0(lVar8);
              native_NGUIFont__set_atlas_7fe9f4(lVar8,0);
              native_NGUIFont__set_atlas_7fe9f4(lVar8,uVar3);
            }
          }
          uVar10 = uVar10 + 1;
          if (iVar9 <= (int)uVar10) goto LAB_007fd3f8;
        } while (uVar10 < *(uint *)(lVar5 + 0x18));
      }
    }
    else if (iVar9 != 0) {
      uVar10 = 0;
      do {
        lVar8 = *(long *)(lVar5 + (long)(int)uVar10 * 8 + 0x20);
        if (lVar8 == 0) goto LAB_007fd5d4;
        uVar3 = native_UISprite__get_atlas_c358c4(lVar8,0);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
        }
        uVar6 = native_NGUITools__CheckIfRelated_736edc(param_1,uVar3,0);
        if ((uVar6 & 1) != 0) {
          uVar3 = native_UISprite__get_atlas_c358c4(lVar8,0);
          native_UISprite__set_atlas_c35910(lVar8,0,0);
          native_UISprite__set_atlas_c35910(lVar8,uVar3,0);
        }
        uVar10 = uVar10 + 1;
        if (iVar9 <= (int)uVar10) goto LAB_007fd338;
      } while (uVar10 < *(uint *)(lVar5 + 0x18));
    }
    uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar3,0);
  }
LAB_007fd5d4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* NGUIAtlas$$.ctor @ 0x7fec38
 * void NGUIAtlas___ctor (NGUIAtlas_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NGUIAtlas$$.ctor
   void NGUIAtlas___ctor (NGUIAtlas_o* __this, const MethodInfo* method); */

void native_NGUIAtlas___ctor_7fec38(long param_1)

{
  undefined8 uVar1;
  
  if ((bRam0000000001340421 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_string__int___ctor___12d97c8);
    native_sub_43273c(&System_Collections_Generic_Dictionary_string__int__TypeInfo_12d2388);
    native_sub_43273c(&Method_System_Collections_Generic_List_UISpriteData___ctor___12dd3a8);
    native_sub_43273c(&System_Collections_Generic_List_UISpriteData__TypeInfo_12d2c38);
    bRam0000000001340421 = 1;
  }
  uVar1 = native_sub_432808(_System_Collections_Generic_List_UISpriteData__TypeInfo_12d2c38);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_UISpriteData___ctor___12dd3a8);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  native_sub_4326e0((undefined8 *)(param_1 + 0x20),uVar1);
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  uVar1 = native_sub_432808(_System_Collections_Generic_Dictionary_string__int__TypeInfo_12d2388);
  native_System_Collections_Generic_Dictionary_Font__int____ctor_cd7054
            (uVar1,_Method_System_Collections_Generic_Dictionary_string__int___ctor___12d97c8);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  native_sub_4326e0(param_1 + 0x40,uVar1);
  if ((bRam000000000133fac8 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam000000000133fac8 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_UnityEngine_Object___ctor_8dacf4(param_1,0);
  if (pcRam000000000133fad0 == (code *)0x0) {
    pcRam000000000133fad0 = (code *)native_sub_4326f0(&UNK_00e29142);
  }
                    /* WARNING: Could not recover jumptable at 0x00766bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000133fad0)(param_1);
  return;
}


