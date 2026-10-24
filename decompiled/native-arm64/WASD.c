/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* WASD$$Start @ 0x94f074
 * void WASD__Start (WASD_o* __this, const MethodInfo* method); */

/* WASD$$Start
   void WASD__Start (WASD_o* __this, const MethodInfo* method); */

void native_WASD__Start_94f074(void)

{
  return;
}



/* WASD$$Update @ 0x94f078
 * void WASD__Update (WASD_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x007722b4) */
/* WASD$$Update
   void WASD__Update (WASD_o* __this, const MethodInfo* method); */

void native_WASD__Update_94f078(long param_1)

{
  ulong uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = native_UnityEngine_Input__GetKey_dbdbe4(100,0);
  if ((uVar1 & 1) != 0) {
    lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    fVar4 = *(float *)(param_1 + 0x18);
    fVar3 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
    if (lVar2 == 0) goto LAB_0094f258;
    native_UnityEngine_Transform__Translate_772348(fVar4 * fVar3,0,0,lVar2,0);
  }
  uVar1 = native_UnityEngine_Input__GetKey_dbdbe4(0x61,0);
  if ((uVar1 & 1) != 0) {
    lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    fVar4 = *(float *)(param_1 + 0x18);
    fVar3 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
    if (lVar2 == 0) goto LAB_0094f258;
    native_UnityEngine_Transform__Translate_772348(-(fVar4 * fVar3),0,0,lVar2,0);
  }
  uVar1 = native_UnityEngine_Input__GetKey_dbdbe4(0x65,0);
  if ((uVar1 & 1) != 0) {
    lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    fVar4 = *(float *)(param_1 + 0x18);
    fVar3 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
    if (lVar2 == 0) goto LAB_0094f258;
    native_UnityEngine_Transform__Translate_772348(0,-(fVar4 * fVar3),0,lVar2,0);
  }
  uVar1 = native_UnityEngine_Input__GetKey_dbdbe4(0x71,0);
  if ((uVar1 & 1) != 0) {
    lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    fVar4 = *(float *)(param_1 + 0x18);
    fVar3 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
    if (lVar2 == 0) goto LAB_0094f258;
    native_UnityEngine_Transform__Translate_772348(0,fVar4 * fVar3,0,lVar2,0);
  }
  uVar1 = native_UnityEngine_Input__GetKey_dbdbe4(0x73,0);
  if ((uVar1 & 1) != 0) {
    lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    fVar4 = *(float *)(param_1 + 0x18);
    fVar3 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
    if (lVar2 == 0) goto LAB_0094f258;
    native_UnityEngine_Transform__Translate_772348(0,0,-(fVar4 * fVar3),lVar2,0);
  }
  uVar1 = native_UnityEngine_Input__GetKey_dbdbe4(0x77,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  native_UnityEngine_Time__get_deltaTime_77082c(0);
  if (lVar2 != 0) {
    native_UnityEngine_Transform__get_position_77169c();
    native_UnityEngine_Transform__TransformDirection_7722dc(0,lVar2);
    if (pcRam000000000133fed8 == (code *)0x0) {
      pcRam000000000133fed8 = (code *)native_sub_4326f0(&UNK_00e2ad18);
    }
    (*pcRam000000000133fed8)(lVar2,&stack0xffffffffffffffd0);
    return;
  }
LAB_0094f258:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* WASD$$.ctor @ 0x94f25c
 * void WASD___ctor (WASD_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WASD$$.ctor
   void WASD___ctor (WASD_o* __this, const MethodInfo* method); */

undefined1  [16] native_WASD___ctor_94f25c(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)(param_1 + 0x18) = 0x40a00000;
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


