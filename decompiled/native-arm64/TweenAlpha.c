/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TweenAlpha$$get_alpha @ 0x6e2a90
 * float TweenAlpha__get_alpha (TweenAlpha_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenAlpha$$get_alpha
   float TweenAlpha__get_alpha (TweenAlpha_o* __this, const MethodInfo* method); */

undefined1  [16] native_TweenAlpha__get_alpha_6e2a90(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined1 in_q3 [16];
  
  uVar7 = in_q3._8_8_;
  uVar5 = in_q3._0_8_;
  if ((bRam000000000133f38f & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f38f = 1;
  }
  if (*(char *)(param_1 + 0x98) == '\0') {
    native_TweenAlpha__Cache_6e2f34(param_1);
  }
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
  if ((uVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0xc0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
    if ((uVar1 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0xb0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,0,0);
      if ((uVar1 & 1) == 0) {
        uVar1 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x90),0);
        lVar3 = *(long *)(param_1 + 0xb0);
        if ((uVar1 & 1) == 0) {
          if (lVar3 == 0) goto LAB_006e2bfc;
          native_UnityEngine_Material__GetColor_8e31e8(lVar3,*(undefined8 *)(param_1 + 0x90),0);
        }
        else {
          if (lVar3 == 0) goto LAB_006e2bfc;
          native_UnityEngine_Material__get_color_8e3108(lVar3,0);
        }
      }
      else {
        uVar5 = 0x3f800000;
        uVar7 = 0;
      }
    }
    else {
      if (*(long *)(param_1 + 0xc0) == 0) goto LAB_006e2bfc;
      native_UnityEngine_SpriteRenderer__get_color_76c6d4(*(long *)(param_1 + 0xc0),0);
    }
    auVar6._8_8_ = uVar7;
    auVar6._0_8_ = uVar5;
    return auVar6;
  }
  plVar2 = *(long **)(param_1 + 0xa0);
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006e2b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar6 = (**(code **)(*plVar2 + 0x1a8))(plVar2,*(undefined8 *)(*plVar2 + 0x1b0));
    return auVar6;
  }
LAB_006e2bfc:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenAlpha$$set_alpha @ 0x6e2c00
 * void TweenAlpha__set_alpha (TweenAlpha_o* __this, float value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenAlpha$$set_alpha
   void TweenAlpha__set_alpha (TweenAlpha_o* __this, float value, const MethodInfo* method); */

void native_TweenAlpha__set_alpha_6e2c00(undefined8 param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  
  if ((bRam000000000133f390 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f390 = 1;
  }
  if (*(char *)(param_2 + 0x98) == '\0') {
    native_TweenAlpha__Cache_6e2f34(param_2);
  }
  uVar5 = *(undefined8 *)(param_2 + 0xa0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
  if ((uVar2 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_2 + 0xc0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
    if ((uVar2 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_2 + 0xb0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
      if ((uVar2 & 1) == 0) {
        uVar5 = *(undefined8 *)(param_2 + 0xb8);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        lVar4 = *(long *)(param_2 + 0xb8);
        if (lVar4 != 0) {
          fVar6 = *(float *)(param_2 + 200);
          if (pcRam0000000001340cf8 == (code *)0x0) {
            pcRam0000000001340cf8 = (code *)native_sub_4326f0(&UNK_00e2e1f8);
          }
                    /* WARNING: Could not recover jumptable at 0x008e00b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000001340cf8)(fVar6 * (float)param_1,lVar4);
          return;
        }
      }
      else {
        uVar2 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_2 + 0x90),0);
        lVar4 = *(long *)(param_2 + 0xb0);
        if ((uVar2 & 1) == 0) {
          if (lVar4 != 0) {
            native_UnityEngine_Material__GetColor_8e31e8(lVar4,*(undefined8 *)(param_2 + 0x90),0);
            lVar4 = *(long *)(param_2 + 0xb0);
            if (lVar4 != 0) {
              iVar1 = native_UnityEngine_Shader__PropertyToID_76b308
                                (*(undefined8 *)(param_2 + 0x90),0,0);
              goto native_UnityEngine_Material__SetColorImpl_8e3c2c;
            }
          }
        }
        else if (lVar4 != 0) {
          native_UnityEngine_Material__get_color_8e3108(lVar4,0);
          lVar4 = *(long *)(param_2 + 0xb0);
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
              iVar1 = native_UnityEngine_Shader__PropertyToID_76b308
                                (_StringLiteral__Color_12f3558,0);
            }
native_UnityEngine_Material__SetColorImpl_8e3c2c:
            if (pcRam0000000001340e30 == (code *)0x0) {
              pcRam0000000001340e30 = (code *)native_sub_4326f0(&UNK_00e2e93a);
            }
            (*pcRam0000000001340e30)(lVar4,iVar1,&stack0xffffffffffffffc0);
            return;
          }
        }
      }
    }
    else if (*(long *)(param_2 + 0xc0) != 0) {
      native_UnityEngine_SpriteRenderer__get_color_76c6d4(*(long *)(param_2 + 0xc0),0);
      lVar4 = *(long *)(param_2 + 0xc0);
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
    plVar3 = *(long **)(param_2 + 0xa0);
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006e2cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x1b8))(param_1,plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenAlpha$$OnDestroy @ 0x6e2e38
 * void TweenAlpha__OnDestroy (TweenAlpha_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenAlpha$$OnDestroy
   void TweenAlpha__OnDestroy (TweenAlpha_o* __this, const MethodInfo* method); */

void native_TweenAlpha__OnDestroy_6e2e38(long param_1)

{
  ulong *puVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if ((bRam000000000133f38d & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f38d = 1;
  }
  if (*(char *)(param_1 + 0x88) != '\0') {
    puVar6 = (undefined8 *)(param_1 + 0xb0);
    uVar7 = *puVar6;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
    if ((uVar5 & 1) != 0) {
      uVar7 = *(undefined8 *)(param_1 + 0xa8);
      uVar2 = *(undefined8 *)(param_1 + 0xb0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,uVar2,0);
      if ((uVar5 & 1) != 0) {
        uVar7 = *puVar6;
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        native_UnityEngine_Object__Destroy_8ea574(uVar7,0);
        *puVar6 = 0;
        if (iRam0000000001345318 != 0) {
          puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        return;
      }
    }
  }
  return;
}



/* TweenAlpha$$Cache @ 0x6e2f34
 * void TweenAlpha__Cache (TweenAlpha_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenAlpha$$Cache
   void TweenAlpha__Cache (TweenAlpha_o* __this, const MethodInfo* method); */

void native_TweenAlpha__Cache_6e2f34(long param_1)

{
  ulong uVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 uVar8;
  
  if ((bRam000000000133f38e & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInChildren_UIRect____12e2cd8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Light____12e2aa0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Renderer____12e2ad8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_SpriteRenderer____12e2b18);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIRect____12e2bf8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f38e = 1;
  }
  *(undefined1 *)(param_1 + 0x98) = 1;
  uVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_UIRect____12e2bf8);
  uVar1 = param_1 + 0xa0;
  *(undefined8 *)(param_1 + 0xa0) = uVar5;
  native_sub_4326e0(uVar1,uVar5);
  uVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_SpriteRenderer____12e2b18);
  *(undefined8 *)(param_1 + 0xc0) = uVar5;
  native_sub_4326e0((undefined8 *)(param_1 + 0xc0),uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0xa0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar5,0,0);
  if ((uVar6 & 1) != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0xc0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar5,0,0);
    if ((uVar6 & 1) != 0) {
      uVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (param_1,_Method_UnityEngine_Component_GetComponent_Light____12e2aa0);
      *(undefined8 *)(param_1 + 0xb8) = uVar5;
      native_sub_4326e0((long *)(param_1 + 0xb8),uVar5);
      uVar5 = *(undefined8 *)(param_1 + 0xb8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar6 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar5,0,0);
      if ((uVar6 & 1) == 0) {
        lVar7 = *(long *)(param_1 + 0xb8);
        if (lVar7 == 0) {
LAB_006e31e4:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        uVar8 = native_UnityEngine_Light__get_intensity_8e0028(lVar7,0);
        *(undefined4 *)(param_1 + 200) = uVar8;
      }
      else {
        lVar7 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (param_1,_Method_UnityEngine_Component_GetComponent_Renderer____12e2ad8);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
        if ((uVar6 & 1) != 0) {
          if (lVar7 == 0) goto LAB_006e31e4;
          uVar5 = native_UnityEngine_Renderer__get_sharedMaterial_768f5c(lVar7,0);
          *(undefined8 *)(param_1 + 0xa8) = uVar5;
          native_sub_4326e0((undefined8 *)(param_1 + 0xa8),uVar5);
          uVar5 = native_UnityEngine_Renderer__get_material_768f1c(lVar7,0);
          *(undefined8 *)(param_1 + 0xb0) = uVar5;
          native_sub_4326e0(param_1 + 0xb0,uVar5);
        }
        uVar5 = *(undefined8 *)(param_1 + 0xb0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar6 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar5,0,0);
        if ((uVar6 & 1) != 0) {
          uVar5 = native_UnityEngine_Component__GetComponentInChildren_Animation__49db98
                            (param_1,
                             _Method_UnityEngine_Component_GetComponentInChildren_UIRect____12e2cd8)
          ;
          *(undefined8 *)(param_1 + 0xa0) = uVar5;
          if (iRam0000000001345318 != 0) {
            puVar2 = (ulong *)((uVar1 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar4) {
                *puVar2 = *puVar2 | 1L << (uVar1 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          return;
        }
      }
    }
  }
  return;
}



/* TweenAlpha$$get_value @ 0x6e2a94
 * float TweenAlpha__get_value (TweenAlpha_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenAlpha$$get_value
   float TweenAlpha__get_value (TweenAlpha_o* __this, const MethodInfo* method); */

undefined1  [16] native_TweenAlpha__get_value_6e2a94(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined1 in_q3 [16];
  
  uVar7 = in_q3._8_8_;
  uVar5 = in_q3._0_8_;
  if ((bRam000000000133f38f & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f38f = 1;
  }
  if (*(char *)(param_1 + 0x98) == '\0') {
    native_TweenAlpha__Cache_6e2f34(param_1);
  }
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
  if ((uVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0xc0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
    if ((uVar1 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0xb0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,0,0);
      if ((uVar1 & 1) == 0) {
        uVar1 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x90),0);
        lVar3 = *(long *)(param_1 + 0xb0);
        if ((uVar1 & 1) == 0) {
          if (lVar3 == 0) goto LAB_006e2bfc;
          native_UnityEngine_Material__GetColor_8e31e8(lVar3,*(undefined8 *)(param_1 + 0x90),0);
        }
        else {
          if (lVar3 == 0) goto LAB_006e2bfc;
          native_UnityEngine_Material__get_color_8e3108(lVar3,0);
        }
      }
      else {
        uVar5 = 0x3f800000;
        uVar7 = 0;
      }
    }
    else {
      if (*(long *)(param_1 + 0xc0) == 0) goto LAB_006e2bfc;
      native_UnityEngine_SpriteRenderer__get_color_76c6d4(*(long *)(param_1 + 0xc0),0);
    }
    auVar6._8_8_ = uVar7;
    auVar6._0_8_ = uVar5;
    return auVar6;
  }
  plVar2 = *(long **)(param_1 + 0xa0);
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006e2b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar6 = (**(code **)(*plVar2 + 0x1a8))(plVar2,*(undefined8 *)(*plVar2 + 0x1b0));
    return auVar6;
  }
LAB_006e2bfc:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenAlpha$$set_value @ 0x6e2c04
 * void TweenAlpha__set_value (TweenAlpha_o* __this, float value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenAlpha$$set_value
   void TweenAlpha__set_value (TweenAlpha_o* __this, float value, const MethodInfo* method); */

void native_TweenAlpha__set_value_6e2c04(undefined8 param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  
  if ((bRam000000000133f390 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f390 = 1;
  }
  if (*(char *)(param_2 + 0x98) == '\0') {
    native_TweenAlpha__Cache_6e2f34(param_2);
  }
  uVar5 = *(undefined8 *)(param_2 + 0xa0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
  if ((uVar2 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_2 + 0xc0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
    if ((uVar2 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_2 + 0xb0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
      if ((uVar2 & 1) == 0) {
        uVar5 = *(undefined8 *)(param_2 + 0xb8);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        lVar4 = *(long *)(param_2 + 0xb8);
        if (lVar4 != 0) {
          fVar6 = *(float *)(param_2 + 200);
          if (pcRam0000000001340cf8 == (code *)0x0) {
            pcRam0000000001340cf8 = (code *)native_sub_4326f0(&UNK_00e2e1f8);
          }
                    /* WARNING: Could not recover jumptable at 0x008e00b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000001340cf8)(fVar6 * (float)param_1,lVar4);
          return;
        }
      }
      else {
        uVar2 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_2 + 0x90),0);
        lVar4 = *(long *)(param_2 + 0xb0);
        if ((uVar2 & 1) == 0) {
          if (lVar4 != 0) {
            native_UnityEngine_Material__GetColor_8e31e8(lVar4,*(undefined8 *)(param_2 + 0x90),0);
            lVar4 = *(long *)(param_2 + 0xb0);
            if (lVar4 != 0) {
              iVar1 = native_UnityEngine_Shader__PropertyToID_76b308
                                (*(undefined8 *)(param_2 + 0x90),0,0);
              goto native_UnityEngine_Material__SetColorImpl_8e3c2c;
            }
          }
        }
        else if (lVar4 != 0) {
          native_UnityEngine_Material__get_color_8e3108(lVar4,0);
          lVar4 = *(long *)(param_2 + 0xb0);
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
              iVar1 = native_UnityEngine_Shader__PropertyToID_76b308
                                (_StringLiteral__Color_12f3558,0);
            }
native_UnityEngine_Material__SetColorImpl_8e3c2c:
            if (pcRam0000000001340e30 == (code *)0x0) {
              pcRam0000000001340e30 = (code *)native_sub_4326f0(&UNK_00e2e93a);
            }
            (*pcRam0000000001340e30)(lVar4,iVar1,&stack0xffffffffffffffc0);
            return;
          }
        }
      }
    }
    else if (*(long *)(param_2 + 0xc0) != 0) {
      native_UnityEngine_SpriteRenderer__get_color_76c6d4(*(long *)(param_2 + 0xc0),0);
      lVar4 = *(long *)(param_2 + 0xc0);
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
    plVar3 = *(long **)(param_2 + 0xa0);
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006e2cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x1b8))(param_1,plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenAlpha$$OnUpdate @ 0x6e31e8
 * void TweenAlpha__OnUpdate (TweenAlpha_o* __this, float factor, bool isFinished, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenAlpha$$OnUpdate
   void TweenAlpha__OnUpdate (TweenAlpha_o* __this, float factor, bool isFinished, const MethodInfo*
   method); */

void native_TweenAlpha__OnUpdate_6e31e8(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  
  uVar7 = native_UnityEngine_Mathf__Lerp_8e5224(*(undefined4 *)(param_1 + 0x80),0);
  if ((bRam000000000133f390 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f390 = 1;
  }
  if (*(char *)(param_1 + 0x98) == '\0') {
    native_TweenAlpha__Cache_6e2f34(param_1);
  }
  uVar5 = *(undefined8 *)(param_1 + 0xa0);
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
      uVar5 = *(undefined8 *)(param_1 + 0xb0);
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
        lVar4 = *(long *)(param_1 + 0xb8);
        if (lVar4 != 0) {
          fVar6 = *(float *)(param_1 + 200);
          if (pcRam0000000001340cf8 == (code *)0x0) {
            pcRam0000000001340cf8 = (code *)native_sub_4326f0(&UNK_00e2e1f8);
          }
                    /* WARNING: Could not recover jumptable at 0x008e00b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000001340cf8)(fVar6 * (float)uVar7,lVar4);
          return;
        }
      }
      else {
        uVar2 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x90),0);
        lVar4 = *(long *)(param_1 + 0xb0);
        if ((uVar2 & 1) == 0) {
          if (lVar4 != 0) {
            native_UnityEngine_Material__GetColor_8e31e8(lVar4,*(undefined8 *)(param_1 + 0x90),0);
            lVar4 = *(long *)(param_1 + 0xb0);
            if (lVar4 != 0) {
              iVar1 = native_UnityEngine_Shader__PropertyToID_76b308
                                (*(undefined8 *)(param_1 + 0x90),0,0);
              goto native_UnityEngine_Material__SetColorImpl_8e3c2c;
            }
          }
        }
        else if (lVar4 != 0) {
          native_UnityEngine_Material__get_color_8e3108(lVar4,0);
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
              iVar1 = native_UnityEngine_Shader__PropertyToID_76b308
                                (_StringLiteral__Color_12f3558,0);
            }
native_UnityEngine_Material__SetColorImpl_8e3c2c:
            if (pcRam0000000001340e30 == (code *)0x0) {
              pcRam0000000001340e30 = (code *)native_sub_4326f0(&UNK_00e2e93a);
            }
            (*pcRam0000000001340e30)(lVar4,iVar1,&stack0xffffffffffffffc0);
            return;
          }
        }
      }
    }
    else if (*(long *)(param_1 + 0xc0) != 0) {
      native_UnityEngine_SpriteRenderer__get_color_76c6d4(*(long *)(param_1 + 0xc0),0);
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
    plVar3 = *(long **)(param_1 + 0xa0);
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006e2cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x1b8))(uVar7,plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenAlpha$$Begin @ 0x6e3220
 * TweenAlpha_o* TweenAlpha__Begin (UnityEngine_GameObject_o* go, float duration, float alpha, float delay, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenAlpha$$Begin
   TweenAlpha_o* TweenAlpha__Begin (UnityEngine_GameObject_o* go, float duration, float alpha, float
   delay, const MethodInfo* method); */

long native_TweenAlpha__Begin_6e3220
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uVar2;
  
  if ((bRam000000000133f391 & 1) == 0) {
    native_sub_43273c(&Method_UITweener_Begin_TweenAlpha____12e78f8);
    bRam000000000133f391 = 1;
  }
  lVar1 = native_UITweener__Begin_object__d8710c
                    (param_1,param_3,param_4,_Method_UITweener_Begin_TweenAlpha____12e78f8);
  if (lVar1 != 0) {
    uVar2 = native_TweenAlpha__get_value_6e2a94();
    *(undefined4 *)(lVar1 + 0x80) = uVar2;
    *(undefined4 *)(lVar1 + 0x84) = param_2;
    if ((float)param_1 <= 0.0) {
      native_UITweener__Sample_948a44(0x3f800000,lVar1,1,0);
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar1,0,0);
    }
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenAlpha$$SetStartToCurrentValue @ 0x6e32d8
 * void TweenAlpha__SetStartToCurrentValue (TweenAlpha_o* __this, const MethodInfo* method); */

/* TweenAlpha$$SetStartToCurrentValue
   void TweenAlpha__SetStartToCurrentValue (TweenAlpha_o* __this, const MethodInfo* method); */

void native_TweenAlpha__SetStartToCurrentValue_6e32d8(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = native_TweenAlpha__get_value_6e2a94();
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  return;
}



/* TweenAlpha$$SetEndToCurrentValue @ 0x6e32fc
 * void TweenAlpha__SetEndToCurrentValue (TweenAlpha_o* __this, const MethodInfo* method); */

/* TweenAlpha$$SetEndToCurrentValue
   void TweenAlpha__SetEndToCurrentValue (TweenAlpha_o* __this, const MethodInfo* method); */

void native_TweenAlpha__SetEndToCurrentValue_6e32fc(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = native_TweenAlpha__get_value_6e2a94();
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  return;
}



/* TweenAlpha$$.ctor @ 0x6e3320
 * void TweenAlpha___ctor (TweenAlpha_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenAlpha$$.ctor
   void TweenAlpha___ctor (TweenAlpha_o* __this, const MethodInfo* method); */

void native_TweenAlpha___ctor_6e3320(long param_1)

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
  
  uVar2 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(param_1 + 0x80) = uVar2;
  *(undefined4 *)(param_1 + 200) = 0x3f800000;
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


