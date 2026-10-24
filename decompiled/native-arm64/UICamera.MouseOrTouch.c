/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UICamera.MouseOrTouch$$get_deltaTime @ 0x5522d0
 * float UICamera_MouseOrTouch__get_deltaTime (UICamera_MouseOrTouch_o* __this, const MethodInfo* method); */

/* UICamera.MouseOrTouch$$get_deltaTime
   float UICamera_MouseOrTouch__get_deltaTime (UICamera_MouseOrTouch_o* __this, const MethodInfo*
   method); */

float native_UICamera_MouseOrTouch__get_deltaTime_5522d0(long param_1)

{
  float fVar1;
  
  fVar1 = (float)native_RealTime__get_time_72d024(0);
  return fVar1 - *(float *)(param_1 + 0x68);
}



/* UICamera.MouseOrTouch$$get_isOverUI @ 0x5522fc
 * bool UICamera_MouseOrTouch__get_isOverUI (UICamera_MouseOrTouch_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera.MouseOrTouch$$get_isOverUI
   bool UICamera_MouseOrTouch__get_isOverUI (UICamera_MouseOrTouch_o* __this, const MethodInfo*
   method); */

uint native_UICamera_MouseOrTouch__get_isOverUI_5522fc(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133e9f8 & 1) == 0) {
    native_sub_43273c(&Method_NGUITools_FindInParents_UIRoot____12e5780);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam000000000133e9f8 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xf8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,uVar4,0);
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x48);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar3 = native_NGUITools__FindInParents_object__4a5c04
                        (uVar3,_Method_NGUITools_FindInParents_UIRoot____12e5780);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      if ((bRam0000000001341084 & 1) == 0) {
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0,0);
        bRam0000000001341084 = 1;
      }
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar1 = native_UnityEngine_Object__CompareBaseObjects_8e9aac(uVar3,0);
      return ~uVar1 & 1;
    }
  }
  return 0;
}



/* UICamera.MouseOrTouch$$.ctor @ 0x54fe1c
 * void UICamera_MouseOrTouch___ctor (UICamera_MouseOrTouch_o* __this, const MethodInfo* method); */

/* UICamera.MouseOrTouch$$.ctor
   void UICamera_MouseOrTouch___ctor (UICamera_MouseOrTouch_o* __this, const MethodInfo* method); */

void native_UICamera_MouseOrTouch___ctor_54fe1c(long param_1)

{
  *(undefined4 *)(param_1 + 0x70) = 1;
  *(undefined1 *)(param_1 + 0x74) = 1;
  return;
}


