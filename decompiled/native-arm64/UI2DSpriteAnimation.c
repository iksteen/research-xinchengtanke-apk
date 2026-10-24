/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UI2DSpriteAnimation$$get_isPlaying @ 0x6e95c0
 * bool UI2DSpriteAnimation__get_isPlaying (UI2DSpriteAnimation_o* __this, const MethodInfo* method); */

/* UI2DSpriteAnimation$$get_isPlaying
   bool UI2DSpriteAnimation__get_isPlaying (UI2DSpriteAnimation_o* __this, const MethodInfo*
   method); */

void native_UI2DSpriteAnimation__get_isPlaying_6e95c0(undefined8 param_1)

{
  if (pcRam0000000001340940 == (code *)0x0) {
    pcRam0000000001340940 = (code *)native_sub_4326f0(&UNK_00e2c6dd);
  }
                    /* WARNING: Could not recover jumptable at 0x008d7b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000001340940)(param_1);
  return;
}



/* UI2DSpriteAnimation$$get_framesPerSecond @ 0x6e95c8
 * int32_t UI2DSpriteAnimation__get_framesPerSecond (UI2DSpriteAnimation_o* __this, const MethodInfo* method); */

/* UI2DSpriteAnimation$$get_framesPerSecond
   int32_t UI2DSpriteAnimation__get_framesPerSecond (UI2DSpriteAnimation_o* __this, const
   MethodInfo* method); */

undefined4 native_UI2DSpriteAnimation__get_framesPerSecond_6e95c8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



/* UI2DSpriteAnimation$$set_framesPerSecond @ 0x6e95d0
 * void UI2DSpriteAnimation__set_framesPerSecond (UI2DSpriteAnimation_o* __this, int32_t value, const MethodInfo* method); */

/* UI2DSpriteAnimation$$set_framesPerSecond
   void UI2DSpriteAnimation__set_framesPerSecond (UI2DSpriteAnimation_o* __this, int32_t value,
   const MethodInfo* method); */

void native_UI2DSpriteAnimation__set_framesPerSecond_6e95d0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}



/* UI2DSpriteAnimation$$Play @ 0x6e95d8
 * void UI2DSpriteAnimation__Play (UI2DSpriteAnimation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UI2DSpriteAnimation$$Play
   void UI2DSpriteAnimation__Play (UI2DSpriteAnimation_o* __this, const MethodInfo* method); */

void native_UI2DSpriteAnimation__Play_6e95d8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  float fVar11;
  
  if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(*(long *)(param_1 + 0x28) + 0x18) == 0)) {
    return;
  }
  uVar4 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if (((uVar4 & 1) == 0) && (*(char *)(param_1 + 0x21) == '\0')) {
    iVar6 = -1;
    if (0 < *(int *)(param_1 + 0x1c)) {
      iVar6 = 1;
    }
    iVar6 = iVar6 + *(int *)(param_1 + 0x18);
    if (-1 < iVar6) {
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_006e9684;
      if (iVar6 < *(int *)(*(long *)(param_1 + 0x28) + 0x18)) goto LAB_006e9664;
    }
    if (*(int *)(param_1 + 0x1c) < 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
LAB_006e9684:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      iVar6 = *(int *)(*(long *)(param_1 + 0x28) + 0x18) + -1;
    }
    else {
      iVar6 = 0;
    }
    *(int *)(param_1 + 0x18) = iVar6;
  }
LAB_006e9664:
  native_UnityEngine_Behaviour__set_enabled_8d7b0c(param_1,1,0);
  if ((bRam000000000133f3cc & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_SpriteRenderer____12e2b18);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UI2DSprite____12e2b90);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f3cc = 1;
  }
  puVar8 = (undefined8 *)(param_1 + 0x30);
  uVar9 = *puVar8;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar9,0,0);
  if ((uVar4 & 1) != 0) {
    puVar10 = (undefined8 *)(param_1 + 0x38);
    uVar9 = *puVar10;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar9,0,0);
    if ((uVar4 & 1) != 0) {
      uVar9 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (param_1,
                         _Method_UnityEngine_Component_GetComponent_SpriteRenderer____12e2b18);
      *(undefined8 *)(param_1 + 0x30) = uVar9;
      native_sub_4326e0(puVar8,uVar9);
      uVar9 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (param_1,_Method_UnityEngine_Component_GetComponent_UI2DSprite____12e2b90);
      *(undefined8 *)(param_1 + 0x38) = uVar9;
      native_sub_4326e0(puVar10,uVar9);
      uVar9 = *(undefined8 *)(param_1 + 0x30);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar9,0,0);
      if ((uVar4 & 1) != 0) {
        uVar9 = *puVar10;
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar9,0,0);
        if ((uVar4 & 1) != 0) {
          if (pcRam0000000001340948 == (code *)0x0) {
            pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
          }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000001340948)(param_1,0);
          return;
        }
      }
    }
  }
  if (*(char *)(param_1 + 0x20) == '\0') {
    fVar11 = (float)native_UnityEngine_Time__get_time_7707f8(0);
  }
  else {
    fVar11 = (float)native_RealTime__get_time_72d024(0);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    *(float *)(param_1 + 0x40) = fVar11 + ABS(1.0 / (float)*(int *)(param_1 + 0x1c));
  }
  uVar9 = *puVar8;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
  if ((uVar4 & 1) == 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    lVar7 = *(long *)(param_1 + 0x28);
    if (lVar7 != 0) {
      if (*(uint *)(lVar7 + 0x18) <= *(uint *)(param_1 + 0x18)) goto LAB_006e9948;
      lVar5 = *(long *)(param_1 + 0x38);
      if (lVar5 != 0) {
        *(undefined8 *)(lVar5 + 0x228) =
             *(undefined8 *)(lVar7 + (long)(int)*(uint *)(param_1 + 0x18) * 8 + 0x20);
        if (iRam0000000001345318 != 0) {
          puVar1 = (ulong *)((lVar5 + 0x228U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << (lVar5 + 0x228U >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        return;
      }
    }
  }
  else {
    lVar7 = *(long *)(param_1 + 0x28);
    if (lVar7 != 0) {
      if (*(uint *)(lVar7 + 0x18) <= *(uint *)(param_1 + 0x18)) {
LAB_006e9948:
        uVar9 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar9,0);
      }
      lVar5 = *(long *)(param_1 + 0x30);
      if (lVar5 != 0) {
        uVar9 = *(undefined8 *)(lVar7 + (long)(int)*(uint *)(param_1 + 0x18) * 8 + 0x20);
        if (pcRam000000000133fc20 == (code *)0x0) {
          pcRam000000000133fc20 = (code *)native_sub_4326f0(&UNK_00e299ba);
        }
                    /* WARNING: Could not recover jumptable at 0x0076c6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam000000000133fc20)(lVar5,uVar9);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UI2DSpriteAnimation$$Pause @ 0x6e9954
 * void UI2DSpriteAnimation__Pause (UI2DSpriteAnimation_o* __this, const MethodInfo* method); */

/* UI2DSpriteAnimation$$Pause
   void UI2DSpriteAnimation__Pause (UI2DSpriteAnimation_o* __this, const MethodInfo* method); */

void native_UI2DSpriteAnimation__Pause_6e9954(undefined8 param_1)

{
  if (pcRam0000000001340948 == (code *)0x0) {
    pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
  }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000001340948)(param_1,0);
  return;
}



/* UI2DSpriteAnimation$$ResetToBeginning @ 0x6e9960
 * void UI2DSpriteAnimation__ResetToBeginning (UI2DSpriteAnimation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UI2DSpriteAnimation$$ResetToBeginning
   void UI2DSpriteAnimation__ResetToBeginning (UI2DSpriteAnimation_o* __this, const MethodInfo*
   method); */

void native_UI2DSpriteAnimation__ResetToBeginning_6e9960(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  float fVar11;
  
  if (*(int *)(param_1 + 0x1c) < 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    iVar6 = *(int *)(*(long *)(param_1 + 0x28) + 0x18) + -1;
  }
  else {
    iVar6 = 0;
  }
  *(int *)(param_1 + 0x18) = iVar6;
  if ((bRam000000000133f3cc & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_SpriteRenderer____12e2b18);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UI2DSprite____12e2b90);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f3cc = 1;
  }
  puVar8 = (undefined8 *)(param_1 + 0x30);
  uVar9 = *puVar8;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar9,0,0);
  if ((uVar4 & 1) != 0) {
    puVar10 = (undefined8 *)(param_1 + 0x38);
    uVar9 = *puVar10;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar9,0,0);
    if ((uVar4 & 1) != 0) {
      uVar9 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (param_1,
                         _Method_UnityEngine_Component_GetComponent_SpriteRenderer____12e2b18);
      *(undefined8 *)(param_1 + 0x30) = uVar9;
      native_sub_4326e0(puVar8,uVar9);
      uVar9 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (param_1,_Method_UnityEngine_Component_GetComponent_UI2DSprite____12e2b90);
      *(undefined8 *)(param_1 + 0x38) = uVar9;
      native_sub_4326e0(puVar10,uVar9);
      uVar9 = *(undefined8 *)(param_1 + 0x30);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar9,0,0);
      if ((uVar4 & 1) != 0) {
        uVar9 = *puVar10;
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar9,0,0);
        if ((uVar4 & 1) != 0) {
          if (pcRam0000000001340948 == (code *)0x0) {
            pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
          }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000001340948)(param_1,0);
          return;
        }
      }
    }
  }
  if (*(char *)(param_1 + 0x20) == '\0') {
    fVar11 = (float)native_UnityEngine_Time__get_time_7707f8(0);
  }
  else {
    fVar11 = (float)native_RealTime__get_time_72d024(0);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    *(float *)(param_1 + 0x40) = fVar11 + ABS(1.0 / (float)*(int *)(param_1 + 0x1c));
  }
  uVar9 = *puVar8;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
  if ((uVar4 & 1) == 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    lVar7 = *(long *)(param_1 + 0x28);
    if (lVar7 != 0) {
      if (*(uint *)(lVar7 + 0x18) <= *(uint *)(param_1 + 0x18)) goto LAB_006e9948;
      lVar5 = *(long *)(param_1 + 0x38);
      if (lVar5 != 0) {
        *(undefined8 *)(lVar5 + 0x228) =
             *(undefined8 *)(lVar7 + (long)(int)*(uint *)(param_1 + 0x18) * 8 + 0x20);
        if (iRam0000000001345318 != 0) {
          puVar1 = (ulong *)((lVar5 + 0x228U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << (lVar5 + 0x228U >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        return;
      }
    }
  }
  else {
    lVar7 = *(long *)(param_1 + 0x28);
    if (lVar7 != 0) {
      if (*(uint *)(lVar7 + 0x18) <= *(uint *)(param_1 + 0x18)) {
LAB_006e9948:
        uVar9 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar9,0);
      }
      lVar5 = *(long *)(param_1 + 0x30);
      if (lVar5 != 0) {
        uVar9 = *(undefined8 *)(lVar7 + (long)(int)*(uint *)(param_1 + 0x18) * 8 + 0x20);
        if (pcRam000000000133fc20 == (code *)0x0) {
          pcRam000000000133fc20 = (code *)native_sub_4326f0(&UNK_00e299ba);
        }
                    /* WARNING: Could not recover jumptable at 0x0076c6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam000000000133fc20)(lVar5,uVar9);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UI2DSpriteAnimation$$Start @ 0x6e9994
 * void UI2DSpriteAnimation__Start (UI2DSpriteAnimation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UI2DSpriteAnimation$$Start
   void UI2DSpriteAnimation__Start (UI2DSpriteAnimation_o* __this, const MethodInfo* method); */

void native_UI2DSpriteAnimation__Start_6e9994(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  float fVar11;
  
  if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(*(long *)(param_1 + 0x28) + 0x18) == 0)) {
    return;
  }
  uVar4 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if (((uVar4 & 1) == 0) && (*(char *)(param_1 + 0x21) == '\0')) {
    iVar6 = -1;
    if (0 < *(int *)(param_1 + 0x1c)) {
      iVar6 = 1;
    }
    iVar6 = iVar6 + *(int *)(param_1 + 0x18);
    if (-1 < iVar6) {
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_006e9684;
      if (iVar6 < *(int *)(*(long *)(param_1 + 0x28) + 0x18)) goto LAB_006e9664;
    }
    if (*(int *)(param_1 + 0x1c) < 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
LAB_006e9684:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      iVar6 = *(int *)(*(long *)(param_1 + 0x28) + 0x18) + -1;
    }
    else {
      iVar6 = 0;
    }
    *(int *)(param_1 + 0x18) = iVar6;
  }
LAB_006e9664:
  native_UnityEngine_Behaviour__set_enabled_8d7b0c(param_1,1,0);
  if ((bRam000000000133f3cc & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_SpriteRenderer____12e2b18);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UI2DSprite____12e2b90);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f3cc = 1;
  }
  puVar8 = (undefined8 *)(param_1 + 0x30);
  uVar9 = *puVar8;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar9,0,0);
  if ((uVar4 & 1) != 0) {
    puVar10 = (undefined8 *)(param_1 + 0x38);
    uVar9 = *puVar10;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar9,0,0);
    if ((uVar4 & 1) != 0) {
      uVar9 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (param_1,
                         _Method_UnityEngine_Component_GetComponent_SpriteRenderer____12e2b18);
      *(undefined8 *)(param_1 + 0x30) = uVar9;
      native_sub_4326e0(puVar8,uVar9);
      uVar9 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (param_1,_Method_UnityEngine_Component_GetComponent_UI2DSprite____12e2b90);
      *(undefined8 *)(param_1 + 0x38) = uVar9;
      native_sub_4326e0(puVar10,uVar9);
      uVar9 = *(undefined8 *)(param_1 + 0x30);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar9,0,0);
      if ((uVar4 & 1) != 0) {
        uVar9 = *puVar10;
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar9,0,0);
        if ((uVar4 & 1) != 0) {
          if (pcRam0000000001340948 == (code *)0x0) {
            pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
          }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000001340948)(param_1,0);
          return;
        }
      }
    }
  }
  if (*(char *)(param_1 + 0x20) == '\0') {
    fVar11 = (float)native_UnityEngine_Time__get_time_7707f8(0);
  }
  else {
    fVar11 = (float)native_RealTime__get_time_72d024(0);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    *(float *)(param_1 + 0x40) = fVar11 + ABS(1.0 / (float)*(int *)(param_1 + 0x1c));
  }
  uVar9 = *puVar8;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
  if ((uVar4 & 1) == 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    lVar7 = *(long *)(param_1 + 0x28);
    if (lVar7 != 0) {
      if (*(uint *)(lVar7 + 0x18) <= *(uint *)(param_1 + 0x18)) goto LAB_006e9948;
      lVar5 = *(long *)(param_1 + 0x38);
      if (lVar5 != 0) {
        *(undefined8 *)(lVar5 + 0x228) =
             *(undefined8 *)(lVar7 + (long)(int)*(uint *)(param_1 + 0x18) * 8 + 0x20);
        if (iRam0000000001345318 != 0) {
          puVar1 = (ulong *)((lVar5 + 0x228U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << (lVar5 + 0x228U >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        return;
      }
    }
  }
  else {
    lVar7 = *(long *)(param_1 + 0x28);
    if (lVar7 != 0) {
      if (*(uint *)(lVar7 + 0x18) <= *(uint *)(param_1 + 0x18)) {
LAB_006e9948:
        uVar9 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar9,0);
      }
      lVar5 = *(long *)(param_1 + 0x30);
      if (lVar5 != 0) {
        uVar9 = *(undefined8 *)(lVar7 + (long)(int)*(uint *)(param_1 + 0x18) * 8 + 0x20);
        if (pcRam000000000133fc20 == (code *)0x0) {
          pcRam000000000133fc20 = (code *)native_sub_4326f0(&UNK_00e299ba);
        }
                    /* WARNING: Could not recover jumptable at 0x0076c6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam000000000133fc20)(lVar5,uVar9);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UI2DSpriteAnimation$$Update @ 0x6e9998
 * void UI2DSpriteAnimation__Update (UI2DSpriteAnimation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UI2DSpriteAnimation$$Update
   void UI2DSpriteAnimation__Update (UI2DSpriteAnimation_o* __this, const MethodInfo* method); */

void native_UI2DSpriteAnimation__Update_6e9998(long param_1)

{
  int iVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  float fVar12;
  
  if ((bRam000000000133f3cb & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    bRam000000000133f3cb = 1;
  }
  if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(*(long *)(param_1 + 0x28) + 0x18) == 0)) {
native_UnityEngine_Behaviour__set_enabled_8d7b0c:
    if (pcRam0000000001340948 == (code *)0x0) {
      pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
    }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000001340948)(param_1,0);
    return;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x20) == '\0') {
    fVar12 = (float)native_UnityEngine_Time__get_time_7707f8(0);
  }
  else {
    fVar12 = (float)native_RealTime__get_time_72d024(0);
  }
  if (fVar12 <= *(float *)(param_1 + 0x40)) {
    return;
  }
  *(float *)(param_1 + 0x40) = fVar12;
  iVar1 = -1;
  if (0 < *(int *)(param_1 + 0x1c)) {
    iVar1 = 1;
  }
  iVar1 = iVar1 + *(int *)(param_1 + 0x18);
  if (*(char *)(param_1 + 0x21) == '\0') {
    if (iVar1 < 0) goto native_UnityEngine_Behaviour__set_enabled_8d7b0c;
    lVar11 = *(long *)(param_1 + 0x28);
    if (lVar11 == 0) goto LAB_006e9ac0;
    if (*(int *)(lVar11 + 0x18) <= iVar1) goto native_UnityEngine_Behaviour__set_enabled_8d7b0c;
  }
  else {
    lVar11 = *(long *)(param_1 + 0x28);
    if (lVar11 == 0) {
LAB_006e9ac0:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_NGUIMath__RepeatIndex_804e00(iVar1,*(undefined4 *)(lVar11 + 0x18),0);
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  if ((bRam000000000133f3cc & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_SpriteRenderer____12e2b18);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UI2DSprite____12e2b90);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f3cc = 1;
  }
  puVar8 = (undefined8 *)(param_1 + 0x30);
  uVar9 = *puVar8;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar9,0,0);
  if ((uVar6 & 1) != 0) {
    puVar10 = (undefined8 *)(param_1 + 0x38);
    uVar9 = *puVar10;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar9,0,0);
    if ((uVar6 & 1) != 0) {
      uVar9 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (param_1,
                         _Method_UnityEngine_Component_GetComponent_SpriteRenderer____12e2b18);
      *(undefined8 *)(param_1 + 0x30) = uVar9;
      native_sub_4326e0(puVar8,uVar9);
      uVar9 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (param_1,_Method_UnityEngine_Component_GetComponent_UI2DSprite____12e2b90);
      *(undefined8 *)(param_1 + 0x38) = uVar9;
      native_sub_4326e0(puVar10,uVar9);
      uVar9 = *(undefined8 *)(param_1 + 0x30);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar6 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar9,0,0);
      if ((uVar6 & 1) != 0) {
        uVar9 = *puVar10;
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar6 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar9,0,0);
        if ((uVar6 & 1) != 0) goto native_UnityEngine_Behaviour__set_enabled_8d7b0c;
      }
    }
  }
  if (*(char *)(param_1 + 0x20) == '\0') {
    fVar12 = (float)native_UnityEngine_Time__get_time_7707f8(0);
  }
  else {
    fVar12 = (float)native_RealTime__get_time_72d024(0);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    *(float *)(param_1 + 0x40) = fVar12 + ABS(1.0 / (float)*(int *)(param_1 + 0x1c));
  }
  uVar9 = *puVar8;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
  if ((uVar6 & 1) == 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    lVar11 = *(long *)(param_1 + 0x28);
    if (lVar11 != 0) {
      if (*(uint *)(lVar11 + 0x18) <= *(uint *)(param_1 + 0x18)) goto LAB_006e9948;
      lVar7 = *(long *)(param_1 + 0x38);
      if (lVar7 != 0) {
        *(undefined8 *)(lVar7 + 0x228) =
             *(undefined8 *)(lVar11 + (long)(int)*(uint *)(param_1 + 0x18) * 8 + 0x20);
        if (iRam0000000001345318 != 0) {
          puVar2 = (ulong *)((lVar7 + 0x228U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar4) {
              *puVar2 = *puVar2 | 1L << (lVar7 + 0x228U >> 0xc & 0x3f);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        return;
      }
    }
  }
  else {
    lVar11 = *(long *)(param_1 + 0x28);
    if (lVar11 != 0) {
      if (*(uint *)(lVar11 + 0x18) <= *(uint *)(param_1 + 0x18)) {
LAB_006e9948:
        uVar9 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar9,0);
      }
      lVar7 = *(long *)(param_1 + 0x30);
      if (lVar7 != 0) {
        uVar9 = *(undefined8 *)(lVar11 + (long)(int)*(uint *)(param_1 + 0x18) * 8 + 0x20);
        if (pcRam000000000133fc20 == (code *)0x0) {
          pcRam000000000133fc20 = (code *)native_sub_4326f0(&UNK_00e299ba);
        }
                    /* WARNING: Could not recover jumptable at 0x0076c6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam000000000133fc20)(lVar7,uVar9);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UI2DSpriteAnimation$$UpdateSprite @ 0x6e9688
 * void UI2DSpriteAnimation__UpdateSprite (UI2DSpriteAnimation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UI2DSpriteAnimation$$UpdateSprite
   void UI2DSpriteAnimation__UpdateSprite (UI2DSpriteAnimation_o* __this, const MethodInfo* method);
    */

void native_UI2DSpriteAnimation__UpdateSprite_6e9688(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  float fVar10;
  
  if ((bRam000000000133f3cc & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_SpriteRenderer____12e2b18);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UI2DSprite____12e2b90);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f3cc = 1;
  }
  puVar7 = (undefined8 *)(param_1 + 0x30);
  uVar8 = *puVar7;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar8,0,0);
  if ((uVar4 & 1) != 0) {
    puVar9 = (undefined8 *)(param_1 + 0x38);
    uVar8 = *puVar9;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar8,0,0);
    if ((uVar4 & 1) != 0) {
      uVar8 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (param_1,
                         _Method_UnityEngine_Component_GetComponent_SpriteRenderer____12e2b18);
      *(undefined8 *)(param_1 + 0x30) = uVar8;
      native_sub_4326e0(puVar7,uVar8);
      uVar8 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (param_1,_Method_UnityEngine_Component_GetComponent_UI2DSprite____12e2b90);
      *(undefined8 *)(param_1 + 0x38) = uVar8;
      native_sub_4326e0(puVar9,uVar8);
      uVar8 = *(undefined8 *)(param_1 + 0x30);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar8,0,0);
      if ((uVar4 & 1) != 0) {
        uVar8 = *puVar9;
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar8,0,0);
        if ((uVar4 & 1) != 0) {
          if (pcRam0000000001340948 == (code *)0x0) {
            pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
          }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000001340948)(param_1,0);
          return;
        }
      }
    }
  }
  if (*(char *)(param_1 + 0x20) == '\0') {
    fVar10 = (float)native_UnityEngine_Time__get_time_7707f8(0);
  }
  else {
    fVar10 = (float)native_RealTime__get_time_72d024(0);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    *(float *)(param_1 + 0x40) = fVar10 + ABS(1.0 / (float)*(int *)(param_1 + 0x1c));
  }
  uVar8 = *puVar7;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
  if ((uVar4 & 1) == 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    lVar6 = *(long *)(param_1 + 0x28);
    if (lVar6 != 0) {
      if (*(uint *)(lVar6 + 0x18) <= *(uint *)(param_1 + 0x18)) goto LAB_006e9948;
      lVar5 = *(long *)(param_1 + 0x38);
      if (lVar5 != 0) {
        *(undefined8 *)(lVar5 + 0x228) =
             *(undefined8 *)(lVar6 + (long)(int)*(uint *)(param_1 + 0x18) * 8 + 0x20);
        if (iRam0000000001345318 != 0) {
          puVar1 = (ulong *)((lVar5 + 0x228U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << (lVar5 + 0x228U >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        return;
      }
    }
  }
  else {
    lVar6 = *(long *)(param_1 + 0x28);
    if (lVar6 != 0) {
      if (*(uint *)(lVar6 + 0x18) <= *(uint *)(param_1 + 0x18)) {
LAB_006e9948:
        uVar8 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar8,0);
      }
      lVar5 = *(long *)(param_1 + 0x30);
      if (lVar5 != 0) {
        uVar8 = *(undefined8 *)(lVar6 + (long)(int)*(uint *)(param_1 + 0x18) * 8 + 0x20);
        if (pcRam000000000133fc20 == (code *)0x0) {
          pcRam000000000133fc20 = (code *)native_sub_4326f0(&UNK_00e299ba);
        }
                    /* WARNING: Could not recover jumptable at 0x0076c6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam000000000133fc20)(lVar5,uVar8);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UI2DSpriteAnimation$$.ctor @ 0x6e9ac4
 * void UI2DSpriteAnimation___ctor (UI2DSpriteAnimation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UI2DSpriteAnimation$$.ctor
   void UI2DSpriteAnimation___ctor (UI2DSpriteAnimation_o* __this, const MethodInfo* method); */

undefined1  [16] native_UI2DSpriteAnimation___ctor_6e9ac4(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)(param_1 + 0x1c) = 0x14;
  *(undefined2 *)(param_1 + 0x20) = 0x101;
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


