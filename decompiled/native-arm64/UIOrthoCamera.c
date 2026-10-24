/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIOrthoCamera$$Start @ 0xaeee4c
 * void UIOrthoCamera__Start (UIOrthoCamera_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIOrthoCamera$$Start
   void UIOrthoCamera__Start (UIOrthoCamera_o* __this, const MethodInfo* method); */

void native_UIOrthoCamera__Start_aeee4c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam0000000001342036 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Camera____12e29a8);
    bRam0000000001342036 = 1;
  }
  uVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_Camera____12e29a8);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  native_sub_4326e0(param_1 + 0x18);
  uVar1 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  native_sub_4326e0(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    if (pcRam00000000013409b8 == (code *)0x0) {
      pcRam00000000013409b8 = (code *)native_sub_4326f0(&UNK_00e2c953);
    }
                    /* WARNING: Could not recover jumptable at 0x008d874c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000000013409b8)(lVar2,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIOrthoCamera$$Update @ 0xaeeedc
 * void UIOrthoCamera__Update (UIOrthoCamera_o* __this, const MethodInfo* method); */

/* UIOrthoCamera$$Update
   void UIOrthoCamera__Update (UIOrthoCamera_o* __this, const MethodInfo* method); */

void native_UIOrthoCamera__Update_aeeedc
               (undefined1 param_1 [16],float param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = 0;
  uStack_48 = 0;
  if (*(long *)(param_5 + 0x18) != 0) {
    uVar4 = native_UnityEngine_Camera__get_rect_8d8b48(*(long *)(param_5 + 0x18),0);
    uStack_50 = CONCAT44(param_2,uVar4);
    uStack_48 = CONCAT44(param_4,param_3);
    fVar5 = (float)native_UnityEngine_Rect__get_yMin_763644(&uStack_50,0);
    iVar1 = native_UnityEngine_Screen__get_height_76a618(0);
    if (*(long *)(param_5 + 0x18) != 0) {
      uVar4 = native_UnityEngine_Camera__get_rect_8d8b48(*(long *)(param_5 + 0x18),0);
      uStack_50 = CONCAT44(param_2,uVar4);
      uStack_48 = CONCAT44(param_4,param_3);
      fVar6 = (float)native_UnityEngine_Rect__get_yMax_76366c(&uStack_50,0);
      iVar2 = native_UnityEngine_Screen__get_height_76a618(0);
      if (*(long *)(param_5 + 0x20) != 0) {
        native_UnityEngine_Transform__get_lossyScale_772cac(*(long *)(param_5 + 0x20),0);
        if (*(long *)(param_5 + 0x18) != 0) {
          param_2 = (fVar6 * (float)iVar2 - fVar5 * (float)iVar1) * 0.5 * param_2;
          uVar7 = native_UnityEngine_Camera__get_orthographicSize_8d8630
                            (*(long *)(param_5 + 0x18),0);
          uVar3 = native_UnityEngine_Mathf__Approximately_8e52a0(uVar7,param_2,0);
          if ((uVar3 & 1) == 0) {
            if (*(long *)(param_5 + 0x18) == 0) goto LAB_00aeefe8;
            native_UnityEngine_Camera__set_orthographicSize_8d8670
                      (param_2,*(long *)(param_5 + 0x18),0);
          }
          return;
        }
      }
    }
  }
LAB_00aeefe8:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIOrthoCamera$$.ctor @ 0xaeefec
 * void UIOrthoCamera___ctor (UIOrthoCamera_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIOrthoCamera$$.ctor
   void UIOrthoCamera___ctor (UIOrthoCamera_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIOrthoCamera___ctor_aeefec(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000001340ae0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001340ae0 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1;
}


