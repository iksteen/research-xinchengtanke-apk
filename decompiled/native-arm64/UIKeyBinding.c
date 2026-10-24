/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIKeyBinding$$get_captionText @ 0xae48f4
 * System_String_o* UIKeyBinding__get_captionText (UIKeyBinding_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIKeyBinding$$get_captionText
   System_String_o* UIKeyBinding__get_captionText (UIKeyBinding_o* __this, const MethodInfo*
   method); */

long native_UIKeyBinding__get_captionText_ae48f4(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  
  if ((bRam0000000001341fd9 & 1) == 0) {
    native_sub_43273c(&UIKeyBinding_Modifier_TypeInfo_12d7a68);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&StringLiteral___12eb600);
    bRam0000000001341fd9 = 1;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar2 = native_NGUITools__KeyToCaption_7341ac(uVar1,0);
  puVar6 = (uint *)(param_1 + 0x1c);
  if ((*puVar6 | 4) == 4) {
    return lVar2;
  }
  plVar3 = (long *)native_sub_4327fc(_UIKeyBinding_Modifier_TypeInfo_12d7a68,puVar6);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
  puVar5 = (uint *)native_sub_432800(plVar3);
  *puVar6 = *puVar5;
  lVar7 = _StringLiteral___12eb600;
  if ((bRam0000000001342140 & 1) == 0) {
    native_sub_43273c(&string_TypeInfo_12d5f28,_StringLiteral___12eb600,lVar2,0);
    bRam0000000001342140 = 1;
  }
  if ((lVar4 != 0) ||
     (lVar8 = **(long **)(_string_TypeInfo_12d5f28 + 0xb8), lVar4 = lVar8, lVar7 != 0 || lVar2 != 0)
     ) {
    if (lVar7 == 0) {
      lVar7 = **(long **)(_string_TypeInfo_12d5f28 + 0xb8);
    }
    if (lVar2 == 0) {
      lVar2 = **(long **)(_string_TypeInfo_12d5f28 + 0xb8);
    }
    if (((lVar4 == 0) || (lVar7 == 0)) || (lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    lVar8 = native_sub_3bca18(*(int *)(lVar7 + 0x10) + *(int *)(lVar4 + 0x10) +
                              *(int *)(lVar2 + 0x10));
    native_System_String__FillStringChecked_b0a62c(lVar8,0,lVar4);
    native_System_String__FillStringChecked_b0a62c(lVar8,*(undefined4 *)(lVar4 + 0x10),lVar7);
    native_System_String__FillStringChecked_b0a62c
              (lVar8,*(int *)(lVar7 + 0x10) + *(int *)(lVar4 + 0x10),lVar2);
  }
  return lVar8;
}



/* UIKeyBinding$$IsBound @ 0xae4a00
 * bool UIKeyBinding__IsBound (int32_t key, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIKeyBinding$$IsBound
   bool UIKeyBinding__IsBound (int32_t key, const MethodInfo* method); */

undefined8 native_UIKeyBinding__IsBound_ae4a00(int param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  if ((bRam0000000001341fda & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UIKeyBinding__get_Count___12dd2f0);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIKeyBinding__get_Item___12dd2f8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIKeyBinding_TypeInfo_12d6458);
    bRam0000000001341fda = 1;
  }
  if (((*(byte *)(_UIKeyBinding_TypeInfo_12d6458 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIKeyBinding_TypeInfo_12d6458 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (**(long **)(_UIKeyBinding_TypeInfo_12d6458 + 0xb8) != 0) {
    iVar1 = *(int *)(**(long **)(_UIKeyBinding_TypeInfo_12d6458 + 0xb8) + 0x18);
    if (0 < iVar1) {
      uVar4 = 0;
      do {
        if (((*(byte *)(_UIKeyBinding_TypeInfo_12d6458 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIKeyBinding_TypeInfo_12d6458 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar3 = **(long **)(_UIKeyBinding_TypeInfo_12d6458 + 0xb8);
        if (lVar3 == 0) goto LAB_00ae4b58;
        if (*(uint *)(lVar3 + 0x18) <= uVar4) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + uVar4 * 8 + 0x20);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
        if ((uVar2 & 1) != 0) {
          if (lVar3 == 0) goto LAB_00ae4b58;
          if (*(int *)(lVar3 + 0x18) == param_1) {
            return 1;
          }
        }
        uVar4 = uVar4 + 1;
      } while ((long)uVar4 < (long)iVar1);
    }
    return 0;
  }
LAB_00ae4b58:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIKeyBinding$$Find @ 0xae4b5c
 * UIKeyBinding_o* UIKeyBinding__Find (System_String_o* name, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIKeyBinding$$Find
   UIKeyBinding_o* UIKeyBinding__Find (System_String_o* name, const MethodInfo* method); */

undefined8 native_UIKeyBinding__Find_ae4b5c(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  
  if ((bRam0000000001341fdb & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UIKeyBinding__get_Count___12dd2f0);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIKeyBinding__get_Item___12dd2f8);
    native_sub_43273c(&UIKeyBinding_TypeInfo_12d6458);
    bRam0000000001341fdb = 1;
  }
  if (((*(byte *)(_UIKeyBinding_TypeInfo_12d6458 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIKeyBinding_TypeInfo_12d6458 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (**(long **)(_UIKeyBinding_TypeInfo_12d6458 + 0xb8) == 0) {
LAB_00ae4cc4:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  iVar1 = *(int *)(**(long **)(_UIKeyBinding_TypeInfo_12d6458 + 0xb8) + 0x18);
  if (0 < iVar1) {
    lVar4 = 4;
    while( true ) {
      if (((*(byte *)(_UIKeyBinding_TypeInfo_12d6458 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIKeyBinding_TypeInfo_12d6458 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar6 = **(long **)(_UIKeyBinding_TypeInfo_12d6458 + 0xb8);
      if (lVar6 == 0) goto LAB_00ae4cc4;
      uVar5 = (int)lVar4 - 4;
      if (*(uint *)(lVar6 + 0x18) <= uVar5) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + lVar4 * 8);
      if (lVar6 == 0) goto LAB_00ae4cc4;
      uVar2 = native_UnityEngine_Object__get_name_8e8098(lVar6,0);
      uVar3 = native_System_String__op_Equality_afc18c(uVar2,param_1,0);
      if ((uVar3 & 1) != 0) {
        if (((*(byte *)(_UIKeyBinding_TypeInfo_12d6458 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIKeyBinding_TypeInfo_12d6458 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar6 = **(long **)(_UIKeyBinding_TypeInfo_12d6458 + 0xb8);
        if (lVar6 != 0) {
          if (*(uint *)(lVar6 + 0x18) <= uVar5) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          return *(undefined8 *)(*(long *)(lVar6 + 0x10) + lVar4 * 8);
        }
        goto LAB_00ae4cc4;
      }
      if (iVar1 <= (int)lVar4 + -3) break;
      lVar4 = lVar4 + 1;
    }
  }
  return 0;
}



/* UIKeyBinding$$OnEnable @ 0xae4cc8
 * void UIKeyBinding__OnEnable (UIKeyBinding_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIKeyBinding$$OnEnable
   void UIKeyBinding__OnEnable (UIKeyBinding_o* __this, const MethodInfo* method); */

void native_UIKeyBinding__OnEnable_ae4cc8(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  
  if ((bRam0000000001341fdc & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UIKeyBinding__Add___12dd2e0);
    native_sub_43273c(&UIKeyBinding_TypeInfo_12d6458);
    bRam0000000001341fdc = 1;
  }
  if (((*(byte *)(_UIKeyBinding_TypeInfo_12d6458 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIKeyBinding_TypeInfo_12d6458 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar1 = **(long **)(_UIKeyBinding_TypeInfo_12d6458 + 0xb8);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar5 = *(long *)(lVar1 + 0x10);
  if (lVar5 != 0) {
    uVar4 = *(uint *)(lVar1 + 0x18);
    if (uVar4 == *(uint *)(lVar5 + 0x18)) {
      (*(code *)**(undefined8 **)
                  (*(long *)(*(long *)(
                                      _Method_System_Collections_Generic_List_UIKeyBinding__Add___12dd2e0
                                      + 0x18) + 0xc0) + 0x60))(lVar1,uVar4 + 1);
      uVar4 = *(uint *)(lVar1 + 0x18);
      lVar5 = *(long *)(lVar1 + 0x10);
      *(uint *)(lVar1 + 0x18) = uVar4 + 1;
      if (lVar5 == 0) goto code_r0x00d40c5c;
    }
    else {
      *(uint *)(lVar1 + 0x18) = uVar4 + 1;
    }
    if (uVar4 < *(uint *)(lVar5 + 0x18)) {
      puVar2 = (undefined8 *)(lVar5 + (long)(int)uVar4 * 8 + 0x20);
      *puVar2 = param_1;
      native_sub_4326e0(puVar2,param_1);
      *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
      return;
    }
    uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar3,0);
  }
code_r0x00d40c5c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIKeyBinding$$OnDisable @ 0xae4d54
 * void UIKeyBinding__OnDisable (UIKeyBinding_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIKeyBinding$$OnDisable
   void UIKeyBinding__OnDisable (UIKeyBinding_o* __this, const MethodInfo* method); */

bool native_UIKeyBinding__OnDisable_ae4d54(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  if ((bRam0000000001341fdd & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UIKeyBinding__Remove___12dd2e8);
    native_sub_43273c(&UIKeyBinding_TypeInfo_12d6458);
    bRam0000000001341fdd = 1;
  }
  if (((*(byte *)(_UIKeyBinding_TypeInfo_12d6458 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIKeyBinding_TypeInfo_12d6458 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar1 = _Method_System_Collections_Generic_List_UIKeyBinding__Remove___12dd2e8;
  lVar3 = **(long **)(_UIKeyBinding_TypeInfo_12d6458 + 0xb8);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810(0,param_1);
  }
  iVar2 = (*(code *)**(undefined8 **)
                      (*(long *)(*(long *)(
                                          _Method_System_Collections_Generic_List_UIKeyBinding__Remove___12dd2e8
                                          + 0x18) + 0xc0) + 0xd8))();
  if (-1 < iVar2) {
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar1 + 0x18) + 0xc0) + 0xe8))(lVar3,iVar2);
  }
  return -1 < iVar2;
}



/* UIKeyBinding$$Start @ 0xae4de0
 * void UIKeyBinding__Start (UIKeyBinding_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIKeyBinding$$Start
   void UIKeyBinding__Start (UIKeyBinding_o* __this, const MethodInfo* method); */

long * native_UIKeyBinding__Start_ae4de0(long *param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  if ((bRam0000000001341fde & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIInput____12e2bc8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341fde = 1;
  }
  lVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_UIInput____12e2bc8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  bVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
  *(byte *)((long)param_1 + 0x25) = bVar2 & 1;
  plVar4 = (long *)native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
  if (((ulong)plVar4 & 1) == 0) {
    return plVar4;
  }
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar3 = *(long *)(lVar3 + 0x78);
  uVar5 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
  native_EventDelegate_Callback___ctor_54bd18(uVar5,param_1,*(undefined8 *)(*param_1 + 0x1b0),0);
  if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam0000000001346ef3 & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590,uVar5,0);
    bRam0000000001346ef3 = 1;
  }
  if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam0000000001346ef4 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Count___12dc760);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Item___12dc768);
    native_sub_43273c(&StringLiteral_Attempting_to_add_a_callback_to_a_list_that_s_null_12ec670);
    bRam0000000001346ef4 = 1;
  }
  if (lVar3 == 0) {
    if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_UnityEngine_Debug__LogWarning_8dca9c
              (_StringLiteral_Attempting_to_add_a_callback_to_a_list_that_s_null_12ec670,0);
    plVar4 = (long *)0x0;
  }
  else {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar1) {
      uVar7 = 0;
      lVar8 = (long)(int)uVar1;
      while( true ) {
        if (uVar1 <= uVar7) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        plVar4 = *(long **)(*(long *)(lVar3 + 0x10) + uVar7 * 8 + 0x20);
        if ((plVar4 != (long *)0x0) &&
           (uVar6 = (**(code **)(*plVar4 + 0x138))(plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x140)),
           (uVar6 & 1) != 0)) {
          return plVar4;
        }
        uVar7 = uVar7 + 1;
        if (lVar8 <= (long)uVar7) break;
        uVar1 = *(uint *)(lVar3 + 0x18);
      }
    }
    plVar4 = (long *)native_sub_432808(_EventDelegate_TypeInfo_12d4590);
    native_System_Object___ctor_ad2798(plVar4,0);
    native_EventDelegate__Set_dedf08(plVar4,uVar5);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    *(undefined1 *)(plVar4 + 5) = 0;
    native_System_Collections_Generic_List_int_____Add_d40c00
              (lVar3,plVar4,_Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
  }
  return plVar4;
}



/* UIKeyBinding$$OnSubmit @ 0xae4f20
 * void UIKeyBinding__OnSubmit (UIKeyBinding_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIKeyBinding$$OnSubmit
   void UIKeyBinding__OnSubmit (UIKeyBinding_o* __this, const MethodInfo* method); */

void native_UIKeyBinding__OnSubmit_ae4f20(long *param_1)

{
  ulong uVar1;
  
  if ((bRam0000000001341fdf & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam0000000001341fdf = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (cRam0000000001342089 == '\0') {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    cRam0000000001342089 = '\x01';
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd8) == (int)param_1[3]) {
    uVar1 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
    if ((uVar1 & 1) != 0) {
      *(undefined1 *)((long)param_1 + 0x24) = 1;
    }
  }
  return;
}



/* UIKeyBinding$$IsModifierActive @ 0xae4ff0
 * bool UIKeyBinding__IsModifierActive (UIKeyBinding_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIKeyBinding$$IsModifierActive
   bool UIKeyBinding__IsModifierActive (UIKeyBinding_o* __this, const MethodInfo* method); */

uint native_UIKeyBinding__IsModifierActive_ae4ff0(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if ((bRam0000000001341fe0 & 1) == 0) {
    native_sub_43273c(&UIKeyBinding_TypeInfo_12d6458);
    bRam0000000001341fe0 = 1;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  if (((*(byte *)(_UIKeyBinding_TypeInfo_12d6458 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIKeyBinding_TypeInfo_12d6458 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam0000000001341fe1 & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam0000000001341fe1 = 1;
  }
  uVar2 = 1;
  switch(uVar1) {
  case 0:
    goto code_r0x00ae5368;
  case 1:
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar3 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
    if (lVar3 == 0) goto code_r0x00ae5378;
    uVar4 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar3,0x130,0);
    if ((uVar4 & 1) == 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar3 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
      if (lVar3 == 0) goto code_r0x00ae5378;
      uVar5 = 0x12f;
code_r0x00ae5350:
      uVar4 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar3,uVar5,0);
      if ((uVar4 & 1) == 0) goto LAB_00ae5364;
    }
    break;
  case 2:
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar3 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
    if (lVar3 == 0) goto code_r0x00ae5378;
    uVar4 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar3,0x132,0);
    if ((uVar4 & 1) == 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar3 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
      if (lVar3 == 0) goto code_r0x00ae5378;
      uVar5 = 0x131;
      goto code_r0x00ae5350;
    }
    break;
  case 3:
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar3 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
    if (lVar3 == 0) goto code_r0x00ae5378;
    uVar4 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar3,0x134,0);
    if ((uVar4 & 1) == 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar3 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
      if (lVar3 == 0) goto code_r0x00ae5378;
      uVar5 = 0x133;
      goto code_r0x00ae5350;
    }
    break;
  case 4:
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar3 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
    if (lVar3 == 0) goto code_r0x00ae5378;
    uVar4 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar3,0x134,0);
    if ((uVar4 & 1) == 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar3 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
      if (lVar3 == 0) goto code_r0x00ae5378;
      uVar4 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar3,0x133,0);
      if ((uVar4 & 1) == 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar3 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
        if (lVar3 == 0) goto code_r0x00ae5378;
        uVar4 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar3,0x132,0);
        if ((uVar4 & 1) == 0) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar3 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
          if (lVar3 == 0) goto code_r0x00ae5378;
          uVar4 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar3,0x131,0);
          if ((uVar4 & 1) == 0) {
            if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            lVar3 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
            if (lVar3 == 0) {
code_r0x00ae5378:
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            uVar4 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar3,0x130,0);
            if ((uVar4 & 1) == 0) {
              if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              lVar3 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
              if (lVar3 != 0) {
                uVar2 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar3,0x12f,0);
                uVar2 = uVar2 ^ 1;
                goto code_r0x00ae5368;
              }
              goto code_r0x00ae5378;
            }
          }
        }
      }
    }
  default:
LAB_00ae5364:
    uVar2 = 0;
    goto code_r0x00ae5368;
  }
  uVar2 = 1;
code_r0x00ae5368:
  return uVar2 & 1;
}



/* UIKeyBinding$$IsModifierActive @ 0xae5054
 * bool UIKeyBinding__IsModifierActive (int32_t modifier, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIKeyBinding$$IsModifierActive
   bool UIKeyBinding__IsModifierActive (int32_t modifier, const MethodInfo* method); */

uint native_UIKeyBinding__IsModifierActive_ae5054(undefined4 param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if ((bRam0000000001341fe1 & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam0000000001341fe1 = 1;
  }
  uVar1 = 1;
  switch(param_1) {
  case 0:
    goto code_r0x00ae5368;
  case 1:
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar2 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
    if (lVar2 == 0) goto code_r0x00ae5378;
    uVar3 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar2,0x130,0);
    if ((uVar3 & 1) == 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar2 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
      if (lVar2 == 0) goto code_r0x00ae5378;
      uVar4 = 0x12f;
code_r0x00ae5350:
      uVar3 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar2,uVar4,0);
      if ((uVar3 & 1) == 0) goto LAB_00ae5364;
    }
    break;
  case 2:
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar2 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
    if (lVar2 == 0) goto code_r0x00ae5378;
    uVar3 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar2,0x132,0);
    if ((uVar3 & 1) == 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar2 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
      if (lVar2 == 0) goto code_r0x00ae5378;
      uVar4 = 0x131;
      goto code_r0x00ae5350;
    }
    break;
  case 3:
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar2 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
    if (lVar2 == 0) goto code_r0x00ae5378;
    uVar3 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar2,0x134,0);
    if ((uVar3 & 1) == 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar2 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
      if (lVar2 == 0) goto code_r0x00ae5378;
      uVar4 = 0x133;
      goto code_r0x00ae5350;
    }
    break;
  case 4:
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar2 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
    if (lVar2 == 0) goto code_r0x00ae5378;
    uVar3 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar2,0x134,0);
    if ((uVar3 & 1) == 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar2 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
      if (lVar2 == 0) goto code_r0x00ae5378;
      uVar3 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar2,0x133,0);
      if ((uVar3 & 1) == 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar2 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
        if (lVar2 == 0) goto code_r0x00ae5378;
        uVar3 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar2,0x132,0);
        if ((uVar3 & 1) == 0) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar2 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
          if (lVar2 == 0) goto code_r0x00ae5378;
          uVar3 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar2,0x131,0);
          if ((uVar3 & 1) == 0) {
            if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            lVar2 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
            if (lVar2 == 0) {
code_r0x00ae5378:
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            uVar3 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar2,0x130,0);
            if ((uVar3 & 1) == 0) {
              if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              lVar2 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
              if (lVar2 != 0) {
                uVar1 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar2,0x12f,0);
                uVar1 = uVar1 ^ 1;
                goto code_r0x00ae5368;
              }
              goto code_r0x00ae5378;
            }
          }
        }
      }
    }
  default:
LAB_00ae5364:
    uVar1 = 0;
    goto code_r0x00ae5368;
  }
  uVar1 = 1;
code_r0x00ae5368:
  return uVar1 & 1;
}



/* UIKeyBinding$$Update @ 0xae537c
 * void UIKeyBinding__Update (UIKeyBinding_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIKeyBinding$$Update
   void UIKeyBinding__Update (UIKeyBinding_o* __this, const MethodInfo* method); */

void native_UIKeyBinding__Update_ae537c(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  
  if ((bRam0000000001341fe2 & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&UIDragDropItem_TypeInfo_12d6428);
    bRam0000000001341fe2 = 1;
  }
  if ((int)param_1[3] != 300) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UICamera__get_inputHasFocus_c94cbc(0);
    if ((uVar2 & 1) != 0) {
      return;
    }
    if ((int)param_1[3] == 0) {
      return;
    }
  }
  uVar2 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
  if ((uVar2 & 1) == 0) {
    return;
  }
  uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  if (((*(byte *)(_UIDragDropItem_TypeInfo_12d6428 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIDragDropItem_TypeInfo_12d6428 + 0xe0) == 0)) {
    native_sub_4327ec(_UIDragDropItem_TypeInfo_12d6428);
  }
  uVar2 = native_UIDragDropItem__IsDragged_9e00d8(uVar3,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar4 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 8);
  if (lVar4 == 0) {
LAB_00ae5694:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar2 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar4,(int)param_1[3],0);
  lVar4 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x10);
  if (lVar4 == 0) goto LAB_00ae5694;
  uVar1 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar4,(int)param_1[3],0);
  if ((uVar2 & 1) != 0) {
    *(undefined1 *)((long)param_1 + 0x26) = 1;
  }
  uVar5 = *(uint *)(param_1 + 4);
  if ((uVar5 | 2) == 2) {
    if ((uVar2 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      *(undefined4 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4) = 0xffffffff;
      native_UICamera__set_currentKey_c94858((int)param_1[3],0);
      (**(code **)(*param_1 + 0x1d8))(param_1,1,*(undefined8 *)(*param_1 + 0x1e0));
    }
    if (*(char *)((long)param_1 + 0x26) != '\0' && ((uVar1 ^ 0xffffffff) & 1) == 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      *(undefined4 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4) = 0xffffffff;
      native_UICamera__set_currentKey_c94858((int)param_1[3],0);
      (**(code **)(*param_1 + 0x1d8))(param_1,0,*(undefined8 *)(*param_1 + 0x1e0));
      (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0));
    }
    uVar5 = *(uint *)(param_1 + 4);
  }
  if (uVar5 == 1) {
    if ((uVar1 & 1) == 0) {
      return;
    }
  }
  else if ((uVar5 != 2) || (((uVar1 ^ 1) & 1) != 0)) goto joined_r0x00ae567c;
  if (*(char *)((long)param_1 + 0x25) == '\0') {
    if (*(char *)((long)param_1 + 0x26) != '\0') {
      uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec(_UICamera_TypeInfo_12d6410);
      }
      native_UICamera__set_hoveredObject_c9622c(uVar3,0);
    }
    goto joined_r0x00ae567c;
  }
  if (*(char *)((long)param_1 + 0x24) == '\0') {
    if ((int)param_1[3] != 300) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_UICamera__get_inputHasFocus_c94cbc(0);
      if ((uVar2 & 1) != 0) goto LAB_00ae5630;
    }
    if (*(char *)((long)param_1 + 0x26) != '\0') {
      uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec(_UICamera_TypeInfo_12d6410);
      }
      native_UICamera__set_selectedObject_c976a4(uVar3,0);
    }
  }
LAB_00ae5630:
  *(undefined1 *)((long)param_1 + 0x24) = 0;
joined_r0x00ae567c:
  if ((uVar1 & 1) != 0) {
    *(undefined1 *)((long)param_1 + 0x26) = 0;
  }
  return;
}



/* UIKeyBinding$$OnBindingPress @ 0xae5698
 * void UIKeyBinding__OnBindingPress (UIKeyBinding_o* __this, bool pressed, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIKeyBinding$$OnBindingPress
   void UIKeyBinding__OnBindingPress (UIKeyBinding_o* __this, bool pressed, const MethodInfo*
   method); */

void native_UIKeyBinding__OnBindingPress_ae5698(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte abStack_24 [4];
  
  if ((bRam0000000001341fe3 & 1) == 0) {
    native_sub_43273c(&bool_TypeInfo_12d3bd0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&StringLiteral_OnPress_12f02b0);
    bRam0000000001341fe3 = 1;
  }
  uVar1 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  abStack_24[0] = param_2 & 1;
  uVar2 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,abStack_24);
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec(_UICamera_TypeInfo_12d6410);
  }
  native_UICamera__Notify_c96a08(uVar1,_StringLiteral_OnPress_12f02b0,uVar2,0);
  return;
}



/* UIKeyBinding$$OnBindingClick @ 0xae5764
 * void UIKeyBinding__OnBindingClick (UIKeyBinding_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIKeyBinding$$OnBindingClick
   void UIKeyBinding__OnBindingClick (UIKeyBinding_o* __this, const MethodInfo* method); */

void native_UIKeyBinding__OnBindingClick_ae5764(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if ((bRam0000000001341fe4 & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&StringLiteral_OnClick_12f01f0);
    bRam0000000001341fe4 = 1;
  }
  lVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec(_UICamera_TypeInfo_12d6410);
  }
  uVar1 = _StringLiteral_OnClick_12f01f0;
  if ((bRam00000000013428da & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,_StringLiteral_OnClick_12f01f0,0,0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&UIPopupList_TypeInfo_12d6490);
    bRam00000000013428da = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x264) < 0xb) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    iVar2 = native_UICamera__get_currentScheme_c92518();
    if (iVar2 == 2) {
      if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UIPopupList__get_isOpen_c264f8(0);
      if ((uVar4 & 1) != 0) {
        if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        if (**(long **)(_UIPopupList_TypeInfo_12d6490 + 0xb8) == 0) goto LAB_00c96d28;
        uVar5 = *(undefined8 *)(**(long **)(_UIPopupList_TypeInfo_12d6490 + 0xb8) + 0x160);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar5,lVar3,0);
        if ((uVar4 & 1) != 0) {
          if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar4 = native_UIPopupList__get_isOpen_c264f8(0);
          if ((uVar4 & 1) != 0) {
            if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            if (**(long **)(_UIPopupList_TypeInfo_12d6490 + 0xb8) == 0) goto LAB_00c96d28;
            lVar3 = native_UnityEngine_Component__get_gameObject_8da66c
                              (**(long **)(_UIPopupList_TypeInfo_12d6490 + 0xb8),0);
          }
        }
      }
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar3,0);
    if ((uVar4 & 1) != 0) {
      if (lVar3 == 0) {
LAB_00c96d28:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      uVar4 = native_UnityEngine_GameObject__get_activeInHierarchy_8de728(lVar3,0);
      if ((uVar4 & 1) != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        *(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x264) =
             *(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x264) + 1;
        native_UnityEngine_GameObject__SendMessage_8de4c0(lVar3,uVar1,0,1,0);
        uVar5 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xf0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
        if ((uVar4 & 1) != 0) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar5 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xf0);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
          }
          uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,lVar3,0);
          if ((uVar4 & 1) != 0) {
            if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            lVar3 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xf0);
            if (lVar3 == 0) goto LAB_00c96d28;
            native_UnityEngine_GameObject__SendMessage_8de4c0(lVar3,uVar1,0,1,0);
          }
        }
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        *(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x264) =
             *(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x264) + -1;
      }
    }
  }
  return;
}



/* UIKeyBinding$$ToString @ 0xae57f8
 * System_String_o* UIKeyBinding__ToString (UIKeyBinding_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIKeyBinding$$ToString
   System_String_o* UIKeyBinding__ToString (UIKeyBinding_o* __this, const MethodInfo* method); */

undefined8 native_UIKeyBinding__ToString_ae57f8(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iStack_24;
  
  if ((bRam0000000001341fe5 & 1) == 0) {
    native_sub_43273c(&UIKeyBinding_TypeInfo_12d6458);
    bRam0000000001341fe5 = 1;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x1c);
  if (((*(byte *)(_UIKeyBinding_TypeInfo_12d6458 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIKeyBinding_TypeInfo_12d6458 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iStack_24 = iVar2;
  if ((bRam0000000001341fe6 & 1) == 0) {
    native_sub_43273c(&UIKeyBinding_Modifier_TypeInfo_12d7a68);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&StringLiteral___12eb600);
    bRam0000000001341fe6 = 1;
  }
  if (iVar2 != 4) {
    plVar4 = (long *)native_sub_4327fc(_UIKeyBinding_Modifier_TypeInfo_12d7a68,&iStack_24);
    if (plVar4 != (long *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      piVar5 = (int *)native_sub_432800(plVar4);
      iStack_24 = *piVar5;
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar6 = native_NGUITools__KeyToCaption_7341ac(uVar1,0);
      uVar3 = native_System_String__Concat_afc654(uVar3,_StringLiteral___12eb600,uVar6,0);
      return uVar3;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f5d0 & 1) == 0) {
    native_sub_43273c(&StringLiteral_F10_12edde8,0);
    native_sub_43273c(&StringLiteral_PD_12f0448);
    native_sub_43273c(&StringLiteral_M0_12ef698);
    native_sub_43273c(&StringLiteral_J16_12ef2c8);
    native_sub_43273c(&StringLiteral_S_12f0b70);
    native_sub_43273c(&StringLiteral___12f33a8);
    native_sub_43273c(&StringLiteral_J11_12ef2a0);
    native_sub_43273c(&StringLiteral___12eafe0);
    native_sub_43273c(&StringLiteral_J_12ef290);
    native_sub_43273c(&StringLiteral_K__12ef370);
    native_sub_43273c(&StringLiteral_K__12ef390);
    native_sub_43273c(&StringLiteral___12eaf78);
    native_sub_43273c(&StringLiteral_J14_12ef2b8);
    native_sub_43273c(&StringLiteral_RT_12f0868);
    native_sub_43273c(&StringLiteral_Home_12ee3c8);
    native_sub_43273c(&StringLiteral_Clear_12ed0d0);
    native_sub_43273c(&StringLiteral_LT_12ef4f0);
    native_sub_43273c(&StringLiteral_F4_12ede28);
    native_sub_43273c(&StringLiteral___12ebfd8);
    native_sub_43273c(&StringLiteral_3_12ebc10);
    native_sub_43273c(&StringLiteral___12eb600);
    native_sub_43273c(&StringLiteral_2_12ebb88);
    native_sub_43273c(&StringLiteral_Z_12f3208);
    native_sub_43273c(&StringLiteral_F2_12ede18);
    native_sub_43273c(&StringLiteral_RC_12f07e0);
    native_sub_43273c(&StringLiteral_M2_12ef6a8);
    native_sub_43273c(&StringLiteral_9_12ebc60);
    native_sub_43273c(&StringLiteral_K2_12ef3a8);
    native_sub_43273c(&StringLiteral_LC_12ef4c8);
    native_sub_43273c(&StringLiteral_RS_12f0850);
    native_sub_43273c(&StringLiteral_R_12f07c8);
    native_sub_43273c(&StringLiteral_KQ_12ef3f0);
    native_sub_43273c(&StringLiteral_F7_12ede40);
    native_sub_43273c(&StringLiteral_6_12ebc40);
    native_sub_43273c(&StringLiteral_J17_12ef2d0);
    native_sub_43273c(&StringLiteral_J15_12ef2c0);
    native_sub_43273c(&StringLiteral_M5_12ef6c0);
    native_sub_43273c(&StringLiteral_M3_12ef6b0);
    native_sub_43273c(&StringLiteral_K0_12ef398);
    native_sub_43273c(&StringLiteral_W_12f2f48);
    native_sub_43273c(&StringLiteral___12eb6c8);
    native_sub_43273c(&StringLiteral_J10_12ef298);
    native_sub_43273c(&StringLiteral_DN_12ed588);
    native_sub_43273c(&StringLiteral_Tab_12f1478);
    native_sub_43273c(&StringLiteral_K_12ef368);
    native_sub_43273c(&StringLiteral_G_12ee108);
    native_sub_43273c(&StringLiteral_LA_12ef4c0);
    native_sub_43273c(&StringLiteral_H_12ee270);
    native_sub_43273c(&StringLiteral_F13_12ede00);
    native_sub_43273c(&StringLiteral___12eb180);
    native_sub_43273c(&StringLiteral__LB__12eb4d8);
    native_sub_43273c(&StringLiteral_Q_12f0788);
    native_sub_43273c(&StringLiteral_Scr_12f0c90);
    native_sub_43273c(&StringLiteral_K1_12ef3a0);
    native_sub_43273c(&StringLiteral_K9_12ef3e0);
    native_sub_43273c(&StringLiteral_J18_12ef2d8);
    native_sub_43273c(&StringLiteral___12f34d0);
    native_sub_43273c(&StringLiteral_M6_12ef6c8);
    native_sub_43273c(&StringLiteral_U_12f2908);
    native_sub_43273c(&StringLiteral_V_12f2d80);
    native_sub_43273c(&StringLiteral___12f38a8);
    native_sub_43273c(&StringLiteral_K7_12ef3d0);
    native_sub_43273c(&StringLiteral_E_12ed8d0);
    native_sub_43273c(&StringLiteral_F15_12ede10);
    native_sub_43273c(&StringLiteral_F12_12eddf8);
    native_sub_43273c(&StringLiteral____12eb208);
    native_sub_43273c(&StringLiteral_Space_12f0f30);
    native_sub_43273c(&StringLiteral_I_12ee410);
    native_sub_43273c(&StringLiteral_Backspace_12ec700);
    native_sub_43273c(&StringLiteral_K8_12ef3d8);
    native_sub_43273c(&StringLiteral_Del_12ed720);
    native_sub_43273c(&StringLiteral___12ebd20);
    native_sub_43273c(&StringLiteral___12ebff8);
    native_sub_43273c(&StringLiteral_7_12ebc48);
    native_sub_43273c(&StringLiteral_4_12ebc20);
    native_sub_43273c(&StringLiteral_K6_12ef3c8);
    native_sub_43273c(&StringLiteral_K__12ef380);
    native_sub_43273c(&StringLiteral_F9_12ede50);
    native_sub_43273c(&StringLiteral_T_12f12c0);
    native_sub_43273c(&StringLiteral_M1_12ef6a0);
    native_sub_43273c(&StringLiteral___12f34b8);
    native_sub_43273c(&StringLiteral_L_12ef4b0);
    native_sub_43273c(&StringLiteral___12eb830);
    native_sub_43273c(&StringLiteral___12ebc70);
    native_sub_43273c(&StringLiteral___12eb148);
    native_sub_43273c(&StringLiteral_Esc_12edc70);
    native_sub_43273c(&StringLiteral__Back__12eb4b0);
    native_sub_43273c(&StringLiteral__A__12eb4a0);
    native_sub_43273c(&StringLiteral___12ebcf8);
    native_sub_43273c(&StringLiteral_Return_12f0b08);
    native_sub_43273c(&StringLiteral_O_12effd8);
    native_sub_43273c(&StringLiteral_J13_12ef2b0);
    native_sub_43273c(&StringLiteral__Start__12eb540);
    native_sub_43273c(&StringLiteral___12eb0c0);
    native_sub_43273c(&StringLiteral_D_12ed558);
    native_sub_43273c(&StringLiteral___12eb450);
    native_sub_43273c(&StringLiteral_Ins_12ee8f8);
    native_sub_43273c(&StringLiteral_F6_12ede38);
    native_sub_43273c(&StringLiteral_End_12eda90);
    native_sub_43273c(&StringLiteral_B_12ec6d8);
    native_sub_43273c(&StringLiteral__RS__12eb538);
    native_sub_43273c(&StringLiteral_8_12ebc50);
    native_sub_43273c(&StringLiteral_F3_12ede20);
    native_sub_43273c(&StringLiteral___12eb590);
    native_sub_43273c(&StringLiteral_KE_12ef3e8);
    native_sub_43273c(&StringLiteral_UP_12f29a8);
    native_sub_43273c(&StringLiteral__X__12eb550);
    native_sub_43273c(&StringLiteral___12ec010);
    native_sub_43273c(&StringLiteral_Num_12effb8);
    native_sub_43273c(&StringLiteral_LS_12ef4e8);
    native_sub_43273c(&StringLiteral_C_12ec9b0);
    native_sub_43273c(&StringLiteral_F5_12ede30);
    native_sub_43273c(&StringLiteral___12eb630);
    native_sub_43273c(&StringLiteral_F14_12ede08);
    native_sub_43273c(&StringLiteral__RB__12eb530);
    native_sub_43273c(&StringLiteral_Y_12f31b8);
    native_sub_43273c(&StringLiteral_F1_12edde0);
    native_sub_43273c(&StringLiteral_K__12ef388);
    native_sub_43273c(&StringLiteral_K__12ef378);
    native_sub_43273c(&StringLiteral_F11_12eddf0);
    native_sub_43273c(&StringLiteral_M4_12ef6b8);
    native_sub_43273c(&StringLiteral_K3_12ef3b0);
    native_sub_43273c(&StringLiteral_RA_12f07d0);
    native_sub_43273c(&StringLiteral__Y__12eb558);
    native_sub_43273c(&StringLiteral_F8_12ede48);
    native_sub_43273c(&StringLiteral_X_12f30c0);
    native_sub_43273c(&StringLiteral___12f3230);
    native_sub_43273c(&StringLiteral_J19_12ef2e0);
    native_sub_43273c(&StringLiteral_M_12ef690);
    native_sub_43273c(&StringLiteral_J12_12ef2a8);
    native_sub_43273c(&StringLiteral___12f3410);
    native_sub_43273c(&StringLiteral___12eb5f0);
    native_sub_43273c(&StringLiteral_N_12efba8);
    native_sub_43273c(&StringLiteral_PS_12f0498);
    native_sub_43273c(&StringLiteral_1_12eb968);
    native_sub_43273c(&StringLiteral_K5_12ef3c0);
    native_sub_43273c(&StringLiteral_A_12ec020);
    native_sub_43273c(&StringLiteral___12ebfe8);
    native_sub_43273c(&StringLiteral___12eb7a0);
    native_sub_43273c(&StringLiteral__B__12eb4a8);
    native_sub_43273c(&StringLiteral_K4_12ef3b8);
    native_sub_43273c(&StringLiteral_Cap_12ecf10);
    native_sub_43273c(&StringLiteral_5_12ebc38);
    native_sub_43273c(&StringLiteral_0_12eb8d8);
    native_sub_43273c(&StringLiteral_PU_12f04a0);
    native_sub_43273c(&StringLiteral__LS__12eb4e0);
    native_sub_43273c(&StringLiteral_P_12f0418);
    native_sub_43273c(&StringLiteral_F_12eddd8);
    bRam000000000133f5d0 = 1;
  }
  uVar3 = 0;
  switch(uVar1) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 10:
  case 0xb:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x25:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
    goto LAB_00734c68;
  case 8:
    puVar7 = (undefined8 *)&StringLiteral_Backspace_12ec700;
    break;
  case 9:
    puVar7 = (undefined8 *)&StringLiteral_Tab_12f1478;
    break;
  case 0xc:
    puVar7 = (undefined8 *)&StringLiteral_Clear_12ed0d0;
    break;
  case 0xd:
    puVar7 = (undefined8 *)&StringLiteral_Return_12f0b08;
    break;
  case 0x13:
    puVar7 = (undefined8 *)&StringLiteral_PS_12f0498;
    break;
  case 0x1b:
    puVar7 = (undefined8 *)&StringLiteral_Esc_12edc70;
    break;
  case 0x20:
    puVar7 = (undefined8 *)&StringLiteral_Space_12f0f30;
    break;
  case 0x21:
    puVar7 = (undefined8 *)&StringLiteral___12eaf78;
    break;
  case 0x22:
    puVar7 = (undefined8 *)&StringLiteral____12eb208;
    break;
  case 0x23:
    puVar7 = (undefined8 *)&StringLiteral___12eafe0;
    break;
  case 0x24:
    puVar7 = (undefined8 *)&StringLiteral___12eb0c0;
    break;
  case 0x26:
    puVar7 = (undefined8 *)&StringLiteral___12eb148;
    break;
  case 0x27:
    puVar7 = (undefined8 *)&StringLiteral___12eb180;
    break;
  case 0x28:
    puVar7 = (undefined8 *)&StringLiteral___12eb450;
    break;
  case 0x29:
    puVar7 = (undefined8 *)&StringLiteral___12eb590;
    break;
  case 0x2a:
    puVar7 = (undefined8 *)&StringLiteral___12eb5f0;
    break;
  case 0x2b:
    puVar7 = (undefined8 *)&StringLiteral___12eb600;
    break;
  case 0x2c:
    puVar7 = (undefined8 *)&StringLiteral___12eb630;
    break;
  case 0x2d:
    puVar7 = (undefined8 *)&StringLiteral___12eb6c8;
    break;
  case 0x2e:
    puVar7 = (undefined8 *)&StringLiteral___12eb7a0;
    break;
  case 0x2f:
    puVar7 = (undefined8 *)&StringLiteral___12eb830;
    break;
  case 0x30:
    puVar7 = (undefined8 *)&StringLiteral_0_12eb8d8;
    break;
  case 0x31:
    puVar7 = (undefined8 *)&StringLiteral_1_12eb968;
    break;
  case 0x32:
    puVar7 = (undefined8 *)&StringLiteral_2_12ebb88;
    break;
  case 0x33:
    puVar7 = (undefined8 *)&StringLiteral_3_12ebc10;
    break;
  case 0x34:
    puVar7 = (undefined8 *)&StringLiteral_4_12ebc20;
    break;
  case 0x35:
    puVar7 = (undefined8 *)&StringLiteral_5_12ebc38;
    break;
  case 0x36:
    puVar7 = (undefined8 *)&StringLiteral_6_12ebc40;
    break;
  case 0x37:
    puVar7 = (undefined8 *)&StringLiteral_7_12ebc48;
    break;
  case 0x38:
    puVar7 = (undefined8 *)&StringLiteral_8_12ebc50;
    break;
  case 0x39:
    puVar7 = (undefined8 *)&StringLiteral_9_12ebc60;
    break;
  case 0x3a:
    puVar7 = (undefined8 *)&StringLiteral___12ebc70;
    break;
  case 0x3b:
    puVar7 = (undefined8 *)&StringLiteral___12ebcf8;
    break;
  case 0x3c:
    puVar7 = (undefined8 *)&StringLiteral___12ebd20;
    break;
  case 0x3d:
    puVar7 = (undefined8 *)&StringLiteral___12ebfd8;
    break;
  case 0x3e:
    puVar7 = (undefined8 *)&StringLiteral___12ebfe8;
    break;
  case 0x3f:
    puVar7 = (undefined8 *)&StringLiteral___12ebff8;
    break;
  case 0x40:
    puVar7 = (undefined8 *)&StringLiteral___12ec010;
    break;
  case 0x5b:
    puVar7 = (undefined8 *)&StringLiteral___12f3230;
    break;
  case 0x5c:
    puVar7 = (undefined8 *)&StringLiteral___12f33a8;
    break;
  case 0x5d:
    puVar7 = (undefined8 *)&StringLiteral___12f3410;
    break;
  case 0x5e:
    puVar7 = (undefined8 *)&StringLiteral___12f34b8;
    break;
  case 0x5f:
    puVar7 = (undefined8 *)&StringLiteral___12f34d0;
    break;
  case 0x60:
    puVar7 = (undefined8 *)&StringLiteral___12f38a8;
    break;
  case 0x61:
    puVar7 = (undefined8 *)&StringLiteral_A_12ec020;
    break;
  case 0x62:
    puVar7 = (undefined8 *)&StringLiteral_B_12ec6d8;
    break;
  case 99:
    puVar7 = (undefined8 *)&StringLiteral_C_12ec9b0;
    break;
  case 100:
    puVar7 = (undefined8 *)&StringLiteral_D_12ed558;
    break;
  case 0x65:
    puVar7 = (undefined8 *)&StringLiteral_E_12ed8d0;
    break;
  case 0x66:
    puVar7 = (undefined8 *)&StringLiteral_F_12eddd8;
    break;
  case 0x67:
    puVar7 = (undefined8 *)&StringLiteral_G_12ee108;
    break;
  case 0x68:
    puVar7 = (undefined8 *)&StringLiteral_H_12ee270;
    break;
  case 0x69:
    puVar7 = (undefined8 *)&StringLiteral_I_12ee410;
    break;
  case 0x6a:
    puVar7 = (undefined8 *)&StringLiteral_J_12ef290;
    break;
  case 0x6b:
    puVar7 = (undefined8 *)&StringLiteral_K_12ef368;
    break;
  case 0x6c:
    puVar7 = (undefined8 *)&StringLiteral_L_12ef4b0;
    break;
  case 0x6d:
    puVar7 = (undefined8 *)&StringLiteral_M_12ef690;
    break;
  case 0x6e:
    puVar7 = (undefined8 *)&StringLiteral_N_12efba8;
    break;
  case 0x6f:
    puVar7 = (undefined8 *)&StringLiteral_O_12effd8;
    break;
  case 0x70:
    puVar7 = (undefined8 *)&StringLiteral_P_12f0418;
    break;
  case 0x71:
    puVar7 = (undefined8 *)&StringLiteral_Q_12f0788;
    break;
  case 0x72:
    puVar7 = (undefined8 *)&StringLiteral_R_12f07c8;
    break;
  case 0x73:
    puVar7 = (undefined8 *)&StringLiteral_S_12f0b70;
    break;
  case 0x74:
    puVar7 = (undefined8 *)&StringLiteral_T_12f12c0;
    break;
  case 0x75:
    puVar7 = (undefined8 *)&StringLiteral_U_12f2908;
    break;
  case 0x76:
    puVar7 = (undefined8 *)&StringLiteral_V_12f2d80;
    break;
  case 0x77:
    puVar7 = (undefined8 *)&StringLiteral_W_12f2f48;
    break;
  case 0x78:
    puVar7 = (undefined8 *)&StringLiteral_X_12f30c0;
    break;
  case 0x79:
    puVar7 = (undefined8 *)&StringLiteral_Y_12f31b8;
    break;
  case 0x7a:
    puVar7 = (undefined8 *)&StringLiteral_Z_12f3208;
    break;
  case 0x7f:
    puVar7 = (undefined8 *)&StringLiteral_Del_12ed720;
    break;
  default:
    uVar3 = 0;
    switch(uVar1) {
    case 0x100:
      puVar7 = (undefined8 *)&StringLiteral_K0_12ef398;
      break;
    case 0x101:
      puVar7 = (undefined8 *)&StringLiteral_K1_12ef3a0;
      break;
    case 0x102:
      puVar7 = (undefined8 *)&StringLiteral_K2_12ef3a8;
      break;
    case 0x103:
      puVar7 = (undefined8 *)&StringLiteral_K3_12ef3b0;
      break;
    case 0x104:
      puVar7 = (undefined8 *)&StringLiteral_K4_12ef3b8;
      break;
    case 0x105:
      puVar7 = (undefined8 *)&StringLiteral_K5_12ef3c0;
      break;
    case 0x106:
      puVar7 = (undefined8 *)&StringLiteral_K6_12ef3c8;
      break;
    case 0x107:
      puVar7 = (undefined8 *)&StringLiteral_K7_12ef3d0;
      break;
    case 0x108:
      puVar7 = (undefined8 *)&StringLiteral_K8_12ef3d8;
      break;
    case 0x109:
      puVar7 = (undefined8 *)&StringLiteral_K9_12ef3e0;
      break;
    case 0x10a:
      puVar7 = (undefined8 *)&StringLiteral_K__12ef388;
      break;
    case 0x10b:
      puVar7 = (undefined8 *)&StringLiteral_K__12ef390;
      break;
    case 0x10c:
      puVar7 = (undefined8 *)&StringLiteral_K__12ef370;
      break;
    case 0x10d:
      puVar7 = (undefined8 *)&StringLiteral_K__12ef380;
      break;
    case 0x10e:
      puVar7 = (undefined8 *)&StringLiteral_K__12ef378;
      break;
    case 0x10f:
      puVar7 = (undefined8 *)&StringLiteral_KE_12ef3e8;
      break;
    case 0x110:
      puVar7 = (undefined8 *)&StringLiteral_KQ_12ef3f0;
      break;
    case 0x111:
      puVar7 = (undefined8 *)&StringLiteral_UP_12f29a8;
      break;
    case 0x112:
      puVar7 = (undefined8 *)&StringLiteral_DN_12ed588;
      break;
    case 0x113:
      puVar7 = (undefined8 *)&StringLiteral_LT_12ef4f0;
      break;
    case 0x114:
      puVar7 = (undefined8 *)&StringLiteral_RT_12f0868;
      break;
    case 0x115:
      puVar7 = (undefined8 *)&StringLiteral_Ins_12ee8f8;
      break;
    case 0x116:
      puVar7 = (undefined8 *)&StringLiteral_Home_12ee3c8;
      break;
    case 0x117:
      puVar7 = (undefined8 *)&StringLiteral_End_12eda90;
      break;
    case 0x118:
      puVar7 = (undefined8 *)&StringLiteral_PU_12f04a0;
      break;
    case 0x119:
      puVar7 = (undefined8 *)&StringLiteral_PD_12f0448;
      break;
    case 0x11a:
      puVar7 = (undefined8 *)&StringLiteral_F1_12edde0;
      break;
    case 0x11b:
      puVar7 = (undefined8 *)&StringLiteral_F2_12ede18;
      break;
    case 0x11c:
      puVar7 = (undefined8 *)&StringLiteral_F3_12ede20;
      break;
    case 0x11d:
      puVar7 = (undefined8 *)&StringLiteral_F4_12ede28;
      break;
    case 0x11e:
      puVar7 = (undefined8 *)&StringLiteral_F5_12ede30;
      break;
    case 0x11f:
      puVar7 = (undefined8 *)&StringLiteral_F6_12ede38;
      break;
    case 0x120:
      puVar7 = (undefined8 *)&StringLiteral_F7_12ede40;
      break;
    case 0x121:
      puVar7 = (undefined8 *)&StringLiteral_F8_12ede48;
      break;
    case 0x122:
      puVar7 = (undefined8 *)&StringLiteral_F9_12ede50;
      break;
    case 0x123:
      puVar7 = (undefined8 *)&StringLiteral_F10_12edde8;
      break;
    case 0x124:
      puVar7 = (undefined8 *)&StringLiteral_F11_12eddf0;
      break;
    case 0x125:
      puVar7 = (undefined8 *)&StringLiteral_F12_12eddf8;
      break;
    case 0x126:
      puVar7 = (undefined8 *)&StringLiteral_F13_12ede00;
      break;
    case 0x127:
      puVar7 = (undefined8 *)&StringLiteral_F14_12ede08;
      break;
    case 0x128:
      puVar7 = (undefined8 *)&StringLiteral_F15_12ede10;
      break;
    default:
      goto LAB_00734c68;
    case 300:
      puVar7 = (undefined8 *)&StringLiteral_Num_12effb8;
      break;
    case 0x12d:
      puVar7 = (undefined8 *)&StringLiteral_Cap_12ecf10;
      break;
    case 0x12e:
      puVar7 = (undefined8 *)&StringLiteral_Scr_12f0c90;
      break;
    case 0x12f:
      puVar7 = (undefined8 *)&StringLiteral_RS_12f0850;
      break;
    case 0x130:
      puVar7 = (undefined8 *)&StringLiteral_LS_12ef4e8;
      break;
    case 0x131:
      puVar7 = (undefined8 *)&StringLiteral_RC_12f07e0;
      break;
    case 0x132:
      puVar7 = (undefined8 *)&StringLiteral_LC_12ef4c8;
      break;
    case 0x133:
      puVar7 = (undefined8 *)&StringLiteral_RA_12f07d0;
      break;
    case 0x134:
      puVar7 = (undefined8 *)&StringLiteral_LA_12ef4c0;
      break;
    case 0x143:
      puVar7 = (undefined8 *)&StringLiteral_M0_12ef698;
      break;
    case 0x144:
      puVar7 = (undefined8 *)&StringLiteral_M1_12ef6a0;
      break;
    case 0x145:
      puVar7 = (undefined8 *)&StringLiteral_M2_12ef6a8;
      break;
    case 0x146:
      puVar7 = (undefined8 *)&StringLiteral_M3_12ef6b0;
      break;
    case 0x147:
      puVar7 = (undefined8 *)&StringLiteral_M4_12ef6b8;
      break;
    case 0x148:
      puVar7 = (undefined8 *)&StringLiteral_M5_12ef6c0;
      break;
    case 0x149:
      puVar7 = (undefined8 *)&StringLiteral_M6_12ef6c8;
      break;
    case 0x14a:
      puVar7 = (undefined8 *)&StringLiteral__A__12eb4a0;
      break;
    case 0x14b:
      puVar7 = (undefined8 *)&StringLiteral__B__12eb4a8;
      break;
    case 0x14c:
      puVar7 = (undefined8 *)&StringLiteral__X__12eb550;
      break;
    case 0x14d:
      puVar7 = (undefined8 *)&StringLiteral__Y__12eb558;
      break;
    case 0x14e:
      puVar7 = (undefined8 *)&StringLiteral__RB__12eb530;
      break;
    case 0x14f:
      puVar7 = (undefined8 *)&StringLiteral__LB__12eb4d8;
      break;
    case 0x150:
      puVar7 = (undefined8 *)&StringLiteral__Back__12eb4b0;
      break;
    case 0x151:
      puVar7 = (undefined8 *)&StringLiteral__Start__12eb540;
      break;
    case 0x152:
      puVar7 = (undefined8 *)&StringLiteral__LS__12eb4e0;
      break;
    case 0x153:
      puVar7 = (undefined8 *)&StringLiteral__RS__12eb538;
      break;
    case 0x154:
      puVar7 = (undefined8 *)&StringLiteral_J10_12ef298;
      break;
    case 0x155:
      puVar7 = (undefined8 *)&StringLiteral_J11_12ef2a0;
      break;
    case 0x156:
      puVar7 = (undefined8 *)&StringLiteral_J12_12ef2a8;
      break;
    case 0x157:
      puVar7 = (undefined8 *)&StringLiteral_J13_12ef2b0;
      break;
    case 0x158:
      puVar7 = (undefined8 *)&StringLiteral_J14_12ef2b8;
      break;
    case 0x159:
      puVar7 = (undefined8 *)&StringLiteral_J15_12ef2c0;
      break;
    case 0x15a:
      puVar7 = (undefined8 *)&StringLiteral_J16_12ef2c8;
      break;
    case 0x15b:
      puVar7 = (undefined8 *)&StringLiteral_J17_12ef2d0;
      break;
    case 0x15c:
      puVar7 = (undefined8 *)&StringLiteral_J18_12ef2d8;
      break;
    case 0x15d:
      puVar7 = (undefined8 *)&StringLiteral_J19_12ef2e0;
    }
  }
  uVar3 = *puVar7;
LAB_00734c68:
  return uVar3;
}



/* UIKeyBinding$$GetString @ 0xae5860
 * System_String_o* UIKeyBinding__GetString (int32_t keyCode, int32_t modifier, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIKeyBinding$$GetString
   System_String_o* UIKeyBinding__GetString (int32_t keyCode, int32_t modifier, const MethodInfo*
   method); */

undefined8 native_UIKeyBinding__GetString_ae5860(undefined4 param_1,int param_2)

{
  undefined8 uVar1;
  long *plVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iStack_24;
  
  iStack_24 = param_2;
  if ((bRam0000000001341fe6 & 1) == 0) {
    native_sub_43273c(&UIKeyBinding_Modifier_TypeInfo_12d7a68);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&StringLiteral___12eb600);
    bRam0000000001341fe6 = 1;
  }
  if (param_2 != 4) {
    plVar2 = (long *)native_sub_4327fc(_UIKeyBinding_Modifier_TypeInfo_12d7a68,&iStack_24);
    if (plVar2 != (long *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
      piVar3 = (int *)native_sub_432800(plVar2);
      iStack_24 = *piVar3;
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_NGUITools__KeyToCaption_7341ac(param_1,0);
      uVar1 = native_System_String__Concat_afc654(uVar1,_StringLiteral___12eb600,uVar4,0);
      return uVar1;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f5d0 & 1) == 0) {
    native_sub_43273c(&StringLiteral_F10_12edde8,0);
    native_sub_43273c(&StringLiteral_PD_12f0448);
    native_sub_43273c(&StringLiteral_M0_12ef698);
    native_sub_43273c(&StringLiteral_J16_12ef2c8);
    native_sub_43273c(&StringLiteral_S_12f0b70);
    native_sub_43273c(&StringLiteral___12f33a8);
    native_sub_43273c(&StringLiteral_J11_12ef2a0);
    native_sub_43273c(&StringLiteral___12eafe0);
    native_sub_43273c(&StringLiteral_J_12ef290);
    native_sub_43273c(&StringLiteral_K__12ef370);
    native_sub_43273c(&StringLiteral_K__12ef390);
    native_sub_43273c(&StringLiteral___12eaf78);
    native_sub_43273c(&StringLiteral_J14_12ef2b8);
    native_sub_43273c(&StringLiteral_RT_12f0868);
    native_sub_43273c(&StringLiteral_Home_12ee3c8);
    native_sub_43273c(&StringLiteral_Clear_12ed0d0);
    native_sub_43273c(&StringLiteral_LT_12ef4f0);
    native_sub_43273c(&StringLiteral_F4_12ede28);
    native_sub_43273c(&StringLiteral___12ebfd8);
    native_sub_43273c(&StringLiteral_3_12ebc10);
    native_sub_43273c(&StringLiteral___12eb600);
    native_sub_43273c(&StringLiteral_2_12ebb88);
    native_sub_43273c(&StringLiteral_Z_12f3208);
    native_sub_43273c(&StringLiteral_F2_12ede18);
    native_sub_43273c(&StringLiteral_RC_12f07e0);
    native_sub_43273c(&StringLiteral_M2_12ef6a8);
    native_sub_43273c(&StringLiteral_9_12ebc60);
    native_sub_43273c(&StringLiteral_K2_12ef3a8);
    native_sub_43273c(&StringLiteral_LC_12ef4c8);
    native_sub_43273c(&StringLiteral_RS_12f0850);
    native_sub_43273c(&StringLiteral_R_12f07c8);
    native_sub_43273c(&StringLiteral_KQ_12ef3f0);
    native_sub_43273c(&StringLiteral_F7_12ede40);
    native_sub_43273c(&StringLiteral_6_12ebc40);
    native_sub_43273c(&StringLiteral_J17_12ef2d0);
    native_sub_43273c(&StringLiteral_J15_12ef2c0);
    native_sub_43273c(&StringLiteral_M5_12ef6c0);
    native_sub_43273c(&StringLiteral_M3_12ef6b0);
    native_sub_43273c(&StringLiteral_K0_12ef398);
    native_sub_43273c(&StringLiteral_W_12f2f48);
    native_sub_43273c(&StringLiteral___12eb6c8);
    native_sub_43273c(&StringLiteral_J10_12ef298);
    native_sub_43273c(&StringLiteral_DN_12ed588);
    native_sub_43273c(&StringLiteral_Tab_12f1478);
    native_sub_43273c(&StringLiteral_K_12ef368);
    native_sub_43273c(&StringLiteral_G_12ee108);
    native_sub_43273c(&StringLiteral_LA_12ef4c0);
    native_sub_43273c(&StringLiteral_H_12ee270);
    native_sub_43273c(&StringLiteral_F13_12ede00);
    native_sub_43273c(&StringLiteral___12eb180);
    native_sub_43273c(&StringLiteral__LB__12eb4d8);
    native_sub_43273c(&StringLiteral_Q_12f0788);
    native_sub_43273c(&StringLiteral_Scr_12f0c90);
    native_sub_43273c(&StringLiteral_K1_12ef3a0);
    native_sub_43273c(&StringLiteral_K9_12ef3e0);
    native_sub_43273c(&StringLiteral_J18_12ef2d8);
    native_sub_43273c(&StringLiteral___12f34d0);
    native_sub_43273c(&StringLiteral_M6_12ef6c8);
    native_sub_43273c(&StringLiteral_U_12f2908);
    native_sub_43273c(&StringLiteral_V_12f2d80);
    native_sub_43273c(&StringLiteral___12f38a8);
    native_sub_43273c(&StringLiteral_K7_12ef3d0);
    native_sub_43273c(&StringLiteral_E_12ed8d0);
    native_sub_43273c(&StringLiteral_F15_12ede10);
    native_sub_43273c(&StringLiteral_F12_12eddf8);
    native_sub_43273c(&StringLiteral____12eb208);
    native_sub_43273c(&StringLiteral_Space_12f0f30);
    native_sub_43273c(&StringLiteral_I_12ee410);
    native_sub_43273c(&StringLiteral_Backspace_12ec700);
    native_sub_43273c(&StringLiteral_K8_12ef3d8);
    native_sub_43273c(&StringLiteral_Del_12ed720);
    native_sub_43273c(&StringLiteral___12ebd20);
    native_sub_43273c(&StringLiteral___12ebff8);
    native_sub_43273c(&StringLiteral_7_12ebc48);
    native_sub_43273c(&StringLiteral_4_12ebc20);
    native_sub_43273c(&StringLiteral_K6_12ef3c8);
    native_sub_43273c(&StringLiteral_K__12ef380);
    native_sub_43273c(&StringLiteral_F9_12ede50);
    native_sub_43273c(&StringLiteral_T_12f12c0);
    native_sub_43273c(&StringLiteral_M1_12ef6a0);
    native_sub_43273c(&StringLiteral___12f34b8);
    native_sub_43273c(&StringLiteral_L_12ef4b0);
    native_sub_43273c(&StringLiteral___12eb830);
    native_sub_43273c(&StringLiteral___12ebc70);
    native_sub_43273c(&StringLiteral___12eb148);
    native_sub_43273c(&StringLiteral_Esc_12edc70);
    native_sub_43273c(&StringLiteral__Back__12eb4b0);
    native_sub_43273c(&StringLiteral__A__12eb4a0);
    native_sub_43273c(&StringLiteral___12ebcf8);
    native_sub_43273c(&StringLiteral_Return_12f0b08);
    native_sub_43273c(&StringLiteral_O_12effd8);
    native_sub_43273c(&StringLiteral_J13_12ef2b0);
    native_sub_43273c(&StringLiteral__Start__12eb540);
    native_sub_43273c(&StringLiteral___12eb0c0);
    native_sub_43273c(&StringLiteral_D_12ed558);
    native_sub_43273c(&StringLiteral___12eb450);
    native_sub_43273c(&StringLiteral_Ins_12ee8f8);
    native_sub_43273c(&StringLiteral_F6_12ede38);
    native_sub_43273c(&StringLiteral_End_12eda90);
    native_sub_43273c(&StringLiteral_B_12ec6d8);
    native_sub_43273c(&StringLiteral__RS__12eb538);
    native_sub_43273c(&StringLiteral_8_12ebc50);
    native_sub_43273c(&StringLiteral_F3_12ede20);
    native_sub_43273c(&StringLiteral___12eb590);
    native_sub_43273c(&StringLiteral_KE_12ef3e8);
    native_sub_43273c(&StringLiteral_UP_12f29a8);
    native_sub_43273c(&StringLiteral__X__12eb550);
    native_sub_43273c(&StringLiteral___12ec010);
    native_sub_43273c(&StringLiteral_Num_12effb8);
    native_sub_43273c(&StringLiteral_LS_12ef4e8);
    native_sub_43273c(&StringLiteral_C_12ec9b0);
    native_sub_43273c(&StringLiteral_F5_12ede30);
    native_sub_43273c(&StringLiteral___12eb630);
    native_sub_43273c(&StringLiteral_F14_12ede08);
    native_sub_43273c(&StringLiteral__RB__12eb530);
    native_sub_43273c(&StringLiteral_Y_12f31b8);
    native_sub_43273c(&StringLiteral_F1_12edde0);
    native_sub_43273c(&StringLiteral_K__12ef388);
    native_sub_43273c(&StringLiteral_K__12ef378);
    native_sub_43273c(&StringLiteral_F11_12eddf0);
    native_sub_43273c(&StringLiteral_M4_12ef6b8);
    native_sub_43273c(&StringLiteral_K3_12ef3b0);
    native_sub_43273c(&StringLiteral_RA_12f07d0);
    native_sub_43273c(&StringLiteral__Y__12eb558);
    native_sub_43273c(&StringLiteral_F8_12ede48);
    native_sub_43273c(&StringLiteral_X_12f30c0);
    native_sub_43273c(&StringLiteral___12f3230);
    native_sub_43273c(&StringLiteral_J19_12ef2e0);
    native_sub_43273c(&StringLiteral_M_12ef690);
    native_sub_43273c(&StringLiteral_J12_12ef2a8);
    native_sub_43273c(&StringLiteral___12f3410);
    native_sub_43273c(&StringLiteral___12eb5f0);
    native_sub_43273c(&StringLiteral_N_12efba8);
    native_sub_43273c(&StringLiteral_PS_12f0498);
    native_sub_43273c(&StringLiteral_1_12eb968);
    native_sub_43273c(&StringLiteral_K5_12ef3c0);
    native_sub_43273c(&StringLiteral_A_12ec020);
    native_sub_43273c(&StringLiteral___12ebfe8);
    native_sub_43273c(&StringLiteral___12eb7a0);
    native_sub_43273c(&StringLiteral__B__12eb4a8);
    native_sub_43273c(&StringLiteral_K4_12ef3b8);
    native_sub_43273c(&StringLiteral_Cap_12ecf10);
    native_sub_43273c(&StringLiteral_5_12ebc38);
    native_sub_43273c(&StringLiteral_0_12eb8d8);
    native_sub_43273c(&StringLiteral_PU_12f04a0);
    native_sub_43273c(&StringLiteral__LS__12eb4e0);
    native_sub_43273c(&StringLiteral_P_12f0418);
    native_sub_43273c(&StringLiteral_F_12eddd8);
    bRam000000000133f5d0 = 1;
  }
  uVar1 = 0;
  switch(param_1) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 10:
  case 0xb:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x25:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
    goto LAB_00734c68;
  case 8:
    puVar5 = (undefined8 *)&StringLiteral_Backspace_12ec700;
    break;
  case 9:
    puVar5 = (undefined8 *)&StringLiteral_Tab_12f1478;
    break;
  case 0xc:
    puVar5 = (undefined8 *)&StringLiteral_Clear_12ed0d0;
    break;
  case 0xd:
    puVar5 = (undefined8 *)&StringLiteral_Return_12f0b08;
    break;
  case 0x13:
    puVar5 = (undefined8 *)&StringLiteral_PS_12f0498;
    break;
  case 0x1b:
    puVar5 = (undefined8 *)&StringLiteral_Esc_12edc70;
    break;
  case 0x20:
    puVar5 = (undefined8 *)&StringLiteral_Space_12f0f30;
    break;
  case 0x21:
    puVar5 = (undefined8 *)&StringLiteral___12eaf78;
    break;
  case 0x22:
    puVar5 = (undefined8 *)&StringLiteral____12eb208;
    break;
  case 0x23:
    puVar5 = (undefined8 *)&StringLiteral___12eafe0;
    break;
  case 0x24:
    puVar5 = (undefined8 *)&StringLiteral___12eb0c0;
    break;
  case 0x26:
    puVar5 = (undefined8 *)&StringLiteral___12eb148;
    break;
  case 0x27:
    puVar5 = (undefined8 *)&StringLiteral___12eb180;
    break;
  case 0x28:
    puVar5 = (undefined8 *)&StringLiteral___12eb450;
    break;
  case 0x29:
    puVar5 = (undefined8 *)&StringLiteral___12eb590;
    break;
  case 0x2a:
    puVar5 = (undefined8 *)&StringLiteral___12eb5f0;
    break;
  case 0x2b:
    puVar5 = (undefined8 *)&StringLiteral___12eb600;
    break;
  case 0x2c:
    puVar5 = (undefined8 *)&StringLiteral___12eb630;
    break;
  case 0x2d:
    puVar5 = (undefined8 *)&StringLiteral___12eb6c8;
    break;
  case 0x2e:
    puVar5 = (undefined8 *)&StringLiteral___12eb7a0;
    break;
  case 0x2f:
    puVar5 = (undefined8 *)&StringLiteral___12eb830;
    break;
  case 0x30:
    puVar5 = (undefined8 *)&StringLiteral_0_12eb8d8;
    break;
  case 0x31:
    puVar5 = (undefined8 *)&StringLiteral_1_12eb968;
    break;
  case 0x32:
    puVar5 = (undefined8 *)&StringLiteral_2_12ebb88;
    break;
  case 0x33:
    puVar5 = (undefined8 *)&StringLiteral_3_12ebc10;
    break;
  case 0x34:
    puVar5 = (undefined8 *)&StringLiteral_4_12ebc20;
    break;
  case 0x35:
    puVar5 = (undefined8 *)&StringLiteral_5_12ebc38;
    break;
  case 0x36:
    puVar5 = (undefined8 *)&StringLiteral_6_12ebc40;
    break;
  case 0x37:
    puVar5 = (undefined8 *)&StringLiteral_7_12ebc48;
    break;
  case 0x38:
    puVar5 = (undefined8 *)&StringLiteral_8_12ebc50;
    break;
  case 0x39:
    puVar5 = (undefined8 *)&StringLiteral_9_12ebc60;
    break;
  case 0x3a:
    puVar5 = (undefined8 *)&StringLiteral___12ebc70;
    break;
  case 0x3b:
    puVar5 = (undefined8 *)&StringLiteral___12ebcf8;
    break;
  case 0x3c:
    puVar5 = (undefined8 *)&StringLiteral___12ebd20;
    break;
  case 0x3d:
    puVar5 = (undefined8 *)&StringLiteral___12ebfd8;
    break;
  case 0x3e:
    puVar5 = (undefined8 *)&StringLiteral___12ebfe8;
    break;
  case 0x3f:
    puVar5 = (undefined8 *)&StringLiteral___12ebff8;
    break;
  case 0x40:
    puVar5 = (undefined8 *)&StringLiteral___12ec010;
    break;
  case 0x5b:
    puVar5 = (undefined8 *)&StringLiteral___12f3230;
    break;
  case 0x5c:
    puVar5 = (undefined8 *)&StringLiteral___12f33a8;
    break;
  case 0x5d:
    puVar5 = (undefined8 *)&StringLiteral___12f3410;
    break;
  case 0x5e:
    puVar5 = (undefined8 *)&StringLiteral___12f34b8;
    break;
  case 0x5f:
    puVar5 = (undefined8 *)&StringLiteral___12f34d0;
    break;
  case 0x60:
    puVar5 = (undefined8 *)&StringLiteral___12f38a8;
    break;
  case 0x61:
    puVar5 = (undefined8 *)&StringLiteral_A_12ec020;
    break;
  case 0x62:
    puVar5 = (undefined8 *)&StringLiteral_B_12ec6d8;
    break;
  case 99:
    puVar5 = (undefined8 *)&StringLiteral_C_12ec9b0;
    break;
  case 100:
    puVar5 = (undefined8 *)&StringLiteral_D_12ed558;
    break;
  case 0x65:
    puVar5 = (undefined8 *)&StringLiteral_E_12ed8d0;
    break;
  case 0x66:
    puVar5 = (undefined8 *)&StringLiteral_F_12eddd8;
    break;
  case 0x67:
    puVar5 = (undefined8 *)&StringLiteral_G_12ee108;
    break;
  case 0x68:
    puVar5 = (undefined8 *)&StringLiteral_H_12ee270;
    break;
  case 0x69:
    puVar5 = (undefined8 *)&StringLiteral_I_12ee410;
    break;
  case 0x6a:
    puVar5 = (undefined8 *)&StringLiteral_J_12ef290;
    break;
  case 0x6b:
    puVar5 = (undefined8 *)&StringLiteral_K_12ef368;
    break;
  case 0x6c:
    puVar5 = (undefined8 *)&StringLiteral_L_12ef4b0;
    break;
  case 0x6d:
    puVar5 = (undefined8 *)&StringLiteral_M_12ef690;
    break;
  case 0x6e:
    puVar5 = (undefined8 *)&StringLiteral_N_12efba8;
    break;
  case 0x6f:
    puVar5 = (undefined8 *)&StringLiteral_O_12effd8;
    break;
  case 0x70:
    puVar5 = (undefined8 *)&StringLiteral_P_12f0418;
    break;
  case 0x71:
    puVar5 = (undefined8 *)&StringLiteral_Q_12f0788;
    break;
  case 0x72:
    puVar5 = (undefined8 *)&StringLiteral_R_12f07c8;
    break;
  case 0x73:
    puVar5 = (undefined8 *)&StringLiteral_S_12f0b70;
    break;
  case 0x74:
    puVar5 = (undefined8 *)&StringLiteral_T_12f12c0;
    break;
  case 0x75:
    puVar5 = (undefined8 *)&StringLiteral_U_12f2908;
    break;
  case 0x76:
    puVar5 = (undefined8 *)&StringLiteral_V_12f2d80;
    break;
  case 0x77:
    puVar5 = (undefined8 *)&StringLiteral_W_12f2f48;
    break;
  case 0x78:
    puVar5 = (undefined8 *)&StringLiteral_X_12f30c0;
    break;
  case 0x79:
    puVar5 = (undefined8 *)&StringLiteral_Y_12f31b8;
    break;
  case 0x7a:
    puVar5 = (undefined8 *)&StringLiteral_Z_12f3208;
    break;
  case 0x7f:
    puVar5 = (undefined8 *)&StringLiteral_Del_12ed720;
    break;
  default:
    uVar1 = 0;
    switch(param_1) {
    case 0x100:
      puVar5 = (undefined8 *)&StringLiteral_K0_12ef398;
      break;
    case 0x101:
      puVar5 = (undefined8 *)&StringLiteral_K1_12ef3a0;
      break;
    case 0x102:
      puVar5 = (undefined8 *)&StringLiteral_K2_12ef3a8;
      break;
    case 0x103:
      puVar5 = (undefined8 *)&StringLiteral_K3_12ef3b0;
      break;
    case 0x104:
      puVar5 = (undefined8 *)&StringLiteral_K4_12ef3b8;
      break;
    case 0x105:
      puVar5 = (undefined8 *)&StringLiteral_K5_12ef3c0;
      break;
    case 0x106:
      puVar5 = (undefined8 *)&StringLiteral_K6_12ef3c8;
      break;
    case 0x107:
      puVar5 = (undefined8 *)&StringLiteral_K7_12ef3d0;
      break;
    case 0x108:
      puVar5 = (undefined8 *)&StringLiteral_K8_12ef3d8;
      break;
    case 0x109:
      puVar5 = (undefined8 *)&StringLiteral_K9_12ef3e0;
      break;
    case 0x10a:
      puVar5 = (undefined8 *)&StringLiteral_K__12ef388;
      break;
    case 0x10b:
      puVar5 = (undefined8 *)&StringLiteral_K__12ef390;
      break;
    case 0x10c:
      puVar5 = (undefined8 *)&StringLiteral_K__12ef370;
      break;
    case 0x10d:
      puVar5 = (undefined8 *)&StringLiteral_K__12ef380;
      break;
    case 0x10e:
      puVar5 = (undefined8 *)&StringLiteral_K__12ef378;
      break;
    case 0x10f:
      puVar5 = (undefined8 *)&StringLiteral_KE_12ef3e8;
      break;
    case 0x110:
      puVar5 = (undefined8 *)&StringLiteral_KQ_12ef3f0;
      break;
    case 0x111:
      puVar5 = (undefined8 *)&StringLiteral_UP_12f29a8;
      break;
    case 0x112:
      puVar5 = (undefined8 *)&StringLiteral_DN_12ed588;
      break;
    case 0x113:
      puVar5 = (undefined8 *)&StringLiteral_LT_12ef4f0;
      break;
    case 0x114:
      puVar5 = (undefined8 *)&StringLiteral_RT_12f0868;
      break;
    case 0x115:
      puVar5 = (undefined8 *)&StringLiteral_Ins_12ee8f8;
      break;
    case 0x116:
      puVar5 = (undefined8 *)&StringLiteral_Home_12ee3c8;
      break;
    case 0x117:
      puVar5 = (undefined8 *)&StringLiteral_End_12eda90;
      break;
    case 0x118:
      puVar5 = (undefined8 *)&StringLiteral_PU_12f04a0;
      break;
    case 0x119:
      puVar5 = (undefined8 *)&StringLiteral_PD_12f0448;
      break;
    case 0x11a:
      puVar5 = (undefined8 *)&StringLiteral_F1_12edde0;
      break;
    case 0x11b:
      puVar5 = (undefined8 *)&StringLiteral_F2_12ede18;
      break;
    case 0x11c:
      puVar5 = (undefined8 *)&StringLiteral_F3_12ede20;
      break;
    case 0x11d:
      puVar5 = (undefined8 *)&StringLiteral_F4_12ede28;
      break;
    case 0x11e:
      puVar5 = (undefined8 *)&StringLiteral_F5_12ede30;
      break;
    case 0x11f:
      puVar5 = (undefined8 *)&StringLiteral_F6_12ede38;
      break;
    case 0x120:
      puVar5 = (undefined8 *)&StringLiteral_F7_12ede40;
      break;
    case 0x121:
      puVar5 = (undefined8 *)&StringLiteral_F8_12ede48;
      break;
    case 0x122:
      puVar5 = (undefined8 *)&StringLiteral_F9_12ede50;
      break;
    case 0x123:
      puVar5 = (undefined8 *)&StringLiteral_F10_12edde8;
      break;
    case 0x124:
      puVar5 = (undefined8 *)&StringLiteral_F11_12eddf0;
      break;
    case 0x125:
      puVar5 = (undefined8 *)&StringLiteral_F12_12eddf8;
      break;
    case 0x126:
      puVar5 = (undefined8 *)&StringLiteral_F13_12ede00;
      break;
    case 0x127:
      puVar5 = (undefined8 *)&StringLiteral_F14_12ede08;
      break;
    case 0x128:
      puVar5 = (undefined8 *)&StringLiteral_F15_12ede10;
      break;
    default:
      goto LAB_00734c68;
    case 300:
      puVar5 = (undefined8 *)&StringLiteral_Num_12effb8;
      break;
    case 0x12d:
      puVar5 = (undefined8 *)&StringLiteral_Cap_12ecf10;
      break;
    case 0x12e:
      puVar5 = (undefined8 *)&StringLiteral_Scr_12f0c90;
      break;
    case 0x12f:
      puVar5 = (undefined8 *)&StringLiteral_RS_12f0850;
      break;
    case 0x130:
      puVar5 = (undefined8 *)&StringLiteral_LS_12ef4e8;
      break;
    case 0x131:
      puVar5 = (undefined8 *)&StringLiteral_RC_12f07e0;
      break;
    case 0x132:
      puVar5 = (undefined8 *)&StringLiteral_LC_12ef4c8;
      break;
    case 0x133:
      puVar5 = (undefined8 *)&StringLiteral_RA_12f07d0;
      break;
    case 0x134:
      puVar5 = (undefined8 *)&StringLiteral_LA_12ef4c0;
      break;
    case 0x143:
      puVar5 = (undefined8 *)&StringLiteral_M0_12ef698;
      break;
    case 0x144:
      puVar5 = (undefined8 *)&StringLiteral_M1_12ef6a0;
      break;
    case 0x145:
      puVar5 = (undefined8 *)&StringLiteral_M2_12ef6a8;
      break;
    case 0x146:
      puVar5 = (undefined8 *)&StringLiteral_M3_12ef6b0;
      break;
    case 0x147:
      puVar5 = (undefined8 *)&StringLiteral_M4_12ef6b8;
      break;
    case 0x148:
      puVar5 = (undefined8 *)&StringLiteral_M5_12ef6c0;
      break;
    case 0x149:
      puVar5 = (undefined8 *)&StringLiteral_M6_12ef6c8;
      break;
    case 0x14a:
      puVar5 = (undefined8 *)&StringLiteral__A__12eb4a0;
      break;
    case 0x14b:
      puVar5 = (undefined8 *)&StringLiteral__B__12eb4a8;
      break;
    case 0x14c:
      puVar5 = (undefined8 *)&StringLiteral__X__12eb550;
      break;
    case 0x14d:
      puVar5 = (undefined8 *)&StringLiteral__Y__12eb558;
      break;
    case 0x14e:
      puVar5 = (undefined8 *)&StringLiteral__RB__12eb530;
      break;
    case 0x14f:
      puVar5 = (undefined8 *)&StringLiteral__LB__12eb4d8;
      break;
    case 0x150:
      puVar5 = (undefined8 *)&StringLiteral__Back__12eb4b0;
      break;
    case 0x151:
      puVar5 = (undefined8 *)&StringLiteral__Start__12eb540;
      break;
    case 0x152:
      puVar5 = (undefined8 *)&StringLiteral__LS__12eb4e0;
      break;
    case 0x153:
      puVar5 = (undefined8 *)&StringLiteral__RS__12eb538;
      break;
    case 0x154:
      puVar5 = (undefined8 *)&StringLiteral_J10_12ef298;
      break;
    case 0x155:
      puVar5 = (undefined8 *)&StringLiteral_J11_12ef2a0;
      break;
    case 0x156:
      puVar5 = (undefined8 *)&StringLiteral_J12_12ef2a8;
      break;
    case 0x157:
      puVar5 = (undefined8 *)&StringLiteral_J13_12ef2b0;
      break;
    case 0x158:
      puVar5 = (undefined8 *)&StringLiteral_J14_12ef2b8;
      break;
    case 0x159:
      puVar5 = (undefined8 *)&StringLiteral_J15_12ef2c0;
      break;
    case 0x15a:
      puVar5 = (undefined8 *)&StringLiteral_J16_12ef2c8;
      break;
    case 0x15b:
      puVar5 = (undefined8 *)&StringLiteral_J17_12ef2d0;
      break;
    case 0x15c:
      puVar5 = (undefined8 *)&StringLiteral_J18_12ef2d8;
      break;
    case 0x15d:
      puVar5 = (undefined8 *)&StringLiteral_J19_12ef2e0;
    }
  }
  uVar1 = *puVar5;
LAB_00734c68:
  return uVar1;
}



/* UIKeyBinding$$GetKeyCode @ 0xae598c
 * bool UIKeyBinding__GetKeyCode (System_String_o* text, int32_t* key, int32_t* modifier, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIKeyBinding$$GetKeyCode
   bool UIKeyBinding__GetKeyCode (System_String_o* text, int32_t* key, int32_t* modifier, const
   MethodInfo* method); */

undefined8
native_UIKeyBinding__GetKeyCode_ae598c(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  short sVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [12];
  
  if ((bRam0000000001341fe7 & 1) == 0) {
    native_sub_43273c(&char___TypeInfo_12d3090);
    native_sub_43273c(&System_Enum_TypeInfo_12d4550);
    native_sub_43273c(&UIKeyBinding_Modifier_var_12d1ee8);
    native_sub_43273c(&UIKeyBinding_Modifier_TypeInfo_12d7a68);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    native_sub_43273c(&StringLiteral___12eb600);
    bRam0000000001341fe7 = 1;
  }
  *param_2 = 0;
  *param_3 = 4;
  uVar3 = native_System_String__IsNullOrEmpty_b09430(param_1,0);
  if ((uVar3 & 1) != 0) {
    return 1;
  }
  if (param_1 != 0) {
    if (((*(int *)(param_1 + 0x10) < 3) ||
        (uVar3 = native_System_String__Contains_b0bafc(param_1,_StringLiteral___12eb600,0),
        (uVar3 & 1) == 0)) ||
       (sVar1 = native_System_String__get_Chars_b03810(param_1,*(int *)(param_1 + 0x10) + -1,0),
       sVar1 == 0x2b)) {
      *param_3 = 4;
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_NGUITools__CaptionToKey_735004(param_1,0);
      *param_2 = uVar2;
      return 1;
    }
    lVar4 = native_sub_432750(_char___TypeInfo_12d3090,1);
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x18) != 0) {
        *(undefined2 *)(lVar4 + 0x20) = 0x2b;
        lVar4 = native_System_String__Split_b09878(param_1,lVar4,2,0);
        if (lVar4 == 0) goto LAB_00ae5bf4;
        if (1 < *(uint *)(lVar4 + 0x18)) {
          uVar10 = *(undefined8 *)(lVar4 + 0x28);
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar2 = native_NGUITools__CaptionToKey_735004(uVar10,0);
          *param_2 = uVar2;
          uVar10 = _UIKeyBinding_Modifier_var_12d1ee8;
          if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar10 = native_System_Type__GetTypeFromHandle_b0fb24(uVar10,0);
          if (*(int *)(lVar4 + 0x18) == 0) {
            uVar10 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar10,0);
          }
          uVar9 = *(undefined8 *)(lVar4 + 0x20);
          if (((*(byte *)(_System_Enum_TypeInfo_12d4550 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_System_Enum_TypeInfo_12d4550 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          plVar5 = (long *)native_System_Enum__Parse_bebc70(uVar10,uVar9,0);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          if (*(long *)(*plVar5 + 0x40) == *(long *)(_UIKeyBinding_Modifier_TypeInfo_12d7a68 + 0x40)
             ) {
            puVar6 = (undefined4 *)native_sub_432800();
            *param_3 = *puVar6;
            return 1;
          }
          auVar11 = native_sub_432b04();
          uVar10 = auVar11._0_8_;
          if (auVar11._8_4_ == 1) {
            puVar7 = (undefined8 *)func_0x002c9b00(uVar10);
            uVar10 = native_sub_432740(&System_Exception_TypeInfo_12d45d8);
            uVar3 = native_sub_432b78(uVar10,*(undefined8 *)*puVar7);
            if ((uVar3 & 1) != 0) {
              func_0x002ca530();
              return 0;
            }
            puVar8 = (undefined8 *)func_0x002c94a0(8);
            *puVar8 = *puVar7;
            uVar10 = func_0x002c9530(puVar8,&PTR__ZTVN10__cxxabiv117__class_type_infoE_16__012236e8,
                                     0);
            func_0x002ca530();
          }
          func_0x002ca1e0(uVar10);
          native_sub_31dbc4();
          if ((bRam0000000001341fe8 & 1) == 0) {
            native_sub_43273c(&UICamera_TypeInfo_12d6410);
            bRam0000000001341fe8 = 1;
          }
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar4 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
          if (lVar4 != 0) {
            uVar3 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar4,0x134,0);
            if ((uVar3 & 1) != 0) {
              return 3;
            }
            if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            lVar4 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
            if (lVar4 != 0) {
              uVar3 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar4,0x133,0);
              if ((uVar3 & 1) != 0) {
                return 3;
              }
              if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              lVar4 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
              if (lVar4 != 0) {
                uVar3 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar4,0x130,0);
                if ((uVar3 & 1) != 0) {
                  return 1;
                }
                if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                lVar4 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
                if (lVar4 != 0) {
                  uVar3 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar4,0x12f,0);
                  if ((uVar3 & 1) != 0) {
                    return 1;
                  }
                  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  lVar4 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
                  if (lVar4 != 0) {
                    uVar3 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar4,0x132,0);
                    if ((uVar3 & 1) == 0) {
                      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      lVar4 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
                      if (lVar4 == 0) goto LAB_00ae5e44;
                      uVar3 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar4,0x131,0);
                      if ((uVar3 & 1) == 0) {
                        return 4;
                      }
                    }
                    return 2;
                  }
                }
              }
            }
          }
LAB_00ae5e44:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
      }
      uVar10 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar10,0);
    }
  }
LAB_00ae5bf4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIKeyBinding$$GetActiveModifier @ 0xae5c98
 * int32_t UIKeyBinding__GetActiveModifier (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIKeyBinding$$GetActiveModifier
   int32_t UIKeyBinding__GetActiveModifier (const MethodInfo* method); */

undefined8 native_UIKeyBinding__GetActiveModifier_ae5c98(void)

{
  long lVar1;
  ulong uVar2;
  
  if ((bRam0000000001341fe8 & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam0000000001341fe8 = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar1 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
  if (lVar1 != 0) {
    uVar2 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar1,0x134,0);
    if ((uVar2 & 1) != 0) {
      return 3;
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar1 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
    if (lVar1 != 0) {
      uVar2 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar1,0x133,0);
      if ((uVar2 & 1) != 0) {
        return 3;
      }
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar1 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
      if (lVar1 != 0) {
        uVar2 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar1,0x130,0);
        if ((uVar2 & 1) != 0) {
          return 1;
        }
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar1 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
        if (lVar1 != 0) {
          uVar2 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar1,0x12f,0);
          if ((uVar2 & 1) != 0) {
            return 1;
          }
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar1 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
          if (lVar1 != 0) {
            uVar2 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar1,0x132,0);
            if ((uVar2 & 1) == 0) {
              if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              lVar1 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
              if (lVar1 == 0) goto LAB_00ae5e44;
              uVar2 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar1,0x131,0);
              if ((uVar2 & 1) == 0) {
                return 4;
              }
            }
            return 2;
          }
        }
      }
    }
  }
LAB_00ae5e44:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIKeyBinding$$.ctor @ 0xae5e48
 * void UIKeyBinding___ctor (UIKeyBinding_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIKeyBinding$$.ctor
   void UIKeyBinding___ctor (UIKeyBinding_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIKeyBinding___ctor_ae5e48(ulong param_1)

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



/* UIKeyBinding$$.cctor @ 0xae5e50
 * void UIKeyBinding___cctor (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIKeyBinding$$.cctor
   void UIKeyBinding___cctor (const MethodInfo* method); */

void native_UIKeyBinding___cctor_ae5e50(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((bRam0000000001341fe9 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UIKeyBinding___ctor___12dd2d8);
    native_sub_43273c(&System_Collections_Generic_List_UIKeyBinding__TypeInfo_12d2c10);
    native_sub_43273c(&UIKeyBinding_TypeInfo_12d6458);
    bRam0000000001341fe9 = 1;
  }
  uVar4 = native_sub_432808(_System_Collections_Generic_List_UIKeyBinding__TypeInfo_12d2c10);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar4,_Method_System_Collections_Generic_List_UIKeyBinding___ctor___12dd2d8);
  puVar5 = *(undefined8 **)(_UIKeyBinding_TypeInfo_12d6458 + 0xb8);
  *puVar5 = uVar4;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


