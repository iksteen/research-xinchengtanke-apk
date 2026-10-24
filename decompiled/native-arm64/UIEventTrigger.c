/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIEventTrigger$$get_isColliderEnabled @ 0x9ea550
 * bool UIEventTrigger__get_isColliderEnabled (UIEventTrigger_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEventTrigger$$get_isColliderEnabled
   bool UIEventTrigger__get_isColliderEnabled (UIEventTrigger_o* __this, const MethodInfo* method);
    */

undefined8 native_UIEventTrigger__get_isColliderEnabled_9ea550(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((bRam000000000134191b & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134191b = 1;
  }
  lVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar1,0,0);
  if ((uVar2 & 1) == 0) {
    lVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_1,_Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar1,0,0);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    if (lVar1 != 0) {
      if (pcRam0000000001340940 == (code *)0x0) {
        pcRam0000000001340940 = (code *)native_sub_4326f0(&UNK_00e2c6dd);
      }
                    /* WARNING: Could not recover jumptable at 0x008d7b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*pcRam0000000001340940)(lVar1);
      return uVar3;
    }
  }
  else if (lVar1 != 0) {
    if (pcRam0000000001343a68 == (code *)0x0) {
      pcRam0000000001343a68 = (code *)native_sub_4326f0(&UNK_00ecb640);
    }
                    /* WARNING: Could not recover jumptable at 0x00dbac48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*pcRam0000000001343a68)(lVar1);
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIEventTrigger$$OnHover @ 0x9ea684
 * void UIEventTrigger__OnHover (UIEventTrigger_o* __this, bool isOver, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEventTrigger$$OnHover
   void UIEventTrigger__OnHover (UIEventTrigger_o* __this, bool isOver, const MethodInfo* method);
    */

void native_UIEventTrigger__OnHover_9ea684(long param_1,ulong param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if ((bRam000000000134191c & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIEventTrigger_TypeInfo_12d6440);
    bRam000000000134191c = 1;
  }
  uVar7 = **(undefined8 **)(_UIEventTrigger_TypeInfo_12d6440 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  if (((uVar4 & 1) == 0) &&
     (uVar4 = native_UIEventTrigger__get_isColliderEnabled_9ea550(param_1), (uVar4 & 1) != 0)) {
    plVar5 = *(long **)(_UIEventTrigger_TypeInfo_12d6440 + 0xb8);
    *plVar5 = param_1;
    native_sub_4326e0(plVar5,param_1);
    if ((param_2 & 1) == 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + 0x18);
    }
    if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_EventDelegate__Execute_deecbc(uVar7,0);
    puVar6 = *(undefined8 **)(_UIEventTrigger_TypeInfo_12d6440 + 0xb8);
    *puVar6 = 0;
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  return;
}



/* UIEventTrigger$$OnPress @ 0x9ea7ac
 * void UIEventTrigger__OnPress (UIEventTrigger_o* __this, bool pressed, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEventTrigger$$OnPress
   void UIEventTrigger__OnPress (UIEventTrigger_o* __this, bool pressed, const MethodInfo* method);
    */

void native_UIEventTrigger__OnPress_9ea7ac(long param_1,ulong param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if ((bRam000000000134191d & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIEventTrigger_TypeInfo_12d6440);
    bRam000000000134191d = 1;
  }
  uVar7 = **(undefined8 **)(_UIEventTrigger_TypeInfo_12d6440 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  if (((uVar4 & 1) == 0) &&
     (uVar4 = native_UIEventTrigger__get_isColliderEnabled_9ea550(param_1), (uVar4 & 1) != 0)) {
    plVar5 = *(long **)(_UIEventTrigger_TypeInfo_12d6440 + 0xb8);
    *plVar5 = param_1;
    native_sub_4326e0(plVar5,param_1);
    if ((param_2 & 1) == 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x30);
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + 0x28);
    }
    if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_EventDelegate__Execute_deecbc(uVar7,0);
    puVar6 = *(undefined8 **)(_UIEventTrigger_TypeInfo_12d6440 + 0xb8);
    *puVar6 = 0;
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  return;
}



/* UIEventTrigger$$OnSelect @ 0x9ea8d4
 * void UIEventTrigger__OnSelect (UIEventTrigger_o* __this, bool selected, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEventTrigger$$OnSelect
   void UIEventTrigger__OnSelect (UIEventTrigger_o* __this, bool selected, const MethodInfo*
   method); */

void native_UIEventTrigger__OnSelect_9ea8d4(long param_1,ulong param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if ((bRam000000000134191e & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIEventTrigger_TypeInfo_12d6440);
    bRam000000000134191e = 1;
  }
  uVar7 = **(undefined8 **)(_UIEventTrigger_TypeInfo_12d6440 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  if (((uVar4 & 1) == 0) &&
     (uVar4 = native_UIEventTrigger__get_isColliderEnabled_9ea550(param_1), (uVar4 & 1) != 0)) {
    plVar5 = *(long **)(_UIEventTrigger_TypeInfo_12d6440 + 0xb8);
    *plVar5 = param_1;
    native_sub_4326e0(plVar5,param_1);
    if ((param_2 & 1) == 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x40);
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + 0x38);
    }
    if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_EventDelegate__Execute_deecbc(uVar7,0);
    puVar6 = *(undefined8 **)(_UIEventTrigger_TypeInfo_12d6440 + 0xb8);
    *puVar6 = 0;
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  return;
}



/* UIEventTrigger$$OnClick @ 0x9ea9fc
 * void UIEventTrigger__OnClick (UIEventTrigger_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEventTrigger$$OnClick
   void UIEventTrigger__OnClick (UIEventTrigger_o* __this, const MethodInfo* method); */

void native_UIEventTrigger__OnClick_9ea9fc(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if ((bRam000000000134191f & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIEventTrigger_TypeInfo_12d6440);
    bRam000000000134191f = 1;
  }
  uVar7 = **(undefined8 **)(_UIEventTrigger_TypeInfo_12d6440 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  if (((uVar4 & 1) == 0) &&
     (uVar4 = native_UIEventTrigger__get_isColliderEnabled_9ea550(param_1), (uVar4 & 1) != 0)) {
    plVar5 = *(long **)(_UIEventTrigger_TypeInfo_12d6440 + 0xb8);
    *plVar5 = param_1;
    native_sub_4326e0(plVar5,param_1);
    uVar7 = *(undefined8 *)(param_1 + 0x48);
    if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_EventDelegate__Execute_deecbc(uVar7,0);
    puVar6 = *(undefined8 **)(_UIEventTrigger_TypeInfo_12d6440 + 0xb8);
    *puVar6 = 0;
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  return;
}



/* UIEventTrigger$$OnDoubleClick @ 0x9eab10
 * void UIEventTrigger__OnDoubleClick (UIEventTrigger_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEventTrigger$$OnDoubleClick
   void UIEventTrigger__OnDoubleClick (UIEventTrigger_o* __this, const MethodInfo* method); */

void native_UIEventTrigger__OnDoubleClick_9eab10(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if ((bRam0000000001341920 & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIEventTrigger_TypeInfo_12d6440);
    bRam0000000001341920 = 1;
  }
  uVar7 = **(undefined8 **)(_UIEventTrigger_TypeInfo_12d6440 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  if (((uVar4 & 1) == 0) &&
     (uVar4 = native_UIEventTrigger__get_isColliderEnabled_9ea550(param_1), (uVar4 & 1) != 0)) {
    plVar5 = *(long **)(_UIEventTrigger_TypeInfo_12d6440 + 0xb8);
    *plVar5 = param_1;
    native_sub_4326e0(plVar5,param_1);
    uVar7 = *(undefined8 *)(param_1 + 0x50);
    if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_EventDelegate__Execute_deecbc(uVar7,0);
    puVar6 = *(undefined8 **)(_UIEventTrigger_TypeInfo_12d6440 + 0xb8);
    *puVar6 = 0;
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  return;
}



/* UIEventTrigger$$OnDragStart @ 0x9eac24
 * void UIEventTrigger__OnDragStart (UIEventTrigger_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEventTrigger$$OnDragStart
   void UIEventTrigger__OnDragStart (UIEventTrigger_o* __this, const MethodInfo* method); */

void native_UIEventTrigger__OnDragStart_9eac24(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if ((bRam0000000001341921 & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIEventTrigger_TypeInfo_12d6440);
    bRam0000000001341921 = 1;
  }
  uVar7 = **(undefined8 **)(_UIEventTrigger_TypeInfo_12d6440 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  plVar5 = *(long **)(_UIEventTrigger_TypeInfo_12d6440 + 0xb8);
  *plVar5 = param_1;
  native_sub_4326e0(plVar5,param_1);
  uVar7 = *(undefined8 *)(param_1 + 0x58);
  if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_EventDelegate__Execute_deecbc(uVar7,0);
  puVar6 = *(undefined8 **)(_UIEventTrigger_TypeInfo_12d6440 + 0xb8);
  *puVar6 = 0;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* UIEventTrigger$$OnDragEnd @ 0x9ead2c
 * void UIEventTrigger__OnDragEnd (UIEventTrigger_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEventTrigger$$OnDragEnd
   void UIEventTrigger__OnDragEnd (UIEventTrigger_o* __this, const MethodInfo* method); */

void native_UIEventTrigger__OnDragEnd_9ead2c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if ((bRam0000000001341922 & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIEventTrigger_TypeInfo_12d6440);
    bRam0000000001341922 = 1;
  }
  uVar7 = **(undefined8 **)(_UIEventTrigger_TypeInfo_12d6440 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  plVar5 = *(long **)(_UIEventTrigger_TypeInfo_12d6440 + 0xb8);
  *plVar5 = param_1;
  native_sub_4326e0(plVar5,param_1);
  uVar7 = *(undefined8 *)(param_1 + 0x60);
  if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_EventDelegate__Execute_deecbc(uVar7,0);
  puVar6 = *(undefined8 **)(_UIEventTrigger_TypeInfo_12d6440 + 0xb8);
  *puVar6 = 0;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* UIEventTrigger$$OnDragOver @ 0x9eae34
 * void UIEventTrigger__OnDragOver (UIEventTrigger_o* __this, UnityEngine_GameObject_o* go, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEventTrigger$$OnDragOver
   void UIEventTrigger__OnDragOver (UIEventTrigger_o* __this, UnityEngine_GameObject_o* go, const
   MethodInfo* method); */

void native_UIEventTrigger__OnDragOver_9eae34(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if ((bRam0000000001341923 & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIEventTrigger_TypeInfo_12d6440);
    bRam0000000001341923 = 1;
  }
  uVar7 = **(undefined8 **)(_UIEventTrigger_TypeInfo_12d6440 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  if (((uVar4 & 1) == 0) &&
     (uVar4 = native_UIEventTrigger__get_isColliderEnabled_9ea550(param_1), (uVar4 & 1) != 0)) {
    plVar5 = *(long **)(_UIEventTrigger_TypeInfo_12d6440 + 0xb8);
    *plVar5 = param_1;
    native_sub_4326e0(plVar5,param_1);
    uVar7 = *(undefined8 *)(param_1 + 0x68);
    if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_EventDelegate__Execute_deecbc(uVar7,0);
    puVar6 = *(undefined8 **)(_UIEventTrigger_TypeInfo_12d6440 + 0xb8);
    *puVar6 = 0;
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  return;
}



/* UIEventTrigger$$OnDragOut @ 0x9eaf48
 * void UIEventTrigger__OnDragOut (UIEventTrigger_o* __this, UnityEngine_GameObject_o* go, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEventTrigger$$OnDragOut
   void UIEventTrigger__OnDragOut (UIEventTrigger_o* __this, UnityEngine_GameObject_o* go, const
   MethodInfo* method); */

void native_UIEventTrigger__OnDragOut_9eaf48(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if ((bRam0000000001341924 & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIEventTrigger_TypeInfo_12d6440);
    bRam0000000001341924 = 1;
  }
  uVar7 = **(undefined8 **)(_UIEventTrigger_TypeInfo_12d6440 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  if (((uVar4 & 1) == 0) &&
     (uVar4 = native_UIEventTrigger__get_isColliderEnabled_9ea550(param_1), (uVar4 & 1) != 0)) {
    plVar5 = *(long **)(_UIEventTrigger_TypeInfo_12d6440 + 0xb8);
    *plVar5 = param_1;
    native_sub_4326e0(plVar5,param_1);
    uVar7 = *(undefined8 *)(param_1 + 0x70);
    if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_EventDelegate__Execute_deecbc(uVar7,0);
    puVar6 = *(undefined8 **)(_UIEventTrigger_TypeInfo_12d6440 + 0xb8);
    *puVar6 = 0;
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  return;
}



/* UIEventTrigger$$OnDrag @ 0x9eb05c
 * void UIEventTrigger__OnDrag (UIEventTrigger_o* __this, UnityEngine_Vector2_o delta, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEventTrigger$$OnDrag
   void UIEventTrigger__OnDrag (UIEventTrigger_o* __this, UnityEngine_Vector2_o delta, const
   MethodInfo* method); */

void native_UIEventTrigger__OnDrag_9eb05c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if ((bRam0000000001341925 & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIEventTrigger_TypeInfo_12d6440);
    bRam0000000001341925 = 1;
  }
  uVar7 = **(undefined8 **)(_UIEventTrigger_TypeInfo_12d6440 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  plVar5 = *(long **)(_UIEventTrigger_TypeInfo_12d6440 + 0xb8);
  *plVar5 = param_1;
  native_sub_4326e0(plVar5,param_1);
  uVar7 = *(undefined8 *)(param_1 + 0x78);
  if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_EventDelegate__Execute_deecbc(uVar7,0);
  puVar6 = *(undefined8 **)(_UIEventTrigger_TypeInfo_12d6440 + 0xb8);
  *puVar6 = 0;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* UIEventTrigger$$.ctor @ 0x9eb164
 * void UIEventTrigger___ctor (UIEventTrigger_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIEventTrigger$$.ctor
   void UIEventTrigger___ctor (UIEventTrigger_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIEventTrigger___ctor_9eb164(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000001341926 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
    native_sub_43273c(&System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
    bRam0000000001341926 = 1;
  }
  uVar1 = native_sub_432808(_System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  native_sub_4326e0((undefined8 *)(param_1 + 0x18),uVar1);
  uVar1 = native_sub_432808(_System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  native_sub_4326e0(param_1 + 0x20,uVar1);
  uVar1 = native_sub_432808(_System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  native_sub_4326e0(param_1 + 0x28,uVar1);
  uVar1 = native_sub_432808(_System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  native_sub_4326e0(param_1 + 0x30,uVar1);
  uVar1 = native_sub_432808(_System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  native_sub_4326e0(param_1 + 0x38,uVar1);
  uVar1 = native_sub_432808(_System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  native_sub_4326e0(param_1 + 0x40,uVar1);
  uVar1 = native_sub_432808(_System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  native_sub_4326e0(param_1 + 0x48,uVar1);
  uVar1 = native_sub_432808(_System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  native_sub_4326e0(param_1 + 0x50,uVar1);
  uVar1 = native_sub_432808(_System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  native_sub_4326e0(param_1 + 0x58,uVar1);
  uVar1 = native_sub_432808(_System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  native_sub_4326e0(param_1 + 0x60,uVar1);
  uVar1 = native_sub_432808(_System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  native_sub_4326e0(param_1 + 0x68,uVar1);
  uVar1 = native_sub_432808(_System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  native_sub_4326e0(param_1 + 0x70,uVar1);
  uVar1 = native_sub_432808(_System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  native_sub_4326e0(param_1 + 0x78,uVar1);
  if ((bRam0000000001340ae0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001340ae0 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}


