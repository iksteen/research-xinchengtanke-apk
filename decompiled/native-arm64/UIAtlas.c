/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIAtlas$$get_spriteMaterial @ 0x6eab4c
 * UnityEngine_Material_o* UIAtlas__get_spriteMaterial (UIAtlas_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAtlas$$get_spriteMaterial
   UnityEngine_Material_o* UIAtlas__get_spriteMaterial (UIAtlas_o* __this, const MethodInfo*
   method); */

undefined8 native_UIAtlas__get_spriteMaterial_6eab4c(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((bRam000000000133f3d1 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    bRam000000000133f3d1 = 1;
  }
  plVar1 = (long *)native_UIAtlas__get_replacement_6eac0c(param_1);
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
        goto LAB_006eabf8;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIAtlas_TypeInfo_12d4c68,0);
LAB_006eabf8:
                    /* WARNING: Could not recover jumptable at 0x006eac08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)*puVar2)(plVar1,puVar2[1]);
  return uVar3;
}



/* UIAtlas$$set_spriteMaterial @ 0x6eac58
 * void UIAtlas__set_spriteMaterial (UIAtlas_o* __this, UnityEngine_Material_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAtlas$$set_spriteMaterial
   void UIAtlas__set_spriteMaterial (UIAtlas_o* __this, UnityEngine_Material_o* value, const
   MethodInfo* method); */

void native_UIAtlas__set_spriteMaterial_6eac58(long param_1,undefined8 param_2)

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
  
  if ((bRam000000000133f3d2 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f3d2 = 1;
  }
  plVar4 = (long *)native_UIAtlas__get_replacement_6eac0c(param_1);
  if (plVar4 != (long *)0x0) {
    lVar7 = *plVar4;
    if ((ulong)*(ushort *)(lVar7 + 0x12a) != 0) {
      uVar8 = 0;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_006ead68;
        }
        uVar8 = uVar8 + 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 < *(ushort *)(lVar7 + 0x12a));
    }
    puVar5 = (undefined8 *)native_sub_3c9b34(plVar4,_INGUIAtlas_TypeInfo_12d4c68,1);
LAB_006ead68:
                    /* WARNING: Could not recover jumptable at 0x006ead80. Too many branches */
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
    *(undefined4 *)(param_1 + 0x48) = 0;
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
  native_UIAtlas__MarkAsChanged_6eadb8(param_1);
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  native_sub_4326e0(puVar5,param_2);
  if ((bRam000000000133f3e1 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&Method_NGUITools_FindActive_UILabel____12e5710);
    native_sub_43273c(&Method_NGUITools_FindActive_UISprite____12e5720);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&Method_UnityEngine_Resources_FindObjectsOfTypeAll_NGUIFont____12e6308);
    native_sub_43273c(&Method_UnityEngine_Resources_FindObjectsOfTypeAll_UIFont____12e6310);
    bRam000000000133f3e1 = 1;
  }
  plVar4 = (long *)native_UIAtlas__get_replacement_6eac0c(param_1);
  if (plVar4 != (long *)0x0) {
    lVar7 = *plVar4;
    if ((ulong)*(ushort *)(lVar7 + 0x12a) != 0) {
      uVar8 = 0;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
          goto LAB_006eaea0;
        }
        uVar8 = uVar8 + 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 < *(ushort *)(lVar7 + 0x12a));
    }
    puVar5 = (undefined8 *)native_sub_3c9b34(plVar4,_INGUIAtlas_TypeInfo_12d4c68,0xe);
LAB_006eaea0:
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
LAB_006eaf90:
      lVar7 = native_UnityEngine_Resources__FindObjectsOfTypeAll_NGUIFont__4a7c94
                        (_Method_UnityEngine_Resources_FindObjectsOfTypeAll_NGUIFont____12e6308);
      if (lVar7 == 0) goto LAB_006eb240;
      iVar12 = (int)*(undefined8 *)(lVar7 + 0x18);
      if (iVar12 < 1) {
LAB_006eb064:
        lVar7 = native_UnityEngine_Resources__FindObjectsOfTypeAll_NGUIFont__4a7c94
                          (_Method_UnityEngine_Resources_FindObjectsOfTypeAll_UIFont____12e6310);
        if (lVar7 == 0) goto LAB_006eb240;
        iVar12 = (int)*(undefined8 *)(lVar7 + 0x18);
        if (iVar12 < 1) {
LAB_006eb128:
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar7 = native_NGUITools__FindActive_AudioListener__4a5b30
                            (_Method_NGUITools_FindActive_UILabel____12e5710);
          if (lVar7 == 0) goto LAB_006eb240;
          iVar12 = (int)*(undefined8 *)(lVar7 + 0x18);
          if (iVar12 < 1) {
            return;
          }
          if (iVar12 != 0) {
            uVar13 = 0;
            do {
              lVar10 = *(long *)(lVar7 + (long)(int)uVar13 * 8 + 0x20);
              if (lVar10 == 0) goto LAB_006eb240;
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
            if (lVar10 == 0) goto LAB_006eb240;
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
            if (iVar12 <= (int)uVar13) goto LAB_006eb128;
          } while (uVar13 < *(uint *)(lVar7 + 0x18));
        }
      }
      else if (iVar12 != 0) {
        uVar13 = 0;
        do {
          lVar10 = *(long *)(lVar7 + (long)(int)uVar13 * 8 + 0x20);
          if (lVar10 == 0) goto LAB_006eb240;
          lVar6 = native_NGUIFont__get_atlas_7fe8f0(lVar10,0);
          if (lVar6 != 0) {
            uVar11 = native_NGUIFont__get_atlas_7fe8f0(lVar10,0);
            if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
              native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
            }
            uVar8 = native_NGUITools__CheckIfRelated_736edc(param_1,uVar11,0);
            if ((uVar8 & 1) != 0) {
              uVar11 = native_NGUIFont__get_atlas_7fe8f0(lVar10,0);
              native_NGUIFont__set_atlas_7fe9f4(lVar10,0,0);
              native_NGUIFont__set_atlas_7fe9f4(lVar10,uVar11,0);
            }
          }
          uVar13 = uVar13 + 1;
          if (iVar12 <= (int)uVar13) goto LAB_006eb064;
        } while (uVar13 < *(uint *)(lVar7 + 0x18));
      }
    }
    else if (iVar12 != 0) {
      uVar13 = 0;
      do {
        lVar10 = *(long *)(lVar7 + (long)(int)uVar13 * 8 + 0x20);
        if (lVar10 == 0) goto LAB_006eb240;
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
        if (iVar12 <= (int)uVar13) goto LAB_006eaf90;
      } while (uVar13 < *(uint *)(lVar7 + 0x18));
    }
    uVar11 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar11,0);
  }
LAB_006eb240:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIAtlas$$get_premultipliedAlpha @ 0x6eb244
 * bool UIAtlas__get_premultipliedAlpha (UIAtlas_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAtlas$$get_premultipliedAlpha
   bool UIAtlas__get_premultipliedAlpha (UIAtlas_o* __this, const MethodInfo* method); */

ulong native_UIAtlas__get_premultipliedAlpha_6eb244(long param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((bRam000000000133f3d3 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_Premultiplied_12f06a8);
    bRam000000000133f3d3 = 1;
  }
  plVar2 = (long *)native_UIAtlas__get_replacement_6eac0c(param_1);
  if (plVar2 != (long *)0x0) {
    lVar5 = *plVar2;
    if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 7) * 0x10 + 0x138);
          goto LAB_006eb3cc;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
    }
    puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_INGUIAtlas_TypeInfo_12d4c68,7);
LAB_006eb3cc:
                    /* WARNING: Could not recover jumptable at 0x006eb3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    return uVar6;
  }
  uVar1 = *(uint *)(param_1 + 0x48);
  if (uVar1 != 0xffffffff) goto LAB_006eb3ec;
  lVar5 = native_UIAtlas__get_spriteMaterial_6eab4c(param_1);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
  if ((uVar6 & 1) == 0) {
LAB_006eb3e4:
    uVar1 = 0;
  }
  else {
    if (lVar5 == 0) {
LAB_006eb404:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar4 = native_UnityEngine_Material__get_shader_8e3078(lVar5,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
    if ((uVar6 & 1) == 0) goto LAB_006eb3e4;
    lVar5 = native_UnityEngine_Material__get_shader_8e3078(lVar5,0);
    if ((lVar5 == 0) || (lVar5 = native_UnityEngine_Object__get_name_8e8098(lVar5,0), lVar5 == 0))
    goto LAB_006eb404;
    uVar1 = native_System_String__Contains_b0bafc(lVar5,_StringLiteral_Premultiplied_12f06a8,0);
    uVar1 = uVar1 & 1;
  }
  *(uint *)(param_1 + 0x48) = uVar1;
LAB_006eb3ec:
  return (ulong)(uVar1 == 1);
}



/* UIAtlas$$get_spriteList @ 0x6eb408
 * System_Collections_Generic_List_UISpriteData__o* UIAtlas__get_spriteList (UIAtlas_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAtlas$$get_spriteList
   System_Collections_Generic_List_UISpriteData__o* UIAtlas__get_spriteList (UIAtlas_o* __this,
   const MethodInfo* method); */

long native_UIAtlas__get_spriteList_6eb408(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((bRam000000000133f3d4 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&Method_System_Collections_Generic_List_UISpriteData__get_Count___12dd3c8);
    bRam000000000133f3d4 = 1;
  }
  plVar1 = (long *)native_UIAtlas__get_replacement_6eac0c(param_1);
  if (plVar1 == (long *)0x0) {
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x18) == 0) {
        native_UIAtlas__Upgrade_6eb4f4(param_1);
        lVar3 = *(long *)(param_1 + 0x20);
      }
      return lVar3;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar3 = *plVar1;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar4 = 0;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
        goto LAB_006eb4dc;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIAtlas_TypeInfo_12d4c68,2);
LAB_006eb4dc:
                    /* WARNING: Could not recover jumptable at 0x006eb4ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar3 = (*(code *)*puVar2)(plVar1,puVar2[1]);
  return lVar3;
}



/* UIAtlas$$set_spriteList @ 0x6eba34
 * void UIAtlas__set_spriteList (UIAtlas_o* __this, System_Collections_Generic_List_UISpriteData__o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAtlas$$set_spriteList
   void UIAtlas__set_spriteList (UIAtlas_o* __this, System_Collections_Generic_List_UISpriteData__o*
   value, const MethodInfo* method); */

void native_UIAtlas__set_spriteList_6eba34(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((bRam000000000133f3d5 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    bRam000000000133f3d5 = 1;
  }
  plVar4 = (long *)native_UIAtlas__get_replacement_6eac0c(param_1);
  if (plVar4 == (long *)0x0) {
    puVar5 = (undefined8 *)(param_1 + 0x20);
    *puVar5 = param_2;
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
  lVar6 = *plVar4;
  if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
    uVar7 = 0;
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 3) * 0x10 + 0x138);
        goto LAB_006ebaf8;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
  }
  puVar5 = (undefined8 *)native_sub_3c9b34(plVar4,_INGUIAtlas_TypeInfo_12d4c68,3);
LAB_006ebaf8:
                    /* WARNING: Could not recover jumptable at 0x006ebb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar5)(plVar4,param_2,puVar5[1]);
  return;
}



/* UIAtlas$$get_texture @ 0x6ebb14
 * UnityEngine_Texture_o* UIAtlas__get_texture (UIAtlas_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAtlas$$get_texture
   UnityEngine_Texture_o* UIAtlas__get_texture (UIAtlas_o* __this, const MethodInfo* method); */

undefined8 native_UIAtlas__get_texture_6ebb14(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((bRam000000000133f3d6 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f3d6 = 1;
  }
  plVar3 = (long *)native_UIAtlas__get_replacement_6eac0c(param_1);
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
        goto LAB_006ebc10;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
  }
  puVar4 = (undefined8 *)native_sub_3c9b34(plVar3,_INGUIAtlas_TypeInfo_12d4c68,4);
LAB_006ebc10:
                    /* WARNING: Could not recover jumptable at 0x006ebc20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
  return uVar5;
}



/* UIAtlas$$get_pixelSize @ 0x6ebc38
 * float UIAtlas__get_pixelSize (UIAtlas_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAtlas$$get_pixelSize
   float UIAtlas__get_pixelSize (UIAtlas_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIAtlas__get_pixelSize_6ebc38(long param_1)

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
  
  if ((bRam000000000133f3d7 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    bRam000000000133f3d7 = 1;
  }
  plVar1 = (long *)native_UIAtlas__get_replacement_6eac0c(param_1);
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
        goto LAB_006ebce8;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIAtlas_TypeInfo_12d4c68,5);
LAB_006ebce8:
                    /* WARNING: Could not recover jumptable at 0x006ebcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  auVar6._4_4_ = extraout_var;
  auVar6._0_4_ = extraout_s0;
  auVar6._8_8_ = extraout_var_00;
  return auVar6;
}



/* UIAtlas$$set_pixelSize @ 0x6ebcfc
 * void UIAtlas__set_pixelSize (UIAtlas_o* __this, float value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAtlas$$set_pixelSize
   void UIAtlas__set_pixelSize (UIAtlas_o* __this, float value, const MethodInfo* method); */

void native_UIAtlas__set_pixelSize_6ebcfc(undefined8 param_1,long param_2)

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
  
  if ((bRam000000000133f3d8 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    bRam000000000133f3d8 = 1;
  }
  plVar3 = (long *)native_UIAtlas__get_replacement_6eac0c(param_2);
  if (plVar3 != (long *)0x0) {
    lVar5 = *plVar3;
    if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 6) * 0x10 + 0x138);
          goto LAB_006ebdd8;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
    }
    puVar4 = (undefined8 *)native_sub_3c9b34(plVar3,_INGUIAtlas_TypeInfo_12d4c68,6);
LAB_006ebdd8:
                    /* WARNING: Could not recover jumptable at 0x006ebdf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar4)(param_1,plVar3,puVar4[1]);
    return;
  }
  fVar11 = (float)native_UnityEngine_Mathf__Clamp_8e51ec(param_1,0x3e800000,0x40800000);
  if (*(float *)(param_2 + 0x28) == fVar11) {
    return;
  }
  *(float *)(param_2 + 0x28) = fVar11;
  if ((bRam000000000133f3e1 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&Method_NGUITools_FindActive_UILabel____12e5710);
    native_sub_43273c(&Method_NGUITools_FindActive_UISprite____12e5720);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&Method_UnityEngine_Resources_FindObjectsOfTypeAll_NGUIFont____12e6308);
    native_sub_43273c(&Method_UnityEngine_Resources_FindObjectsOfTypeAll_UIFont____12e6310);
    bRam000000000133f3e1 = 1;
  }
  plVar3 = (long *)native_UIAtlas__get_replacement_6eac0c(param_2);
  if (plVar3 != (long *)0x0) {
    lVar5 = *plVar3;
    if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xe) * 0x10 + 0x138);
          goto LAB_006eaea0;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
    }
    puVar4 = (undefined8 *)native_sub_3c9b34(plVar3,_INGUIAtlas_TypeInfo_12d4c68,0xe);
LAB_006eaea0:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar5 = native_NGUITools__FindActive_AudioListener__4a5b30
                    (_Method_NGUITools_FindActive_UISprite____12e5720);
  if (lVar5 == 0) {
LAB_006eb240:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  iVar9 = (int)*(undefined8 *)(lVar5 + 0x18);
  if (iVar9 < 1) {
LAB_006eaf90:
    lVar5 = native_UnityEngine_Resources__FindObjectsOfTypeAll_NGUIFont__4a7c94
                      (_Method_UnityEngine_Resources_FindObjectsOfTypeAll_NGUIFont____12e6308);
    if (lVar5 == 0) goto LAB_006eb240;
    iVar9 = (int)*(undefined8 *)(lVar5 + 0x18);
    if (iVar9 < 1) {
LAB_006eb064:
      lVar5 = native_UnityEngine_Resources__FindObjectsOfTypeAll_NGUIFont__4a7c94
                        (_Method_UnityEngine_Resources_FindObjectsOfTypeAll_UIFont____12e6310);
      if (lVar5 == 0) goto LAB_006eb240;
      iVar9 = (int)*(undefined8 *)(lVar5 + 0x18);
      if (iVar9 < 1) {
LAB_006eb128:
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar5 = native_NGUITools__FindActive_AudioListener__4a5b30
                          (_Method_NGUITools_FindActive_UILabel____12e5710);
        if (lVar5 == 0) goto LAB_006eb240;
        iVar9 = (int)*(undefined8 *)(lVar5 + 0x18);
        if (iVar9 < 1) {
          return;
        }
        if (iVar9 != 0) {
          uVar10 = 0;
          do {
            lVar8 = *(long *)(lVar5 + (long)(int)uVar10 * 8 + 0x20);
            if (lVar8 == 0) goto LAB_006eb240;
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
          if (lVar8 == 0) goto LAB_006eb240;
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
          if (iVar9 <= (int)uVar10) goto LAB_006eb128;
        } while (uVar10 < *(uint *)(lVar5 + 0x18));
      }
    }
    else if (iVar9 != 0) {
      uVar10 = 0;
      do {
        lVar8 = *(long *)(lVar5 + (long)(int)uVar10 * 8 + 0x20);
        if (lVar8 == 0) goto LAB_006eb240;
        lVar2 = native_NGUIFont__get_atlas_7fe8f0(lVar8,0);
        if (lVar2 != 0) {
          uVar1 = native_NGUIFont__get_atlas_7fe8f0(lVar8,0);
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
          }
          uVar6 = native_NGUITools__CheckIfRelated_736edc(param_2,uVar1,0);
          if ((uVar6 & 1) != 0) {
            uVar1 = native_NGUIFont__get_atlas_7fe8f0(lVar8,0);
            native_NGUIFont__set_atlas_7fe9f4(lVar8,0,0);
            native_NGUIFont__set_atlas_7fe9f4(lVar8,uVar1,0);
          }
        }
        uVar10 = uVar10 + 1;
        if (iVar9 <= (int)uVar10) goto LAB_006eb064;
      } while (uVar10 < *(uint *)(lVar5 + 0x18));
    }
  }
  else if (iVar9 != 0) {
    uVar10 = 0;
    do {
      lVar8 = *(long *)(lVar5 + (long)(int)uVar10 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_006eb240;
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
      if (iVar9 <= (int)uVar10) goto LAB_006eaf90;
    } while (uVar10 < *(uint *)(lVar5 + 0x18));
  }
  uVar1 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,0);
}



/* UIAtlas$$get_replacement @ 0x6eac0c
 * INGUIAtlas_o* UIAtlas__get_replacement (UIAtlas_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAtlas$$get_replacement
   INGUIAtlas_o* UIAtlas__get_replacement (UIAtlas_o* __this, const MethodInfo* method); */

long * native_UIAtlas__get_replacement_6eac0c(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plStack_28;
  
  if ((bRam000000000133f3d9 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    bRam000000000133f3d9 = 1;
  }
  lVar1 = _INGUIAtlas_TypeInfo_12d4c68;
  plVar4 = *(long **)(param_1 + 0x30);
  if (plVar4 != (long *)0x0) {
    lVar5 = *plVar4;
    uVar3 = native_sub_3c5e78(_INGUIAtlas_TypeInfo_12d4c68,lVar5);
    if ((uVar3 & 1) == 0) {
      if ((*(byte *)(lVar5 + 0x133) >> 4 & 1) == 0) {
        plVar4 = (long *)0x0;
      }
      else {
        if (((((*(byte *)(lVar1 + 0x114) >> 5 & 1) != 0) || (*(char *)(lVar1 + 0x2a) == '\x1e')) ||
            (*(char *)(lVar1 + 0x2a) == '\x13')) &&
           ((*(long *)(lVar1 + 0x70) != 0 &&
            (lVar5 = *(long *)(*(long *)(lVar1 + 0x70) + 0x28), lVar5 != 0)))) {
          plStack_28 = (long *)native_sub_3d76d0(plVar4,lVar5);
          if (plStack_28 != (long *)0x0) {
            return plVar4;
          }
          iVar2 = (*(code *)**(undefined8 **)plVar4[2])((undefined8 *)plVar4[2],lVar5,&plStack_28);
          if (-1 < iVar2) {
            uVar3 = native_sub_3d7780(plVar4,lVar5,plStack_28);
            if ((uVar3 & 1) == 0) {
              (**(code **)(*plStack_28 + 0x10))(plStack_28);
              plStack_28 = (long *)native_sub_3d76d0(plVar4,lVar5);
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



/* UIAtlas$$set_replacement @ 0x6ebe04
 * void UIAtlas__set_replacement (UIAtlas_o* __this, INGUIAtlas_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAtlas$$set_replacement
   void UIAtlas__set_replacement (UIAtlas_o* __this, INGUIAtlas_o* value, const MethodInfo* method);
    */

void native_UIAtlas__set_replacement_6ebe04(long *param_1,long *param_2)

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
  
  if ((bRam000000000133f3da & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f3da = 1;
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
          goto LAB_006ebee4;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
    }
    puVar5 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIAtlas_TypeInfo_12d4c68,8);
LAB_006ebee4:
    plVar4 = (long *)(*(code *)*puVar5)(plVar1,puVar5[1]);
    if (plVar4 == param_1) {
      lVar6 = *plVar1;
      if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 9) * 0x10 + 0x138);
            goto LAB_006ebf50;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
      }
      puVar5 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIAtlas_TypeInfo_12d4c68,9);
LAB_006ebf50:
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
    native_UIAtlas__MarkAsChanged_6eadb8(param_1);
  }
  if (plVar1 == (long *)0x0) {
LAB_006ebfbc:
    plVar4 = (long *)0x0;
  }
  else {
    if (*(byte *)(*plVar1 + 300) < *(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 300))
    goto LAB_006ebfbc;
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
  if ((bRam000000000133f3e1 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&Method_NGUITools_FindActive_UILabel____12e5710);
    native_sub_43273c(&Method_NGUITools_FindActive_UISprite____12e5720);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&Method_UnityEngine_Resources_FindObjectsOfTypeAll_NGUIFont____12e6308);
    native_sub_43273c(&Method_UnityEngine_Resources_FindObjectsOfTypeAll_UIFont____12e6310);
    bRam000000000133f3e1 = 1;
  }
  plVar1 = (long *)native_UIAtlas__get_replacement_6eac0c(param_1);
  if (plVar1 != (long *)0x0) {
    lVar6 = *plVar1;
    if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
          goto LAB_006eaea0;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
    }
    puVar5 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIAtlas_TypeInfo_12d4c68,0xe);
LAB_006eaea0:
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
LAB_006eaf90:
      lVar6 = native_UnityEngine_Resources__FindObjectsOfTypeAll_NGUIFont__4a7c94
                        (_Method_UnityEngine_Resources_FindObjectsOfTypeAll_NGUIFont____12e6308);
      if (lVar6 == 0) goto LAB_006eb240;
      iVar11 = (int)*(undefined8 *)(lVar6 + 0x18);
      if (iVar11 < 1) {
LAB_006eb064:
        lVar6 = native_UnityEngine_Resources__FindObjectsOfTypeAll_NGUIFont__4a7c94
                          (_Method_UnityEngine_Resources_FindObjectsOfTypeAll_UIFont____12e6310);
        if (lVar6 == 0) goto LAB_006eb240;
        iVar11 = (int)*(undefined8 *)(lVar6 + 0x18);
        if (iVar11 < 1) {
LAB_006eb128:
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar6 = native_NGUITools__FindActive_AudioListener__4a5b30
                            (_Method_NGUITools_FindActive_UILabel____12e5710);
          if (lVar6 == 0) goto LAB_006eb240;
          iVar11 = (int)*(undefined8 *)(lVar6 + 0x18);
          if (iVar11 < 1) {
            return;
          }
          if (iVar11 != 0) {
            uVar12 = 0;
            do {
              lVar9 = *(long *)(lVar6 + (long)(int)uVar12 * 8 + 0x20);
              if (lVar9 == 0) goto LAB_006eb240;
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
            if (lVar9 == 0) goto LAB_006eb240;
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
            if (iVar11 <= (int)uVar12) goto LAB_006eb128;
          } while (uVar12 < *(uint *)(lVar6 + 0x18));
        }
      }
      else if (iVar11 != 0) {
        uVar12 = 0;
        do {
          lVar9 = *(long *)(lVar6 + (long)(int)uVar12 * 8 + 0x20);
          if (lVar9 == 0) goto LAB_006eb240;
          lVar3 = native_NGUIFont__get_atlas_7fe8f0(lVar9,0);
          if (lVar3 != 0) {
            uVar2 = native_NGUIFont__get_atlas_7fe8f0(lVar9,0);
            if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
              native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
            }
            uVar7 = native_NGUITools__CheckIfRelated_736edc(param_1,uVar2,0);
            if ((uVar7 & 1) != 0) {
              uVar2 = native_NGUIFont__get_atlas_7fe8f0(lVar9,0);
              native_NGUIFont__set_atlas_7fe9f4(lVar9,0,0);
              native_NGUIFont__set_atlas_7fe9f4(lVar9,uVar2,0);
            }
          }
          uVar12 = uVar12 + 1;
          if (iVar11 <= (int)uVar12) goto LAB_006eb064;
        } while (uVar12 < *(uint *)(lVar6 + 0x18));
      }
    }
    else if (iVar11 != 0) {
      uVar12 = 0;
      do {
        lVar9 = *(long *)(lVar6 + (long)(int)uVar12 * 8 + 0x20);
        if (lVar9 == 0) goto LAB_006eb240;
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
        if (iVar11 <= (int)uVar12) goto LAB_006eaf90;
      } while (uVar12 < *(uint *)(lVar6 + 0x18));
    }
    uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar2,0);
  }
LAB_006eb240:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIAtlas$$GetSprite @ 0x6ec010
 * UISpriteData_o* UIAtlas__GetSprite (UIAtlas_o* __this, System_String_o* name, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAtlas$$GetSprite
   UISpriteData_o* UIAtlas__GetSprite (UIAtlas_o* __this, System_String_o* name, const MethodInfo*
   method); */

long native_UIAtlas__GetSprite_6ec010(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  uint uVar7;
  long lVar8;
  uint uStack_34;
  
  if ((bRam000000000133f3db & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__int__TryGetValue___12d9800
                     );
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_string__int__get_Count___12d9808
                     );
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&Method_System_Collections_Generic_List_UISpriteData__get_Count___12dd3c8);
    native_sub_43273c(&Method_System_Collections_Generic_List_UISpriteData__get_Item___12dd3d0);
    bRam000000000133f3db = 1;
  }
  uStack_34 = 0;
  plVar2 = (long *)native_UIAtlas__get_replacement_6eac0c(param_1);
  if (plVar2 != (long *)0x0) {
    lVar4 = *plVar2;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 10) * 0x10 + 0x138);
          goto LAB_006ec1b8;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_INGUIAtlas_TypeInfo_12d4c68,10);
LAB_006ec1b8:
    lVar4 = (*(code *)*puVar3)(plVar2,param_2,puVar3[1]);
    return lVar4;
  }
  uVar5 = native_System_String__IsNullOrEmpty_b09430(param_2,0);
  if ((uVar5 & 1) != 0) {
    return 0;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 == 0) goto LAB_006ec2c4;
  if (*(int *)(lVar4 + 0x18) == 0) {
    native_UIAtlas__Upgrade_6eb4f4(param_1);
    lVar4 = *(long *)(param_1 + 0x20);
    if (lVar4 == 0) goto LAB_006ec2c4;
  }
  if (*(int *)(lVar4 + 0x18) == 0) {
LAB_006ec2b0:
    lVar4 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x50) == 0) goto LAB_006ec2c4;
    iVar1 = native_System_Collections_Generic_Dictionary_object__int___get_Count_cd72cc
                      (*(long *)(param_1 + 0x50),
                       _Method_System_Collections_Generic_Dictionary_string__int__get_Count___12d9808
                      );
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_006ec2c4;
    if (iVar1 != *(int *)(*(long *)(param_1 + 0x20) + 0x18)) {
      native_UIAtlas__MarkSpriteListAsChanged_6ec2c8(param_1);
    }
    if (*(long *)(param_1 + 0x50) == 0) goto LAB_006ec2c4;
    uVar5 = native_System_Collections_Generic_Dictionary_Font__int___TryGetValue_cd92ec
                      (*(long *)(param_1 + 0x50),param_2,&uStack_34,
                       _Method_System_Collections_Generic_Dictionary_string__int__TryGetValue___12d9800
                      );
    if ((uVar5 & 1) == 0) {
      lVar4 = *(long *)(param_1 + 0x20);
      if (lVar4 == 0) goto LAB_006ec2c4;
      iVar1 = *(int *)(lVar4 + 0x18);
      if (0 < iVar1) {
        uVar7 = 0;
        do {
          if (*(uint *)(lVar4 + 0x18) <= uVar7) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + (long)(int)uVar7 * 8 + 0x20);
          if (lVar4 == 0) break;
          uVar5 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(lVar4 + 0x10),0);
          if (((uVar5 & 1) == 0) &&
             (uVar5 = native_System_String__op_Equality_afc18c
                                (param_2,*(undefined8 *)(lVar4 + 0x10),0), (uVar5 & 1) != 0)) {
            native_UIAtlas__MarkSpriteListAsChanged_6ec2c8(param_1);
            return lVar4;
          }
          uVar7 = uVar7 + 1;
          if (iVar1 <= (int)uVar7) goto LAB_006ec2b0;
          lVar4 = *(long *)(param_1 + 0x20);
        } while (lVar4 != 0);
        goto LAB_006ec2c4;
      }
      goto LAB_006ec2b0;
    }
    lVar4 = (long)(int)uStack_34;
    if ((int)uStack_34 < 0) {
LAB_006ec25c:
      native_UIAtlas__MarkSpriteListAsChanged_6ec2c8(param_1);
      if (*(long *)(param_1 + 0x50) == 0) {
LAB_006ec2c4:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      uVar5 = native_System_Collections_Generic_Dictionary_Font__int___TryGetValue_cd92ec
                        (*(long *)(param_1 + 0x50),param_2,&uStack_34,
                         _Method_System_Collections_Generic_Dictionary_string__int__TryGetValue___12d9800
                        );
      if ((uVar5 & 1) == 0) goto LAB_006ec2b0;
      lVar4 = *(long *)(param_1 + 0x20);
      if (lVar4 == 0) goto LAB_006ec2c4;
      lVar8 = (long)(int)uStack_34;
      if (*(uint *)(lVar4 + 0x18) <= uStack_34) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      lVar4 = *(long *)(lVar4 + 0x10) + lVar8 * 8;
    }
    else {
      lVar8 = *(long *)(param_1 + 0x20);
      if (lVar8 == 0) goto LAB_006ec2c4;
      if ((int)*(uint *)(lVar8 + 0x18) <= (int)uStack_34) goto LAB_006ec25c;
      if (*(uint *)(lVar8 + 0x18) <= uStack_34) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      lVar4 = *(long *)(lVar8 + 0x10) + lVar4 * 8;
    }
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  return lVar4;
}



/* UIAtlas$$MarkSpriteListAsChanged @ 0x6ec2c8
 * void UIAtlas__MarkSpriteListAsChanged (UIAtlas_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAtlas$$MarkSpriteListAsChanged
   void UIAtlas__MarkSpriteListAsChanged (UIAtlas_o* __this, const MethodInfo* method); */

void native_UIAtlas__MarkSpriteListAsChanged_6ec2c8(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  if ((bRam000000000133f3dc & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_string__int__Clear___12d97e8);
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_string__int__set_Item___12d9818)
    ;
    native_sub_43273c(&Method_System_Collections_Generic_List_UISpriteData__get_Count___12dd3c8);
    native_sub_43273c(&Method_System_Collections_Generic_List_UISpriteData__get_Item___12dd3d0);
    bRam000000000133f3dc = 1;
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    native_System_Collections_Generic_Dictionary_object__int___Clear_cd7714
              (*(long *)(param_1 + 0x50),
               _Method_System_Collections_Generic_Dictionary_string__int__Clear___12d97e8);
    lVar5 = *(long *)(param_1 + 0x20);
    if (lVar5 != 0) {
      iVar1 = *(int *)(lVar5 + 0x18);
      if (iVar1 < 1) {
        return;
      }
      iVar4 = 1;
      do {
        lVar3 = *(long *)(param_1 + 0x50);
        uVar2 = iVar4 - 1;
        if (*(uint *)(lVar5 + 0x18) <= uVar2) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + (long)(int)uVar2 * 8 + 0x20);
        if ((lVar5 == 0) || (lVar3 == 0)) break;
        native_System_Collections_Generic_Dictionary_Font__int___set_Item_cd7510
                  (lVar3,*(undefined8 *)(lVar5 + 0x10),uVar2,
                   _Method_System_Collections_Generic_Dictionary_string__int__set_Item___12d9818);
        if (iVar1 <= iVar4) {
          return;
        }
        lVar5 = *(long *)(param_1 + 0x20);
        iVar4 = iVar4 + 1;
      } while (lVar5 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIAtlas$$SortAlphabetically @ 0x6ec3d4
 * void UIAtlas__SortAlphabetically (UIAtlas_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAtlas$$SortAlphabetically
   void UIAtlas__SortAlphabetically (UIAtlas_o* __this, const MethodInfo* method); */

void native_UIAtlas__SortAlphabetically_6ec3d4(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((bRam000000000133f3dd & 1) == 0) {
    native_sub_43273c(&Method_System_Comparison_UISpriteData___ctor___12d8b50);
    native_sub_43273c(&System_Comparison_UISpriteData__TypeInfo_12d21f0);
    native_sub_43273c(&Method_System_Collections_Generic_List_UISpriteData__Sort___12dd3c0);
    native_sub_43273c(&Method_UIAtlas___c__SortAlphabetically_b__28_0___12ea108);
    native_sub_43273c(&UIAtlas___c_TypeInfo_12d79d0);
    bRam000000000133f3dd = 1;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if (((*(byte *)(_UIAtlas___c_TypeInfo_12d79d0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIAtlas___c_TypeInfo_12d79d0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  puVar3 = *(undefined8 **)(_UIAtlas___c_TypeInfo_12d79d0 + 0xb8);
  lVar5 = puVar3[1];
  if (lVar5 == 0) {
    if (((*(byte *)(_UIAtlas___c_TypeInfo_12d79d0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIAtlas___c_TypeInfo_12d79d0 + 0xe0) == 0)) {
      native_sub_4327ec();
      puVar3 = *(undefined8 **)(_UIAtlas___c_TypeInfo_12d79d0 + 0xb8);
    }
    uVar6 = *puVar3;
    lVar5 = native_sub_432808(_System_Comparison_UISpriteData__TypeInfo_12d21f0);
    native_System_Comparison_ABSSequentiable____ctor_bbdf08
              (lVar5,uVar6,_Method_UIAtlas___c__SortAlphabetically_b__28_0___12ea108,
               _Method_System_Comparison_UISpriteData___ctor___12d8b50);
    plVar2 = (long *)(*(long *)(_UIAtlas___c_TypeInfo_12d79d0 + 0xb8) + 8);
    *plVar2 = lVar5;
    native_sub_4326e0(plVar2,lVar5);
  }
  lVar1 = _Method_System_Collections_Generic_List_UISpriteData__Sort___12dd3c0;
  if (lVar4 != 0) {
    if (lVar5 == 0) {
      native_System_ThrowHelper__ThrowArgumentNullException_9fe014(8);
    }
    if (0 < *(int *)(lVar4 + 0x18)) {
                    /* WARNING: Could not recover jumptable at 0x00d426c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar1 + 0x18) + 0xc0) + 0x118))
                (*(undefined8 *)(lVar4 + 0x10),0,*(int *)(lVar4 + 0x18),lVar5);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIAtlas$$GetListOfSprites @ 0x6ec500
 * BetterList_string__o* UIAtlas__GetListOfSprites (UIAtlas_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAtlas$$GetListOfSprites
   BetterList_string__o* UIAtlas__GetListOfSprites (UIAtlas_o* __this, const MethodInfo* method); */

long native_UIAtlas__GetListOfSprites_6ec500(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  
  if ((bRam000000000133f3de & 1) == 0) {
    native_sub_43273c(&Method_BetterList_string__Add___12d8960);
    native_sub_43273c(&Method_BetterList_string___ctor___12d8958);
    native_sub_43273c(&BetterList_string__TypeInfo_12d2120);
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&Method_System_Collections_Generic_List_UISpriteData__get_Count___12dd3c8);
    native_sub_43273c(&Method_System_Collections_Generic_List_UISpriteData__get_Item___12dd3d0);
    bRam000000000133f3de = 1;
  }
  plVar2 = (long *)native_UIAtlas__get_replacement_6eac0c(param_1);
  if (plVar2 == (long *)0x0) {
    if (*(long *)(param_1 + 0x20) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x20) + 0x18) == 0) {
        native_UIAtlas__Upgrade_6eb4f4(param_1);
      }
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
                      (lVar5,*(undefined8 *)(lVar8 + 0x10),_Method_BetterList_string__Add___12d8960)
            ;
          }
          uVar6 = uVar6 + 1;
          if ((long)iVar1 <= (long)uVar6) {
            return lVar5;
          }
          lVar8 = *(long *)(param_1 + 0x20);
        } while (lVar8 != 0);
      }
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
        goto LAB_006ec6b8;
      }
      uVar6 = uVar6 + 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
  }
  puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_INGUIAtlas_TypeInfo_12d4c68,0xb);
LAB_006ec6b8:
                    /* WARNING: Could not recover jumptable at 0x006ec6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  return lVar5;
}



/* UIAtlas$$GetListOfSprites @ 0x6ec6d4
 * BetterList_string__o* UIAtlas__GetListOfSprites (UIAtlas_o* __this, System_String_o* match, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAtlas$$GetListOfSprites
   BetterList_string__o* UIAtlas__GetListOfSprites (UIAtlas_o* __this, System_String_o* match, const
   MethodInfo* method); */

long native_UIAtlas__GetListOfSprites_6ec6d4(long param_1,long param_2)

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
  
  if ((bRam000000000133f3df & 1) == 0) {
    native_sub_43273c(&Method_BetterList_string__Add___12d8960);
    native_sub_43273c(&Method_BetterList_string___ctor___12d8958);
    native_sub_43273c(&BetterList_string__TypeInfo_12d2120);
    native_sub_43273c(&char___TypeInfo_12d3090);
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&Method_System_Collections_Generic_List_UISpriteData__get_Count___12dd3c8);
    native_sub_43273c(&Method_System_Collections_Generic_List_UISpriteData__get_Item___12dd3d0);
    bRam000000000133f3df = 1;
  }
  plVar4 = (long *)native_UIAtlas__get_replacement_6eac0c(param_1);
  if (plVar4 == (long *)0x0) {
    uVar11 = native_System_String__IsNullOrEmpty_b09430(param_2,0);
    if ((uVar11 & 1) == 0) {
      if (*(long *)(param_1 + 0x20) != 0) {
        if (*(int *)(*(long *)(param_1 + 0x20) + 0x18) == 0) {
          native_UIAtlas__Upgrade_6eb4f4(param_1);
        }
        lVar9 = native_sub_432808(_BetterList_string__TypeInfo_12d2120);
        native_BetterList_object____ctor_ba2d1c(lVar9,_Method_BetterList_string___ctor___12d8958);
        lVar15 = *(long *)(param_1 + 0x20);
        if (lVar15 != 0) {
          iVar1 = *(int *)(lVar15 + 0x18);
          if (iVar1 < 1) {
LAB_006ec8e0:
            lVar15 = native_sub_432750(_char___TypeInfo_12d3090,1);
            if (lVar15 != 0) {
              if (*(int *)(lVar15 + 0x18) == 0) {
LAB_006ecacc:
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
                    if (uVar8 <= uVar14) goto LAB_006ecacc;
                    plVar13 = plVar4 + (long)(int)uVar14 + 4;
                    if (*plVar13 == 0) goto LAB_006eca8c;
                    lVar15 = native_System_String__ToLower_b0cf38(*plVar13,0);
                    if ((lVar15 != 0) &&
                       (lVar6 = native_sub_4327f8(lVar15,*(undefined8 *)(*plVar4 + 0x40)),
                       lVar6 == 0)) {
                      uVar7 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
                      native_sub_4327dc(uVar7,0);
                    }
                    if (*(uint *)(plVar4 + 3) <= uVar14) goto LAB_006ecacc;
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
                          if (uVar10 <= uVar3) goto LAB_006ecacc;
                          if (lVar6 == 0) goto LAB_006eca8c;
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
                                    (param_2,*(undefined8 *)(lVar15 + 0x10),5,0), (uVar3 & 1) != 0))
              {
                if (lVar9 != 0) {
                  native_BetterList_object___Add_ba24d8
                            (lVar9,*(undefined8 *)(lVar15 + 0x10),
                             _Method_BetterList_string__Add___12d8960);
                  return lVar9;
                }
                break;
              }
              uVar11 = uVar11 + 1;
              if ((long)iVar1 <= (long)uVar11) goto LAB_006ec8e0;
              lVar15 = *(long *)(param_1 + 0x20);
            } while (lVar15 != 0);
          }
        }
      }
LAB_006eca8c:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    if ((bRam000000000133f3de & 1) == 0) {
      native_sub_43273c(&Method_BetterList_string__Add___12d8960);
      native_sub_43273c(&Method_BetterList_string___ctor___12d8958);
      native_sub_43273c(&BetterList_string__TypeInfo_12d2120);
      native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
      native_sub_43273c(&Method_System_Collections_Generic_List_UISpriteData__get_Count___12dd3c8);
      native_sub_43273c(&Method_System_Collections_Generic_List_UISpriteData__get_Item___12dd3d0);
      bRam000000000133f3de = 1;
    }
    plVar4 = (long *)native_UIAtlas__get_replacement_6eac0c(param_1);
    if (plVar4 == (long *)0x0) {
      if (*(long *)(param_1 + 0x20) != 0) {
        if (*(int *)(*(long *)(param_1 + 0x20) + 0x18) == 0) {
          native_UIAtlas__Upgrade_6eb4f4(param_1);
        }
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
               (uVar3 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(lVar15 + 0x10),0)
               , (uVar3 & 1) == 0)) {
              if (lVar9 == 0) break;
              native_BetterList_object___Add_ba24d8
                        (lVar9,*(undefined8 *)(lVar15 + 0x10),
                         _Method_BetterList_string__Add___12d8960);
            }
            uVar11 = uVar11 + 1;
            if ((long)iVar1 <= (long)uVar11) {
              return lVar9;
            }
            lVar15 = *(long *)(param_1 + 0x20);
          } while (lVar15 != 0);
        }
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
          goto LAB_006ec6b8;
        }
        uVar11 = uVar11 + 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 < *(ushort *)(lVar9 + 0x12a));
    }
    puVar5 = (undefined8 *)native_sub_3c9b34(plVar4,_INGUIAtlas_TypeInfo_12d4c68,0xb);
LAB_006ec6b8:
                    /* WARNING: Could not recover jumptable at 0x006ec6d0. Too many branches */
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
        goto LAB_006ec800;
      }
      uVar11 = uVar11 + 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 < *(ushort *)(lVar9 + 0x12a));
  }
  puVar5 = (undefined8 *)native_sub_3c9b34(plVar4,_INGUIAtlas_TypeInfo_12d4c68,0xc);
LAB_006ec800:
                    /* WARNING: Could not recover jumptable at 0x006ec824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar9 = (*(code *)*puVar5)(plVar4,param_2,puVar5[1]);
  return lVar9;
}



/* UIAtlas$$References @ 0x6ecae4
 * bool UIAtlas__References (UIAtlas_o* __this, INGUIAtlas_o* atlas, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAtlas$$References
   bool UIAtlas__References (UIAtlas_o* __this, INGUIAtlas_o* atlas, const MethodInfo* method); */

undefined8 native_UIAtlas__References_6ecae4(long param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((bRam000000000133f3e0 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    bRam000000000133f3e0 = 1;
  }
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else if (param_1 == param_2) {
    uVar3 = 1;
  }
  else {
    plVar1 = (long *)native_UIAtlas__get_replacement_6eac0c(param_1);
    uVar3 = 0;
    if (plVar1 != (long *)0x0) {
      lVar4 = *plVar1;
      if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
        uVar5 = 0;
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xd) * 0x10 + 0x138);
            goto LAB_006ecbb4;
          }
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
      }
      puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIAtlas_TypeInfo_12d4c68,0xd);
LAB_006ecbb4:
                    /* WARNING: Could not recover jumptable at 0x006ecbcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)*puVar2)(plVar1,param_2,puVar2[1]);
      return uVar3;
    }
  }
  return uVar3;
}



/* UIAtlas$$MarkAsChanged @ 0x6eadb8
 * void UIAtlas__MarkAsChanged (UIAtlas_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAtlas$$MarkAsChanged
   void UIAtlas__MarkAsChanged (UIAtlas_o* __this, const MethodInfo* method); */

void native_UIAtlas__MarkAsChanged_6eadb8(undefined8 param_1)

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
  
  if ((bRam000000000133f3e1 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&Method_NGUITools_FindActive_UILabel____12e5710);
    native_sub_43273c(&Method_NGUITools_FindActive_UISprite____12e5720);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&Method_UnityEngine_Resources_FindObjectsOfTypeAll_NGUIFont____12e6308);
    native_sub_43273c(&Method_UnityEngine_Resources_FindObjectsOfTypeAll_UIFont____12e6310);
    bRam000000000133f3e1 = 1;
  }
  plVar1 = (long *)native_UIAtlas__get_replacement_6eac0c(param_1);
  if (plVar1 != (long *)0x0) {
    lVar5 = *plVar1;
    if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xe) * 0x10 + 0x138);
          goto LAB_006eaea0;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
    }
    puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIAtlas_TypeInfo_12d4c68,0xe);
LAB_006eaea0:
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
LAB_006eaf90:
      lVar5 = native_UnityEngine_Resources__FindObjectsOfTypeAll_NGUIFont__4a7c94
                        (_Method_UnityEngine_Resources_FindObjectsOfTypeAll_NGUIFont____12e6308);
      if (lVar5 == 0) goto LAB_006eb240;
      iVar9 = (int)*(undefined8 *)(lVar5 + 0x18);
      if (iVar9 < 1) {
LAB_006eb064:
        lVar5 = native_UnityEngine_Resources__FindObjectsOfTypeAll_NGUIFont__4a7c94
                          (_Method_UnityEngine_Resources_FindObjectsOfTypeAll_UIFont____12e6310);
        if (lVar5 == 0) goto LAB_006eb240;
        iVar9 = (int)*(undefined8 *)(lVar5 + 0x18);
        if (iVar9 < 1) {
LAB_006eb128:
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar5 = native_NGUITools__FindActive_AudioListener__4a5b30
                            (_Method_NGUITools_FindActive_UILabel____12e5710);
          if (lVar5 == 0) goto LAB_006eb240;
          iVar9 = (int)*(undefined8 *)(lVar5 + 0x18);
          if (iVar9 < 1) {
            return;
          }
          if (iVar9 != 0) {
            uVar10 = 0;
            do {
              lVar8 = *(long *)(lVar5 + (long)(int)uVar10 * 8 + 0x20);
              if (lVar8 == 0) goto LAB_006eb240;
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
            if (lVar8 == 0) goto LAB_006eb240;
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
            if (iVar9 <= (int)uVar10) goto LAB_006eb128;
          } while (uVar10 < *(uint *)(lVar5 + 0x18));
        }
      }
      else if (iVar9 != 0) {
        uVar10 = 0;
        do {
          lVar8 = *(long *)(lVar5 + (long)(int)uVar10 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_006eb240;
          lVar4 = native_NGUIFont__get_atlas_7fe8f0(lVar8,0);
          if (lVar4 != 0) {
            uVar3 = native_NGUIFont__get_atlas_7fe8f0(lVar8,0);
            if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
              native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
            }
            uVar6 = native_NGUITools__CheckIfRelated_736edc(param_1,uVar3,0);
            if ((uVar6 & 1) != 0) {
              uVar3 = native_NGUIFont__get_atlas_7fe8f0(lVar8,0);
              native_NGUIFont__set_atlas_7fe9f4(lVar8,0,0);
              native_NGUIFont__set_atlas_7fe9f4(lVar8,uVar3,0);
            }
          }
          uVar10 = uVar10 + 1;
          if (iVar9 <= (int)uVar10) goto LAB_006eb064;
        } while (uVar10 < *(uint *)(lVar5 + 0x18));
      }
    }
    else if (iVar9 != 0) {
      uVar10 = 0;
      do {
        lVar8 = *(long *)(lVar5 + (long)(int)uVar10 * 8 + 0x20);
        if (lVar8 == 0) goto LAB_006eb240;
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
        if (iVar9 <= (int)uVar10) goto LAB_006eaf90;
      } while (uVar10 < *(uint *)(lVar5 + 0x18));
    }
    uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar3,0);
  }
LAB_006eb240:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIAtlas$$Upgrade @ 0x6eb4f4
 * bool UIAtlas__Upgrade (UIAtlas_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAtlas$$Upgrade
   bool UIAtlas__Upgrade (UIAtlas_o* __this, const MethodInfo* method); */

uint native_UIAtlas__Upgrade_6eb4f4(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if ((bRam000000000133f3e2 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UISpriteData__Add___12dd3b0);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIAtlas_Sprite__Clear___12dd928);
    native_sub_43273c(&Method_System_Collections_Generic_List_UISpriteData__get_Count___12dd3c8);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIAtlas_Sprite__get_Count___12dd930);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIAtlas_Sprite__get_Item___12dd938);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIAtlas_TypeInfo_12d63f8);
    native_sub_43273c(&UISpriteData_TypeInfo_12d64d0);
    bRam000000000133f3e2 = 1;
  }
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  plVar4 = (long *)native_UIAtlas__get_replacement_6eac0c(param_1);
  if (plVar4 != (long *)0x0) {
    if (*(byte *)(*plVar4 + 300) < *(byte *)(_UIAtlas_TypeInfo_12d63f8 + 300)) {
      plVar4 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar4 + 200) +
                       (ulong)*(byte *)(_UIAtlas_TypeInfo_12d63f8 + 300) * 8 + -8) !=
             _UIAtlas_TypeInfo_12d63f8) {
      plVar4 = (long *)0x0;
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar4,0,0);
    if ((uVar5 & 1) != 0) {
      if (plVar4 != (long *)0x0) {
        uVar1 = native_UIAtlas__Upgrade_6eb4f4(plVar4);
        goto LAB_006eb648;
      }
      goto LAB_006eba14;
    }
  }
  if (*(long *)(param_1 + 0x20) == 0) {
LAB_006eba14:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (*(int *)(*(long *)(param_1 + 0x20) + 0x18) == 0) {
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_006eba14;
    if (0 < *(int *)(*(long *)(param_1 + 0x40) + 0x18)) {
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar7,0);
      if ((uVar5 & 1) != 0) {
        if (*(long *)(param_1 + 0x18) != 0) {
          plVar4 = (long *)native_UnityEngine_Material__get_mainTexture_8e3334
                                     (*(long *)(param_1 + 0x18),0);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
          }
          uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar4,0,0);
          if ((uVar5 & 1) == 0) {
            uVar2 = 0x200;
          }
          else {
            if (plVar4 == (long *)0x0) goto LAB_006eba14;
            uVar2 = (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
          }
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar4,0,0);
          if ((uVar5 & 1) == 0) {
            uVar3 = 0x200;
          }
          else {
            if (plVar4 == (long *)0x0) goto LAB_006eba14;
            uVar3 = (**(code **)(*plVar4 + 0x198))(plVar4,*(undefined8 *)(*plVar4 + 0x1a0));
          }
          lVar8 = *(long *)(param_1 + 0x40);
          if (lVar8 != 0) {
            lVar9 = 0;
            do {
              if ((int)*(uint *)(lVar8 + 0x18) <= (int)(uint)lVar9) {
                native_System_Collections_Generic_List_Action___Clear_d40e80
                          (lVar8,
                           _Method_System_Collections_Generic_List_UIAtlas_Sprite__Clear___12dd928);
                uVar1 = 1;
                goto LAB_006eb648;
              }
              if (*(uint *)(lVar8 + 0x18) <= (uint)lVar9) {
                native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
              }
              lVar8 = *(long *)(*(long *)(lVar8 + 0x10) + lVar9 * 8 + 0x20);
              if (lVar8 == 0) break;
              uVar11 = *(undefined4 *)(lVar8 + 0x18);
              uVar13 = *(undefined4 *)(lVar8 + 0x1c);
              uStack_90 = *(undefined8 *)(lVar8 + 0x18);
              uVar14 = *(undefined4 *)(lVar8 + 0x20);
              uVar15 = *(undefined4 *)(lVar8 + 0x24);
              uStack_88 = *(undefined8 *)(lVar8 + 0x20);
              uStack_98 = *(ulong *)(lVar8 + 0x30);
              uStack_a0 = *(ulong *)(lVar8 + 0x28);
              if (*(int *)(param_1 + 0x38) == 1) {
                if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                native_NGUIMath__ConvertToPixels_803314(uVar11,uVar13,uVar14,uVar15,uVar2,uVar3,1,0)
                ;
                native_NGUIMath__ConvertToPixels_803314
                          (uStack_a0 & 0xffffffff,uStack_a0._4_4_,uStack_98 & 0xffffffff,
                           uStack_98._4_4_,uVar2,uVar3,1,0);
              }
              lVar6 = native_sub_432808(_UISpriteData_TypeInfo_12d64d0);
              native_UISpriteData___ctor_940c68(lVar6,0);
              if (lVar6 == 0) break;
              *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
              native_sub_4326e0((undefined8 *)(lVar6 + 0x10));
              native_UnityEngine_Rect__get_xMin_76363c(&uStack_90,0);
              uVar11 = native_UnityEngine_Mathf__RoundToInt_8e50f0(0);
              *(undefined4 *)(lVar6 + 0x18) = uVar11;
              native_UnityEngine_Rect__get_yMin_763644(&uStack_90,0);
              uVar11 = native_UnityEngine_Mathf__RoundToInt_8e50f0(0);
              *(undefined4 *)(lVar6 + 0x1c) = uVar11;
              native_UnityEngine_Rect__get_width_76367c(&uStack_90,0);
              uVar11 = native_UnityEngine_Mathf__RoundToInt_8e50f0(0);
              *(undefined4 *)(lVar6 + 0x20) = uVar11;
              native_UnityEngine_Rect__get_height_76368c(&uStack_90,0);
              uVar11 = native_UnityEngine_Mathf__RoundToInt_8e50f0(0);
              *(undefined4 *)(lVar6 + 0x24) = uVar11;
              fVar12 = *(float *)(lVar8 + 0x3c);
              fVar10 = (float)native_UnityEngine_Rect__get_width_76367c(&uStack_90,0);
              uVar11 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar12 * fVar10,0);
              *(undefined4 *)(lVar6 + 0x38) = uVar11;
              fVar12 = *(float *)(lVar8 + 0x40);
              fVar10 = (float)native_UnityEngine_Rect__get_width_76367c(&uStack_90,0);
              uVar11 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar12 * fVar10,0);
              *(undefined4 *)(lVar6 + 0x3c) = uVar11;
              fVar12 = *(float *)(lVar8 + 0x48);
              fVar10 = (float)native_UnityEngine_Rect__get_height_76368c(&uStack_90,0);
              uVar11 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar12 * fVar10,0);
              *(undefined4 *)(lVar6 + 0x44) = uVar11;
              fVar12 = *(float *)(lVar8 + 0x44);
              fVar10 = (float)native_UnityEngine_Rect__get_height_76368c(&uStack_90,0);
              uVar11 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar12 * fVar10,0);
              *(undefined4 *)(lVar6 + 0x40) = uVar11;
              fVar10 = (float)native_UnityEngine_Rect__get_xMin_76363c(&uStack_a0,0);
              fVar12 = (float)native_UnityEngine_Rect__get_xMin_76363c(&uStack_90,0);
              uVar11 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar10 - fVar12,0);
              *(undefined4 *)(lVar6 + 0x28) = uVar11;
              fVar10 = (float)native_UnityEngine_Rect__get_xMax_76365c(&uStack_90,0);
              fVar12 = (float)native_UnityEngine_Rect__get_xMax_76365c(&uStack_a0,0);
              uVar11 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar10 - fVar12,0);
              *(undefined4 *)(lVar6 + 0x2c) = uVar11;
              fVar10 = (float)native_UnityEngine_Rect__get_yMax_76366c(&uStack_90,0);
              fVar12 = (float)native_UnityEngine_Rect__get_yMax_76366c(&uStack_a0,0);
              uVar11 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar10 - fVar12,0);
              *(undefined4 *)(lVar6 + 0x34) = uVar11;
              fVar10 = (float)native_UnityEngine_Rect__get_yMin_763644(&uStack_a0,0);
              fVar12 = (float)native_UnityEngine_Rect__get_yMin_763644(&uStack_90,0);
              uVar11 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar10 - fVar12,0);
              *(undefined4 *)(lVar6 + 0x30) = uVar11;
              if (*(long *)(param_1 + 0x20) == 0) break;
              native_System_Collections_Generic_List_int_____Add_d40c00
                        (*(long *)(param_1 + 0x20),lVar6,
                         _Method_System_Collections_Generic_List_UISpriteData__Add___12dd3b0);
              lVar8 = *(long *)(param_1 + 0x40);
              lVar9 = lVar9 + 1;
            } while (lVar8 != 0);
          }
        }
        goto LAB_006eba14;
      }
    }
  }
  uVar1 = 0;
LAB_006eb648:
  return uVar1 & 1;
}



/* UIAtlas$$.ctor @ 0x6ecbd0
 * void UIAtlas___ctor (UIAtlas_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAtlas$$.ctor
   void UIAtlas___ctor (UIAtlas_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIAtlas___ctor_6ecbd0(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam000000000133f3e3 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_string__int___ctor___12d97c8);
    native_sub_43273c(&System_Collections_Generic_Dictionary_string__int__TypeInfo_12d2388);
    native_sub_43273c(&Method_System_Collections_Generic_List_UISpriteData___ctor___12dd3a8);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIAtlas_Sprite___ctor___12dd920);
    native_sub_43273c(&System_Collections_Generic_List_UISpriteData__TypeInfo_12d2c38);
    native_sub_43273c(&System_Collections_Generic_List_UIAtlas_Sprite__TypeInfo_12d2d38);
    bRam000000000133f3e3 = 1;
  }
  uVar1 = native_sub_432808(_System_Collections_Generic_List_UISpriteData__TypeInfo_12d2c38);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_UISpriteData___ctor___12dd3a8);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  native_sub_4326e0((undefined8 *)(param_1 + 0x20),uVar1);
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  uVar1 = native_sub_432808(_System_Collections_Generic_List_UIAtlas_Sprite__TypeInfo_12d2d38);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_UIAtlas_Sprite___ctor___12dd920);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  native_sub_4326e0(param_1 + 0x40,uVar1);
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  uVar1 = native_sub_432808(_System_Collections_Generic_Dictionary_string__int__TypeInfo_12d2388);
  native_System_Collections_Generic_Dictionary_Font__int____ctor_cd7054
            (uVar1,_Method_System_Collections_Generic_Dictionary_string__int___ctor___12d97c8);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  native_sub_4326e0(param_1 + 0x50,uVar1);
  if ((bRam0000000001340ae0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001340ae0 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}


