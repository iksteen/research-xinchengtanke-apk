/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.Examples.ObjectSpin$$Awake @ 0x73781c
 * void TMPro_Examples_ObjectSpin__Awake (TMPro_Examples_ObjectSpin_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.ObjectSpin$$Awake
   void TMPro_Examples_ObjectSpin__Awake (TMPro_Examples_ObjectSpin_o* __this, const MethodInfo*
   method); */

void native_TMPro_Examples_ObjectSpin__Awake_73781c
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam000000000133f5d8 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Light____12e2aa0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f5d8 = 1;
  }
  uStack_30 = 0;
  uStack_28 = 0;
  uVar1 = native_UnityEngine_Component__get_transform_8da62c(param_5,0);
  *(undefined8 *)(param_5 + 0x20) = uVar1;
  native_sub_4326e0(param_5 + 0x20);
  if (*(long *)(param_5 + 0x20) != 0) {
    uVar4 = native_UnityEngine_Transform__get_rotation_771a30(*(long *)(param_5 + 0x20),0);
    uStack_30 = CONCAT44(param_2,uVar4);
    uStack_28 = CONCAT44(param_4,param_3);
    uVar4 = native_UnityEngine_Quaternion__get_eulerAngles_762b94(&uStack_30,0);
    *(undefined4 *)(param_5 + 0x38) = uVar4;
    *(undefined4 *)(param_5 + 0x3c) = param_2;
    *(undefined4 *)(param_5 + 0x40) = param_3;
    if (*(long *)(param_5 + 0x20) != 0) {
      uVar4 = native_UnityEngine_Transform__get_position_77169c(*(long *)(param_5 + 0x20),0);
      *(undefined4 *)(param_5 + 0x44) = uVar4;
      *(undefined4 *)(param_5 + 0x48) = param_2;
      *(undefined4 *)(param_5 + 0x4c) = param_3;
      lVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (param_5,_Method_UnityEngine_Component_GetComponent_Light____12e2aa0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
      if ((uVar3 & 1) == 0) {
        native_UnityEngine_Color__get_black_8d9e24(0);
      }
      else {
        if (lVar2 == 0) goto LAB_00737948;
        native_UnityEngine_Light__get_color_8dfed4(lVar2,0);
      }
      uVar4 = native_UnityEngine_Color32__op_Implicit_8d9fb4(0);
      *(undefined4 *)(param_5 + 0x50) = uVar4;
      return;
    }
  }
LAB_00737948:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.ObjectSpin$$Update @ 0x73794c
 * void TMPro_Examples_ObjectSpin__Update (TMPro_Examples_ObjectSpin_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x007723ec) */
/* TMPro.Examples.ObjectSpin$$Update
   void TMPro_Examples_ObjectSpin__Update (TMPro_Examples_ObjectSpin_o* __this, const MethodInfo*
   method); */

void native_TMPro_Examples_ObjectSpin__Update_73794c(long param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    native_UnityEngine_Time__get_deltaTime_77082c(0);
    if (lVar2 != 0) {
      native_UnityEngine_Quaternion__Internal_FromEulerRad_762560(0);
      native_UnityEngine_Transform__get_localRotation_771c84();
      native_UnityEngine_Quaternion__op_Multiply_76294c();
      if (pcRam000000000133ff08 == (code *)0x0) {
        pcRam000000000133ff08 = (code *)native_sub_4326f0(&UNK_00e2aec2);
      }
      (*pcRam000000000133ff08)(lVar2,&stack0xffffffffffffffd0);
      return;
    }
  }
  else {
    fVar4 = *(float *)(param_1 + 0x28);
    fVar6 = *(float *)(param_1 + 0x18);
    fVar3 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
    fVar4 = fVar4 + fVar6 * fVar3;
    *(float *)(param_1 + 0x28) = fVar4;
    if (iVar1 == 1) {
      lVar2 = *(long *)(param_1 + 0x20);
      uVar5 = *(undefined4 *)(param_1 + 0x38);
      func_0x002c9f10();
      native_UnityEngine_Quaternion__Euler_762bc4(uVar5,0);
      if (lVar2 != 0) {
        if (pcRam000000000133fef8 == (code *)0x0) {
          pcRam000000000133fef8 = (code *)native_sub_4326f0(&UNK_00e2ae31,0);
        }
        (*pcRam000000000133fef8)(lVar2,&stack0xffffffffffffffd0);
        return;
      }
    }
    else {
      fVar3 = (float)func_0x002ca670(fVar4 * 0.95);
      if (*(long *)(param_1 + 0x20) != 0) {
        fVar4 = *(float *)(param_1 + 0x48) + 0.0;
        fVar6 = *(float *)(param_1 + 0x4c) + 10.0;
        native_UnityEngine_Transform__set_position_77174c
                  (fVar3 * 15.0 + *(float *)(param_1 + 0x44),*(long *)(param_1 + 0x20),0);
        if (*(long *)(param_1 + 0x20) != 0) {
          uVar5 = native_UnityEngine_Transform__get_position_77169c(*(long *)(param_1 + 0x20),0);
          *(undefined4 *)(param_1 + 0x2c) = uVar5;
          *(float *)(param_1 + 0x30) = fVar4;
          *(float *)(param_1 + 0x34) = fVar6;
          *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.ObjectSpin$$.ctor @ 0x737a88
 * void TMPro_Examples_ObjectSpin___ctor (TMPro_Examples_ObjectSpin_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.ObjectSpin$$.ctor
   void TMPro_Examples_ObjectSpin___ctor (TMPro_Examples_ObjectSpin_o* __this, const MethodInfo*
   method); */

undefined1  [16] native_TMPro_Examples_ObjectSpin___ctor_737a88(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined8 *)(param_1 + 0x18) = 0xf40a00000;
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


