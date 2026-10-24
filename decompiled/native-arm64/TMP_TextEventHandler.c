/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.TMP_TextEventHandler$$get_onCharacterSelection @ 0x6dbec8
 * TMPro_TMP_TextEventHandler_CharacterSelectionEvent_o* TMPro_TMP_TextEventHandler__get_onCharacterSelection (TMPro_TMP_TextEventHandler_o* __this, const MethodInfo* method); */

/* TMPro.TMP_TextEventHandler$$get_onCharacterSelection
   TMPro_TMP_TextEventHandler_CharacterSelectionEvent_o*
   TMPro_TMP_TextEventHandler__get_onCharacterSelection (TMPro_TMP_TextEventHandler_o* __this, const
   MethodInfo* method); */

undefined8 native_TMPro_TMP_TextEventHandler__get_onCharacterSelection_6dbec8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* TMPro.TMP_TextEventHandler$$set_onCharacterSelection @ 0x6dbed0
 * void TMPro_TMP_TextEventHandler__set_onCharacterSelection (TMPro_TMP_TextEventHandler_o* __this, TMPro_TMP_TextEventHandler_CharacterSelectionEvent_o* value, const MethodInfo* method); */

/* TMPro.TMP_TextEventHandler$$set_onCharacterSelection
   void TMPro_TMP_TextEventHandler__set_onCharacterSelection (TMPro_TMP_TextEventHandler_o* __this,
   TMPro_TMP_TextEventHandler_CharacterSelectionEvent_o* value, const MethodInfo* method); */

void native_TMPro_TMP_TextEventHandler__set_onCharacterSelection_6dbed0
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x18);
  *puVar4 = param_2;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* TMPro.TMP_TextEventHandler$$get_onSpriteSelection @ 0x6dbed8
 * TMPro_TMP_TextEventHandler_SpriteSelectionEvent_o* TMPro_TMP_TextEventHandler__get_onSpriteSelection (TMPro_TMP_TextEventHandler_o* __this, const MethodInfo* method); */

/* TMPro.TMP_TextEventHandler$$get_onSpriteSelection
   TMPro_TMP_TextEventHandler_SpriteSelectionEvent_o*
   TMPro_TMP_TextEventHandler__get_onSpriteSelection (TMPro_TMP_TextEventHandler_o* __this, const
   MethodInfo* method); */

undefined8 native_TMPro_TMP_TextEventHandler__get_onSpriteSelection_6dbed8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* TMPro.TMP_TextEventHandler$$set_onSpriteSelection @ 0x6dbee0
 * void TMPro_TMP_TextEventHandler__set_onSpriteSelection (TMPro_TMP_TextEventHandler_o* __this, TMPro_TMP_TextEventHandler_SpriteSelectionEvent_o* value, const MethodInfo* method); */

/* TMPro.TMP_TextEventHandler$$set_onSpriteSelection
   void TMPro_TMP_TextEventHandler__set_onSpriteSelection (TMPro_TMP_TextEventHandler_o* __this,
   TMPro_TMP_TextEventHandler_SpriteSelectionEvent_o* value, const MethodInfo* method); */

void native_TMPro_TMP_TextEventHandler__set_onSpriteSelection_6dbee0
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x20);
  *puVar4 = param_2;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* TMPro.TMP_TextEventHandler$$get_onWordSelection @ 0x6dbee8
 * TMPro_TMP_TextEventHandler_WordSelectionEvent_o* TMPro_TMP_TextEventHandler__get_onWordSelection (TMPro_TMP_TextEventHandler_o* __this, const MethodInfo* method); */

/* TMPro.TMP_TextEventHandler$$get_onWordSelection
   TMPro_TMP_TextEventHandler_WordSelectionEvent_o* TMPro_TMP_TextEventHandler__get_onWordSelection
   (TMPro_TMP_TextEventHandler_o* __this, const MethodInfo* method); */

undefined8 native_TMPro_TMP_TextEventHandler__get_onWordSelection_6dbee8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* TMPro.TMP_TextEventHandler$$set_onWordSelection @ 0x6dbef0
 * void TMPro_TMP_TextEventHandler__set_onWordSelection (TMPro_TMP_TextEventHandler_o* __this, TMPro_TMP_TextEventHandler_WordSelectionEvent_o* value, const MethodInfo* method); */

/* TMPro.TMP_TextEventHandler$$set_onWordSelection
   void TMPro_TMP_TextEventHandler__set_onWordSelection (TMPro_TMP_TextEventHandler_o* __this,
   TMPro_TMP_TextEventHandler_WordSelectionEvent_o* value, const MethodInfo* method); */

void native_TMPro_TMP_TextEventHandler__set_onWordSelection_6dbef0(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x28);
  *puVar4 = param_2;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* TMPro.TMP_TextEventHandler$$get_onLineSelection @ 0x6dbef8
 * TMPro_TMP_TextEventHandler_LineSelectionEvent_o* TMPro_TMP_TextEventHandler__get_onLineSelection (TMPro_TMP_TextEventHandler_o* __this, const MethodInfo* method); */

/* TMPro.TMP_TextEventHandler$$get_onLineSelection
   TMPro_TMP_TextEventHandler_LineSelectionEvent_o* TMPro_TMP_TextEventHandler__get_onLineSelection
   (TMPro_TMP_TextEventHandler_o* __this, const MethodInfo* method); */

undefined8 native_TMPro_TMP_TextEventHandler__get_onLineSelection_6dbef8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* TMPro.TMP_TextEventHandler$$set_onLineSelection @ 0x6dbf00
 * void TMPro_TMP_TextEventHandler__set_onLineSelection (TMPro_TMP_TextEventHandler_o* __this, TMPro_TMP_TextEventHandler_LineSelectionEvent_o* value, const MethodInfo* method); */

/* TMPro.TMP_TextEventHandler$$set_onLineSelection
   void TMPro_TMP_TextEventHandler__set_onLineSelection (TMPro_TMP_TextEventHandler_o* __this,
   TMPro_TMP_TextEventHandler_LineSelectionEvent_o* value, const MethodInfo* method); */

void native_TMPro_TMP_TextEventHandler__set_onLineSelection_6dbf00(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x30);
  *puVar4 = param_2;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* TMPro.TMP_TextEventHandler$$get_onLinkSelection @ 0x6dbf08
 * TMPro_TMP_TextEventHandler_LinkSelectionEvent_o* TMPro_TMP_TextEventHandler__get_onLinkSelection (TMPro_TMP_TextEventHandler_o* __this, const MethodInfo* method); */

/* TMPro.TMP_TextEventHandler$$get_onLinkSelection
   TMPro_TMP_TextEventHandler_LinkSelectionEvent_o* TMPro_TMP_TextEventHandler__get_onLinkSelection
   (TMPro_TMP_TextEventHandler_o* __this, const MethodInfo* method); */

undefined8 native_TMPro_TMP_TextEventHandler__get_onLinkSelection_6dbf08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* TMPro.TMP_TextEventHandler$$set_onLinkSelection @ 0x6dbf10
 * void TMPro_TMP_TextEventHandler__set_onLinkSelection (TMPro_TMP_TextEventHandler_o* __this, TMPro_TMP_TextEventHandler_LinkSelectionEvent_o* value, const MethodInfo* method); */

/* TMPro.TMP_TextEventHandler$$set_onLinkSelection
   void TMPro_TMP_TextEventHandler__set_onLinkSelection (TMPro_TMP_TextEventHandler_o* __this,
   TMPro_TMP_TextEventHandler_LinkSelectionEvent_o* value, const MethodInfo* method); */

void native_TMPro_TMP_TextEventHandler__set_onLinkSelection_6dbf10(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x38);
  *puVar4 = param_2;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* TMPro.TMP_TextEventHandler$$Awake @ 0x6dbf18
 * void TMPro_TMP_TextEventHandler__Awake (TMPro_TMP_TextEventHandler_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.TMP_TextEventHandler$$Awake
   void TMPro_TMP_TextEventHandler__Awake (TMPro_TMP_TextEventHandler_o* __this, const MethodInfo*
   method); */

void native_TMPro_TMP_TextEventHandler__Awake_6dbf18(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  
  if ((bRam000000000133f361 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentInParent_Canvas____12e4b28);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_TMP_Text____12e4a50);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&TMPro_TextMeshProUGUI_var_12d18d0);
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    bRam000000000133f361 = 1;
  }
  lVar5 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  if (lVar5 == 0) {
LAB_006dc0ec:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar5 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                    (lVar5,_Method_UnityEngine_GameObject_GetComponent_TMP_Text____12e4a50);
  plVar9 = (long *)(param_1 + 0x40);
  *plVar9 = lVar5;
  native_sub_4326e0(plVar9,lVar5);
  if (*plVar9 == 0) goto LAB_006dc0ec;
  uVar6 = native_System_Object__GetType_adb48c(*plVar9,0);
  uVar7 = _TMPro_TextMeshProUGUI_var_12d18d0;
  if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
    native_sub_4327ec(_System_Type_TypeInfo_12d6340);
  }
  uVar7 = native_System_Type__GetTypeFromHandle_b0fb24(uVar7,0);
  uVar8 = native_System_Type__op_Equality_b117c4(uVar6,uVar7,0);
  if ((uVar8 & 1) == 0) {
    uVar7 = native_UnityEngine_Camera__get_main_8d93c0(0);
  }
  else {
    lVar5 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (lVar5 == 0) goto LAB_006dc0ec;
    lVar5 = native_UnityEngine_GameObject__GetComponentInParent_Canvas__4a23c0
                      (lVar5,_Method_UnityEngine_GameObject_GetComponentInParent_Canvas____12e4b28);
    plVar9 = (long *)(param_1 + 0x50);
    *plVar9 = lVar5;
    native_sub_4326e0(plVar9,lVar5);
    lVar5 = *plVar9;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar8 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
    if ((uVar8 & 1) == 0) {
      return;
    }
    if (*plVar9 == 0) goto LAB_006dc0ec;
    iVar4 = native_UnityEngine_Canvas__get_renderMode_db6058(*plVar9,0);
    if (iVar4 == 0) {
      *(undefined8 *)(param_1 + 0x48) = 0;
      goto native_sub_41086c;
    }
    if (*plVar9 == 0) goto LAB_006dc0ec;
    uVar7 = native_UnityEngine_Canvas__get_worldCamera_db6680(*plVar9,0);
  }
  *(undefined8 *)(param_1 + 0x48) = uVar7;
native_sub_41086c:
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)((param_1 + 0x48U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x48U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* TMPro.TMP_TextEventHandler$$LateUpdate @ 0x6dc0f0
 * void TMPro_TMP_TextEventHandler__LateUpdate (TMPro_TMP_TextEventHandler_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.TMP_TextEventHandler$$LateUpdate
   void TMPro_TMP_TextEventHandler__LateUpdate (TMPro_TMP_TextEventHandler_o* __this, const
   MethodInfo* method); */

void native_TMPro_TMP_TextEventHandler__LateUpdate_6dc0f0
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  
  if ((bRam000000000133f362 & 1) == 0) {
    native_sub_43273c(&char___TypeInfo_12d3090);
    native_sub_43273c(&TMPro_TMP_TextUtilities_TypeInfo_12d60a8);
    bRam000000000133f362 = 1;
  }
  uStack_60 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (*(long *)(param_4 + 0x40) != 0) {
    uVar5 = native_TMPro_TMP_Text__get_rectTransform_4b9320(*(long *)(param_4 + 0x40),0);
    uVar11 = native_UnityEngine_Input__get_mousePosition_dbdd8c(0);
    uVar10 = *(undefined8 *)(param_4 + 0x48);
    if (((*(byte *)(_TMPro_TMP_TextUtilities_TypeInfo_12d60a8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_TMPro_TMP_TextUtilities_TypeInfo_12d60a8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = native_TMPro_TMP_TextUtilities__IsIntersectingRectTransform_6a9928
                      (uVar11,param_2,param_3,uVar5,uVar10,0);
    if ((uVar6 & 1) == 0) {
      *(undefined8 *)(param_4 + 0x58) = 0xffffffffffffffff;
      *(undefined8 *)(param_4 + 0x60) = 0xffffffffffffffff;
    }
    else {
      uVar5 = *(undefined8 *)(param_4 + 0x40);
      uVar11 = native_UnityEngine_Input__get_mousePosition_dbdd8c(0);
      uVar10 = *(undefined8 *)(param_4 + 0x48);
      if (((*(byte *)(_TMPro_TMP_TextUtilities_TypeInfo_12d60a8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_TMPro_TMP_TextUtilities_TypeInfo_12d60a8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_TMPro_TMP_TextUtilities__FindIntersectingCharacter_6a9a58
                        (uVar11,param_2,param_3,uVar5,uVar10,1,0);
      if ((uVar4 != 0xffffffff) && (uVar4 != *(uint *)(param_4 + 0x5c))) {
        *(uint *)(param_4 + 0x5c) = uVar4;
        if ((*(long *)(param_4 + 0x40) == 0) ||
           ((lVar7 = *(long *)(*(long *)(param_4 + 0x40) + 0x360), lVar7 == 0 ||
            (lVar7 = *(long *)(lVar7 + 0x38), lVar7 == 0)))) goto LAB_006dc598;
        if (*(uint *)(lVar7 + 0x18) <= uVar4) goto LAB_006dc59c;
        lVar7 = lVar7 + (long)(int)uVar4 * 0x178;
        iVar2 = *(int *)(lVar7 + 0x2c);
        puVar1 = (undefined2 *)(lVar7 + 0x20);
        if (iVar2 == 1) {
          native_TMPro_TMP_TextEventHandler__SendOnSpriteSelection_6dc620(param_4,*puVar1);
        }
        else if (iVar2 == 0) {
          native_TMPro_TMP_TextEventHandler__SendOnCharacterSelection_6dc5a8(param_4,*puVar1);
        }
      }
      uVar5 = *(undefined8 *)(param_4 + 0x40);
      uVar11 = native_UnityEngine_Input__get_mousePosition_dbdd8c(0);
      uVar10 = *(undefined8 *)(param_4 + 0x48);
      if (((*(byte *)(_TMPro_TMP_TextUtilities_TypeInfo_12d60a8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_TMPro_TMP_TextUtilities_TypeInfo_12d60a8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_TMPro_TMP_TextUtilities__FindIntersectingWord_6a9c80
                        (uVar11,param_2,param_3,uVar5,uVar10,0);
      if ((uVar4 != 0xffffffff) && (uVar4 != *(uint *)(param_4 + 0x60))) {
        *(uint *)(param_4 + 0x60) = uVar4;
        if ((*(long *)(param_4 + 0x40) == 0) ||
           ((lVar7 = *(long *)(*(long *)(param_4 + 0x40) + 0x360), lVar7 == 0 ||
            (lVar7 = *(long *)(lVar7 + 0x40), lVar7 == 0)))) goto LAB_006dc598;
        if (*(uint *)(lVar7 + 0x18) <= uVar4) goto LAB_006dc59c;
        lVar7 = lVar7 + (long)(int)uVar4 * 0x18;
        uStack_60 = *(ulong *)(lVar7 + 0x30);
        uStack_68 = *(ulong *)(lVar7 + 0x28);
        uStack_70 = *(undefined8 *)(lVar7 + 0x20);
        uVar5 = native_TMPro_TMP_WordInfo__GetWord_6ad37c(&uStack_70,0);
        native_TMPro_TMP_TextEventHandler__SendOnWordSelection_6dc698
                  (param_4,uVar5,uStack_68 & 0xffffffff,uStack_60 & 0xffffffff);
      }
      uVar5 = *(undefined8 *)(param_4 + 0x40);
      uVar11 = native_UnityEngine_Input__get_mousePosition_dbdd8c(0);
      uVar10 = *(undefined8 *)(param_4 + 0x48);
      if (((*(byte *)(_TMPro_TMP_TextUtilities_TypeInfo_12d60a8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_TMPro_TMP_TextUtilities_TypeInfo_12d60a8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_TMPro_TMP_TextUtilities__FindIntersectingLine_6aa854
                        (uVar11,param_2,param_3,uVar5,uVar10,0);
      if ((uVar4 != 0xffffffff) && (uVar4 != *(uint *)(param_4 + 100))) {
        *(uint *)(param_4 + 100) = uVar4;
        if ((*(long *)(param_4 + 0x40) == 0) ||
           ((lVar7 = *(long *)(*(long *)(param_4 + 0x40) + 0x360), lVar7 == 0 ||
            (lVar7 = *(long *)(lVar7 + 0x50), lVar7 == 0)))) goto LAB_006dc598;
        if (*(uint *)(lVar7 + 0x18) <= uVar4) goto LAB_006dc59c;
        lVar7 = lVar7 + (long)(int)uVar4 * 0x5c;
        iVar2 = *(int *)(lVar7 + 0x24);
        iVar3 = *(int *)(lVar7 + 0x34);
        lVar7 = native_sub_432750(_char___TypeInfo_12d3090,iVar2);
        if (0 < iVar2) {
          uVar6 = 0;
          do {
            if (((*(long *)(param_4 + 0x40) == 0) ||
                (lVar8 = *(long *)(*(long *)(param_4 + 0x40) + 0x360), lVar8 == 0)) ||
               (lVar8 = *(long *)(lVar8 + 0x38), lVar8 == 0)) goto LAB_006dc598;
            uVar4 = (uint)*(undefined8 *)(lVar8 + 0x18);
            if ((long)(int)uVar4 <= (long)uVar6) break;
            uVar9 = iVar3 + (int)uVar6;
            if (uVar4 <= uVar9) goto LAB_006dc59c;
            if (lVar7 == 0) goto LAB_006dc598;
            if (*(uint *)(lVar7 + 0x18) <= uVar6) goto LAB_006dc59c;
            *(undefined2 *)(lVar7 + 0x20 + uVar6 * 2) =
                 *(undefined2 *)(lVar8 + (long)(int)uVar9 * 0x178 + 0x20);
            uVar6 = uVar6 + 1;
          } while ((long)uVar6 < (long)iVar2);
        }
        uVar5 = native_System_String__CreateString_b0f958(0,lVar7,0);
        native_TMPro_TMP_TextEventHandler__SendOnLineSelection_6dc724(param_4,uVar5,iVar3,iVar2);
      }
      uVar5 = *(undefined8 *)(param_4 + 0x40);
      uVar11 = native_UnityEngine_Input__get_mousePosition_dbdd8c(0);
      uVar10 = *(undefined8 *)(param_4 + 0x48);
      if (((*(byte *)(_TMPro_TMP_TextUtilities_TypeInfo_12d60a8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_TMPro_TMP_TextUtilities_TypeInfo_12d60a8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_TMPro_TMP_TextUtilities__FindIntersectingLink_6aa9c0
                        (uVar11,param_2,param_3,uVar5,uVar10,0);
      if ((uVar4 != 0xffffffff) && (uVar4 != *(uint *)(param_4 + 0x58))) {
        *(uint *)(param_4 + 0x58) = uVar4;
        if ((*(long *)(param_4 + 0x40) == 0) ||
           ((lVar7 = *(long *)(*(long *)(param_4 + 0x40) + 0x360), lVar7 == 0 ||
            (lVar7 = *(long *)(lVar7 + 0x48), lVar7 == 0)))) goto LAB_006dc598;
        if (*(uint *)(lVar7 + 0x18) <= uVar4) {
LAB_006dc59c:
          uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar5,0);
        }
        lVar7 = lVar7 + (long)(int)uVar4 * 0x28;
        uStack_80 = *(undefined8 *)(lVar7 + 0x40);
        uStack_98 = *(undefined8 *)(lVar7 + 0x28);
        uStack_a0 = *(undefined8 *)(lVar7 + 0x20);
        uStack_88 = *(undefined8 *)(lVar7 + 0x38);
        uStack_90 = *(undefined8 *)(lVar7 + 0x30);
        uVar5 = native_TMPro_TMP_LinkInfo__GetLinkID_8963bc(&uStack_a0,0);
        uVar10 = native_TMPro_TMP_LinkInfo__GetLinkText_8962cc(&uStack_a0,0);
        native_TMPro_TMP_TextEventHandler__SendOnLinkSelection_6dc7b0(param_4,uVar5,uVar10,uVar4);
      }
    }
    return;
  }
LAB_006dc598:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.TMP_TextEventHandler$$OnPointerEnter @ 0x6dc83c
 * void TMPro_TMP_TextEventHandler__OnPointerEnter (TMPro_TMP_TextEventHandler_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

/* TMPro.TMP_TextEventHandler$$OnPointerEnter
   void TMPro_TMP_TextEventHandler__OnPointerEnter (TMPro_TMP_TextEventHandler_o* __this,
   UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

void native_TMPro_TMP_TextEventHandler__OnPointerEnter_6dc83c(void)

{
  return;
}



/* TMPro.TMP_TextEventHandler$$OnPointerExit @ 0x6dc840
 * void TMPro_TMP_TextEventHandler__OnPointerExit (TMPro_TMP_TextEventHandler_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

/* TMPro.TMP_TextEventHandler$$OnPointerExit
   void TMPro_TMP_TextEventHandler__OnPointerExit (TMPro_TMP_TextEventHandler_o* __this,
   UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

void native_TMPro_TMP_TextEventHandler__OnPointerExit_6dc840(void)

{
  return;
}



/* TMPro.TMP_TextEventHandler$$SendOnCharacterSelection @ 0x6dc5a8
 * void TMPro_TMP_TextEventHandler__SendOnCharacterSelection (TMPro_TMP_TextEventHandler_o* __this, uint16_t character, int32_t characterIndex, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.TMP_TextEventHandler$$SendOnCharacterSelection
   void TMPro_TMP_TextEventHandler__SendOnCharacterSelection (TMPro_TMP_TextEventHandler_o* __this,
   uint16_t character, int32_t characterIndex, const MethodInfo* method); */

void native_TMPro_TMP_TextEventHandler__SendOnCharacterSelection_6dc5a8
               (long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  undefined4 uStack_68;
  undefined2 auStack_64 [2];
  
  if ((bRam000000000133f363 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_char__int__Invoke___12de530);
    bRam000000000133f363 = 1;
  }
  lVar2 = _Method_UnityEngine_Events_UnityEvent_char__int__Invoke___12de530;
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == 0) {
    return;
  }
  if ((bRam00000000013407b7 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Events_InvokableCall_TypeInfo_12d4f78);
    native_sub_43273c(&Method_System_Collections_Generic_List_BaseInvokableCall__get_Count___12dc5d0
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_BaseInvokableCall__get_Item___12dc5d8)
    ;
    native_sub_43273c(&object___TypeInfo_12d32d8);
    bRam00000000013407b7 = 1;
  }
  if ((lVar3 != 0) &&
     (lVar4 = native_UnityEngine_Events_UnityEventBase__PrepareInvoke_773a28(lVar3,0), lVar4 != 0))
  {
    uVar6 = (ulong)*(uint *)(lVar4 + 0x18);
    if (0 < (int)*(uint *)(lVar4 + 0x18)) {
      puVar1 = (undefined8 *)(lVar3 + 0x28);
      lVar3 = 4;
      do {
        uVar11 = lVar3 - 4;
        if ((uVar6 & 0xffffffff) <= uVar11) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar7 = *(long *)(*(long *)(*(long *)(lVar2 + 0x18) + 0xc0) + 0x20);
        uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + lVar3 * 8);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          native_sub_3c9850(lVar7);
        }
        lVar7 = native_sub_4327f8(uVar9,lVar7);
        if (lVar7 == 0) {
          if (*(uint *)(lVar4 + 0x18) <= uVar11) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          lVar7 = native_sub_4327f8(*(undefined8 *)(*(long *)(lVar4 + 0x10) + lVar3 * 8),
                                    _UnityEngine_Events_InvokableCall_TypeInfo_12d4f78);
          if (lVar7 == 0) {
            if (*(uint *)(lVar4 + 0x18) <= uVar11) {
              native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            }
            plVar10 = (long *)*puVar1;
            plVar8 = *(long **)(*(long *)(lVar4 + 0x10) + lVar3 * 8);
            if (plVar10 == (long *)0x0) {
              uVar9 = native_sub_432750(_object___TypeInfo_12d32d8,2);
              *puVar1 = uVar9;
              native_sub_4326e0(puVar1,uVar9);
              plVar10 = (long *)*puVar1;
            }
            auStack_64[0] = (undefined2)param_2;
            lVar7 = *(long *)(*(long *)(*(long *)(lVar2 + 0x18) + 0xc0) + 0x40);
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              native_sub_3c9850(lVar7);
            }
            lVar7 = native_sub_4327fc(lVar7,auStack_64);
            if (plVar10 == (long *)0x0) goto code_r0x008a13dc;
            if ((lVar7 != 0) &&
               (lVar5 = native_sub_4327f8(lVar7,*(undefined8 *)(*plVar10 + 0x40)), lVar5 == 0)) {
code_r0x008a13ec:
              uVar9 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar9,0);
            }
            if ((int)plVar10[3] == 0) {
code_r0x008a13e0:
              uVar9 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar9,0);
            }
            plVar10[4] = lVar7;
            native_sub_4326e0(plVar10 + 4,lVar7);
            plVar10 = (long *)*puVar1;
            lVar7 = *(long *)(*(long *)(*(long *)(lVar2 + 0x18) + 0xc0) + 0x48);
            uStack_68 = param_3;
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              native_sub_3c9850(lVar7);
            }
            lVar7 = native_sub_4327fc(lVar7,&uStack_68);
            if (plVar10 == (long *)0x0) goto code_r0x008a13dc;
            if ((lVar7 != 0) &&
               (lVar5 = native_sub_4327f8(lVar7,*(undefined8 *)(*plVar10 + 0x40)), lVar5 == 0))
            goto code_r0x008a13ec;
            if (*(uint *)(plVar10 + 3) < 2) goto code_r0x008a13e0;
            plVar10[5] = lVar7;
            native_sub_4326e0(plVar10 + 5,lVar7);
            if (plVar8 == (long *)0x0) goto code_r0x008a13dc;
            (**(code **)(*plVar8 + 0x178))(plVar8,*puVar1,*(undefined8 *)(*plVar8 + 0x180));
          }
          else {
            native_UnityEngine_Events_InvokableCall__Invoke_8df658(lVar7,0);
          }
        }
        else {
          (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar2 + 0x18) + 0xc0) + 0x38))
                    (lVar7,param_2,param_3);
        }
        uVar6 = (ulong)*(int *)(lVar4 + 0x18);
        lVar7 = lVar3 + -3;
        lVar3 = lVar3 + 1;
      } while (lVar7 < (long)uVar6);
    }
    return;
  }
code_r0x008a13dc:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.TMP_TextEventHandler$$SendOnSpriteSelection @ 0x6dc620
 * void TMPro_TMP_TextEventHandler__SendOnSpriteSelection (TMPro_TMP_TextEventHandler_o* __this, uint16_t character, int32_t characterIndex, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.TMP_TextEventHandler$$SendOnSpriteSelection
   void TMPro_TMP_TextEventHandler__SendOnSpriteSelection (TMPro_TMP_TextEventHandler_o* __this,
   uint16_t character, int32_t characterIndex, const MethodInfo* method); */

void native_TMPro_TMP_TextEventHandler__SendOnSpriteSelection_6dc620
               (long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  undefined4 uStack_68;
  undefined2 auStack_64 [2];
  
  if ((bRam000000000133f364 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_char__int__Invoke___12de530);
    bRam000000000133f364 = 1;
  }
  lVar2 = _Method_UnityEngine_Events_UnityEvent_char__int__Invoke___12de530;
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
    return;
  }
  if ((bRam00000000013407b7 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Events_InvokableCall_TypeInfo_12d4f78);
    native_sub_43273c(&Method_System_Collections_Generic_List_BaseInvokableCall__get_Count___12dc5d0
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_BaseInvokableCall__get_Item___12dc5d8)
    ;
    native_sub_43273c(&object___TypeInfo_12d32d8);
    bRam00000000013407b7 = 1;
  }
  if ((lVar3 != 0) &&
     (lVar4 = native_UnityEngine_Events_UnityEventBase__PrepareInvoke_773a28(lVar3,0), lVar4 != 0))
  {
    uVar6 = (ulong)*(uint *)(lVar4 + 0x18);
    if (0 < (int)*(uint *)(lVar4 + 0x18)) {
      puVar1 = (undefined8 *)(lVar3 + 0x28);
      lVar3 = 4;
      do {
        uVar11 = lVar3 - 4;
        if ((uVar6 & 0xffffffff) <= uVar11) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar7 = *(long *)(*(long *)(*(long *)(lVar2 + 0x18) + 0xc0) + 0x20);
        uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + lVar3 * 8);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          native_sub_3c9850(lVar7);
        }
        lVar7 = native_sub_4327f8(uVar9,lVar7);
        if (lVar7 == 0) {
          if (*(uint *)(lVar4 + 0x18) <= uVar11) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          lVar7 = native_sub_4327f8(*(undefined8 *)(*(long *)(lVar4 + 0x10) + lVar3 * 8),
                                    _UnityEngine_Events_InvokableCall_TypeInfo_12d4f78);
          if (lVar7 == 0) {
            if (*(uint *)(lVar4 + 0x18) <= uVar11) {
              native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            }
            plVar10 = (long *)*puVar1;
            plVar8 = *(long **)(*(long *)(lVar4 + 0x10) + lVar3 * 8);
            if (plVar10 == (long *)0x0) {
              uVar9 = native_sub_432750(_object___TypeInfo_12d32d8,2);
              *puVar1 = uVar9;
              native_sub_4326e0(puVar1,uVar9);
              plVar10 = (long *)*puVar1;
            }
            auStack_64[0] = (undefined2)param_2;
            lVar7 = *(long *)(*(long *)(*(long *)(lVar2 + 0x18) + 0xc0) + 0x40);
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              native_sub_3c9850(lVar7);
            }
            lVar7 = native_sub_4327fc(lVar7,auStack_64);
            if (plVar10 == (long *)0x0) goto code_r0x008a13dc;
            if ((lVar7 != 0) &&
               (lVar5 = native_sub_4327f8(lVar7,*(undefined8 *)(*plVar10 + 0x40)), lVar5 == 0)) {
code_r0x008a13ec:
              uVar9 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar9,0);
            }
            if ((int)plVar10[3] == 0) {
code_r0x008a13e0:
              uVar9 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar9,0);
            }
            plVar10[4] = lVar7;
            native_sub_4326e0(plVar10 + 4,lVar7);
            plVar10 = (long *)*puVar1;
            lVar7 = *(long *)(*(long *)(*(long *)(lVar2 + 0x18) + 0xc0) + 0x48);
            uStack_68 = param_3;
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              native_sub_3c9850(lVar7);
            }
            lVar7 = native_sub_4327fc(lVar7,&uStack_68);
            if (plVar10 == (long *)0x0) goto code_r0x008a13dc;
            if ((lVar7 != 0) &&
               (lVar5 = native_sub_4327f8(lVar7,*(undefined8 *)(*plVar10 + 0x40)), lVar5 == 0))
            goto code_r0x008a13ec;
            if (*(uint *)(plVar10 + 3) < 2) goto code_r0x008a13e0;
            plVar10[5] = lVar7;
            native_sub_4326e0(plVar10 + 5,lVar7);
            if (plVar8 == (long *)0x0) goto code_r0x008a13dc;
            (**(code **)(*plVar8 + 0x178))(plVar8,*puVar1,*(undefined8 *)(*plVar8 + 0x180));
          }
          else {
            native_UnityEngine_Events_InvokableCall__Invoke_8df658(lVar7,0);
          }
        }
        else {
          (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar2 + 0x18) + 0xc0) + 0x38))
                    (lVar7,param_2,param_3);
        }
        uVar6 = (ulong)*(int *)(lVar4 + 0x18);
        lVar7 = lVar3 + -3;
        lVar3 = lVar3 + 1;
      } while (lVar7 < (long)uVar6);
    }
    return;
  }
code_r0x008a13dc:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.TMP_TextEventHandler$$SendOnWordSelection @ 0x6dc698
 * void TMPro_TMP_TextEventHandler__SendOnWordSelection (TMPro_TMP_TextEventHandler_o* __this, System_String_o* word, int32_t charIndex, int32_t length, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.TMP_TextEventHandler$$SendOnWordSelection
   void TMPro_TMP_TextEventHandler__SendOnWordSelection (TMPro_TMP_TextEventHandler_o* __this,
   System_String_o* word, int32_t charIndex, int32_t length, const MethodInfo* method); */

void native_TMPro_TMP_TextEventHandler__SendOnWordSelection_6dc698
               (long param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  if ((bRam000000000133f365 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_string__int__int__Invoke___12de550);
    bRam000000000133f365 = 1;
  }
  lVar2 = _Method_UnityEngine_Events_UnityEvent_string__int__int__Invoke___12de550;
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 == 0) {
    return;
  }
  if ((bRam00000000013407bb & 1) == 0) {
    native_sub_43273c(&UnityEngine_Events_InvokableCall_TypeInfo_12d4f78);
    native_sub_43273c(&Method_System_Collections_Generic_List_BaseInvokableCall__get_Count___12dc5d0
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_BaseInvokableCall__get_Item___12dc5d8)
    ;
    native_sub_43273c(&object___TypeInfo_12d32d8);
    bRam00000000013407bb = 1;
  }
  if ((lVar3 != 0) &&
     (lVar4 = native_UnityEngine_Events_UnityEventBase__PrepareInvoke_773a28(lVar3,0), lVar4 != 0))
  {
    uVar6 = (ulong)*(uint *)(lVar4 + 0x18);
    if (0 < (int)*(uint *)(lVar4 + 0x18)) {
      puVar1 = (undefined8 *)(lVar3 + 0x28);
      lVar3 = 4;
      do {
        uVar11 = lVar3 - 4;
        if ((uVar6 & 0xffffffff) <= uVar11) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar7 = *(long *)(*(long *)(*(long *)(lVar2 + 0x18) + 0xc0) + 0x28);
        uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + lVar3 * 8);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          native_sub_3c9850(lVar7);
        }
        lVar7 = native_sub_4327f8(uVar9,lVar7);
        if (lVar7 == 0) {
          if (*(uint *)(lVar4 + 0x18) <= uVar11) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          lVar7 = native_sub_4327f8(*(undefined8 *)(*(long *)(lVar4 + 0x10) + lVar3 * 8),
                                    _UnityEngine_Events_InvokableCall_TypeInfo_12d4f78);
          if (lVar7 == 0) {
            if (*(uint *)(lVar4 + 0x18) <= uVar11) {
              native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            }
            plVar10 = (long *)*puVar1;
            plVar8 = *(long **)(*(long *)(lVar4 + 0x10) + lVar3 * 8);
            if (plVar10 == (long *)0x0) {
              uVar9 = native_sub_432750(_object___TypeInfo_12d32d8,3);
              *puVar1 = uVar9;
              native_sub_4326e0(puVar1,uVar9);
              plVar10 = (long *)*puVar1;
              if (plVar10 == (long *)0x0) goto code_r0x008a204c;
            }
            if ((param_2 != 0) &&
               (lVar7 = native_sub_4327f8(param_2,*(undefined8 *)(*plVar10 + 0x40)), lVar7 == 0)) {
code_r0x008a205c:
              uVar9 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar9,0);
            }
            if ((int)plVar10[3] == 0) {
code_r0x008a2050:
              uVar9 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar9,0);
            }
            plVar10[4] = param_2;
            native_sub_4326e0(plVar10 + 4,param_2);
            plVar10 = (long *)*puVar1;
            lVar7 = *(long *)(*(long *)(*(long *)(lVar2 + 0x18) + 0xc0) + 0x50);
            uStack_64 = param_3;
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              native_sub_3c9850(lVar7);
            }
            lVar7 = native_sub_4327fc(lVar7,&uStack_64);
            if (plVar10 == (long *)0x0) goto code_r0x008a204c;
            if ((lVar7 != 0) &&
               (lVar5 = native_sub_4327f8(lVar7,*(undefined8 *)(*plVar10 + 0x40)), lVar5 == 0))
            goto code_r0x008a205c;
            if (*(uint *)(plVar10 + 3) < 2) goto code_r0x008a2050;
            plVar10[5] = lVar7;
            native_sub_4326e0(plVar10 + 5,lVar7);
            plVar10 = (long *)*puVar1;
            lVar7 = *(long *)(*(long *)(*(long *)(lVar2 + 0x18) + 0xc0) + 0x58);
            uStack_68 = param_4;
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              native_sub_3c9850(lVar7);
            }
            lVar7 = native_sub_4327fc(lVar7,&uStack_68);
            if (plVar10 == (long *)0x0) goto code_r0x008a204c;
            if ((lVar7 != 0) &&
               (lVar5 = native_sub_4327f8(lVar7,*(undefined8 *)(*plVar10 + 0x40)), lVar5 == 0))
            goto code_r0x008a205c;
            if (*(uint *)(plVar10 + 3) < 3) goto code_r0x008a2050;
            plVar10[6] = lVar7;
            native_sub_4326e0(plVar10 + 6,lVar7);
            if (plVar8 == (long *)0x0) goto code_r0x008a204c;
            (**(code **)(*plVar8 + 0x178))(plVar8,*puVar1,*(undefined8 *)(*plVar8 + 0x180));
          }
          else {
            native_UnityEngine_Events_InvokableCall__Invoke_8df658(lVar7,0);
          }
        }
        else {
          (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar2 + 0x18) + 0xc0) + 0x40))
                    (lVar7,param_2,param_3,param_4);
        }
        uVar6 = (ulong)*(int *)(lVar4 + 0x18);
        lVar7 = lVar3 + -3;
        lVar3 = lVar3 + 1;
      } while (lVar7 < (long)uVar6);
    }
    return;
  }
code_r0x008a204c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.TMP_TextEventHandler$$SendOnLineSelection @ 0x6dc724
 * void TMPro_TMP_TextEventHandler__SendOnLineSelection (TMPro_TMP_TextEventHandler_o* __this, System_String_o* line, int32_t charIndex, int32_t length, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.TMP_TextEventHandler$$SendOnLineSelection
   void TMPro_TMP_TextEventHandler__SendOnLineSelection (TMPro_TMP_TextEventHandler_o* __this,
   System_String_o* line, int32_t charIndex, int32_t length, const MethodInfo* method); */

void native_TMPro_TMP_TextEventHandler__SendOnLineSelection_6dc724
               (long param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  if ((bRam000000000133f366 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_string__int__int__Invoke___12de550);
    bRam000000000133f366 = 1;
  }
  lVar2 = _Method_UnityEngine_Events_UnityEvent_string__int__int__Invoke___12de550;
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 == 0) {
    return;
  }
  if ((bRam00000000013407bb & 1) == 0) {
    native_sub_43273c(&UnityEngine_Events_InvokableCall_TypeInfo_12d4f78);
    native_sub_43273c(&Method_System_Collections_Generic_List_BaseInvokableCall__get_Count___12dc5d0
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_BaseInvokableCall__get_Item___12dc5d8)
    ;
    native_sub_43273c(&object___TypeInfo_12d32d8);
    bRam00000000013407bb = 1;
  }
  if ((lVar3 != 0) &&
     (lVar4 = native_UnityEngine_Events_UnityEventBase__PrepareInvoke_773a28(lVar3,0), lVar4 != 0))
  {
    uVar6 = (ulong)*(uint *)(lVar4 + 0x18);
    if (0 < (int)*(uint *)(lVar4 + 0x18)) {
      puVar1 = (undefined8 *)(lVar3 + 0x28);
      lVar3 = 4;
      do {
        uVar11 = lVar3 - 4;
        if ((uVar6 & 0xffffffff) <= uVar11) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar7 = *(long *)(*(long *)(*(long *)(lVar2 + 0x18) + 0xc0) + 0x28);
        uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + lVar3 * 8);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          native_sub_3c9850(lVar7);
        }
        lVar7 = native_sub_4327f8(uVar9,lVar7);
        if (lVar7 == 0) {
          if (*(uint *)(lVar4 + 0x18) <= uVar11) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          lVar7 = native_sub_4327f8(*(undefined8 *)(*(long *)(lVar4 + 0x10) + lVar3 * 8),
                                    _UnityEngine_Events_InvokableCall_TypeInfo_12d4f78);
          if (lVar7 == 0) {
            if (*(uint *)(lVar4 + 0x18) <= uVar11) {
              native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            }
            plVar10 = (long *)*puVar1;
            plVar8 = *(long **)(*(long *)(lVar4 + 0x10) + lVar3 * 8);
            if (plVar10 == (long *)0x0) {
              uVar9 = native_sub_432750(_object___TypeInfo_12d32d8,3);
              *puVar1 = uVar9;
              native_sub_4326e0(puVar1,uVar9);
              plVar10 = (long *)*puVar1;
              if (plVar10 == (long *)0x0) goto code_r0x008a204c;
            }
            if ((param_2 != 0) &&
               (lVar7 = native_sub_4327f8(param_2,*(undefined8 *)(*plVar10 + 0x40)), lVar7 == 0)) {
code_r0x008a205c:
              uVar9 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar9,0);
            }
            if ((int)plVar10[3] == 0) {
code_r0x008a2050:
              uVar9 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar9,0);
            }
            plVar10[4] = param_2;
            native_sub_4326e0(plVar10 + 4,param_2);
            plVar10 = (long *)*puVar1;
            lVar7 = *(long *)(*(long *)(*(long *)(lVar2 + 0x18) + 0xc0) + 0x50);
            uStack_64 = param_3;
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              native_sub_3c9850(lVar7);
            }
            lVar7 = native_sub_4327fc(lVar7,&uStack_64);
            if (plVar10 == (long *)0x0) goto code_r0x008a204c;
            if ((lVar7 != 0) &&
               (lVar5 = native_sub_4327f8(lVar7,*(undefined8 *)(*plVar10 + 0x40)), lVar5 == 0))
            goto code_r0x008a205c;
            if (*(uint *)(plVar10 + 3) < 2) goto code_r0x008a2050;
            plVar10[5] = lVar7;
            native_sub_4326e0(plVar10 + 5,lVar7);
            plVar10 = (long *)*puVar1;
            lVar7 = *(long *)(*(long *)(*(long *)(lVar2 + 0x18) + 0xc0) + 0x58);
            uStack_68 = param_4;
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              native_sub_3c9850(lVar7);
            }
            lVar7 = native_sub_4327fc(lVar7,&uStack_68);
            if (plVar10 == (long *)0x0) goto code_r0x008a204c;
            if ((lVar7 != 0) &&
               (lVar5 = native_sub_4327f8(lVar7,*(undefined8 *)(*plVar10 + 0x40)), lVar5 == 0))
            goto code_r0x008a205c;
            if (*(uint *)(plVar10 + 3) < 3) goto code_r0x008a2050;
            plVar10[6] = lVar7;
            native_sub_4326e0(plVar10 + 6,lVar7);
            if (plVar8 == (long *)0x0) goto code_r0x008a204c;
            (**(code **)(*plVar8 + 0x178))(plVar8,*puVar1,*(undefined8 *)(*plVar8 + 0x180));
          }
          else {
            native_UnityEngine_Events_InvokableCall__Invoke_8df658(lVar7,0);
          }
        }
        else {
          (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar2 + 0x18) + 0xc0) + 0x40))
                    (lVar7,param_2,param_3,param_4);
        }
        uVar6 = (ulong)*(int *)(lVar4 + 0x18);
        lVar7 = lVar3 + -3;
        lVar3 = lVar3 + 1;
      } while (lVar7 < (long)uVar6);
    }
    return;
  }
code_r0x008a204c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.TMP_TextEventHandler$$SendOnLinkSelection @ 0x6dc7b0
 * void TMPro_TMP_TextEventHandler__SendOnLinkSelection (TMPro_TMP_TextEventHandler_o* __this, System_String_o* linkID, System_String_o* linkText, int32_t linkIndex, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.TMP_TextEventHandler$$SendOnLinkSelection
   void TMPro_TMP_TextEventHandler__SendOnLinkSelection (TMPro_TMP_TextEventHandler_o* __this,
   System_String_o* linkID, System_String_o* linkText, int32_t linkIndex, const MethodInfo* method);
    */

void native_TMPro_TMP_TextEventHandler__SendOnLinkSelection_6dc7b0
               (long param_1,long param_2,long param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  undefined4 uStack_64;
  
  if ((bRam000000000133f367 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_string__string__int__Invoke___12de570);
    bRam000000000133f367 = 1;
  }
  lVar2 = _Method_UnityEngine_Events_UnityEvent_string__string__int__Invoke___12de570;
  lVar3 = *(long *)(param_1 + 0x38);
  if (lVar3 == 0) {
    return;
  }
  if ((bRam00000000013407bd & 1) == 0) {
    native_sub_43273c(&UnityEngine_Events_InvokableCall_TypeInfo_12d4f78);
    native_sub_43273c(&Method_System_Collections_Generic_List_BaseInvokableCall__get_Count___12dc5d0
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_BaseInvokableCall__get_Item___12dc5d8)
    ;
    native_sub_43273c(&object___TypeInfo_12d32d8);
    bRam00000000013407bd = 1;
  }
  if ((lVar3 != 0) &&
     (lVar4 = native_UnityEngine_Events_UnityEventBase__PrepareInvoke_773a28(lVar3,0), lVar4 != 0))
  {
    uVar6 = (ulong)*(uint *)(lVar4 + 0x18);
    if (0 < (int)*(uint *)(lVar4 + 0x18)) {
      puVar1 = (undefined8 *)(lVar3 + 0x28);
      lVar3 = 4;
      do {
        uVar11 = lVar3 - 4;
        if ((uVar6 & 0xffffffff) <= uVar11) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar7 = *(long *)(*(long *)(*(long *)(lVar2 + 0x18) + 0xc0) + 0x28);
        uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + lVar3 * 8);
        if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
          native_sub_3c9850(lVar7);
        }
        lVar7 = native_sub_4327f8(uVar9,lVar7);
        if (lVar7 == 0) {
          if (*(uint *)(lVar4 + 0x18) <= uVar11) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          lVar7 = native_sub_4327f8(*(undefined8 *)(*(long *)(lVar4 + 0x10) + lVar3 * 8),
                                    _UnityEngine_Events_InvokableCall_TypeInfo_12d4f78);
          if (lVar7 == 0) {
            if (*(uint *)(lVar4 + 0x18) <= uVar11) {
              native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            }
            plVar10 = (long *)*puVar1;
            plVar8 = *(long **)(*(long *)(lVar4 + 0x10) + lVar3 * 8);
            if (plVar10 == (long *)0x0) {
              uVar9 = native_sub_432750(_object___TypeInfo_12d32d8,3);
              *puVar1 = uVar9;
              native_sub_4326e0(puVar1,uVar9);
              plVar10 = (long *)*puVar1;
              if (plVar10 == (long *)0x0) goto code_r0x008a26d0;
            }
            if ((param_2 != 0) &&
               (lVar7 = native_sub_4327f8(param_2,*(undefined8 *)(*plVar10 + 0x40)), lVar7 == 0)) {
code_r0x008a26e0:
              uVar9 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar9,0);
            }
            if ((int)plVar10[3] == 0) {
code_r0x008a26d4:
              uVar9 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar9,0);
            }
            plVar10[4] = param_2;
            native_sub_4326e0(plVar10 + 4,param_2);
            plVar10 = (long *)*puVar1;
            if (plVar10 == (long *)0x0) goto code_r0x008a26d0;
            if ((param_3 != 0) &&
               (lVar7 = native_sub_4327f8(param_3,*(undefined8 *)(*plVar10 + 0x40)), lVar7 == 0))
            goto code_r0x008a26e0;
            if (*(uint *)(plVar10 + 3) < 2) goto code_r0x008a26d4;
            plVar10[5] = param_3;
            native_sub_4326e0(plVar10 + 5,param_3);
            plVar10 = (long *)*puVar1;
            lVar7 = *(long *)(*(long *)(*(long *)(lVar2 + 0x18) + 0xc0) + 0x58);
            uStack_64 = param_4;
            if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
              native_sub_3c9850(lVar7);
            }
            lVar7 = native_sub_4327fc(lVar7,&uStack_64);
            if (plVar10 == (long *)0x0) goto code_r0x008a26d0;
            if ((lVar7 != 0) &&
               (lVar5 = native_sub_4327f8(lVar7,*(undefined8 *)(*plVar10 + 0x40)), lVar5 == 0))
            goto code_r0x008a26e0;
            if (*(uint *)(plVar10 + 3) < 3) goto code_r0x008a26d4;
            plVar10[6] = lVar7;
            native_sub_4326e0(plVar10 + 6,lVar7);
            if (plVar8 == (long *)0x0) goto code_r0x008a26d0;
            (**(code **)(*plVar8 + 0x178))(plVar8,*puVar1,*(undefined8 *)(*plVar8 + 0x180));
          }
          else {
            native_UnityEngine_Events_InvokableCall__Invoke_8df658(lVar7,0);
          }
        }
        else {
          (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar2 + 0x18) + 0xc0) + 0x40))
                    (lVar7,param_2,param_3,param_4);
        }
        uVar6 = (ulong)*(int *)(lVar4 + 0x18);
        lVar7 = lVar3 + -3;
        lVar3 = lVar3 + 1;
      } while (lVar7 < (long)uVar6);
    }
    return;
  }
code_r0x008a26d0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.TMP_TextEventHandler$$.ctor @ 0x6dc844
 * void TMPro_TMP_TextEventHandler___ctor (TMPro_TMP_TextEventHandler_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.TMP_TextEventHandler$$.ctor
   void TMPro_TMP_TextEventHandler___ctor (TMPro_TMP_TextEventHandler_o* __this, const MethodInfo*
   method); */

undefined1  [16] native_TMPro_TMP_TextEventHandler___ctor_6dc844(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam000000000133f368 & 1) == 0) {
    native_sub_43273c(&TMPro_TMP_TextEventHandler_CharacterSelectionEvent_TypeInfo_12d7818);
    native_sub_43273c(&TMPro_TMP_TextEventHandler_LineSelectionEvent_TypeInfo_12d7820);
    native_sub_43273c(&TMPro_TMP_TextEventHandler_LinkSelectionEvent_TypeInfo_12d7828);
    native_sub_43273c(&TMPro_TMP_TextEventHandler_SpriteSelectionEvent_TypeInfo_12d7830);
    native_sub_43273c(&TMPro_TMP_TextEventHandler_WordSelectionEvent_TypeInfo_12d7838);
    bRam000000000133f368 = 1;
  }
  uVar1 = native_sub_432808(_TMPro_TMP_TextEventHandler_CharacterSelectionEvent_TypeInfo_12d7818);
  native_TMPro_TMP_TextEventHandler_CharacterSelectionEvent___ctor_54e0d4(uVar1,0);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  native_sub_4326e0((undefined8 *)(param_1 + 0x18),uVar1);
  uVar1 = native_sub_432808(_TMPro_TMP_TextEventHandler_SpriteSelectionEvent_TypeInfo_12d7830);
  native_TMPro_TMP_TextEventHandler_SpriteSelectionEvent___ctor_54e1b8(uVar1,0);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  native_sub_4326e0(param_1 + 0x20,uVar1);
  uVar1 = native_sub_432808(_TMPro_TMP_TextEventHandler_WordSelectionEvent_TypeInfo_12d7838);
  native_TMPro_TMP_TextEventHandler_WordSelectionEvent___ctor_54e204(uVar1,0);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  native_sub_4326e0(param_1 + 0x28,uVar1);
  uVar1 = native_sub_432808(_TMPro_TMP_TextEventHandler_LineSelectionEvent_TypeInfo_12d7820);
  native_TMPro_TMP_TextEventHandler_LineSelectionEvent___ctor_54e120(uVar1,0);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  native_sub_4326e0(param_1 + 0x30,uVar1);
  uVar1 = native_sub_432808(_TMPro_TMP_TextEventHandler_LinkSelectionEvent_TypeInfo_12d7828);
  native_TMPro_TMP_TextEventHandler_LinkSelectionEvent___ctor_54e16c(uVar1,0);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  native_sub_4326e0(param_1 + 0x38,uVar1);
  *(undefined8 *)(param_1 + 0x58) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x60) = 0xffffffffffffffff;
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


