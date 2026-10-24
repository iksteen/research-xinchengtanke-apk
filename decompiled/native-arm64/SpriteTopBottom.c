/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* SpriteTopBottom$$Start @ 0x73f3b0
 * void SpriteTopBottom__Start (SpriteTopBottom_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpriteTopBottom$$Start
   void SpriteTopBottom__Start (SpriteTopBottom_o* __this, const MethodInfo* method); */

void native_SpriteTopBottom__Start_73f3b0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam000000000133f62e & 1) == 0) {
    native_sub_43273c(&SpriteTopBottom_TypeInfo_12d5e88);
    native_sub_43273c(&StringLiteral_topleft_12f66f0);
    native_sub_43273c(&StringLiteral_topright_12f66f8);
    bRam000000000133f62e = 1;
  }
  lVar1 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if ((lVar1 != 0) &&
     (lVar1 = native_UnityEngine_Transform__FindChild_772e3c(lVar1,_StringLiteral_topleft_12f66f0,0)
     , lVar1 != 0)) {
    uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(lVar1,0);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    native_sub_4326e0();
    lVar1 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if ((lVar1 != 0) &&
       (lVar1 = native_UnityEngine_Transform__FindChild_772e3c
                          (lVar1,_StringLiteral_topright_12f66f8,0), lVar1 != 0)) {
      uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(lVar1,0);
      *(undefined8 *)(param_1 + 0x30) = uVar2;
      native_sub_4326e0((undefined8 *)(param_1 + 0x30),uVar2);
      *(undefined1 *)(param_1 + 0x24) = 1;
      *(undefined4 *)(param_1 + 0x20) = 5;
      uVar2 = native_SpriteTopBottom__gethaomiao_73f4d0();
      if (((*(byte *)(_SpriteTopBottom_TypeInfo_12d5e88 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_SpriteTopBottom_TypeInfo_12d5e88 + 0xe0) == 0)) {
        native_sub_4327ec(_SpriteTopBottom_TypeInfo_12d5e88);
      }
      **(undefined8 **)(_SpriteTopBottom_TypeInfo_12d5e88 + 0xb8) = uVar2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* SpriteTopBottom$$Update @ 0x73f584
 * void SpriteTopBottom__Update (SpriteTopBottom_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpriteTopBottom$$Update
   void SpriteTopBottom__Update (SpriteTopBottom_o* __this, const MethodInfo* method); */

void native_SpriteTopBottom__Update_73f584(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  
  if ((bRam000000000133f62f & 1) == 0) {
    native_sub_43273c(&SpriteTopBottom_TypeInfo_12d5e88);
    bRam000000000133f62f = 1;
  }
  lVar2 = native_SpriteTopBottom__gethaomiao_73f4d0();
  if (((*(byte *)(_SpriteTopBottom_TypeInfo_12d5e88 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_SpriteTopBottom_TypeInfo_12d5e88 + 0xe0) == 0)) {
    native_sub_4327ec(_SpriteTopBottom_TypeInfo_12d5e88);
  }
  if (0x13 < lVar2 - **(long **)(_SpriteTopBottom_TypeInfo_12d5e88 + 0xb8)) {
    uVar3 = native_SpriteTopBottom__gethaomiao_73f4d0();
    if (((*(byte *)(_SpriteTopBottom_TypeInfo_12d5e88 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_SpriteTopBottom_TypeInfo_12d5e88 + 0xe0) == 0)) {
      native_sub_4327ec(_SpriteTopBottom_TypeInfo_12d5e88);
    }
    **(undefined8 **)(_SpriteTopBottom_TypeInfo_12d5e88 + 0xb8) = uVar3;
    if (*(int *)(param_1 + 0x20) < 1) {
      if (*(char *)(param_1 + 0x24) != '\0') {
        *(undefined1 *)(param_1 + 0x24) = 0;
        iVar1 = native_UnityEngine_Screen__get_height_76a618(0);
        *(float *)(param_1 + 0x1c) = (float)iVar1;
        iVar1 = native_UnityEngine_Screen__get_width_76a5e4(0);
        *(float *)(param_1 + 0x18) = (float)iVar1;
        if (*(long *)(param_1 + 0x28) != 0) {
          fVar4 = *(float *)(param_1 + 0x1c);
          lVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_1 + 0x28),0);
          if (lVar2 != 0) {
            fVar4 = (float)iVar1 / (fVar4 / 1920.0);
            if (1080.0 < fVar4) {
              fVar4 = 1080.0;
            }
            native_UnityEngine_Transform__set_localPosition_7718a4(80.0 - fVar4 * 0.5,0,0,lVar2,0);
            if ((*(long *)(param_1 + 0x30) != 0) &&
               (lVar2 = native_UnityEngine_GameObject__get_transform_8de5c8
                                  (*(long *)(param_1 + 0x30),0), lVar2 != 0)) {
              if (pcRam000000000133fee8 == (code *)0x0) {
                pcRam000000000133fee8 = (code *)native_sub_4326f0(&UNK_00e2ada3,0);
              }
              (*pcRam000000000133fee8)(lVar2,&stack0xffffffffffffffd0);
              return;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
    }
    else {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
    }
  }
  return;
}



/* SpriteTopBottom$$gethaomiao @ 0x73f4d0
 * int64_t SpriteTopBottom__gethaomiao (SpriteTopBottom_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpriteTopBottom$$gethaomiao
   int64_t SpriteTopBottom__gethaomiao (SpriteTopBottom_o* __this, const MethodInfo* method); */

long native_SpriteTopBottom__gethaomiao_73f4d0(void)

{
  long lVar1;
  undefined8 uStack_18;
  
  if ((bRam000000000133f630 & 1) == 0) {
    native_sub_43273c(&System_DateTime_TypeInfo_12d42f8);
    bRam000000000133f630 = 1;
  }
  uStack_18 = 0;
  if (((*(byte *)(_System_DateTime_TypeInfo_12d42f8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_System_DateTime_TypeInfo_12d42f8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uStack_18 = native_System_DateTime__get_Now_9c70d8(0);
  uStack_18 = native_System_DateTime__ToUniversalTime_9c7e74(&uStack_18,0);
  lVar1 = native_System_DateTime__get_Ticks_9c721c(&uStack_18,0);
  return (lVar1 + -0x89f7ff5f7b58000) / 10000;
}



/* SpriteTopBottom$$.ctor @ 0x73f720
 * void SpriteTopBottom___ctor (SpriteTopBottom_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpriteTopBottom$$.ctor
   void SpriteTopBottom___ctor (SpriteTopBottom_o* __this, const MethodInfo* method); */

undefined1  [16] native_SpriteTopBottom___ctor_73f720(ulong param_1)

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



/* SpriteTopBottom$$.cctor @ 0x73f728
 * void SpriteTopBottom___cctor (const MethodInfo* method); */

/* SpriteTopBottom$$.cctor
   void SpriteTopBottom___cctor (const MethodInfo* method); */

void native_SpriteTopBottom___cctor_73f728(void)

{
  return;
}


