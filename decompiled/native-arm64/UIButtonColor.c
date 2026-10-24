/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIButtonColor$$get_state @ 0xc91ca0
 * int32_t UIButtonColor__get_state (UIButtonColor_o* __this, const MethodInfo* method); */

/* UIButtonColor$$get_state
   int32_t UIButtonColor__get_state (UIButtonColor_o* __this, const MethodInfo* method); */

undefined4 native_UIButtonColor__get_state_c91ca0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x80);
}



/* UIButtonColor$$set_state @ 0xc91ca8
 * void UIButtonColor__set_state (UIButtonColor_o* __this, int32_t value, const MethodInfo* method); */

/* UIButtonColor$$set_state
   void UIButtonColor__set_state (UIButtonColor_o* __this, int32_t value, const MethodInfo* method);
    */

void native_UIButtonColor__set_state_c91ca8(long *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00c91cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x208))(param_1,param_2,0,*(undefined8 *)(*param_1 + 0x210));
  return;
}



/* UIButtonColor$$get_defaultColor @ 0xc91cbc
 * UnityEngine_Color_o UIButtonColor__get_defaultColor (UIButtonColor_o* __this, const MethodInfo* method); */

/* UIButtonColor$$get_defaultColor
   UnityEngine_Color_o UIButtonColor__get_defaultColor (UIButtonColor_o* __this, const MethodInfo*
   method); */

undefined4 native_UIButtonColor__get_defaultColor_c91cbc(long *param_1)

{
  if (*(char *)((long)param_1 + 0x74) == '\0') {
    (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
  }
  return *(undefined4 *)((long)param_1 + 100);
}



/* UIButtonColor$$set_defaultColor @ 0xc91cf8
 * void UIButtonColor__set_defaultColor (UIButtonColor_o* __this, UnityEngine_Color_o value, const MethodInfo* method); */

/* UIButtonColor$$set_defaultColor
   void UIButtonColor__set_defaultColor (UIButtonColor_o* __this, UnityEngine_Color_o value, const
   MethodInfo* method); */

void native_UIButtonColor__set_defaultColor_c91cf8
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long *param_5)

{
  long lVar1;
  
  if (*(char *)((long)param_5 + 0x74) == '\0') {
    (**(code **)(*param_5 + 0x198))(param_5,*(undefined8 *)(*param_5 + 0x1a0));
  }
  *(undefined4 *)((long)param_5 + 100) = param_1;
  *(undefined4 *)(param_5 + 0xd) = param_2;
  *(undefined4 *)((long)param_5 + 0x6c) = param_3;
  *(undefined4 *)(param_5 + 0xe) = param_4;
  lVar1 = param_5[0x10];
  *(undefined4 *)(param_5 + 0x10) = 3;
                    /* WARNING: Could not recover jumptable at 0x00c91d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_5 + 0x208))(param_5,(int)lVar1,0,*(undefined8 *)(*param_5 + 0x210));
  return;
}



/* UIButtonColor$$get_isEnabled @ 0xc91d74
 * bool UIButtonColor__get_isEnabled (UIButtonColor_o* __this, const MethodInfo* method); */

/* UIButtonColor$$get_isEnabled
   bool UIButtonColor__get_isEnabled (UIButtonColor_o* __this, const MethodInfo* method); */

void native_UIButtonColor__get_isEnabled_c91d74(undefined8 param_1)

{
  if (pcRam0000000001340940 == (code *)0x0) {
    pcRam0000000001340940 = (code *)native_sub_4326f0(&UNK_00e2c6dd);
  }
                    /* WARNING: Could not recover jumptable at 0x008d7b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000001340940)(param_1);
  return;
}



/* UIButtonColor$$set_isEnabled @ 0xc91d7c
 * void UIButtonColor__set_isEnabled (UIButtonColor_o* __this, bool value, const MethodInfo* method); */

/* UIButtonColor$$set_isEnabled
   void UIButtonColor__set_isEnabled (UIButtonColor_o* __this, bool value, const MethodInfo*
   method); */

void native_UIButtonColor__set_isEnabled_c91d7c(undefined8 param_1,uint param_2)

{
  if (pcRam0000000001340948 == (code *)0x0) {
    pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
  }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000001340948)(param_1,param_2 & 1);
  return;
}



/* UIButtonColor$$ResetDefaultColor @ 0xc91d88
 * void UIButtonColor__ResetDefaultColor (UIButtonColor_o* __this, const MethodInfo* method); */

/* UIButtonColor$$ResetDefaultColor
   void UIButtonColor__ResetDefaultColor (UIButtonColor_o* __this, const MethodInfo* method); */

void native_UIButtonColor__ResetDefaultColor_c91d88(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = *(undefined4 *)((long)param_1 + 0x54);
  lVar1 = param_1[0xb];
  uVar4 = *(undefined4 *)((long)param_1 + 0x5c);
  lVar2 = param_1[0xc];
  if (*(char *)((long)param_1 + 0x74) == '\0') {
    (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
  }
  *(undefined4 *)((long)param_1 + 100) = uVar3;
  *(int *)(param_1 + 0xd) = (int)lVar1;
  *(undefined4 *)((long)param_1 + 0x6c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar2;
  lVar1 = param_1[0x10];
  *(undefined4 *)(param_1 + 0x10) = 3;
                    /* WARNING: Could not recover jumptable at 0x00c91d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x208))(param_1,(int)lVar1,0,*(undefined8 *)(*param_1 + 0x210));
  return;
}



/* UIButtonColor$$CacheDefaultColor @ 0xc91d94
 * void UIButtonColor__CacheDefaultColor (UIButtonColor_o* __this, const MethodInfo* method); */

/* UIButtonColor$$CacheDefaultColor
   void UIButtonColor__CacheDefaultColor (UIButtonColor_o* __this, const MethodInfo* method); */

void native_UIButtonColor__CacheDefaultColor_c91d94(long *param_1)

{
  if (*(char *)((long)param_1 + 0x74) != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c91da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
  return;
}



/* UIButtonColor$$Start @ 0xc91dac
 * void UIButtonColor__Start (UIButtonColor_o* __this, const MethodInfo* method); */

/* UIButtonColor$$Start
   void UIButtonColor__Start (UIButtonColor_o* __this, const MethodInfo* method); */

void native_UIButtonColor__Start_c91dac(long *param_1)

{
  ulong uVar1;
  
  if (*(char *)((long)param_1 + 0x74) == '\0') {
    (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
  }
  uVar1 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c91e14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x208))(param_1,3,1,*(undefined8 *)(*param_1 + 0x210));
  return;
}



/* UIButtonColor$$OnInit @ 0xc90d48
 * void UIButtonColor__OnInit (UIButtonColor_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButtonColor$$OnInit
   void UIButtonColor__OnInit (UIButtonColor_o* __this, const MethodInfo* method); */

void native_UIButtonColor__OnInit_c90d48
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined4 uVar8;
  
  if ((bRam000000000134288d & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_Light____12e49e0);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_Renderer____12e4a08);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134288d = 1;
  }
  plVar6 = (long *)(param_5 + 0x18);
  lVar7 = *plVar6;
  *(undefined1 *)(param_5 + 0x74) = 1;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar7,0,0);
  if (((uVar4 & 1) != 0) &&
     (uVar4 = native_UnityEngine_Application__get_isPlaying_8d60cc(0), (uVar4 & 1) == 0)) {
    uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(param_5,0);
    *(undefined8 *)(param_5 + 0x18) = uVar5;
    native_sub_4326e0(plVar6,uVar5);
  }
  lVar7 = *plVar6;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
  if ((uVar4 & 1) != 0) {
    if (*plVar6 == 0) goto LAB_00c9101c;
    uVar5 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (*plVar6,_Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
    *(undefined8 *)(param_5 + 0x78) = uVar5;
    native_sub_4326e0((undefined8 *)(param_5 + 0x78),uVar5);
  }
  lVar7 = *(long *)(param_5 + 0x78);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
  if ((uVar4 & 1) == 0) {
    lVar7 = *plVar6;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
    if ((uVar4 & 1) != 0) {
      if (*plVar6 == 0) goto LAB_00c9101c;
      lVar7 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                        (*plVar6,_Method_UnityEngine_GameObject_GetComponent_Renderer____12e4a08);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
      if ((uVar4 & 1) == 0) {
        if (*plVar6 == 0) goto LAB_00c9101c;
        lVar7 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                          (*plVar6,_Method_UnityEngine_GameObject_GetComponent_Light____12e49e0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
        if ((uVar4 & 1) == 0) {
          *(undefined8 *)(param_5 + 0x18) = 0;
          native_sub_4326e0(plVar6,0);
          *(undefined1 *)(param_5 + 0x74) = 0;
          return;
        }
        if (lVar7 == 0) goto LAB_00c9101c;
        uVar8 = native_UnityEngine_Light__get_color_8dfed4(lVar7,0);
      }
      else {
        uVar4 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
        if (lVar7 == 0) {
LAB_00c9101c:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        if ((uVar4 & 1) == 0) {
          lVar7 = native_UnityEngine_Renderer__get_sharedMaterial_768f5c(lVar7,0);
        }
        else {
          lVar7 = native_UnityEngine_Renderer__get_material_768f1c(lVar7,0);
        }
        if (lVar7 == 0) goto LAB_00c9101c;
        uVar8 = native_UnityEngine_Material__get_color_8e3108(lVar7,0);
      }
      *(undefined4 *)(param_5 + 100) = uVar8;
      *(undefined4 *)(param_5 + 0x68) = param_2;
      *(undefined4 *)(param_5 + 0x6c) = param_3;
      *(undefined4 *)(param_5 + 0x70) = param_4;
      *(undefined4 *)(param_5 + 0x54) = uVar8;
      *(undefined4 *)(param_5 + 0x58) = param_2;
      *(undefined4 *)(param_5 + 0x5c) = param_3;
      *(undefined4 *)(param_5 + 0x60) = param_4;
    }
  }
  else {
    lVar7 = *(long *)(param_5 + 0x78);
    if (lVar7 == 0) goto LAB_00c9101c;
    uVar8 = *(undefined4 *)(lVar7 + 0x90);
    uVar2 = *(undefined4 *)(lVar7 + 0x94);
    uVar1 = *(undefined4 *)(lVar7 + 0x98);
    uVar3 = *(undefined4 *)(lVar7 + 0x9c);
    *(undefined4 *)(param_5 + 100) = uVar8;
    *(undefined4 *)(param_5 + 0x68) = uVar2;
    *(undefined4 *)(param_5 + 0x6c) = uVar1;
    *(undefined4 *)(param_5 + 0x70) = uVar3;
    *(undefined4 *)(param_5 + 0x54) = uVar8;
    *(undefined4 *)(param_5 + 0x58) = uVar2;
    *(undefined4 *)(param_5 + 0x5c) = uVar1;
    *(undefined4 *)(param_5 + 0x60) = uVar3;
  }
  return;
}



/* UIButtonColor$$OnEnable @ 0xc91e18
 * void UIButtonColor__OnEnable (UIButtonColor_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButtonColor$$OnEnable
   void UIButtonColor__OnEnable (UIButtonColor_o* __this, const MethodInfo* method); */

void native_UIButtonColor__OnEnable_c91e18(long *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam000000000134288e & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam000000000134288e = 1;
  }
  if ((*(char *)((long)param_1 + 0x74) != '\0') && ((int)param_1[0x10] != 3)) {
    uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec(_UICamera_TypeInfo_12d6410);
    }
    uVar1 = native_UICamera__IsHighlighted_c92014(uVar2);
    (**(code **)(*param_1 + 0x1c8))(param_1,uVar1 & 1,*(undefined8 *)(*param_1 + 0x1d0));
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar4 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
  if (lVar4 == 0) {
    return;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
    lVar4 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
    if (lVar4 == 0) goto LAB_00c92010;
  }
  uVar5 = *(undefined8 *)(lVar4 + 0x50);
  uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar5,uVar2,0);
  if ((uVar3 & 1) == 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar4 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
    if (lVar4 == 0) {
LAB_00c92010:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar5 = *(undefined8 *)(lVar4 + 0x48);
    uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar5,uVar2,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x1c8);
    uVar2 = *(undefined8 *)(*param_1 + 0x1d0);
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x1d8);
    uVar2 = *(undefined8 *)(*param_1 + 0x1e0);
  }
                    /* WARNING: Could not recover jumptable at 0x00c91ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,1,uVar2);
  return;
}



/* UIButtonColor$$OnDisable @ 0xc920b4
 * void UIButtonColor__OnDisable (UIButtonColor_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButtonColor$$OnDisable
   void UIButtonColor__OnDisable (UIButtonColor_o* __this, const MethodInfo* method); */

void native_UIButtonColor__OnDisable_c920b4(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  
  if ((bRam000000000134288f & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_TweenColor____12e4a80);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134288f = 1;
  }
  if (((*(char *)((long)param_1 + 0x74) != '\0') && ((int)param_1[0x10] != 0)) &&
     ((int)param_1[0x10] != 3)) {
    (**(code **)(*param_1 + 0x208))(param_1,0,1,*(undefined8 *)(*param_1 + 0x210));
    lVar2 = param_1[3];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
    if ((uVar1 & 1) != 0) {
      if (param_1[3] != 0) {
        lVar2 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                          (param_1[3],
                           _Method_UnityEngine_GameObject_GetComponent_TweenColor____12e4a80);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
        if ((uVar1 & 1) == 0) {
          return;
        }
        if (lVar2 != 0) {
          native_TweenColor__set_value_6e36e4
                    (*(undefined4 *)((long)param_1 + 100),(int)param_1[0xd],
                     *(undefined4 *)((long)param_1 + 0x6c),(int)param_1[0xe],lVar2,0);
          uVar1 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar2,0);
          if ((uVar1 & 1) == 0) {
            return;
          }
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          uVar3 = 0x3f800000;
          if (*(float *)(lVar2 + 0x70) <= 0.0) {
            uVar3 = 0;
          }
          native_UITweener__Sample_948a44(uVar3,lVar2,1);
          if (pcRam0000000001340948 == (code *)0x0) {
            pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
          }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000001340948)(lVar2,0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  return;
}



/* UIButtonColor$$OnHover @ 0xc921f0
 * void UIButtonColor__OnHover (UIButtonColor_o* __this, bool isOver, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButtonColor$$OnHover
   void UIButtonColor__OnHover (UIButtonColor_o* __this, bool isOver, const MethodInfo* method); */

void native_UIButtonColor__OnHover_c921f0(long *param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  
  if ((bRam0000000001342890 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342890 = 1;
  }
  uVar1 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  if ((uVar1 & 1) != 0) {
    if (*(char *)((long)param_1 + 0x74) == '\0') {
      (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
    }
    lVar2 = param_1[3];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
    if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00c922b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x208))(param_1,param_2 & 1,0,*(undefined8 *)(*param_1 + 0x210));
      return;
    }
  }
  return;
}



/* UIButtonColor$$OnPress @ 0xc922c4
 * void UIButtonColor__OnPress (UIButtonColor_o* __this, bool isPressed, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButtonColor$$OnPress
   void UIButtonColor__OnPress (UIButtonColor_o* __this, bool isPressed, const MethodInfo* method);
    */

void native_UIButtonColor__OnPress_c922c4(long *param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  long lVar5;
  
  if ((bRam0000000001342891 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam0000000001342891 = 1;
  }
  uVar2 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(char *)((long)param_1 + 0x74) == '\0') {
    (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
  }
  lVar5 = param_1[3];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if ((param_2 & 1) == 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
    if (lVar5 != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
      }
      uVar4 = *(undefined8 *)(lVar5 + 0x48);
      uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,uVar3,0);
      if ((uVar2 & 1) != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        iVar1 = native_UICamera__get_currentScheme_c92518();
        if (iVar1 == 2) {
LAB_00c9245c:
          lVar5 = *param_1;
          uVar3 = 1;
          goto LAB_00c9237c;
        }
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        iVar1 = native_UICamera__get_currentScheme_c92518();
        if (iVar1 == 0) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar3 = native_UICamera__get_hoveredObject_c9114c();
          uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
          }
          uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar3,uVar4,0);
          if ((uVar2 & 1) != 0) goto LAB_00c9245c;
        }
      }
    }
    uVar3 = 0;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x208);
    uVar4 = *(undefined8 *)(*param_1 + 0x210);
  }
  else {
    lVar5 = *param_1;
    uVar3 = 2;
LAB_00c9237c:
    UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 0x208);
    uVar4 = *(undefined8 *)(lVar5 + 0x210);
  }
                    /* WARNING: Could not recover jumptable at 0x00c92510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar3,0,uVar4);
  return;
}



/* UIButtonColor$$OnDragOver @ 0xc91430
 * void UIButtonColor__OnDragOver (UIButtonColor_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButtonColor$$OnDragOver
   void UIButtonColor__OnDragOver (UIButtonColor_o* __this, const MethodInfo* method); */

void native_UIButtonColor__OnDragOver_c91430(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  if ((bRam0000000001342892 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342892 = 1;
  }
  uVar1 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  if ((uVar1 & 1) != 0) {
    if (*(char *)((long)param_1 + 0x74) == '\0') {
      (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
    }
    lVar2 = param_1[3];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
    if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00c914e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x208))(param_1,2,0,*(undefined8 *)(*param_1 + 0x210));
      return;
    }
  }
  return;
}



/* UIButtonColor$$OnDragOut @ 0xc915f4
 * void UIButtonColor__OnDragOut (UIButtonColor_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButtonColor$$OnDragOut
   void UIButtonColor__OnDragOut (UIButtonColor_o* __this, const MethodInfo* method); */

void native_UIButtonColor__OnDragOut_c915f4(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  if ((bRam0000000001342893 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342893 = 1;
  }
  uVar1 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  if ((uVar1 & 1) != 0) {
    if (*(char *)((long)param_1 + 0x74) == '\0') {
      (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
    }
    lVar2 = param_1[3];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
    if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00c916a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x208))(param_1,0,0,*(undefined8 *)(*param_1 + 0x210));
      return;
    }
  }
  return;
}



/* UIButtonColor$$SetState @ 0xc91a18
 * void UIButtonColor__SetState (UIButtonColor_o* __this, int32_t state, bool instant, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButtonColor$$SetState
   void UIButtonColor__SetState (UIButtonColor_o* __this, int32_t state, bool instant, const
   MethodInfo* method); */

void native_UIButtonColor__SetState_c91a18(long *param_1,int param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (*(char *)((long)param_1 + 0x74) == '\0') {
    *(undefined1 *)((long)param_1 + 0x74) = 1;
    (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
  }
  if ((int)param_1[0x10] == param_2) {
    return;
  }
  *(int *)(param_1 + 0x10) = param_2;
  if ((bRam0000000001342894 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342894 = 1;
  }
  if (*(char *)((long)param_1 + 0x74) != '\0') {
    lVar3 = param_1[3];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
    if ((uVar2 & 1) != 0) {
      iVar1 = (int)param_1[0x10];
      if (iVar1 == 3) {
        lVar3 = param_1[3];
        uVar8 = *(undefined4 *)((long)param_1 + 0x4c);
        uVar4 = (undefined4)param_1[10];
        uVar5 = (undefined4)param_1[8];
        uVar6 = *(undefined4 *)((long)param_1 + 0x44);
        uVar7 = (undefined4)param_1[9];
      }
      else if (iVar1 == 2) {
        lVar3 = param_1[3];
        uVar4 = (undefined4)param_1[10];
        uVar5 = (undefined4)param_1[6];
        uVar6 = *(undefined4 *)((long)param_1 + 0x34);
        uVar7 = (undefined4)param_1[7];
        uVar8 = *(undefined4 *)((long)param_1 + 0x3c);
      }
      else if (iVar1 == 1) {
        lVar3 = param_1[3];
        uVar4 = (undefined4)param_1[10];
        uVar5 = (undefined4)param_1[4];
        uVar6 = *(undefined4 *)((long)param_1 + 0x24);
        uVar7 = (undefined4)param_1[5];
        uVar8 = *(undefined4 *)((long)param_1 + 0x2c);
      }
      else {
        lVar3 = param_1[3];
        uVar4 = (undefined4)param_1[10];
        uVar5 = *(undefined4 *)((long)param_1 + 100);
        uVar6 = (undefined4)param_1[0xd];
        uVar7 = *(undefined4 *)((long)param_1 + 0x6c);
        uVar8 = (undefined4)param_1[0xe];
      }
      lVar3 = native_TweenColor__Begin_6e3964(uVar4,uVar5,uVar6,uVar7,uVar8,lVar3,0);
      if ((param_3 & 1) != 0) {
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
        if ((uVar2 & 1) != 0) {
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          native_TweenColor__set_value_6e36e4
                    (*(undefined4 *)(lVar3 + 0x90),*(undefined4 *)(lVar3 + 0x94),
                     *(undefined4 *)(lVar3 + 0x98),*(undefined4 *)(lVar3 + 0x9c),lVar3,0);
          uVar2 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar3,0);
          if ((uVar2 & 1) != 0) {
            if (lVar3 != 0) {
              uVar4 = 0x3f800000;
              if (*(float *)(lVar3 + 0x70) <= 0.0) {
                uVar4 = 0;
              }
              native_UITweener__Sample_948a44(uVar4,lVar3,1);
              if (pcRam0000000001340948 == (code *)0x0) {
                pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
              }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000001340948)(lVar3,0);
              return;
            }
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          return;
        }
      }
    }
  }
  return;
}



/* UIButtonColor$$UpdateColor @ 0xc92718
 * void UIButtonColor__UpdateColor (UIButtonColor_o* __this, bool instant, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButtonColor$$UpdateColor
   void UIButtonColor__UpdateColor (UIButtonColor_o* __this, bool instant, const MethodInfo*
   method); */

void native_UIButtonColor__UpdateColor_c92718(long param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if ((bRam0000000001342894 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342894 = 1;
  }
  if (*(char *)(param_1 + 0x74) != '\0') {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      iVar1 = *(int *)(param_1 + 0x80);
      if (iVar1 == 3) {
        uVar4 = *(undefined8 *)(param_1 + 0x18);
        uVar9 = *(undefined4 *)(param_1 + 0x4c);
        uVar5 = *(undefined4 *)(param_1 + 0x50);
        uVar6 = *(undefined4 *)(param_1 + 0x40);
        uVar7 = *(undefined4 *)(param_1 + 0x44);
        uVar8 = *(undefined4 *)(param_1 + 0x48);
      }
      else if (iVar1 == 2) {
        uVar4 = *(undefined8 *)(param_1 + 0x18);
        uVar5 = *(undefined4 *)(param_1 + 0x50);
        uVar6 = *(undefined4 *)(param_1 + 0x30);
        uVar7 = *(undefined4 *)(param_1 + 0x34);
        uVar8 = *(undefined4 *)(param_1 + 0x38);
        uVar9 = *(undefined4 *)(param_1 + 0x3c);
      }
      else if (iVar1 == 1) {
        uVar4 = *(undefined8 *)(param_1 + 0x18);
        uVar5 = *(undefined4 *)(param_1 + 0x50);
        uVar6 = *(undefined4 *)(param_1 + 0x20);
        uVar7 = *(undefined4 *)(param_1 + 0x24);
        uVar8 = *(undefined4 *)(param_1 + 0x28);
        uVar9 = *(undefined4 *)(param_1 + 0x2c);
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 0x18);
        uVar5 = *(undefined4 *)(param_1 + 0x50);
        uVar6 = *(undefined4 *)(param_1 + 100);
        uVar7 = *(undefined4 *)(param_1 + 0x68);
        uVar8 = *(undefined4 *)(param_1 + 0x6c);
        uVar9 = *(undefined4 *)(param_1 + 0x70);
      }
      lVar3 = native_TweenColor__Begin_6e3964(uVar5,uVar6,uVar7,uVar8,uVar9,uVar4,0);
      if ((param_2 & 1) != 0) {
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
        if ((uVar2 & 1) != 0) {
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          native_TweenColor__set_value_6e36e4
                    (*(undefined4 *)(lVar3 + 0x90),*(undefined4 *)(lVar3 + 0x94),
                     *(undefined4 *)(lVar3 + 0x98),*(undefined4 *)(lVar3 + 0x9c),lVar3,0);
          uVar2 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar3,0);
          if ((uVar2 & 1) != 0) {
            if (lVar3 != 0) {
              uVar5 = 0x3f800000;
              if (*(float *)(lVar3 + 0x70) <= 0.0) {
                uVar5 = 0;
              }
              native_UITweener__Sample_948a44(uVar5,lVar3,1);
              if (pcRam0000000001340948 == (code *)0x0) {
                pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
              }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000001340948)(lVar3,0);
              return;
            }
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          return;
        }
      }
    }
  }
  return;
}



/* UIButtonColor$$.ctor @ 0xc91b0c
 * void UIButtonColor___ctor (UIButtonColor_o* __this, const MethodInfo* method); */

/* UIButtonColor$$.ctor
   void UIButtonColor___ctor (UIButtonColor_o* __this, const MethodInfo* method); */

void native_UIButtonColor___ctor_c91b0c(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar4 = 0x3f800000;
  uStack_30 = 0;
  uStack_28 = 0;
  native_UnityEngine_Color___ctor_8d980c(0x3f61e1e2,0x3f48c8c9,0x3f169697,0x3f800000,&uStack_30,0);
  *(undefined8 *)(param_1 + 0x28) = uStack_28;
  *(undefined8 *)(param_1 + 0x20) = uStack_30;
  uVar2 = 0x3f23a3a4;
  uVar3 = 0x3ef6f6f7;
  uStack_40 = 0;
  uStack_38 = 0;
  native_UnityEngine_Color___ctor_8d980c(0x3f37b7b8,&uStack_40,0);
  *(undefined8 *)(param_1 + 0x38) = uStack_38;
  *(undefined8 *)(param_1 + 0x30) = uStack_40;
  uVar1 = native_UnityEngine_Color__get_grey_8d9e54(0);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  *(undefined4 *)(param_1 + 0x4c) = uVar4;
  *(undefined4 *)(param_1 + 0x50) = 0x3e4ccccd;
  native_UIWidgetContainer___ctor_94341c(param_1,0);
  return;
}


