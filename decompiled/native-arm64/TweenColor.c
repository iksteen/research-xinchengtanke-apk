/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TweenColor$$Cache @ 0x6e3338
 * void TweenColor__Cache (TweenColor_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenColor$$Cache
   void TweenColor__Cache (TweenColor_o* __this, const MethodInfo* method); */

void native_TweenColor__Cache_6e3338(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  if ((bRam000000000133f392 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInChildren_UIWidget____12e2ce8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Light____12e2aa0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Renderer____12e2ad8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_SpriteRenderer____12e2b18);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f392 = 1;
  }
  *(undefined1 *)(param_1 + 0xa0) = 1;
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
  puVar7 = (undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = uVar4;
  native_sub_4326e0(puVar7,uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0xa8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
  if ((uVar5 & 1) == 0) {
    uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_1,_Method_UnityEngine_Component_GetComponent_SpriteRenderer____12e2b18)
    ;
    *(undefined8 *)(param_1 + 0xc0) = uVar4;
    native_sub_4326e0(param_1 + 0xc0);
    uVar4 = *(undefined8 *)(param_1 + 0xc0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
    if ((uVar5 & 1) == 0) {
      lVar6 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (param_1,_Method_UnityEngine_Component_GetComponent_Renderer____12e2ad8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar6,0,0);
      if ((uVar5 & 1) == 0) {
        uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (param_1,_Method_UnityEngine_Component_GetComponent_Light____12e2aa0);
        *(undefined8 *)(param_1 + 0xb8) = uVar4;
        native_sub_4326e0(param_1 + 0xb8);
        uVar4 = *(undefined8 *)(param_1 + 0xb8);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,0,0);
        if ((uVar5 & 1) == 0) {
          return;
        }
        uVar4 = native_UnityEngine_Component__GetComponentInChildren_Animation__49db98
                          (param_1,
                           _Method_UnityEngine_Component_GetComponentInChildren_UIWidget____12e2ce8)
        ;
        *(undefined8 *)(param_1 + 0xa8) = uVar4;
      }
      else {
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        uVar4 = native_UnityEngine_Renderer__get_material_768f1c(lVar6,0);
        puVar7 = (undefined8 *)(param_1 + 0xb0);
        *puVar7 = uVar4;
      }
      if (iRam0000000001345318 != 0) {
        puVar1 = (ulong *)(((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
  }
  return;
}



/* TweenColor$$get_color @ 0x6e3564
 * UnityEngine_Color_o TweenColor__get_color (TweenColor_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenColor$$get_color
   UnityEngine_Color_o TweenColor__get_color (TweenColor_o* __this, const MethodInfo* method); */

undefined1  [16] native_TweenColor__get_color_6e3564(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s0_02;
  undefined4 uVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined8 extraout_var_03;
  undefined8 extraout_var_04;
  undefined8 extraout_var_05;
  undefined8 extraout_var_06;
  undefined1 auVar4 [16];
  
  if ((bRam000000000133f393 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f393 = 1;
  }
  if (*(char *)(param_1 + 0xa0) == '\0') {
    native_TweenColor__Cache_6e3338(param_1);
  }
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,0,0);
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xb0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,0,0);
    if ((uVar1 & 1) == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0xc0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,0,0);
      if ((uVar1 & 1) == 0) {
        uVar2 = *(undefined8 *)(param_1 + 0xb8);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,0,0);
        if ((uVar1 & 1) == 0) {
          native_UnityEngine_Color__get_black_8d9e24(0);
          uVar3 = extraout_s0_02;
          uVar5 = extraout_var_02;
          uVar2 = extraout_var_06;
        }
        else {
          if (*(long *)(param_1 + 0xb8) == 0) goto LAB_006e36dc;
          native_UnityEngine_Light__get_color_8dfed4(*(long *)(param_1 + 0xb8),0);
          uVar3 = extraout_s0_01;
          uVar5 = extraout_var_01;
          uVar2 = extraout_var_05;
        }
      }
      else {
        if (*(long *)(param_1 + 0xc0) == 0) goto LAB_006e36dc;
        native_UnityEngine_SpriteRenderer__get_color_76c6d4(*(long *)(param_1 + 0xc0),0);
        uVar3 = extraout_s0_00;
        uVar5 = extraout_var_00;
        uVar2 = extraout_var_04;
      }
    }
    else {
      if (*(long *)(param_1 + 0xb0) == 0) goto LAB_006e36dc;
      native_UnityEngine_Material__get_color_8e3108(*(long *)(param_1 + 0xb0),0);
      uVar3 = extraout_s0;
      uVar5 = extraout_var;
      uVar2 = extraout_var_03;
    }
  }
  else {
    if (*(long *)(param_1 + 0xa8) == 0) {
LAB_006e36dc:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar3 = *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x90);
    uVar5 = 0;
    uVar2 = 0;
  }
  auVar4._4_4_ = uVar5;
  auVar4._0_4_ = uVar3;
  auVar4._8_8_ = uVar2;
  return auVar4;
}



/* TweenColor$$set_color @ 0x6e36e0
 * void TweenColor__set_color (TweenColor_o* __this, UnityEngine_Color_o value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenColor$$set_color
   void TweenColor__set_color (TweenColor_o* __this, UnityEngine_Color_o value, const MethodInfo*
   method); */

void native_TweenColor__set_color_6e36e0
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  
  if ((bRam000000000133f394 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f394 = 1;
  }
  if (*(char *)(param_5 + 0xa0) == '\0') {
    native_TweenColor__Cache_6e3338(param_5);
  }
  uVar5 = *(undefined8 *)(param_5 + 0xa8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
  if ((uVar2 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_5 + 0xb0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
    if ((uVar2 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_5 + 0xc0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
      if ((uVar2 & 1) == 0) {
        uVar5 = *(undefined8 *)(param_5 + 0xb8);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        if (*(long *)(param_5 + 0xb8) != 0) {
          native_UnityEngine_Light__set_color_8dff80
                    (param_1,param_2,param_3,param_4,*(long *)(param_5 + 0xb8),0);
          lVar4 = *(long *)(param_5 + 0xb8);
          if (lVar4 != 0) {
            if (pcRam0000000001340948 == (code *)0x0) {
              pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
            }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000001340948)(lVar4,0.01 < (float)param_3 + (float)param_1 + (float)param_2);
            return;
          }
        }
      }
      else {
        lVar4 = *(long *)(param_5 + 0xc0);
        if (lVar4 != 0) {
          if (pcRam000000000133fc30 == (code *)0x0) {
            pcRam000000000133fc30 = (code *)native_sub_4326f0(&UNK_00e29a38,0);
          }
          (*pcRam000000000133fc30)(lVar4,&stack0xffffffffffffffd0);
          return;
        }
      }
    }
    else {
      lVar4 = *(long *)(param_5 + 0xb0);
      if (lVar4 != 0) {
        if ((bRam0000000001340db1 & 1) == 0) {
          native_sub_43273c(&StringLiteral__Color_12f3558,0);
          bRam0000000001340db1 = 1;
        }
        if (pcRam0000000001340db8 == (code *)0x0) {
          pcRam0000000001340db8 = (code *)native_sub_4326f0(&UNK_00e2e607);
        }
        iVar1 = (*pcRam0000000001340db8)(lVar4,0x100);
        if (iVar1 < 0) {
          iVar1 = native_UnityEngine_Shader__PropertyToID_76b308(_StringLiteral__Color_12f3558,0);
        }
        if (pcRam0000000001340e30 == (code *)0x0) {
          pcRam0000000001340e30 = (code *)native_sub_4326f0(&UNK_00e2e93a);
        }
        (*pcRam0000000001340e30)(lVar4,iVar1,&stack0xffffffffffffffc0);
        return;
      }
    }
  }
  else {
    plVar3 = *(long **)(param_5 + 0xa8);
    if (plVar3 != (long *)0x0) {
      uVar2 = native_UnityEngine_Color__op_Inequality_8d9d34
                        ((int)plVar3[0x12],*(undefined4 *)((long)plVar3 + 0x94),(int)plVar3[0x13],
                         *(undefined4 *)((long)plVar3 + 0x9c),param_1,param_2,param_3,param_4,0,0);
      if ((uVar2 & 1) != 0) {
        fVar6 = *(float *)((long)plVar3 + 0x9c);
        *(float *)(plVar3 + 0x12) = (float)param_1;
        *(float *)((long)plVar3 + 0x94) = (float)param_2;
        *(float *)(plVar3 + 0x13) = (float)param_3;
        *(float *)((long)plVar3 + 0x9c) = (float)param_4;
                    /* WARNING: Could not recover jumptable at 0x00947b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x1f8))
                  (plVar3,fVar6 != (float)param_4,*(undefined8 *)(*plVar3 + 0x200));
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenColor$$get_value @ 0x6e3568
 * UnityEngine_Color_o TweenColor__get_value (TweenColor_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenColor$$get_value
   UnityEngine_Color_o TweenColor__get_value (TweenColor_o* __this, const MethodInfo* method); */

undefined1  [16] native_TweenColor__get_value_6e3568(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s0_02;
  undefined4 uVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined8 extraout_var_03;
  undefined8 extraout_var_04;
  undefined8 extraout_var_05;
  undefined8 extraout_var_06;
  undefined1 auVar4 [16];
  
  if ((bRam000000000133f393 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f393 = 1;
  }
  if (*(char *)(param_1 + 0xa0) == '\0') {
    native_TweenColor__Cache_6e3338(param_1);
  }
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,0,0);
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xb0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,0,0);
    if ((uVar1 & 1) == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0xc0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,0,0);
      if ((uVar1 & 1) == 0) {
        uVar2 = *(undefined8 *)(param_1 + 0xb8);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,0,0);
        if ((uVar1 & 1) == 0) {
          native_UnityEngine_Color__get_black_8d9e24(0);
          uVar3 = extraout_s0_02;
          uVar5 = extraout_var_02;
          uVar2 = extraout_var_06;
        }
        else {
          if (*(long *)(param_1 + 0xb8) == 0) goto LAB_006e36dc;
          native_UnityEngine_Light__get_color_8dfed4(*(long *)(param_1 + 0xb8),0);
          uVar3 = extraout_s0_01;
          uVar5 = extraout_var_01;
          uVar2 = extraout_var_05;
        }
      }
      else {
        if (*(long *)(param_1 + 0xc0) == 0) goto LAB_006e36dc;
        native_UnityEngine_SpriteRenderer__get_color_76c6d4(*(long *)(param_1 + 0xc0),0);
        uVar3 = extraout_s0_00;
        uVar5 = extraout_var_00;
        uVar2 = extraout_var_04;
      }
    }
    else {
      if (*(long *)(param_1 + 0xb0) == 0) goto LAB_006e36dc;
      native_UnityEngine_Material__get_color_8e3108(*(long *)(param_1 + 0xb0),0);
      uVar3 = extraout_s0;
      uVar5 = extraout_var;
      uVar2 = extraout_var_03;
    }
  }
  else {
    if (*(long *)(param_1 + 0xa8) == 0) {
LAB_006e36dc:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar3 = *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x90);
    uVar5 = 0;
    uVar2 = 0;
  }
  auVar4._4_4_ = uVar5;
  auVar4._0_4_ = uVar3;
  auVar4._8_8_ = uVar2;
  return auVar4;
}



/* TweenColor$$set_value @ 0x6e36e4
 * void TweenColor__set_value (TweenColor_o* __this, UnityEngine_Color_o value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenColor$$set_value
   void TweenColor__set_value (TweenColor_o* __this, UnityEngine_Color_o value, const MethodInfo*
   method); */

void native_TweenColor__set_value_6e36e4
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  
  if ((bRam000000000133f394 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f394 = 1;
  }
  if (*(char *)(param_5 + 0xa0) == '\0') {
    native_TweenColor__Cache_6e3338(param_5);
  }
  uVar5 = *(undefined8 *)(param_5 + 0xa8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
  if ((uVar2 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_5 + 0xb0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
    if ((uVar2 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_5 + 0xc0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
      if ((uVar2 & 1) == 0) {
        uVar5 = *(undefined8 *)(param_5 + 0xb8);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        if (*(long *)(param_5 + 0xb8) != 0) {
          native_UnityEngine_Light__set_color_8dff80
                    (param_1,param_2,param_3,param_4,*(long *)(param_5 + 0xb8),0);
          lVar4 = *(long *)(param_5 + 0xb8);
          if (lVar4 != 0) {
            if (pcRam0000000001340948 == (code *)0x0) {
              pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
            }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000001340948)(lVar4,0.01 < (float)param_3 + (float)param_1 + (float)param_2);
            return;
          }
        }
      }
      else {
        lVar4 = *(long *)(param_5 + 0xc0);
        if (lVar4 != 0) {
          if (pcRam000000000133fc30 == (code *)0x0) {
            pcRam000000000133fc30 = (code *)native_sub_4326f0(&UNK_00e29a38,0);
          }
          (*pcRam000000000133fc30)(lVar4,&stack0xffffffffffffffd0);
          return;
        }
      }
    }
    else {
      lVar4 = *(long *)(param_5 + 0xb0);
      if (lVar4 != 0) {
        if ((bRam0000000001340db1 & 1) == 0) {
          native_sub_43273c(&StringLiteral__Color_12f3558,0);
          bRam0000000001340db1 = 1;
        }
        if (pcRam0000000001340db8 == (code *)0x0) {
          pcRam0000000001340db8 = (code *)native_sub_4326f0(&UNK_00e2e607);
        }
        iVar1 = (*pcRam0000000001340db8)(lVar4,0x100);
        if (iVar1 < 0) {
          iVar1 = native_UnityEngine_Shader__PropertyToID_76b308(_StringLiteral__Color_12f3558,0);
        }
        if (pcRam0000000001340e30 == (code *)0x0) {
          pcRam0000000001340e30 = (code *)native_sub_4326f0(&UNK_00e2e93a);
        }
        (*pcRam0000000001340e30)(lVar4,iVar1,&stack0xffffffffffffffc0);
        return;
      }
    }
  }
  else {
    plVar3 = *(long **)(param_5 + 0xa8);
    if (plVar3 != (long *)0x0) {
      uVar2 = native_UnityEngine_Color__op_Inequality_8d9d34
                        ((int)plVar3[0x12],*(undefined4 *)((long)plVar3 + 0x94),(int)plVar3[0x13],
                         *(undefined4 *)((long)plVar3 + 0x9c),param_1,param_2,param_3,param_4,0,0);
      if ((uVar2 & 1) != 0) {
        fVar6 = *(float *)((long)plVar3 + 0x9c);
        *(float *)(plVar3 + 0x12) = (float)param_1;
        *(float *)((long)plVar3 + 0x94) = (float)param_2;
        *(float *)(plVar3 + 0x13) = (float)param_3;
        *(float *)((long)plVar3 + 0x9c) = (float)param_4;
                    /* WARNING: Could not recover jumptable at 0x00947b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x1f8))
                  (plVar3,fVar6 != (float)param_4,*(undefined8 *)(*plVar3 + 0x200));
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenColor$$OnUpdate @ 0x6e391c
 * void TweenColor__OnUpdate (TweenColor_o* __this, float factor, bool isFinished, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenColor$$OnUpdate
   void TweenColor__OnUpdate (TweenColor_o* __this, float factor, bool isFinished, const MethodInfo*
   method); */

void native_TweenColor__OnUpdate_6e391c(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar8 = (ulong)*(uint *)(param_1 + 0x84);
  uVar9 = (ulong)*(uint *)(param_1 + 0x88);
  uVar10 = (ulong)*(uint *)(param_1 + 0x8c);
  uVar7 = native_UnityEngine_Color__Lerp_8d9d50(*(undefined4 *)(param_1 + 0x80),0);
  if ((bRam000000000133f394 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f394 = 1;
  }
  if (*(char *)(param_1 + 0xa0) == '\0') {
    native_TweenColor__Cache_6e3338(param_1);
  }
  uVar5 = *(undefined8 *)(param_1 + 0xa8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
  if ((uVar2 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0xb0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
    if ((uVar2 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0xc0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
      if ((uVar2 & 1) == 0) {
        uVar5 = *(undefined8 *)(param_1 + 0xb8);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        if (*(long *)(param_1 + 0xb8) != 0) {
          native_UnityEngine_Light__set_color_8dff80
                    (uVar7,uVar8,uVar9,uVar10,*(long *)(param_1 + 0xb8),0);
          lVar4 = *(long *)(param_1 + 0xb8);
          if (lVar4 != 0) {
            if (pcRam0000000001340948 == (code *)0x0) {
              pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
            }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000001340948)(lVar4,0.01 < (float)uVar9 + (float)uVar7 + (float)uVar8);
            return;
          }
        }
      }
      else {
        lVar4 = *(long *)(param_1 + 0xc0);
        if (lVar4 != 0) {
          if (pcRam000000000133fc30 == (code *)0x0) {
            pcRam000000000133fc30 = (code *)native_sub_4326f0(&UNK_00e29a38,0);
          }
          (*pcRam000000000133fc30)(lVar4,&stack0xffffffffffffffd0);
          return;
        }
      }
    }
    else {
      lVar4 = *(long *)(param_1 + 0xb0);
      if (lVar4 != 0) {
        if ((bRam0000000001340db1 & 1) == 0) {
          native_sub_43273c(&StringLiteral__Color_12f3558,0);
          bRam0000000001340db1 = 1;
        }
        if (pcRam0000000001340db8 == (code *)0x0) {
          pcRam0000000001340db8 = (code *)native_sub_4326f0(&UNK_00e2e607);
        }
        iVar1 = (*pcRam0000000001340db8)(lVar4,0x100);
        if (iVar1 < 0) {
          iVar1 = native_UnityEngine_Shader__PropertyToID_76b308(_StringLiteral__Color_12f3558,0);
        }
        if (pcRam0000000001340e30 == (code *)0x0) {
          pcRam0000000001340e30 = (code *)native_sub_4326f0(&UNK_00e2e93a);
        }
        (*pcRam0000000001340e30)(lVar4,iVar1,&stack0xffffffffffffffc0);
        return;
      }
    }
  }
  else {
    plVar3 = *(long **)(param_1 + 0xa8);
    if (plVar3 != (long *)0x0) {
      uVar2 = native_UnityEngine_Color__op_Inequality_8d9d34
                        ((int)plVar3[0x12],*(undefined4 *)((long)plVar3 + 0x94),(int)plVar3[0x13],
                         *(undefined4 *)((long)plVar3 + 0x9c),uVar7,uVar8,uVar9,uVar10,0,0);
      if ((uVar2 & 1) != 0) {
        fVar6 = *(float *)((long)plVar3 + 0x9c);
        *(float *)(plVar3 + 0x12) = (float)uVar7;
        *(float *)((long)plVar3 + 0x94) = (float)uVar8;
        *(float *)(plVar3 + 0x13) = (float)uVar9;
        *(float *)((long)plVar3 + 0x9c) = (float)uVar10;
                    /* WARNING: Could not recover jumptable at 0x00947b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x1f8))
                  (plVar3,fVar6 != (float)uVar10,*(undefined8 *)(*plVar3 + 0x200));
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenColor$$Begin @ 0x6e3964
 * TweenColor_o* TweenColor__Begin (UnityEngine_GameObject_o* go, float duration, UnityEngine_Color_o color, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenColor$$Begin
   TweenColor_o* TweenColor__Begin (UnityEngine_GameObject_o* go, float duration,
   UnityEngine_Color_o color, const MethodInfo* method); */

long native_TweenColor__Begin_6e3964
               (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar4 = param_3;
  uVar5 = param_4;
  if ((bRam000000000133f395 & 1) == 0) {
    native_sub_43273c(&Method_UITweener_Begin_TweenColor____12e7900);
    bRam000000000133f395 = 1;
  }
  uVar3 = 0;
  lVar1 = native_UITweener__Begin_object__d8710c
                    (param_1,param_6,_Method_UITweener_Begin_TweenColor____12e7900);
  if (lVar1 != 0) {
    uVar2 = native_TweenColor__get_value_6e3568();
    *(undefined4 *)(lVar1 + 0x80) = uVar2;
    *(undefined4 *)(lVar1 + 0x84) = uVar3;
    *(undefined4 *)(lVar1 + 0x88) = uVar4;
    *(undefined4 *)(lVar1 + 0x8c) = uVar5;
    *(undefined4 *)(lVar1 + 0x90) = param_2;
    *(undefined4 *)(lVar1 + 0x94) = param_3;
    *(undefined4 *)(lVar1 + 0x98) = param_4;
    *(undefined4 *)(lVar1 + 0x9c) = param_5;
    if ((float)param_1 <= 0.0) {
      native_UITweener__Sample_948a44(0x3f800000,lVar1,1,0);
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar1,0,0);
    }
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenColor$$SetStartToCurrentValue @ 0x6e3a38
 * void TweenColor__SetStartToCurrentValue (TweenColor_o* __this, const MethodInfo* method); */

/* TweenColor$$SetStartToCurrentValue
   void TweenColor__SetStartToCurrentValue (TweenColor_o* __this, const MethodInfo* method); */

void native_TweenColor__SetStartToCurrentValue_6e3a38
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined4 uVar1;
  
  uVar1 = native_TweenColor__get_value_6e3568();
  *(undefined4 *)(param_5 + 0x80) = uVar1;
  *(undefined4 *)(param_5 + 0x84) = param_2;
  *(undefined4 *)(param_5 + 0x88) = param_3;
  *(undefined4 *)(param_5 + 0x8c) = param_4;
  return;
}



/* TweenColor$$SetEndToCurrentValue @ 0x6e3a60
 * void TweenColor__SetEndToCurrentValue (TweenColor_o* __this, const MethodInfo* method); */

/* TweenColor$$SetEndToCurrentValue
   void TweenColor__SetEndToCurrentValue (TweenColor_o* __this, const MethodInfo* method); */

void native_TweenColor__SetEndToCurrentValue_6e3a60
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined4 uVar1;
  
  uVar1 = native_TweenColor__get_value_6e3568();
  *(undefined4 *)(param_5 + 0x90) = uVar1;
  *(undefined4 *)(param_5 + 0x94) = param_2;
  *(undefined4 *)(param_5 + 0x98) = param_3;
  *(undefined4 *)(param_5 + 0x9c) = param_4;
  return;
}



/* TweenColor$$SetCurrentValueToStart @ 0x6e3a88
 * void TweenColor__SetCurrentValueToStart (TweenColor_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenColor$$SetCurrentValueToStart
   void TweenColor__SetCurrentValueToStart (TweenColor_o* __this, const MethodInfo* method); */

void native_TweenColor__SetCurrentValueToStart_6e3a88(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar6 = *(float *)(param_1 + 0x80);
  fVar8 = *(float *)(param_1 + 0x84);
  fVar9 = *(float *)(param_1 + 0x88);
  fVar10 = *(float *)(param_1 + 0x8c);
  if ((bRam000000000133f394 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f394 = 1;
  }
  if (*(char *)(param_1 + 0xa0) == '\0') {
    native_TweenColor__Cache_6e3338(param_1);
  }
  uVar5 = *(undefined8 *)(param_1 + 0xa8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
  if ((uVar2 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0xb0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
    if ((uVar2 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0xc0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
      if ((uVar2 & 1) == 0) {
        uVar5 = *(undefined8 *)(param_1 + 0xb8);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        if (*(long *)(param_1 + 0xb8) != 0) {
          native_UnityEngine_Light__set_color_8dff80
                    (fVar6,fVar8,fVar9,fVar10,*(long *)(param_1 + 0xb8),0);
          lVar4 = *(long *)(param_1 + 0xb8);
          if (lVar4 != 0) {
            if (pcRam0000000001340948 == (code *)0x0) {
              pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
            }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000001340948)(lVar4,0.01 < fVar9 + fVar6 + fVar8);
            return;
          }
        }
      }
      else {
        lVar4 = *(long *)(param_1 + 0xc0);
        if (lVar4 != 0) {
          if (pcRam000000000133fc30 == (code *)0x0) {
            pcRam000000000133fc30 = (code *)native_sub_4326f0(&UNK_00e29a38,0);
          }
          (*pcRam000000000133fc30)(lVar4,&stack0xffffffffffffffd0);
          return;
        }
      }
    }
    else {
      lVar4 = *(long *)(param_1 + 0xb0);
      if (lVar4 != 0) {
        if ((bRam0000000001340db1 & 1) == 0) {
          native_sub_43273c(&StringLiteral__Color_12f3558,0);
          bRam0000000001340db1 = 1;
        }
        if (pcRam0000000001340db8 == (code *)0x0) {
          pcRam0000000001340db8 = (code *)native_sub_4326f0(&UNK_00e2e607);
        }
        iVar1 = (*pcRam0000000001340db8)(lVar4,0x100);
        if (iVar1 < 0) {
          iVar1 = native_UnityEngine_Shader__PropertyToID_76b308(_StringLiteral__Color_12f3558,0);
        }
        if (pcRam0000000001340e30 == (code *)0x0) {
          pcRam0000000001340e30 = (code *)native_sub_4326f0(&UNK_00e2e93a);
        }
        (*pcRam0000000001340e30)(lVar4,iVar1,&stack0xffffffffffffffc0);
        return;
      }
    }
  }
  else {
    plVar3 = *(long **)(param_1 + 0xa8);
    if (plVar3 != (long *)0x0) {
      uVar2 = native_UnityEngine_Color__op_Inequality_8d9d34
                        ((int)plVar3[0x12],*(undefined4 *)((long)plVar3 + 0x94),(int)plVar3[0x13],
                         *(undefined4 *)((long)plVar3 + 0x9c),fVar6,fVar8,fVar9,fVar10,0,0);
      if ((uVar2 & 1) != 0) {
        fVar7 = *(float *)((long)plVar3 + 0x9c);
        *(float *)(plVar3 + 0x12) = fVar6;
        *(float *)((long)plVar3 + 0x94) = fVar8;
        *(float *)(plVar3 + 0x13) = fVar9;
        *(float *)((long)plVar3 + 0x9c) = fVar10;
                    /* WARNING: Could not recover jumptable at 0x00947b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x1f8))(plVar3,fVar7 != fVar10,*(undefined8 *)(*plVar3 + 0x200));
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenColor$$SetCurrentValueToEnd @ 0x6e3a94
 * void TweenColor__SetCurrentValueToEnd (TweenColor_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenColor$$SetCurrentValueToEnd
   void TweenColor__SetCurrentValueToEnd (TweenColor_o* __this, const MethodInfo* method); */

void native_TweenColor__SetCurrentValueToEnd_6e3a94(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar6 = *(float *)(param_1 + 0x90);
  fVar8 = *(float *)(param_1 + 0x94);
  fVar9 = *(float *)(param_1 + 0x98);
  fVar10 = *(float *)(param_1 + 0x9c);
  if ((bRam000000000133f394 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f394 = 1;
  }
  if (*(char *)(param_1 + 0xa0) == '\0') {
    native_TweenColor__Cache_6e3338(param_1);
  }
  uVar5 = *(undefined8 *)(param_1 + 0xa8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
  if ((uVar2 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0xb0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
    if ((uVar2 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0xc0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
      if ((uVar2 & 1) == 0) {
        uVar5 = *(undefined8 *)(param_1 + 0xb8);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        if (*(long *)(param_1 + 0xb8) != 0) {
          native_UnityEngine_Light__set_color_8dff80
                    (fVar6,fVar8,fVar9,fVar10,*(long *)(param_1 + 0xb8),0);
          lVar4 = *(long *)(param_1 + 0xb8);
          if (lVar4 != 0) {
            if (pcRam0000000001340948 == (code *)0x0) {
              pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
            }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000001340948)(lVar4,0.01 < fVar9 + fVar6 + fVar8);
            return;
          }
        }
      }
      else {
        lVar4 = *(long *)(param_1 + 0xc0);
        if (lVar4 != 0) {
          if (pcRam000000000133fc30 == (code *)0x0) {
            pcRam000000000133fc30 = (code *)native_sub_4326f0(&UNK_00e29a38,0);
          }
          (*pcRam000000000133fc30)(lVar4,&stack0xffffffffffffffd0);
          return;
        }
      }
    }
    else {
      lVar4 = *(long *)(param_1 + 0xb0);
      if (lVar4 != 0) {
        if ((bRam0000000001340db1 & 1) == 0) {
          native_sub_43273c(&StringLiteral__Color_12f3558,0);
          bRam0000000001340db1 = 1;
        }
        if (pcRam0000000001340db8 == (code *)0x0) {
          pcRam0000000001340db8 = (code *)native_sub_4326f0(&UNK_00e2e607);
        }
        iVar1 = (*pcRam0000000001340db8)(lVar4,0x100);
        if (iVar1 < 0) {
          iVar1 = native_UnityEngine_Shader__PropertyToID_76b308(_StringLiteral__Color_12f3558,0);
        }
        if (pcRam0000000001340e30 == (code *)0x0) {
          pcRam0000000001340e30 = (code *)native_sub_4326f0(&UNK_00e2e93a);
        }
        (*pcRam0000000001340e30)(lVar4,iVar1,&stack0xffffffffffffffc0);
        return;
      }
    }
  }
  else {
    plVar3 = *(long **)(param_1 + 0xa8);
    if (plVar3 != (long *)0x0) {
      uVar2 = native_UnityEngine_Color__op_Inequality_8d9d34
                        ((int)plVar3[0x12],*(undefined4 *)((long)plVar3 + 0x94),(int)plVar3[0x13],
                         *(undefined4 *)((long)plVar3 + 0x9c),fVar6,fVar8,fVar9,fVar10,0,0);
      if ((uVar2 & 1) != 0) {
        fVar7 = *(float *)((long)plVar3 + 0x9c);
        *(float *)(plVar3 + 0x12) = fVar6;
        *(float *)((long)plVar3 + 0x94) = fVar8;
        *(float *)(plVar3 + 0x13) = fVar9;
        *(float *)((long)plVar3 + 0x9c) = fVar10;
                    /* WARNING: Could not recover jumptable at 0x00947b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x1f8))(plVar3,fVar7 != fVar10,*(undefined8 *)(*plVar3 + 0x200));
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenColor$$.ctor @ 0x6e3aa0
 * void TweenColor___ctor (TweenColor_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenColor$$.ctor
   void TweenColor___ctor (TweenColor_o* __this, const MethodInfo* method); */

void native_TweenColor___ctor_6e3aa0
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
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
  
  uVar3 = native_UnityEngine_Color__get_white_8d9e10(0);
  *(undefined4 *)(param_5 + 0x80) = uVar3;
  *(undefined4 *)(param_5 + 0x84) = param_2;
  *(undefined4 *)(param_5 + 0x88) = param_3;
  *(undefined4 *)(param_5 + 0x8c) = param_4;
  uVar3 = native_UnityEngine_Color__get_white_8d9e10(0);
  *(undefined4 *)(param_5 + 0x90) = uVar3;
  *(undefined4 *)(param_5 + 0x94) = param_2;
  *(undefined4 *)(param_5 + 0x98) = param_3;
  *(undefined4 *)(param_5 + 0x9c) = param_4;
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
        *(undefined8 *)(param_5 + 0x20) = uVar2;
        native_sub_4326e0((undefined8 *)(param_5 + 0x20),uVar2);
        *(undefined1 *)(param_5 + 0x28) = 1;
        *(undefined8 *)(param_5 + 0x30) = 0x3f80000000000002;
        uVar2 = native_sub_432808(_System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
        native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
                  (uVar2,_Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
        *(undefined8 *)(param_5 + 0x48) = uVar2;
        native_sub_4326e0(param_5 + 0x48,uVar2);
        *(undefined4 *)(param_5 + 0x60) = 0x3f800000;
        *(undefined4 *)(param_5 + 0x70) = 0x447a0000;
        native_UnityEngine_MonoBehaviour___ctor_8e971c(param_5,0);
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


