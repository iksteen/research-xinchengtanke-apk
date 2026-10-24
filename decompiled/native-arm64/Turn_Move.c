/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* Turn_Move$$Start @ 0x6e2918
 * void Turn_Move__Start (Turn_Move_o* __this, const MethodInfo* method); */

/* Turn_Move$$Start
   void Turn_Move__Start (Turn_Move_o* __this, const MethodInfo* method); */

void native_Turn_Move__Start_6e2918(void)

{
  return;
}



/* Turn_Move$$Update @ 0x6e291c
 * void Turn_Move__Update (Turn_Move_o* __this, const MethodInfo* method); */

/* Turn_Move$$Update
   void Turn_Move__Update (Turn_Move_o* __this, const MethodInfo* method); */

void native_Turn_Move__Update_6e291c(long param_1)

{
  char cVar1;
  long lVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  cVar1 = *(char *)(param_1 + 0x30);
  lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  fVar7 = *(float *)(param_1 + 0x18);
  fVar4 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
  fVar8 = *(float *)(param_1 + 0x1c);
  fVar5 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
  fVar9 = *(float *)(param_1 + 0x20);
  fVar6 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
  if (lVar2 != 0) {
    fVar7 = fVar7 * fVar4;
    fVar8 = fVar8 * fVar5;
    fVar9 = fVar9 * fVar6;
    if (cVar1 == '\0') {
      native_UnityEngine_Transform__Rotate_7724a8(fVar7,fVar8,fVar9,lVar2,1,0);
      lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
      fVar5 = *(float *)(param_1 + 0x24);
      fVar4 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
      native_UnityEngine_Time__get_deltaTime_77082c(0);
      native_UnityEngine_Time__get_deltaTime_77082c(0);
      if (lVar2 != 0) {
        fVar5 = fVar5 * fVar4;
        iVar3 = 1;
        goto LAB_006e2a64;
      }
    }
    else {
      native_UnityEngine_Transform__Rotate_7724a8(fVar7,fVar8,fVar9,lVar2,0,0);
      lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
      fVar5 = *(float *)(param_1 + 0x24);
      fVar4 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
      native_UnityEngine_Time__get_deltaTime_77082c(0);
      native_UnityEngine_Time__get_deltaTime_77082c(0);
      if (lVar2 != 0) {
        fVar5 = fVar5 * fVar4;
        iVar3 = 0;
LAB_006e2a64:
        native_UnityEngine_Transform__get_position_77169c(lVar2,iVar3,0);
        if (iVar3 != 0) {
          native_UnityEngine_Transform__TransformDirection_7722dc(fVar5,lVar2);
        }
        if (pcRam000000000133fed8 == (code *)0x0) {
          pcRam000000000133fed8 = (code *)native_sub_4326f0(&UNK_00e2ad18);
        }
        (*pcRam000000000133fed8)(lVar2,&stack0xffffffffffffffd0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* Turn_Move$$.ctor @ 0x6e2a88
 * void Turn_Move___ctor (Turn_Move_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Turn_Move$$.ctor
   void Turn_Move___ctor (Turn_Move_o* __this, const MethodInfo* method); */

undefined1  [16] native_Turn_Move___ctor_6e2a88(ulong param_1)

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


