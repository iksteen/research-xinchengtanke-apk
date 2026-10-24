/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UISprite$$get_mainTexture @ 0xc3568c
 * UnityEngine_Texture_o* UISprite__get_mainTexture (UISprite_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISprite$$get_mainTexture
   UnityEngine_Texture_o* UISprite__get_mainTexture (UISprite_o* __this, const MethodInfo* method);
    */

undefined8 native_UISprite__get_mainTexture_c3568c(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((bRam0000000001342753 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342753 = 1;
  }
  plVar4 = (long *)native_sub_4327f8(*(undefined8 *)(param_1 + 0x200),_INGUIAtlas_TypeInfo_12d4c68);
  lVar6 = 0;
  if (plVar4 != (long *)0x0) {
    lVar6 = *plVar4;
    if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_00c35738;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
    }
    puVar5 = (undefined8 *)native_sub_3c9b34(plVar4,_INGUIAtlas_TypeInfo_12d4c68,0);
LAB_00c35738:
    lVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar6,0,0);
  if ((uVar7 & 1) == 0) {
    return 0;
  }
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
    uVar3 = (*pcRam0000000001340e28)(lVar6,iVar1);
    return uVar3;
  }
  uVar2 = native_UnityEngine_Shader__PropertyToID_76b308(_StringLiteral__MainTex_12f3608,0);
  if (pcRam0000000001340e28 == (code *)0x0) {
    pcRam0000000001340e28 = (code *)native_sub_4326f0(&UNK_00e2e907);
  }
                    /* WARNING: Could not recover jumptable at 0x008e349c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*pcRam0000000001340e28)(lVar6,uVar2);
  return uVar3;
}



/* UISprite$$set_mainTexture @ 0xc357a8
 * void UISprite__set_mainTexture (UISprite_o* __this, UnityEngine_Texture_o* value, const MethodInfo* method); */

/* UISprite$$set_mainTexture
   void UISprite__set_mainTexture (UISprite_o* __this, UnityEngine_Texture_o* value, const
   MethodInfo* method); */

void native_UISprite__set_mainTexture_c357a8(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)native_System_Object__GetType_adb48c(param_1,0,0);
  uVar3 = 0;
  if (plVar1 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
  }
  uVar2 = native_sub_432740(&StringLiteral__has_no_mainTexture_setter_12eae78);
  uVar3 = native_System_String__Concat_afbd68(uVar3,uVar2,0);
  native_sub_432740(&System_NotImplementedException_TypeInfo_12d5460);
  uVar2 = native_sub_432808();
  native_System_NotImplementedException___ctor_ad2610(uVar2,uVar3,0);
  uVar3 = native_sub_432740(&Method_UIWidget_set_mainTexture___12e7968);
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar2,uVar3);
}



/* UISprite$$get_material @ 0xc357b0
 * UnityEngine_Material_o* UISprite__get_material (UISprite_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISprite$$get_material
   UnityEngine_Material_o* UISprite__get_material (UISprite_o* __this, const MethodInfo* method); */

undefined8 native_UISprite__get_material_c357b0(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  
  if ((bRam0000000001342754 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342754 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
  if ((uVar1 & 1) == 0) {
    plVar2 = (long *)native_sub_4327f8(*(undefined8 *)(param_1 + 0x200),_INGUIAtlas_TypeInfo_12d4c68
                                      );
    if (plVar2 != (long *)0x0) {
      lVar4 = *plVar2;
      if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
        uVar1 = 0;
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_00c358a8;
          }
          uVar1 = uVar1 + 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 < *(ushort *)(lVar4 + 0x12a));
      }
      puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_INGUIAtlas_TypeInfo_12d4c68,0);
LAB_00c358a8:
                    /* WARNING: Could not recover jumptable at 0x00c358b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      return uVar6;
    }
    uVar6 = 0;
  }
  return uVar6;
}



/* UISprite$$set_material @ 0xc358bc
 * void UISprite__set_material (UISprite_o* __this, UnityEngine_Material_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISprite$$set_material
   void UISprite__set_material (UISprite_o* __this, UnityEngine_Material_o* value, const MethodInfo*
   method); */

void native_UISprite__set_material_c358bc(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  if ((bRam0000000001341454 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,param_2,0);
    bRam0000000001341454 = 1;
  }
  lVar2 = param_1[0x17];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,param_2,0);
  if ((uVar1 & 1) != 0) {
    native_UIWidget__RemoveFromPanel_944688(param_1);
    param_1[0x17] = param_2;
    native_sub_4326e0(param_1 + 0x17,param_2);
                    /* WARNING: Could not recover jumptable at 0x0094a6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x378))(param_1,*(undefined8 *)(*param_1 + 0x380));
    return;
  }
  return;
}



/* UISprite$$get_atlas @ 0xc358c4
 * INGUIAtlas_o* UISprite__get_atlas (UISprite_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISprite$$get_atlas
   INGUIAtlas_o* UISprite__get_atlas (UISprite_o* __this, const MethodInfo* method); */

long * native_UISprite__get_atlas_c358c4(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plStack_28;
  
  if ((bRam0000000001342755 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    bRam0000000001342755 = 1;
  }
  lVar1 = _INGUIAtlas_TypeInfo_12d4c68;
  plVar4 = *(long **)(param_1 + 0x200);
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



/* UISprite$$set_atlas @ 0xc35910
 * void UISprite__set_atlas (UISprite_o* __this, INGUIAtlas_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISprite$$set_atlas
   void UISprite__set_atlas (UISprite_o* __this, INGUIAtlas_o* value, const MethodInfo* method); */

void native_UISprite__set_atlas_c35910(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  
  if ((bRam0000000001342756 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&Method_System_Collections_Generic_List_UISpriteData__get_Count___12dd3c8);
    native_sub_43273c(&Method_System_Collections_Generic_List_UISpriteData__get_Item___12dd3d0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam0000000001342756 = 1;
  }
  plVar1 = (long *)native_sub_4327f8(param_1[0x40],_INGUIAtlas_TypeInfo_12d4c68);
  if (plVar1 == param_2) {
    return;
  }
  native_UIWidget__RemoveFromPanel_944688(param_1,0);
  if (param_2 == (long *)0x0) {
LAB_00c359c8:
    param_2 = (long *)0x0;
  }
  else {
    if (*(byte *)(*param_2 + 300) < *(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 300))
    goto LAB_00c359c8;
    if (*(long *)(*(long *)(*param_2 + 200) +
                  (ulong)*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 300) * 8 + -8) !=
        _UnityEngine_Object_TypeInfo_12d54e0) {
      param_2 = (long *)0x0;
    }
  }
  param_1[0x40] = (long)param_2;
  native_sub_4326e0(param_1 + 0x40);
  *(undefined1 *)(param_1 + 0x44) = 0;
  param_1[0x43] = 0;
  native_sub_4326e0(param_1 + 0x43,0);
  plVar1 = param_1 + 0x41;
  uVar2 = native_System_String__IsNullOrEmpty_b09430(param_1[0x41],0);
  if (((uVar2 & 1) != 0) &&
     (plVar3 = (long *)native_sub_4327f8(param_1[0x40],_INGUIAtlas_TypeInfo_12d4c68),
     plVar3 != (long *)0x0)) {
    lVar5 = *plVar3;
    if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
      uVar2 = 0;
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_00c35a84;
        }
        uVar2 = uVar2 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 < *(ushort *)(lVar5 + 0x12a));
    }
    puVar4 = (undefined8 *)native_sub_3c9b34(plVar3,_INGUIAtlas_TypeInfo_12d4c68,2);
LAB_00c35a84:
    lVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) < 1) goto LAB_00c35b44;
      lVar5 = *plVar3;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar2 = 0;
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_00c35af8;
          }
          uVar2 = uVar2 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar4 = (undefined8 *)native_sub_3c9b34(plVar3,_INGUIAtlas_TypeInfo_12d4c68,2);
LAB_00c35af8:
      lVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if (lVar5 != 0) {
        if (*(int *)(lVar5 + 0x18) == 0) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        native_UISprite__SetAtlasSprite_c35bb0
                  (param_1,*(undefined8 *)(*(long *)(lVar5 + 0x10) + 0x20));
        if (param_1[0x43] != 0) {
          *plVar1 = *(long *)(param_1[0x43] + 0x10);
          native_sub_4326e0(plVar1);
          goto LAB_00c35b44;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
LAB_00c35b44:
  uVar2 = native_System_String__IsNullOrEmpty_b09430(*plVar1,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  lVar5 = param_1[0x41];
  param_1[0x41] = _StringLiteral__12eaac0;
  native_sub_4326e0(plVar1);
  native_UISprite__set_spriteName_c35c6c(param_1,lVar5);
                    /* WARNING: Could not recover jumptable at 0x00c35ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x378))(param_1,*(undefined8 *)(*param_1 + 0x380));
  return;
}



/* UISprite$$get_fixedAspect @ 0xc35d98
 * bool UISprite__get_fixedAspect (UISprite_o* __this, const MethodInfo* method); */

/* UISprite$$get_fixedAspect
   bool UISprite__get_fixedAspect (UISprite_o* __this, const MethodInfo* method); */

undefined1 native_UISprite__get_fixedAspect_c35d98(long param_1)

{
  return *(undefined1 *)(param_1 + 0x210);
}



/* UISprite$$set_fixedAspect @ 0xc35da0
 * void UISprite__set_fixedAspect (UISprite_o* __this, bool value, const MethodInfo* method); */

/* UISprite$$set_fixedAspect
   void UISprite__set_fixedAspect (UISprite_o* __this, bool value, const MethodInfo* method); */

void native_UISprite__set_fixedAspect_c35da0(long *param_1,byte param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((((char)param_1[0x42] != '\0' ^ param_2) & 1) != 0) {
    uStack_28 = 0;
    *(byte *)(param_1 + 0x42) = param_2 & 1;
    uStack_30 = 0;
    native_UnityEngine_Vector4___ctor_776f24(0,0,0x3f800000,0x3f800000,&uStack_30,0);
    *(undefined8 *)((long)param_1 + 0x10c) = uStack_28;
    *(undefined8 *)((long)param_1 + 0x104) = uStack_30;
    (**(code **)(*param_1 + 0x378))(param_1,*(undefined8 *)(*param_1 + 0x380));
  }
  return;
}



/* UISprite$$GetSprite @ 0xc35e20
 * UISpriteData_o* UISprite__GetSprite (UISprite_o* __this, System_String_o* spriteName, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISprite$$GetSprite
   UISpriteData_o* UISprite__GetSprite (UISprite_o* __this, System_String_o* spriteName, const
   MethodInfo* method); */

void native_UISprite__GetSprite_c35e20(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((bRam0000000001342757 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    bRam0000000001342757 = 1;
  }
  plVar1 = (long *)native_UISprite__get_atlas_c358c4(param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
  lVar3 = *plVar1;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar4 = 0;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 10) * 0x10 + 0x138);
        goto LAB_00c35ed8;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIAtlas_TypeInfo_12d4c68,10);
LAB_00c35ed8:
                    /* WARNING: Could not recover jumptable at 0x00c35ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar1,param_2,puVar2[1]);
  return;
}



/* UISprite$$MarkAsChanged @ 0xc35ef4
 * void UISprite__MarkAsChanged (UISprite_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISprite$$MarkAsChanged
   void UISprite__MarkAsChanged (UISprite_o* __this, const MethodInfo* method); */

void native_UISprite__MarkAsChanged_c35ef4(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  param_1[0x43] = 0;
  native_sub_4326e0(param_1 + 0x43,0);
  *(undefined1 *)(param_1 + 0x44) = 0;
  if ((bRam0000000001341463 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8,0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341463 = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_NGUITools__GetActive_72d02c(param_1,0);
  if ((uVar4 & 1) != 0) {
    *(undefined1 *)(param_1 + 0xb) = 1;
    lVar7 = param_1[0x1e];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
    if (((uVar4 & 1) != 0) &&
       (uVar4 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0), (uVar4 & 1) != 0)) {
      uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
      }
      uVar4 = native_NGUITools__GetActive_72d0d4(uVar5,0);
      if (((uVar4 & 1) != 0) && (*(char *)((long)param_1 + 0x101) == '\0')) {
        (**(code **)(*param_1 + 0x368))(param_1,*(undefined8 *)(*param_1 + 0x370));
        if ((bRam0000000001341465 & 1) == 0) {
          native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
          native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
          native_sub_43273c(&
                            StringLiteral_You_can_t_place_widgets_on_a_layer_different_than_the_UIPanel_that_manages_them__If_you_want_to_move_widgets_to_a_different_layer__parent_them_to_a_new_panel_instead__12f31f0
                           );
          bRam0000000001341465 = 1;
        }
        lVar7 = param_1[0x1e];
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
        if ((uVar4 & 1) == 0) {
          return;
        }
        if ((param_1[0x1e] != 0) &&
           (lVar7 = native_UnityEngine_Component__get_gameObject_8da66c(param_1[0x1e],0), lVar7 != 0
           )) {
          iVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar7,0);
          lVar7 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
          if (lVar7 != 0) {
            iVar2 = native_UnityEngine_GameObject__get_layer_8de608(lVar7,0);
            if (iVar1 == iVar2) {
              return;
            }
            if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            native_UnityEngine_Debug__LogWarning_8dcbc8
                      (_StringLiteral_You_can_t_place_widgets_on_a_layer_different_than_the_UIPanel_that_manages_them__If_you_want_to_move_widgets_to_a_different_layer__parent_them_to_a_new_panel_instead__12f31f0
                       ,param_1,0);
            lVar7 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
            if (((param_1[0x1e] != 0) &&
                (lVar6 = native_UnityEngine_Component__get_gameObject_8da66c(param_1[0x1e],0),
                lVar6 != 0)) &&
               (uVar3 = native_UnityEngine_GameObject__get_layer_8de608(lVar6,0), lVar7 != 0)) {
              if (pcRam0000000001340bf0 == (code *)0x0) {
                pcRam0000000001340bf0 = (code *)native_sub_4326f0(&UNK_00e2da37);
              }
                    /* WARNING: Could not recover jumptable at 0x008de694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000001340bf0)(lVar7,uVar3);
              return;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
    }
  }
  return;
}



/* UISprite$$get_spriteName @ 0xc35f2c
 * System_String_o* UISprite__get_spriteName (UISprite_o* __this, const MethodInfo* method); */

/* UISprite$$get_spriteName
   System_String_o* UISprite__get_spriteName (UISprite_o* __this, const MethodInfo* method); */

undefined8 native_UISprite__get_spriteName_c35f2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x208);
}



/* UISprite$$set_spriteName @ 0xc35c6c
 * void UISprite__set_spriteName (UISprite_o* __this, System_String_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISprite$$set_spriteName
   void UISprite__set_spriteName (UISprite_o* __this, System_String_o* value, const MethodInfo*
   method); */

void native_UISprite__set_spriteName_c35c6c(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((bRam0000000001342758 & 1) == 0) {
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam0000000001342758 = 1;
  }
  uVar1 = native_System_String__IsNullOrEmpty_b09430(param_2,0);
  if ((uVar1 & 1) == 0) {
    uVar1 = native_System_String__op_Inequality_afbbb4(param_1[0x41],param_2,0);
    if ((uVar1 & 1) != 0) {
      param_1[0x41] = param_2;
      native_sub_4326e0(param_1 + 0x41,param_2);
      param_1[0x43] = 0;
      native_sub_4326e0(param_1 + 0x43,0);
      *(undefined1 *)(param_1 + 0x44) = 0;
      *(undefined1 *)(param_1 + 0xb) = 1;
      (**(code **)(*param_1 + 0x378))(param_1,*(undefined8 *)(*param_1 + 0x380));
      if (*(char *)((long)param_1 + 0x221) != '\0') {
        UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x3a8);
        uVar2 = *(undefined8 *)(*param_1 + 0x3b0);
        goto LAB_00c35d74;
      }
    }
  }
  else {
    uVar1 = native_System_String__IsNullOrEmpty_b09430(param_1[0x41],0);
    if ((uVar1 & 1) == 0) {
      param_1[0x41] = _StringLiteral__12eaac0;
      native_sub_4326e0(param_1 + 0x41);
      param_1[0x43] = 0;
      native_sub_4326e0(param_1 + 0x43,0);
      *(undefined1 *)(param_1 + 0x44) = 0;
      *(undefined1 *)(param_1 + 0xb) = 1;
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x378);
      uVar2 = *(undefined8 *)(*param_1 + 0x380);
LAB_00c35d74:
                    /* WARNING: Could not recover jumptable at 0x00c35d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,uVar2);
      return;
    }
  }
  return;
}



/* UISprite$$get_isValid @ 0xc35f34
 * bool UISprite__get_isValid (UISprite_o* __this, const MethodInfo* method); */

/* UISprite$$get_isValid
   bool UISprite__get_isValid (UISprite_o* __this, const MethodInfo* method); */

bool native_UISprite__get_isValid_c35f34(void)

{
  long lVar1;
  
  lVar1 = native_UISprite__GetAtlasSprite_c35f50();
  return lVar1 != 0;
}



/* UISprite$$get_fillCenter @ 0xc36268
 * bool UISprite__get_fillCenter (UISprite_o* __this, const MethodInfo* method); */

/* UISprite$$get_fillCenter
   bool UISprite__get_fillCenter (UISprite_o* __this, const MethodInfo* method); */

bool native_UISprite__get_fillCenter_c36268(long param_1)

{
  return *(int *)(param_1 + 0x1e8) != 0;
}



/* UISprite$$set_fillCenter @ 0xc36278
 * void UISprite__set_fillCenter (UISprite_o* __this, bool value, const MethodInfo* method); */

/* UISprite$$set_fillCenter
   void UISprite__set_fillCenter (UISprite_o* __this, bool value, const MethodInfo* method); */

void native_UISprite__set_fillCenter_c36278(long *param_1,uint param_2)

{
  if ((((int)param_1[0x3d] != 0 ^ param_2) & 1) != 0) {
    *(uint *)(param_1 + 0x3d) = param_2 & 1;
                    /* WARNING: Could not recover jumptable at 0x00c362a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x378))(param_1,*(undefined8 *)(*param_1 + 0x380));
    return;
  }
  return;
}



/* UISprite$$get_applyGradient @ 0xc362a8
 * bool UISprite__get_applyGradient (UISprite_o* __this, const MethodInfo* method); */

/* UISprite$$get_applyGradient
   bool UISprite__get_applyGradient (UISprite_o* __this, const MethodInfo* method); */

undefined1 native_UISprite__get_applyGradient_c362a8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1a4);
}



/* UISprite$$set_applyGradient @ 0xc362b0
 * void UISprite__set_applyGradient (UISprite_o* __this, bool value, const MethodInfo* method); */

/* UISprite$$set_applyGradient
   void UISprite__set_applyGradient (UISprite_o* __this, bool value, const MethodInfo* method); */

void native_UISprite__set_applyGradient_c362b0(long *param_1,byte param_2)

{
  if (((*(char *)((long)param_1 + 0x1a4) != '\0' ^ param_2) & 1) != 0) {
    *(byte *)((long)param_1 + 0x1a4) = param_2 & 1;
                    /* WARNING: Could not recover jumptable at 0x00c362d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x378))(param_1,*(undefined8 *)(*param_1 + 0x380));
    return;
  }
  return;
}



/* UISprite$$get_gradientTop @ 0xc362e0
 * UnityEngine_Color_o UISprite__get_gradientTop (UISprite_o* __this, const MethodInfo* method); */

/* UISprite$$get_gradientTop
   UnityEngine_Color_o UISprite__get_gradientTop (UISprite_o* __this, const MethodInfo* method); */

undefined4 native_UISprite__get_gradientTop_c362e0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1a8);
}



/* UISprite$$set_gradientTop @ 0xc362f4
 * void UISprite__set_gradientTop (UISprite_o* __this, UnityEngine_Color_o value, const MethodInfo* method); */

/* UISprite$$set_gradientTop
   void UISprite__set_gradientTop (UISprite_o* __this, UnityEngine_Color_o value, const MethodInfo*
   method); */

void native_UISprite__set_gradientTop_c362f4
               (undefined8 param_1,undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16],long *param_5)

{
  ulong uVar1;
  
  uVar1 = native_UnityEngine_Color__op_Inequality_8d9d34
                    ((int)param_5[0x35],*(undefined4 *)((long)param_5 + 0x1ac),(int)param_5[0x36],
                     *(undefined4 *)((long)param_5 + 0x1b4),param_1,param_2._0_8_,param_3._0_8_,
                     param_4._0_8_,0);
  if ((uVar1 & 1) != 0) {
    *(int *)(param_5 + 0x35) = (int)param_1;
    *(int *)((long)param_5 + 0x1ac) = param_2._0_4_;
    *(int *)(param_5 + 0x36) = param_3._0_4_;
    *(int *)((long)param_5 + 0x1b4) = param_4._0_4_;
    if (*(char *)((long)param_5 + 0x1a4) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00c36384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_5 + 0x378))(param_5,*(undefined8 *)(*param_5 + 0x380));
      return;
    }
  }
  return;
}



/* UISprite$$get_gradientBottom @ 0xc3639c
 * UnityEngine_Color_o UISprite__get_gradientBottom (UISprite_o* __this, const MethodInfo* method); */

/* UISprite$$get_gradientBottom
   UnityEngine_Color_o UISprite__get_gradientBottom (UISprite_o* __this, const MethodInfo* method);
    */

undefined4 native_UISprite__get_gradientBottom_c3639c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1b8);
}



/* UISprite$$set_gradientBottom @ 0xc363b0
 * void UISprite__set_gradientBottom (UISprite_o* __this, UnityEngine_Color_o value, const MethodInfo* method); */

/* UISprite$$set_gradientBottom
   void UISprite__set_gradientBottom (UISprite_o* __this, UnityEngine_Color_o value, const
   MethodInfo* method); */

void native_UISprite__set_gradientBottom_c363b0
               (undefined8 param_1,undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16],long *param_5)

{
  ulong uVar1;
  
  uVar1 = native_UnityEngine_Color__op_Inequality_8d9d34
                    ((int)param_5[0x37],*(undefined4 *)((long)param_5 + 0x1bc),(int)param_5[0x38],
                     *(undefined4 *)((long)param_5 + 0x1c4),param_1,param_2._0_8_,param_3._0_8_,
                     param_4._0_8_,0);
  if ((uVar1 & 1) != 0) {
    *(int *)(param_5 + 0x37) = (int)param_1;
    *(int *)((long)param_5 + 0x1bc) = param_2._0_4_;
    *(int *)(param_5 + 0x38) = param_3._0_4_;
    *(int *)((long)param_5 + 0x1c4) = param_4._0_4_;
    if (*(char *)((long)param_5 + 0x1a4) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00c36440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_5 + 0x378))(param_5,*(undefined8 *)(*param_5 + 0x380));
      return;
    }
  }
  return;
}



/* UISprite$$get_border @ 0xc36458
 * UnityEngine_Vector4_o UISprite__get_border (UISprite_o* __this, const MethodInfo* method); */

/* UISprite$$get_border
   UnityEngine_Vector4_o UISprite__get_border (UISprite_o* __this, const MethodInfo* method); */

undefined1  [16] native_UISprite__get_border_c36458(undefined8 param_1)

{
  long lVar1;
  undefined4 extraout_s0;
  undefined4 uVar3;
  undefined4 extraout_var;
  undefined8 uVar4;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = native_UISprite__GetAtlasSprite_c35f50();
  if (lVar1 == 0) {
    native_UIWidget__get_border_94ccfc(param_1,0);
    uStack_30._0_4_ = extraout_s0;
    uVar3 = extraout_var;
    uVar4 = extraout_var_00;
  }
  else {
    uStack_30 = 0;
    uStack_28 = 0;
    native_UnityEngine_Vector4___ctor_776f24
              ((float)*(int *)(lVar1 + 0x28),(float)*(int *)(lVar1 + 0x34),
               (float)*(int *)(lVar1 + 0x2c),(float)*(int *)(lVar1 + 0x30),&uStack_30,0);
    uVar3 = 0;
    uVar4 = 0;
  }
  auVar2._4_4_ = uVar3;
  auVar2._0_4_ = (undefined4)uStack_30;
  auVar2._8_8_ = uVar4;
  return auVar2;
}



/* UISprite$$get_padding @ 0xc364cc
 * UnityEngine_Vector4_o UISprite__get_padding (UISprite_o* __this, const MethodInfo* method); */

/* UISprite$$get_padding
   UnityEngine_Vector4_o UISprite__get_padding (UISprite_o* __this, const MethodInfo* method); */

float native_UISprite__get_padding_c364cc(void)

{
  long lVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  uStack_30 = 0;
  lVar1 = native_UISprite__GetAtlasSprite_c35f50();
  native_UnityEngine_Vector4___ctor_776f24(0,0,0,0,&uStack_30,0);
  if (lVar1 == 0) {
  }
  else {
    uStack_30._0_4_ = (float)*(int *)(lVar1 + 0x38);
  }
  return (float)uStack_30;
}



/* UISprite$$get_pixelSize @ 0xc36548
 * float UISprite__get_pixelSize (UISprite_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISprite$$get_pixelSize
   float UISprite__get_pixelSize (UISprite_o* __this, const MethodInfo* method); */

undefined1  [16] native_UISprite__get_pixelSize_c36548(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar7 [16];
  
  if ((bRam0000000001342759 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342759 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x200);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
  if ((uVar1 & 1) == 0) {
    plVar2 = (long *)native_sub_4327f8(*(undefined8 *)(param_1 + 0x200),_INGUIAtlas_TypeInfo_12d4c68
                                      );
    if (plVar2 != (long *)0x0) {
      lVar4 = *plVar2;
      if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
        uVar1 = 0;
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 5) * 0x10 + 0x138);
            goto LAB_00c36640;
          }
          uVar1 = uVar1 + 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 < *(ushort *)(lVar4 + 0x12a));
      }
      puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_INGUIAtlas_TypeInfo_12d4c68,5);
LAB_00c36640:
                    /* WARNING: Could not recover jumptable at 0x00c36650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar2,puVar3[1]);
      auVar7._4_4_ = extraout_var;
      auVar7._0_4_ = extraout_s0;
      auVar7._8_8_ = extraout_var_00;
      return auVar7;
    }
  }
  return ZEXT816(0x3f800000);
}



/* UISprite$$get_minWidth @ 0xc36654
 * int32_t UISprite__get_minWidth (UISprite_o* __this, const MethodInfo* method); */

/* UISprite$$get_minWidth
   int32_t UISprite__get_minWidth (UISprite_o* __this, const MethodInfo* method); */

undefined8
native_UISprite__get_minWidth_c36654
          (undefined1 param_1 [16],float param_2,float param_3,float param_4,long *param_5)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  iVar1 = (**(code **)(*param_5 + 0x428))(param_5,*(undefined8 *)(*param_5 + 0x430));
  if (iVar1 != 1) {
    iVar1 = (**(code **)(*param_5 + 0x428))(param_5,*(undefined8 *)(*param_5 + 0x430));
    if (iVar1 != 4) {
      iVar1 = (**(code **)(*param_5 + 0x428))(param_5,*(undefined8 *)(*param_5 + 0x430));
      if (iVar1 != 1) {
        iVar1 = (**(code **)(*param_5 + 0x428))(param_5,*(undefined8 *)(*param_5 + 0x430));
        if (iVar1 != 4) {
          return 2;
        }
      }
      fVar5 = (float)(**(code **)(*param_5 + 0x3d8))(param_5,*(undefined8 *)(*param_5 + 0x3e0));
      fVar6 = (float)(**(code **)(*param_5 + 0x458))(param_5,*(undefined8 *)(*param_5 + 0x460));
      native_UnityEngine_Vector4___ctor_776f24
                (fVar5 * fVar6,param_2 * fVar6,param_3 * fVar6,param_4 * fVar6,
                 &stack0xffffffffffffffb0,0);
      uVar2 = native_UnityEngine_Mathf__RoundToInt_8e50f0(0,0);
      uVar4 = native_UIWidget__get_minWidth_94ccec(param_5,0);
      uVar4 = native_UnityEngine_Mathf__Max_8e4cd0(uVar4,(uVar2 & 1) + uVar2,0);
      return uVar4;
    }
  }
  fVar5 = (float)(**(code **)(*param_5 + 0x458))(param_5,*(undefined8 *)(*param_5 + 0x460));
  fVar6 = (float)(**(code **)(*param_5 + 0x3d8))(param_5,*(undefined8 *)(*param_5 + 0x3e0));
  fVar7 = (float)(**(code **)(*param_5 + 0x458))(param_5,*(undefined8 *)(*param_5 + 0x460));
  uStack_60 = 0;
  uStack_58 = 0;
  native_UnityEngine_Vector4___ctor_776f24
            (fVar6 * fVar7,param_2 * fVar7,param_3 * fVar7,param_4 * fVar7,&uStack_60,0);
  uVar2 = native_UnityEngine_Mathf__RoundToInt_8e50f0((float)uStack_60 + (float)uStack_58,0);
  lVar3 = native_UISprite__GetAtlasSprite_c35f50(param_5);
  if (lVar3 != 0) {
    iVar1 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                      (fVar5 * (float)(*(int *)(lVar3 + 0x3c) + *(int *)(lVar3 + 0x38)),0);
    uVar2 = iVar1 + uVar2;
  }
  uVar4 = native_UIBasicSprite__get_minWidth_c8bf2c(param_5,0);
  uVar4 = native_UnityEngine_Mathf__Max_8e4cd0(uVar4,(uVar2 & 1) + uVar2,0);
  return uVar4;
}



/* UISprite$$get_minHeight @ 0xc367b8
 * int32_t UISprite__get_minHeight (UISprite_o* __this, const MethodInfo* method); */

/* UISprite$$get_minHeight
   int32_t UISprite__get_minHeight (UISprite_o* __this, const MethodInfo* method); */

undefined8
native_UISprite__get_minHeight_c367b8
          (undefined1 param_1 [16],float param_2,float param_3,float param_4,long *param_5)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  iVar1 = (**(code **)(*param_5 + 0x428))(param_5,*(undefined8 *)(*param_5 + 0x430));
  if (iVar1 != 1) {
    iVar1 = (**(code **)(*param_5 + 0x428))(param_5,*(undefined8 *)(*param_5 + 0x430));
    if (iVar1 != 4) {
      iVar1 = (**(code **)(*param_5 + 0x428))(param_5,*(undefined8 *)(*param_5 + 0x430));
      if (iVar1 != 1) {
        iVar1 = (**(code **)(*param_5 + 0x428))(param_5,*(undefined8 *)(*param_5 + 0x430));
        if (iVar1 != 4) {
          return 2;
        }
      }
      fVar5 = (float)(**(code **)(*param_5 + 0x3d8))(param_5,*(undefined8 *)(*param_5 + 0x3e0));
      fVar6 = (float)(**(code **)(*param_5 + 0x458))(param_5,*(undefined8 *)(*param_5 + 0x460));
      native_UnityEngine_Vector4___ctor_776f24
                (fVar5 * fVar6,param_2 * fVar6,param_3 * fVar6,param_4 * fVar6,
                 &stack0xffffffffffffffb0,0);
      uVar2 = native_UnityEngine_Mathf__RoundToInt_8e50f0(0,0);
      uVar4 = native_UIWidget__get_minHeight_94ccf4(param_5,0);
      uVar4 = native_UnityEngine_Mathf__Max_8e4cd0(uVar4,(uVar2 & 1) + uVar2,0);
      return uVar4;
    }
  }
  fVar5 = (float)(**(code **)(*param_5 + 0x458))(param_5,*(undefined8 *)(*param_5 + 0x460));
  fVar6 = (float)(**(code **)(*param_5 + 0x3d8))(param_5,*(undefined8 *)(*param_5 + 0x3e0));
  fVar7 = (float)(**(code **)(*param_5 + 0x458))(param_5,*(undefined8 *)(*param_5 + 0x460));
  uStack_60 = 0;
  uStack_58 = 0;
  native_UnityEngine_Vector4___ctor_776f24
            (fVar6 * fVar7,param_2 * fVar7,param_3 * fVar7,param_4 * fVar7,&uStack_60,0);
  uVar2 = native_UnityEngine_Mathf__RoundToInt_8e50f0(uStack_60._4_4_ + uStack_58._4_4_,0);
  lVar3 = native_UISprite__GetAtlasSprite_c35f50(param_5);
  if (lVar3 != 0) {
    iVar1 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                      (fVar5 * (float)(*(int *)(lVar3 + 0x44) + *(int *)(lVar3 + 0x40)),0);
    uVar2 = iVar1 + uVar2;
  }
  uVar4 = native_UIBasicSprite__get_minHeight_c8c044(param_5,0);
  uVar4 = native_UnityEngine_Mathf__Max_8e4cd0(uVar4,(uVar2 & 1) + uVar2,0);
  return uVar4;
}



/* UISprite$$get_drawingDimensions @ 0xc3691c
 * UnityEngine_Vector4_o UISprite__get_drawingDimensions (UISprite_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISprite$$get_drawingDimensions
   UnityEngine_Vector4_o UISprite__get_drawingDimensions (UISprite_o* __this, const MethodInfo*
   method); */

undefined4
native_UISprite__get_drawingDimensions_c3691c(undefined1 param_1 [16],float param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if ((bRam000000000134275a & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134275a = 1;
  }
  fVar10 = (float)native_UIWidget__get_pivotOffset_944f8c(param_3,0);
  fVar18 = (float)*(int *)((long)param_3 + 0xa4);
  fVar19 = (float)(int)param_3[0x15];
  fVar22 = param_2 * fVar19;
  uVar15 = (ulong)(uint)-(fVar10 * fVar18);
  uVar17 = (ulong)(uint)-(param_2 * fVar19);
  fVar21 = fVar18 - fVar10 * fVar18;
  uVar13 = (ulong)(uint)fVar21;
  fVar20 = fVar19 - fVar22;
  uVar14 = (ulong)(uint)fVar20;
  lVar7 = native_UISprite__GetAtlasSprite_c35f50(param_3);
  if ((lVar7 == 0) || ((int)param_3[0x32] == 2)) {
LAB_00c36b24:
    fVar10 = *(float *)((long)param_3 + 0x104);
    if ((((fVar10 != 0.0) || (*(float *)(param_3 + 0x21) != 0.0)) ||
        (param_2 = 1.0, *(float *)((long)param_3 + 0x10c) != 1.0)) ||
       (*(float *)(param_3 + 0x22) != 0.0)) {
      fVar21 = 0.0;
      fVar18 = 0.0;
      fVar20 = fVar10;
      if ((char)param_3[0x42] == '\0') {
        lVar7 = param_3[0x40];
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar8 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
        if ((uVar8 & 1) == 0) {
          fVar18 = (float)native_UnityEngine_Vector4__get_zero_777178(0);
        }
        else {
          fVar18 = (float)(**(code **)(*param_3 + 0x3d8))(param_3,*(undefined8 *)(*param_3 + 0x3e0))
          ;
          fVar20 = (float)(**(code **)(*param_3 + 0x458))(param_3,*(undefined8 *)(*param_3 + 0x460))
          ;
          uStack_90 = 0;
          uStack_88 = 0;
          native_UnityEngine_Vector4___ctor_776f24
                    (fVar18 * fVar20,param_2 * fVar20,fVar10 * fVar20,fVar19 * fVar20,&uStack_90,0);
          fVar18 = (float)uStack_90;
          fVar10 = (float)uStack_88;
          param_2 = uStack_90._4_4_;
          fVar19 = uStack_88._4_4_;
        }
        fVar20 = *(float *)((long)param_3 + 0x104);
        fVar18 = fVar18 + fVar10;
        fVar21 = param_2 + fVar19;
      }
      uVar8 = native_UnityEngine_Mathf__Lerp_8e5224(uVar15,(float)uVar13 - fVar18,fVar20,0);
      uVar12 = native_UnityEngine_Mathf__Lerp_8e5224
                         (uVar17,(float)uVar14 - fVar21,(int)param_3[0x21],0);
      uVar13 = native_UnityEngine_Mathf__Lerp_8e5224
                         ((float)uVar15 + fVar18,uVar13,*(undefined4 *)((long)param_3 + 0x10c),0);
      uVar14 = native_UnityEngine_Mathf__Lerp_8e5224
                         ((float)uVar17 + fVar21,uVar14,(int)param_3[0x22],0);
      uVar15 = uVar8;
      uVar17 = uVar12;
    }
    uStack_98 = 0;
    uStack_a0 = 0;
    native_UnityEngine_Vector4___ctor_776f24(uVar15,uVar17,uVar13,uVar14,&uStack_a0,0);
    return (undefined4)uStack_a0;
  }
  lVar7 = param_3[0x43];
  if (lVar7 != 0) {
    iVar6 = *(int *)(lVar7 + 0x40);
    iVar4 = *(int *)(lVar7 + 0x44);
    iVar3 = *(int *)(lVar7 + 0x38);
    iVar5 = *(int *)(lVar7 + 0x3c);
    if (((int)param_3[0x32] != 0) &&
       (fVar19 = (float)(**(code **)(*param_3 + 0x458))(param_3,*(undefined8 *)(*param_3 + 0x460)),
       fVar19 != 1.0)) {
      iVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar19 * (float)iVar3,0);
      iVar4 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar19 * (float)iVar4,0);
      iVar5 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar19 * (float)iVar5,0);
      iVar6 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar19 * (float)iVar6,0);
    }
    lVar7 = param_3[0x43];
    if (lVar7 != 0) {
      fVar11 = 1.0;
      uVar1 = iVar3 + iVar5 + *(int *)(lVar7 + 0x20);
      if ((((int)uVar1 < 1) || (uVar2 = iVar4 + iVar6 + *(int *)(lVar7 + 0x24), (int)uVar2 < 1)) ||
         (((int)param_3[0x32] != 3 && ((int)param_3[0x32] != 0)))) {
        fVar16 = 1.0;
      }
      else {
        iVar5 = (uVar1 & 1) + iVar5;
        iVar6 = (uVar2 & 1) + iVar6;
        fVar16 = (1.0 / (float)(int)uVar1) * (float)*(int *)((long)param_3 + 0xa4);
        fVar11 = (1.0 / (float)(int)uVar2) * (float)(int)param_3[0x15];
      }
      iVar9 = iVar3;
      if ((*(uint *)(param_3 + 0x34) | 2) == 3) {
        iVar9 = iVar5;
        iVar5 = iVar3;
      }
      fVar19 = (float)iVar9;
      uVar15 = (ulong)(uint)(fVar16 * fVar19 - fVar10 * fVar18);
      uVar13 = (ulong)(uint)(fVar21 - fVar16 * (float)iVar5);
      iVar5 = iVar4;
      if ((*(uint *)(param_3 + 0x34) & 0xfffffffe) == 2) {
        iVar5 = iVar6;
        iVar6 = iVar4;
      }
      param_2 = fVar11 * (float)iVar5;
      uVar17 = (ulong)(uint)(param_2 - fVar22);
      uVar14 = (ulong)(uint)(fVar20 - fVar11 * (float)iVar6);
      goto LAB_00c36b24;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UISprite$$get_premultipliedAlpha @ 0xc36ce8
 * bool UISprite__get_premultipliedAlpha (UISprite_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISprite$$get_premultipliedAlpha
   bool UISprite__get_premultipliedAlpha (UISprite_o* __this, const MethodInfo* method); */

void native_UISprite__get_premultipliedAlpha_c36ce8(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((bRam000000000134275b & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    bRam000000000134275b = 1;
  }
  plVar1 = (long *)native_sub_4327f8(*(undefined8 *)(param_1 + 0x200),_INGUIAtlas_TypeInfo_12d4c68);
  if (plVar1 == (long *)0x0) {
    return;
  }
  lVar3 = *plVar1;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar4 = 0;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 7) * 0x10 + 0x138);
        goto LAB_00c36d98;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIAtlas_TypeInfo_12d4c68,7);
LAB_00c36d98:
                    /* WARNING: Could not recover jumptable at 0x00c36da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  return;
}



/* UISprite$$GetAtlasSprite @ 0xc35f50
 * UISpriteData_o* UISprite__GetAtlasSprite (UISprite_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISprite$$GetAtlasSprite
   UISpriteData_o* UISprite__GetAtlasSprite (UISprite_o* __this, const MethodInfo* method); */

long native_UISprite__GetAtlasSprite_c35f50(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  
  if ((bRam000000000134275c & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&Method_System_Collections_Generic_List_UISpriteData__get_Count___12dd3c8);
    native_sub_43273c(&Method_System_Collections_Generic_List_UISpriteData__get_Item___12dd3d0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral__seems_to_have_a_null_sprite__12eaf00);
    bRam000000000134275c = 1;
  }
  plVar1 = (long *)(param_1 + 0x218);
  if (*(char *)(param_1 + 0x220) == '\0') {
    *plVar1 = 0;
    native_sub_4326e0(plVar1,0);
  }
  if ((*plVar1 == 0) &&
     (plVar3 = (long *)native_sub_4327f8(*(undefined8 *)(param_1 + 0x200),
                                         _INGUIAtlas_TypeInfo_12d4c68), plVar3 != (long *)0x0)) {
    puVar2 = (undefined8 *)(param_1 + 0x208);
    uVar4 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x208),0);
    if ((uVar4 & 1) == 0) {
      lVar6 = *plVar3;
      uVar8 = *puVar2;
      if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
        uVar4 = 0;
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 10) * 0x10 + 0x138);
            goto LAB_00c3608c;
          }
          uVar4 = uVar4 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 < *(ushort *)(lVar6 + 0x12a));
      }
      puVar5 = (undefined8 *)native_sub_3c9b34(plVar3,_INGUIAtlas_TypeInfo_12d4c68,10);
LAB_00c3608c:
      lVar6 = (*(code *)*puVar5)(plVar3,uVar8,puVar5[1]);
      if (lVar6 == 0) {
        return 0;
      }
      native_UISprite__SetAtlasSprite_c35bb0(param_1,lVar6);
    }
    if (*plVar1 == 0) {
      lVar6 = *plVar3;
      if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
        uVar4 = 0;
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_00c3610c;
          }
          uVar4 = uVar4 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 < *(ushort *)(lVar6 + 0x12a));
      }
      puVar5 = (undefined8 *)native_sub_3c9b34(plVar3,_INGUIAtlas_TypeInfo_12d4c68,2);
LAB_00c3610c:
      lVar6 = (*(code *)*puVar5)(plVar3,puVar5[1]);
      if (lVar6 != 0) {
        if (*(int *)(lVar6 + 0x18) < 1) goto LAB_00c35fe8;
        lVar6 = *plVar3;
        if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
          uVar4 = 0;
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 2) * 0x10 + 0x138);
              goto LAB_00c36180;
            }
            uVar4 = uVar4 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar4 < *(ushort *)(lVar6 + 0x12a));
        }
        puVar5 = (undefined8 *)native_sub_3c9b34(plVar3,_INGUIAtlas_TypeInfo_12d4c68,2);
LAB_00c36180:
        lVar6 = (*(code *)*puVar5)(plVar3,puVar5[1]);
        if (lVar6 != 0) {
          if (*(int *)(lVar6 + 0x18) == 0) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          if (*(long *)(*(long *)(lVar6 + 0x10) + 0x20) != 0) {
            native_UISprite__SetAtlasSprite_c35bb0(param_1);
            if (*(long *)(param_1 + 0x218) != 0) {
              *puVar2 = *(undefined8 *)(*(long *)(param_1 + 0x218) + 0x10);
              native_sub_4326e0(puVar2);
              goto LAB_00c35fe8;
            }
            if ((*(byte *)(*plVar3 + 300) < *(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 300))
               || (*(long *)(*(long *)(*plVar3 + 200) +
                             (ulong)*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 300) * 8 + -8)
                   != _UnityEngine_Object_TypeInfo_12d54e0)) goto LAB_00c36264;
            uVar8 = native_UnityEngine_Object__get_name_8e8098(plVar3,0);
            uVar8 = native_System_String__Concat_afbd68
                              (uVar8,_StringLiteral__seems_to_have_a_null_sprite__12eaf00,0);
            if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
              native_sub_4327ec(_UnityEngine_Debug_TypeInfo_12d4338);
            }
            native_UnityEngine_Debug__LogError_8dc5cc(uVar8,0);
          }
          return 0;
        }
      }
LAB_00c36264:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
LAB_00c35fe8:
  return *plVar1;
}



/* UISprite$$SetAtlasSprite @ 0xc35bb0
 * void UISprite__SetAtlasSprite (UISprite_o* __this, UISpriteData_o* sp, const MethodInfo* method); */

/* UISprite$$SetAtlasSprite
   void UISprite__SetAtlasSprite (UISprite_o* __this, UISpriteData_o* sp, const MethodInfo* method);
    */

void native_UISprite__SetAtlasSprite_c35bb0(long param_1,long param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  if ((bRam000000000134275d & 1) == 0) {
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam000000000134275d = 1;
  }
  plVar5 = (long *)(param_1 + 0x218);
  *(undefined1 *)(param_1 + 0x58) = 1;
  *(undefined1 *)(param_1 + 0x220) = 1;
  if (param_2 == 0) {
    puVar2 = (undefined8 *)&StringLiteral__12eaac0;
    if (*(long *)(param_1 + 0x218) != 0) {
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x218) + 0x10);
    }
    *(undefined8 *)(param_1 + 0x208) = *puVar2;
    native_sub_4326e0(param_1 + 0x208);
    *(undefined8 *)(param_1 + 0x218) = 0;
  }
  else {
    *plVar5 = param_2;
    native_sub_4326e0(plVar5,param_2);
    lVar6 = *plVar5;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    plVar5 = (long *)(param_1 + 0x208);
    *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)(lVar6 + 0x10);
  }
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)plVar5 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar5 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return;
}



/* UISprite$$MakePixelPerfect @ 0xc36dac
 * void UISprite__MakePixelPerfect (UISprite_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISprite$$MakePixelPerfect
   void UISprite__MakePixelPerfect (UISprite_o* __this, const MethodInfo* method); */

void native_UISprite__MakePixelPerfect_c36dac(long *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  int iVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  float fVar36;
  ulong uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined8 uVar37;
  
  if ((bRam000000000134275e & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134275e = 1;
  }
  lVar13 = native_UISprite__GetAtlasSprite_c35f50(param_1);
  if (((lVar13 == 0) ||
      (native_UIWidget__MakePixelPerfect_9451e4(param_1,0), (int)param_1[0x32] == 2)) ||
     (lVar13 = native_UISprite__GetAtlasSprite_c35f50(param_1), lVar13 == 0)) {
    return;
  }
  uVar14 = (**(code **)(*param_1 + 0x328))(param_1,*(undefined8 *)(*param_1 + 0x330));
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar15 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar14,0,0);
  if ((uVar15 & 1) != 0) {
    return;
  }
  if ((((int)param_1[0x32] != 0) && ((int)param_1[0x32] != 3)) &&
     (uVar15 = native_UISpriteData__get_hasBorder_940b38(lVar13,0), (uVar15 & 1) != 0)) {
    return;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar15 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar14,0,0);
  if ((uVar15 & 1) == 0) {
    return;
  }
  fVar25 = (float)(**(code **)(*param_1 + 0x458))(param_1,*(undefined8 *)(*param_1 + 0x460));
  uVar9 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                    (fVar25 * (float)(*(int *)(lVar13 + 0x38) + *(int *)(lVar13 + 0x20) +
                                     *(int *)(lVar13 + 0x3c)),0);
  fVar25 = (float)(**(code **)(*param_1 + 0x458))(param_1,*(undefined8 *)(*param_1 + 0x460));
  uVar10 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                     (fVar25 * (float)(*(int *)(lVar13 + 0x40) + *(int *)(lVar13 + 0x24) +
                                      *(int *)(lVar13 + 0x44)),0);
  iVar16 = (uVar10 & 1) + uVar10;
  native_UIWidget__set_width_941dec(param_1,(uVar9 & 1) + uVar9,0);
  if ((bRam0000000001341450 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8,iVar16,0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341450 = 1;
  }
  iVar8 = (**(code **)(*param_1 + 0x3c8))(param_1,*(undefined8 *)(*param_1 + 0x3d0));
  if (iVar8 <= iVar16) {
    iVar8 = iVar16;
  }
  if (((int)param_1[0x15] == iVar8) || (*(int *)((long)param_1 + 0xdc) == 1)) {
    return;
  }
  uVar15 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
  if ((uVar15 & 1) == 0) {
    iVar16 = *(int *)((long)param_1 + 0xa4);
    if ((*(int *)((long)param_1 + 0xa4) == iVar16) && ((int)param_1[0x15] == iVar8)) {
      return;
    }
    iVar2 = *(int *)((long)param_1 + 0xdc);
    *(int *)((long)param_1 + 0xa4) = iVar16;
    *(int *)(param_1 + 0x15) = iVar8;
    if (iVar2 == 0) {
      *(float *)(param_1 + 0x1c) = (float)iVar16 / (float)iVar8;
    }
    else if (iVar2 == 2) {
      uVar17 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                         (*(float *)(param_1 + 0x1c) * (float)iVar8,0);
      *(undefined4 *)((long)param_1 + 0xa4) = uVar17;
    }
    else if (iVar2 == 1) {
      uVar17 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                         ((float)iVar16 / *(float *)(param_1 + 0x1c),0);
      *(undefined4 *)(param_1 + 0x15) = uVar17;
    }
    *(undefined1 *)((long)param_1 + 0x15c) = 1;
    if ((char)param_1[0x1b] != '\0') {
      native_UIWidget__ResizeCollider_949744(param_1);
    }
                    /* WARNING: Could not recover jumptable at 0x00949944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x378))(param_1,*(undefined8 *)(*param_1 + 0x380));
    return;
  }
  if (param_1[5] == 0) goto LAB_00942330;
  uVar14 = *(undefined8 *)(param_1[5] + 0x10);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar15 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar14,0,0);
  if ((uVar15 & 1) == 0) {
LAB_00942204:
    if (param_1[5] == 0) {
LAB_00942330:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar14 = *(undefined8 *)(param_1[5] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar15 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar14,0,0);
    iVar16 = (int)param_1[0x15];
    if ((uVar15 & 1) != 0) {
      if ((*(ushort *)(_NGUIMath_TypeInfo_12d53b8 + 0x132) >> 10 & 1) != 0) {
        iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
joined_r0x00942258:
        if (iVar2 == 0) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
      }
LAB_00942264:
      uVar15 = 0;
      fVar25 = (float)(iVar8 - iVar16);
      goto LAB_00942274;
    }
    if ((*(ushort *)(_NGUIMath_TypeInfo_12d53b8 + 0x132) >> 10 & 1) != 0) {
      iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
joined_r0x00942284:
      if (iVar2 == 0) {
        native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
      }
    }
LAB_009422b4:
    uVar15 = (ulong)(uint)(float)(iVar16 - iVar8);
    uVar26 = 0;
  }
  else {
    if (param_1[6] == 0) goto LAB_00942330;
    uVar14 = *(undefined8 *)(param_1[6] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar15 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar14,0,0);
    if ((uVar15 & 1) == 0) goto LAB_00942204;
    if (*(uint *)(param_1 + 0x14) < 3) {
      iVar16 = (int)param_1[0x15];
      if ((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) {
        iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
        goto joined_r0x00942284;
      }
      goto LAB_009422b4;
    }
    if (*(uint *)(param_1 + 0x14) - 6 < 3) {
      iVar16 = (int)param_1[0x15];
      if ((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) {
        iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
        goto joined_r0x00942258;
      }
      goto LAB_00942264;
    }
    uVar9 = iVar8 - (int)param_1[0x15] & 0xfffffffe;
    if (uVar9 == 0) {
      return;
    }
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    fVar25 = (float)(int)uVar9 * 0.5;
    uVar15 = (ulong)(uint)((float)(int)-uVar9 * 0.5);
LAB_00942274:
    uVar26 = (ulong)(uint)fVar25;
  }
  uVar14 = 0;
  if ((bRam0000000001340478 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8,0);
    bRam0000000001340478 = 1;
  }
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar29 = uVar15;
  uVar38 = uVar26;
  if ((bRam000000000134047a & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134047a = 1;
  }
  if (param_1 == (long *)0x0) goto LAB_00807ccc;
  fVar25 = (float)native_UIWidget__get_pivotOffset_944f8c(param_1,0);
  fVar27 = (float)uVar29;
  uVar30 = uVar29;
  lVar13 = native_UIRect__get_cachedTransform_c27c58(param_1,0);
  if (lVar13 == 0) goto LAB_00807ccc;
  uVar17 = native_UnityEngine_Transform__get_localRotation_771c84(lVar13,0);
  uVar9 = native_UnityEngine_Mathf__FloorToInt_8e506c(0x3f000000,0);
  uVar3 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)uVar15 + 0.5,0);
  uVar10 = native_UnityEngine_Mathf__FloorToInt_8e506c(0x3f000000,0);
  uVar4 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)uVar26 + 0.5,0);
  if ((fVar25 == 0.5) && ((uVar9 == 0 || (uVar10 == 0)))) {
    uVar9 = uVar9 & 0xfffffffe;
    uVar10 = uVar10 & 0xfffffffe;
  }
  if ((fVar27 == 0.5) && ((uVar3 == 0 || (uVar4 == 0)))) {
    uVar3 = uVar3 & 0xfffffffe;
    uVar4 = uVar4 & 0xfffffffe;
  }
  fVar42 = (float)(int)uVar9;
  fVar40 = (float)(int)uVar4;
  uVar15 = uVar30;
  fVar18 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar30,uVar14,uVar38,fVar42,fVar40,0,0);
  fVar41 = (float)(int)uVar10;
  uVar26 = uVar30;
  fVar19 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar30,uVar14,uVar38,fVar41,fVar40,0,0);
  fVar39 = (float)(int)uVar3;
  uVar35 = uVar30;
  fVar20 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar30,uVar14,uVar38,fVar42,fVar39,0,0);
  uVar31 = uVar30;
  fVar21 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar30,uVar14,uVar38,fVar41,fVar39,0,0);
  uVar32 = uVar30;
  fVar42 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar30,uVar14,uVar38,fVar42,0,0,0);
  uVar33 = uVar30;
  fVar22 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar30,uVar14,uVar38,fVar41,0,0,0);
  fVar28 = (float)uVar33;
  uVar33 = uVar30;
  fVar23 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar30,uVar14,uVar38,0,fVar40,0,0);
  fVar40 = (float)uVar33;
  uVar33 = uVar30;
  uVar37 = uVar14;
  fVar24 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar30,uVar14,uVar38,0,fVar39,0,0);
  fVar36 = (float)uVar37;
  uVar34 = uVar33;
  fVar41 = (float)native_UnityEngine_Vector3__get_zero_776668(0);
  fVar39 = fVar36;
  if ((fVar25 == 0.0) && (fVar27 == 1.0)) {
    uVar34 = uVar15 & 0xffffffff;
    fVar41 = fVar18;
  }
  else if ((fVar25 == 1.0) && (fVar27 == 0.0)) {
    uVar34 = uVar31 & 0xffffffff;
    fVar41 = fVar21;
  }
  else if ((fVar25 == 0.0) && (fVar27 == 0.0)) {
    uVar34 = uVar35 & 0xffffffff;
    fVar41 = fVar20;
  }
  else if ((fVar25 == 1.0) && (fVar27 == 1.0)) {
    uVar34 = uVar26 & 0xffffffff;
    fVar41 = fVar19;
  }
  else {
    fVar18 = (float)uVar33;
    fVar19 = (float)uVar32;
    if ((fVar25 == 0.0) && (fVar27 == 0.5)) {
      fVar41 = fVar42 + (fVar23 + fVar24) * 0.5;
      uVar34 = (ulong)(uint)(fVar19 + (fVar40 + fVar18) * 0.5);
      fVar39 = fVar42;
    }
    else if ((fVar25 == 1.0) && (fVar27 == 0.5)) {
      fVar41 = fVar22 + (fVar23 + fVar24) * 0.5;
      fVar18 = fVar40 + fVar18;
      fVar40 = fVar28;
LAB_008078c0:
      uVar34 = (ulong)(uint)(fVar40 + fVar18 * 0.5);
      fVar39 = fVar40;
    }
    else if (fVar25 == 0.5) {
      if (fVar27 == 1.0) {
        fVar41 = fVar23 + (fVar42 + fVar22) * 0.5;
        fVar18 = fVar19 + fVar28;
        goto LAB_008078c0;
      }
      if (fVar27 == 0.0) {
        fVar41 = fVar24 + (fVar42 + fVar22) * 0.5;
        uVar34 = (ulong)(uint)(fVar18 + (fVar19 + fVar28) * 0.5);
      }
      else if (fVar27 == 0.5) {
        fVar41 = (fVar42 + fVar22 + fVar23 + fVar24) * 0.5;
        uVar34 = (ulong)(uint)((fVar28 + fVar19 + fVar40 + fVar18) * 0.5);
        fVar39 = fVar28;
      }
    }
  }
  fVar40 = (float)uVar34;
  uVar5 = (**(code **)(*param_1 + 0x3b8))(param_1,*(undefined8 *)(*param_1 + 0x3c0));
  uVar6 = native_UnityEngine_Mathf__Max_8e4cd0(2,uVar5,0);
  uVar5 = (**(code **)(*param_1 + 0x3c8))(param_1,*(undefined8 *)(*param_1 + 0x3d0));
  uVar7 = native_UnityEngine_Mathf__Max_8e4cd0(2,uVar5,0);
  uVar10 = (uVar10 - uVar9) + *(int *)((long)param_1 + 0xa4);
  uVar4 = (uVar4 - uVar3) + (int)param_1[0x15];
  uVar15 = native_UnityEngine_Vector3__get_zero_776668(0);
  uVar1 = 100000;
  if ((int)uVar10 < 0x186a1) {
    uVar1 = uVar10;
  }
  if ((int)uVar6 <= (int)uVar10) {
    uVar6 = uVar1;
  }
  uVar26 = uVar34;
  fVar18 = fVar39;
  if (uVar6 - uVar10 != 0) {
    uVar26 = (ulong)(uint)(float)(int)(uVar6 - uVar10);
    uVar10 = uVar6;
    fVar18 = fVar25;
    if (uVar9 == 0) {
      fVar19 = (float)native_UnityEngine_Mathf__Lerp_8e5224(0,uVar26,fVar25,0);
      uVar15 = (ulong)(uint)((float)uVar15 + fVar19);
    }
    else {
      uVar35 = 0;
      fVar19 = (float)native_UnityEngine_Mathf__Lerp_8e5224(uVar26,0,fVar25,0);
      uVar15 = (ulong)(uint)((float)uVar15 - fVar19);
      uVar26 = uVar35;
    }
  }
  fVar19 = (float)uVar26;
  uVar9 = 100000;
  if ((int)uVar4 < 0x186a1) {
    uVar9 = uVar4;
  }
  if ((int)uVar7 <= (int)uVar4) {
    uVar7 = uVar9;
  }
  if (uVar7 - uVar4 != 0) {
    fVar20 = (float)(int)(uVar7 - uVar4);
    uVar4 = uVar7;
    fVar18 = fVar27;
    if (uVar3 == 0) {
      fVar19 = fVar20;
      fVar20 = (float)native_UnityEngine_Mathf__Lerp_8e5224(0,fVar20,uVar29 & 0xffffffff,0);
      uVar34 = (ulong)(uint)((float)uVar34 + fVar20);
    }
    else {
      fVar19 = 0.0;
      fVar20 = (float)native_UnityEngine_Mathf__Lerp_8e5224(fVar20,0,uVar29 & 0xffffffff,0);
      uVar34 = (ulong)(uint)((float)uVar34 - fVar20);
    }
  }
  uVar9 = uVar10 & 0xfffffffe;
  if (fVar25 != 0.5) {
    uVar9 = uVar10;
  }
  uVar10 = uVar4 & 0xfffffffe;
  if (fVar27 != 0.5) {
    uVar10 = uVar4;
  }
  fVar20 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar13,0);
  fVar39 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar30,uVar14,uVar38,uVar15,uVar34,fVar39,0);
  fVar39 = fVar41 + fVar20 + fVar39;
  fVar40 = fVar40 + fVar19 + (float)uVar30;
  uVar26 = (ulong)(uint)fVar40;
  uVar29 = (ulong)(uint)(fVar36 + fVar18 + (float)uVar14);
  native_UnityEngine_Transform__set_localPosition_7718a4(fVar39,uVar26,uVar29,lVar13,0);
  native_UIWidget__SetDimensions_94987c(param_1,uVar9,uVar10,0);
  uVar15 = native_UIRect__get_isAnchored_c2d8cc(param_1,0);
  if ((uVar15 & 1) == 0) {
    return;
  }
  lVar13 = native_UnityEngine_Transform__get_parent_765eb0(lVar13,0);
  if (param_1[3] != 0) {
    uVar14 = *(undefined8 *)(param_1[3] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    fVar39 = fVar39 - fVar25 * (float)(int)uVar9;
    uVar15 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar14,0);
    if ((uVar15 & 1) != 0) {
      if (param_1[3] == 0) goto LAB_00807ccc;
      native_UIRect_AnchorPoint__SetHorizontal_559078(fVar39,param_1[3],lVar13,0);
    }
    if (param_1[4] != 0) {
      uVar14 = *(undefined8 *)(param_1[4] + 0x10);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar15 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar14,0);
      if ((uVar15 & 1) != 0) {
        if (param_1[4] == 0) goto LAB_00807ccc;
        native_UIRect_AnchorPoint__SetHorizontal_559078
                  (fVar39 + (float)(int)uVar9,param_1[4],lVar13,0);
      }
      if (param_1[5] != 0) {
        uVar14 = *(undefined8 *)(param_1[5] + 0x10);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        fVar40 = fVar40 - fVar27 * (float)(int)uVar10;
        uVar15 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar14,0);
        if ((uVar15 & 1) != 0) {
          if (param_1[5] == 0) goto LAB_00807ccc;
          native_UIRect_AnchorPoint__SetVertical_5591e0(fVar40,param_1[5],lVar13,0);
        }
        if (param_1[6] != 0) {
          uVar14 = *(undefined8 *)(param_1[6] + 0x10);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar15 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar14,0);
          if ((uVar15 & 1) == 0) {
            return;
          }
          lVar12 = param_1[6];
          if (lVar12 != 0) {
            if ((bRam000000000133ea04 & 1) == 0) {
              native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,lVar13,0);
              bRam000000000133ea04 = 1;
            }
            uVar14 = *(undefined8 *)(lVar12 + 0x20);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar15 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar14,0);
            if ((uVar15 & 1) == 0) {
              if (*(long *)(lVar12 + 0x10) != 0) {
                uVar14 = native_UnityEngine_Transform__get_position_77169c
                                   (*(long *)(lVar12 + 0x10),0);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar15 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar13,0,0);
                if ((uVar15 & 1) != 0) {
                  if (lVar13 == 0) goto LAB_00559338;
                  native_UnityEngine_Transform__InverseTransformPoint_7729a0
                            (uVar14,uVar26,uVar29,lVar13,0);
                }
LAB_00559308:
                uVar17 = native_UnityEngine_Mathf__FloorToInt_8e506c
                                   (((fVar40 + (float)(int)uVar10) - (float)uVar26) + 0.5,0);
                *(undefined4 *)(lVar12 + 0x1c) = uVar17;
                return;
              }
            }
            else {
              plVar11 = *(long **)(lVar12 + 0x20);
              if ((plVar11 != (long *)0x0) &&
                 (lVar13 = (**(code **)(*plVar11 + 0x208))
                                     (plVar11,lVar13,*(undefined8 *)(*plVar11 + 0x210)), lVar13 != 0
                 )) {
                if (*(uint *)(lVar13 + 0x18) < 4) {
                  uVar14 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar14,0);
                }
                uVar26 = native_UnityEngine_Mathf__Lerp_8e5224
                                   (*(undefined4 *)(lVar13 + 0x48),*(undefined4 *)(lVar13 + 0x30),
                                    *(undefined4 *)(lVar12 + 0x18),0);
                goto LAB_00559308;
              }
            }
LAB_00559338:
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
        }
      }
    }
  }
LAB_00807ccc:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UISprite$$OnInit @ 0xc36f64
 * void UISprite__OnInit (UISprite_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISprite$$OnInit
   void UISprite__OnInit (UISprite_o* __this, const MethodInfo* method); */

void native_UISprite__OnInit_c36f64(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(char *)((long)param_1 + 0x211) == '\0') {
    *(undefined1 *)((long)param_1 + 0x211) = 1;
    *(undefined4 *)(param_1 + 0x3d) = 0;
  }
  native_UIRect__OnInit_c2e388(param_1,0);
  native_UIWidget__RemoveFromPanel_944688(param_1);
  *(undefined1 *)((long)param_1 + 0x15c) = 1;
  if ((bRam0000000001342712 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001342712 = 1;
  }
  lVar3 = param_1[0x10];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar3,0);
  if ((uVar2 & 1) == 0) {
    native_UIRect__ResetAnchors_c2d260(param_1);
    native_UIRect__UpdateAnchors_c2ea10(param_1);
    *(undefined4 *)((long)param_1 + 0x5c) = 0xffffffff;
  }
  else if ((char)param_1[0xc] == '\0') {
    native_UIRect__ResetAnchors_c2d260(param_1);
  }
  iVar1 = native_UnityEngine_Time__get_frameCount_770964(0);
  if (*(int *)((long)param_1 + 0x5c) == iVar1) {
    return;
  }
  if (((int)param_1[7] == 1) || (*(char *)((long)param_1 + 0x5a) != '\0')) {
    native_UIRect__UpdateAnchorsInternal_c2e73c(param_1,iVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00c2e714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x298))(param_1,*(undefined8 *)(*param_1 + 0x2a0));
  return;
}



/* UISprite$$OnUpdate @ 0xc36f80
 * void UISprite__OnUpdate (UISprite_o* __this, const MethodInfo* method); */

/* UISprite$$OnUpdate
   void UISprite__OnUpdate (UISprite_o* __this, const MethodInfo* method); */

void native_UISprite__OnUpdate_c36f80(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  native_UIWidget__OnUpdate_945598(param_1,0);
  if ((*(char *)(param_1 + 0x58) != '\0') || (*(char *)(param_1 + 0x220) == '\0')) {
    *(undefined1 *)(param_1 + 0x220) = 1;
    *(undefined8 *)(param_1 + 0x218) = 0;
    native_sub_4326e0(param_1 + 0x218,0);
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  if ((*(char *)(param_1 + 0x210) != '\0') &&
     (((*(char *)(param_1 + 0x220) != '\0' && (lVar7 = *(long *)(param_1 + 0x218), lVar7 != 0)) ||
      ((lVar7 = native_UISprite__GetAtlasSprite_c35f50(param_1), lVar7 != 0 &&
       (lVar7 = *(long *)(param_1 + 0x218), lVar7 != 0)))))) {
    iVar1 = *(int *)(lVar7 + 0x40);
    iVar3 = *(int *)(lVar7 + 0x44);
    iVar2 = *(int *)(lVar7 + 0x38);
    iVar4 = *(int *)(lVar7 + 0x3c);
    iVar5 = native_UnityEngine_Mathf__RoundToInt_8e50f0((float)*(int *)(lVar7 + 0x20),0);
    if (*(long *)(param_1 + 0x218) == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    iVar6 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                      ((float)*(int *)(*(long *)(param_1 + 0x218) + 0x24),0);
    fVar8 = (float)*(int *)(param_1 + 0xa4);
    fVar9 = (float)*(int *)(param_1 + 0xa8);
    fVar10 = (float)(iVar4 + iVar2 + iVar5) / (float)(iVar1 + iVar3 + iVar6);
    if (fVar8 / fVar9 <= fVar10) {
      fVar9 = ((fVar9 - fVar8 / fVar10) / fVar9) * 0.5;
      fVar10 = 1.0;
      fVar11 = 1.0 - fVar9;
      fVar8 = 0.0;
    }
    else {
      fVar8 = ((fVar8 - fVar10 * fVar9) / fVar8) * 0.5;
      fVar11 = 1.0;
      fVar10 = 1.0 - fVar8;
      fVar9 = 0.0;
    }
    uStack_48 = 0;
    uStack_50 = 0;
    native_UnityEngine_Vector4___ctor_776f24(fVar8,fVar9,fVar10,fVar11,&uStack_50,0);
    native_UIWidget__set_drawRegion_94561c
              ((undefined4)uStack_50,uStack_50._4_4_,(undefined4)uStack_48,uStack_48._4_4_,param_1,0
              );
  }
  return;
}



/* UISprite$$OnFill @ 0xc370f8
 * void UISprite__OnFill (UISprite_o* __this, System_Collections_Generic_List_Vector3__o* verts, System_Collections_Generic_List_Vector2__o* uvs, System_Collections_Generic_List_Color__o* cols, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISprite$$OnFill
   void UISprite__OnFill (UISprite_o* __this, System_Collections_Generic_List_Vector3__o* verts,
   System_Collections_Generic_List_Vector2__o* uvs, System_Collections_Generic_List_Color__o* cols,
   const MethodInfo* method); */

void native_UISprite__OnFill_c370f8
               (long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if ((bRam000000000134275f & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Count___12dd500);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134275f = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  plVar3 = (long *)(**(code **)(*param_1 + 0x328))(param_1,*(undefined8 *)(*param_1 + 0x330));
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(plVar3,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  if (((char)param_1[0x44] == '\0') || (lVar5 = param_1[0x43], lVar5 == 0)) {
    lVar5 = native_UISprite__GetAtlasSprite_c35f50(param_1);
    if (lVar5 == 0) {
      return;
    }
    lVar5 = param_1[0x43];
    if (lVar5 == 0) goto LAB_00c373ac;
  }
  native_UnityEngine_Rect___ctor_7635c8
            ((float)*(int *)(lVar5 + 0x18),(float)*(int *)(lVar5 + 0x1c),
             (float)*(int *)(lVar5 + 0x20),(float)*(int *)(lVar5 + 0x24),&uStack_80,0);
  lVar5 = param_1[0x43];
  if ((lVar5 != 0) &&
     (native_UnityEngine_Rect___ctor_7635c8
                ((float)(*(int *)(lVar5 + 0x28) + *(int *)(lVar5 + 0x18)),
                 (float)(*(int *)(lVar5 + 0x30) + *(int *)(lVar5 + 0x1c)),
                 (float)((*(int *)(lVar5 + 0x20) - *(int *)(lVar5 + 0x28)) - *(int *)(lVar5 + 0x2c))
                 ,(float)((*(int *)(lVar5 + 0x24) - *(int *)(lVar5 + 0x30)) - *(int *)(lVar5 + 0x34)
                         ),&uStack_90,0), plVar3 != (long *)0x0)) {
    uVar4 = uStack_80 & 0xffffffff;
    uVar12 = (undefined4)(uStack_80 >> 0x20);
    uVar11 = (undefined4)uStack_78;
    uVar10 = (undefined4)(uStack_78 >> 0x20);
    uVar1 = (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
    uVar2 = (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(*plVar3 + 0x1a0));
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
    }
    uVar1 = native_NGUIMath__ConvertToTexCoords_803574(uVar4,uVar1,uVar2,0);
    uStack_80 = CONCAT44(uVar12,uVar1);
    uStack_78 = CONCAT44(uVar10,uVar11);
    uVar9 = uStack_90 & 0xffffffff;
    uVar4 = uStack_90 >> 0x20;
    uVar7 = uStack_88 & 0xffffffff;
    uVar8 = uStack_88 >> 0x20;
    uVar1 = (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
    uVar2 = (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(*plVar3 + 0x1a0));
    uVar6 = native_NGUIMath__ConvertToTexCoords_803574(uVar9,uVar1,uVar2,0);
    uStack_90 = CONCAT44((int)uVar4,(int)uVar6);
    uStack_88 = CONCAT44((int)uVar8,(int)uVar7);
    if (param_2 != 0) {
      uVar1 = *(undefined4 *)(param_2 + 0x18);
      native_UIBasicSprite__Fill_c8c42c
                (uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_78 & 0xffffffff,uStack_78._4_4_,uVar6
                 ,uVar4,uVar7,uVar8,param_1,param_2,param_3,param_4,0);
      if (param_1[0x19] == 0) {
        return;
      }
      native_UIWidget_OnPostFillCallback__Invoke_55bd18
                (param_1[0x19],param_1,uVar1,param_2,param_3,param_4,0);
      return;
    }
  }
LAB_00c373ac:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UISprite$$.ctor @ 0xc373b0
 * void UISprite___ctor (UISprite_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISprite$$.ctor
   void UISprite___ctor (UISprite_o* __this, const MethodInfo* method); */

void native_UISprite___ctor_c373b0
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined4 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000001342760 & 1) == 0) {
    native_sub_43273c(&UIBasicSprite_TypeInfo_12d6400);
    bRam0000000001342760 = 1;
  }
  *(undefined1 *)(param_5 + 0x211) = 1;
  if (((*(byte *)(_UIBasicSprite_TypeInfo_12d6400 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIBasicSprite_TypeInfo_12d6400 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  *(undefined8 *)(param_5 + 0x194) = 0x3f80000000000004;
  uVar1 = native_UnityEngine_Color__get_white_8d9e10(0,0);
  *(undefined4 *)(param_5 + 0x1a8) = uVar1;
  *(undefined4 *)(param_5 + 0x1ac) = param_2;
  *(undefined4 *)(param_5 + 0x1b0) = param_3;
  *(undefined4 *)(param_5 + 0x1b4) = param_4;
  uStack_30 = 0;
  uStack_28 = 0;
  native_UnityEngine_Color___ctor_8d9818(0x3f333333,0x3f333333,0x3f333333,&uStack_30,0);
  *(undefined8 *)(param_5 + 0x1c0) = uStack_28;
  *(undefined8 *)(param_5 + 0x1b8) = uStack_30;
  *(undefined8 *)(param_5 + 0x1f0) = 0x100000001;
  *(undefined8 *)(param_5 + 0x1e8) = 0x100000001;
  *(undefined4 *)(param_5 + 0x1f8) = 1;
  native_UIWidget___ctor_94cd14(param_5,0);
  return;
}


