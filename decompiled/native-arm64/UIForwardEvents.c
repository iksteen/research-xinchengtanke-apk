/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIForwardEvents$$OnHover @ 0x9eebc0
 * void UIForwardEvents__OnHover (UIForwardEvents_o* __this, bool isOver, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIForwardEvents$$OnHover
   void UIForwardEvents__OnHover (UIForwardEvents_o* __this, bool isOver, const MethodInfo* method);
    */

void native_UIForwardEvents__OnHover_9eebc0(long param_1,byte param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  byte abStack_24 [4];
  
  if ((bRam0000000001341954 & 1) == 0) {
    native_sub_43273c(&bool_TypeInfo_12d3bd0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_OnHover_12f0238);
    bRam0000000001341954 = 1;
  }
  if (*(char *)(param_1 + 0x20) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x18);
      abStack_24[0] = param_2 & 1;
      uVar3 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,abStack_24);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      native_UnityEngine_GameObject__SendMessage_8de4c0
                (lVar2,_StringLiteral_OnHover_12f0238,uVar3,1,0);
    }
  }
  return;
}



/* UIForwardEvents$$OnPress @ 0x9eeca8
 * void UIForwardEvents__OnPress (UIForwardEvents_o* __this, bool pressed, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIForwardEvents$$OnPress
   void UIForwardEvents__OnPress (UIForwardEvents_o* __this, bool pressed, const MethodInfo*
   method); */

void native_UIForwardEvents__OnPress_9eeca8(long param_1,byte param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  byte abStack_24 [4];
  
  if ((bRam0000000001341955 & 1) == 0) {
    native_sub_43273c(&bool_TypeInfo_12d3bd0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_OnPress_12f02b0);
    bRam0000000001341955 = 1;
  }
  if (*(char *)(param_1 + 0x21) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x18);
      abStack_24[0] = param_2 & 1;
      uVar3 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,abStack_24);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      native_UnityEngine_GameObject__SendMessage_8de4c0
                (lVar2,_StringLiteral_OnPress_12f02b0,uVar3,1,0);
    }
  }
  return;
}



/* UIForwardEvents$$OnClick @ 0x9eed90
 * void UIForwardEvents__OnClick (UIForwardEvents_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIForwardEvents$$OnClick
   void UIForwardEvents__OnClick (UIForwardEvents_o* __this, const MethodInfo* method); */

void native_UIForwardEvents__OnClick_9eed90(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001341956 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_OnClick_12f01f0);
    bRam0000000001341956 = 1;
  }
  if (*(char *)(param_1 + 0x22) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
    uVar3 = _StringLiteral_OnClick_12f01f0;
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x18);
      if (lVar2 != 0) {
        if (pcRam0000000001340c20 == (code *)0x0) {
          pcRam0000000001340c20 =
               (code *)native_sub_4326f0(&UNK_00e2db43,_StringLiteral_OnClick_12f01f0,1,0);
        }
                    /* WARNING: Could not recover jumptable at 0x008de4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000001340c20)(lVar2,uVar3,0,1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  return;
}



/* UIForwardEvents$$OnDoubleClick @ 0x9eee44
 * void UIForwardEvents__OnDoubleClick (UIForwardEvents_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIForwardEvents$$OnDoubleClick
   void UIForwardEvents__OnDoubleClick (UIForwardEvents_o* __this, const MethodInfo* method); */

void native_UIForwardEvents__OnDoubleClick_9eee44(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001341957 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_OnDoubleClick_12f0200);
    bRam0000000001341957 = 1;
  }
  if (*(char *)(param_1 + 0x23) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
    uVar3 = _StringLiteral_OnDoubleClick_12f0200;
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x18);
      if (lVar2 != 0) {
        if (pcRam0000000001340c20 == (code *)0x0) {
          pcRam0000000001340c20 =
               (code *)native_sub_4326f0(&UNK_00e2db43,_StringLiteral_OnDoubleClick_12f0200,1,0);
        }
                    /* WARNING: Could not recover jumptable at 0x008de4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000001340c20)(lVar2,uVar3,0,1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  return;
}



/* UIForwardEvents$$OnSelect @ 0x9eeef8
 * void UIForwardEvents__OnSelect (UIForwardEvents_o* __this, bool selected, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIForwardEvents$$OnSelect
   void UIForwardEvents__OnSelect (UIForwardEvents_o* __this, bool selected, const MethodInfo*
   method); */

void native_UIForwardEvents__OnSelect_9eeef8(long param_1,byte param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  byte abStack_24 [4];
  
  if ((bRam0000000001341958 & 1) == 0) {
    native_sub_43273c(&bool_TypeInfo_12d3bd0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_OnSelect_12f02c0);
    bRam0000000001341958 = 1;
  }
  if (*(char *)(param_1 + 0x24) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x18);
      abStack_24[0] = param_2 & 1;
      uVar3 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,abStack_24);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      native_UnityEngine_GameObject__SendMessage_8de4c0
                (lVar2,_StringLiteral_OnSelect_12f02c0,uVar3,1,0);
    }
  }
  return;
}



/* UIForwardEvents$$OnDrag @ 0x9eefe0
 * void UIForwardEvents__OnDrag (UIForwardEvents_o* __this, UnityEngine_Vector2_o delta, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIForwardEvents$$OnDrag
   void UIForwardEvents__OnDrag (UIForwardEvents_o* __this, UnityEngine_Vector2_o delta, const
   MethodInfo* method); */

void native_UIForwardEvents__OnDrag_9eefe0(undefined4 param_1,undefined4 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if ((bRam0000000001341959 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_Vector2_TypeInfo_12d66e0);
    native_sub_43273c(&StringLiteral_OnDrag_12f0208);
    bRam0000000001341959 = 1;
  }
  if (*(char *)(param_3 + 0x25) != '\0') {
    uVar3 = *(undefined8 *)(param_3 + 0x18);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(param_3 + 0x18);
      uStack_38 = param_1;
      uStack_34 = param_2;
      uVar3 = native_sub_4327fc(_UnityEngine_Vector2_TypeInfo_12d66e0,&uStack_38);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      native_UnityEngine_GameObject__SendMessage_8de4c0
                (lVar2,_StringLiteral_OnDrag_12f0208,uVar3,1,0);
    }
  }
  return;
}



/* UIForwardEvents$$OnDrop @ 0x9ef0d0
 * void UIForwardEvents__OnDrop (UIForwardEvents_o* __this, UnityEngine_GameObject_o* go, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIForwardEvents$$OnDrop
   void UIForwardEvents__OnDrop (UIForwardEvents_o* __this, UnityEngine_GameObject_o* go, const
   MethodInfo* method); */

void native_UIForwardEvents__OnDrop_9ef0d0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam000000000134195a & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_OnDrop_12f0230);
    bRam000000000134195a = 1;
  }
  if (*(char *)(param_1 + 0x26) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
    uVar3 = _StringLiteral_OnDrop_12f0230;
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x18);
      if (lVar2 != 0) {
        if (pcRam0000000001340c20 == (code *)0x0) {
          pcRam0000000001340c20 =
               (code *)native_sub_4326f0(&UNK_00e2db43,_StringLiteral_OnDrop_12f0230,param_2,1);
        }
                    /* WARNING: Could not recover jumptable at 0x008de524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000001340c20)(lVar2,uVar3,param_2,1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  return;
}



/* UIForwardEvents$$OnSubmit @ 0x9ef198
 * void UIForwardEvents__OnSubmit (UIForwardEvents_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIForwardEvents$$OnSubmit
   void UIForwardEvents__OnSubmit (UIForwardEvents_o* __this, const MethodInfo* method); */

void native_UIForwardEvents__OnSubmit_9ef198(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam000000000134195b & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_OnSubmit_12f02d0);
    bRam000000000134195b = 1;
  }
  if (*(char *)(param_1 + 0x27) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
    uVar3 = _StringLiteral_OnSubmit_12f02d0;
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x18);
      if (lVar2 != 0) {
        if (pcRam0000000001340c20 == (code *)0x0) {
          pcRam0000000001340c20 =
               (code *)native_sub_4326f0(&UNK_00e2db43,_StringLiteral_OnSubmit_12f02d0,1,0);
        }
                    /* WARNING: Could not recover jumptable at 0x008de4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000001340c20)(lVar2,uVar3,0,1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  return;
}



/* UIForwardEvents$$OnScroll @ 0x9ef24c
 * void UIForwardEvents__OnScroll (UIForwardEvents_o* __this, float delta, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIForwardEvents$$OnScroll
   void UIForwardEvents__OnScroll (UIForwardEvents_o* __this, float delta, const MethodInfo*
   method); */

void native_UIForwardEvents__OnScroll_9ef24c(undefined4 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uStack_24;
  
  if ((bRam000000000134195c & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&float_TypeInfo_12d5db0);
    native_sub_43273c(&StringLiteral_OnScroll_12f02b8);
    bRam000000000134195c = 1;
  }
  if (*(char *)(param_2 + 0x28) != '\0') {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(param_2 + 0x18);
      uStack_24 = param_1;
      uVar3 = native_sub_4327fc(_float_TypeInfo_12d5db0,&uStack_24);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      native_UnityEngine_GameObject__SendMessage_8de4c0
                (lVar2,_StringLiteral_OnScroll_12f02b8,uVar3,1,0);
    }
  }
  return;
}



/* UIForwardEvents$$OnTooltip @ 0x9ef330
 * void UIForwardEvents__OnTooltip (UIForwardEvents_o* __this, bool show, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIForwardEvents$$OnTooltip
   void UIForwardEvents__OnTooltip (UIForwardEvents_o* __this, bool show, const MethodInfo* method);
    */

void native_UIForwardEvents__OnTooltip_9ef330(long param_1,byte param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  byte abStack_24 [4];
  
  if ((bRam000000000134195d & 1) == 0) {
    native_sub_43273c(&bool_TypeInfo_12d3bd0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_OnTooltip_12f02d8);
    bRam000000000134195d = 1;
  }
  if (*(char *)(param_1 + 0x29) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x18);
      abStack_24[0] = param_2 & 1;
      uVar3 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,abStack_24);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      native_UnityEngine_GameObject__SendMessage_8de4c0
                (lVar2,_StringLiteral_OnTooltip_12f02d8,uVar3,1,0);
    }
  }
  return;
}



/* UIForwardEvents$$.ctor @ 0x9ef418
 * void UIForwardEvents___ctor (UIForwardEvents_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIForwardEvents$$.ctor
   void UIForwardEvents___ctor (UIForwardEvents_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIForwardEvents___ctor_9ef418(ulong param_1)

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


