/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* GameResourcesManager$$GetUIPrefab @ 0xdefa08
 * UnityEngine_GameObject_o* GameResourcesManager__GetUIPrefab (System_String_o* pName, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameResourcesManager$$GetUIPrefab
   UnityEngine_GameObject_o* GameResourcesManager__GetUIPrefab (System_String_o* pName, const
   MethodInfo* method); */

long native_GameResourcesManager__GetUIPrefab_defa08(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((bRam0000000001346efa & 1) == 0) {
    native_sub_43273c(&GameResourcesManager_TypeInfo_12d47e0);
    native_sub_43273c(&Method_ResourceManager_Load_GameObject____12e6258);
    bRam0000000001346efa = 1;
  }
  if (((*(byte *)(_GameResourcesManager_TypeInfo_12d47e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_GameResourcesManager_TypeInfo_12d47e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar7 = native_System_String__Concat_afbd68
                    (**(undefined8 **)(_GameResourcesManager_TypeInfo_12d47e0 + 0xb8),param_1,0);
  lVar1 = _Method_ResourceManager_Load_GameObject____12e6258;
  if ((bRam000000000133e735 & 1) == 0) {
    native_sub_43273c(&GlobalSetting_TypeInfo_12d47f8);
    bRam000000000133e735 = 1;
  }
  if (((*(byte *)(_GlobalSetting_TypeInfo_12d47f8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_GlobalSetting_TypeInfo_12d47f8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(char *)(*(long *)(_GlobalSetting_TypeInfo_12d47f8 + 0xb8) + 8) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x004a7a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar1 = (**(code **)**(undefined8 **)(lVar1 + 0x30))(uVar7);
    return lVar1;
  }
  lVar2 = native_ResourceManager__get_Instance_73d0c8(0);
  if (lVar2 != 0) {
    uVar3 = native_ResourceManager__IsResLoaded_73d55c(lVar2,uVar7,0);
    if ((uVar3 & 1) == 0) {
      uVar5 = native_sub_432740(&StringLiteral_res___12f5e10);
      uVar6 = native_sub_432740(&StringLiteral___not_load_over_12eafb0);
      uVar7 = native_System_String__Concat_afc654(uVar5,uVar7,uVar6,0);
      native_sub_432740(&UnityEngine_UnityException_TypeInfo_12d65e0);
      uVar5 = native_sub_432808();
      native_UnityEngine_UnityException___ctor_76ec24(uVar5,uVar7,0);
      uVar7 = native_sub_432740(&Method_ResourceManager_Load_object____12e6260);
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar5,uVar7);
    }
    lVar2 = native_ResourceManager__get_Instance_73d0c8(0);
    if (lVar2 != 0) {
      lVar2 = native_ResourceManager__GetResource_73d220(lVar2,uVar7,0);
      lVar1 = *(long *)(*(long *)(lVar1 + 0x30) + 8);
      if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
        native_sub_3c9850(lVar1);
      }
      if (lVar2 != 0) {
        lVar4 = native_sub_4327f8(lVar2,lVar1);
        if (lVar4 != 0) {
          return lVar4;
        }
        native_sub_432b04(lVar2,lVar1);
      }
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* GameResourcesManager$$.ctor @ 0xdefa94
 * void GameResourcesManager___ctor (GameResourcesManager_o* __this, const MethodInfo* method); */

/* GameResourcesManager$$.ctor
   void GameResourcesManager___ctor (GameResourcesManager_o* __this, const MethodInfo* method); */

void native_GameResourcesManager___ctor_defa94(void)

{
  return;
}



/* GameResourcesManager$$.cctor @ 0xdefa9c
 * void GameResourcesManager___cctor (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameResourcesManager$$.cctor
   void GameResourcesManager___cctor (const MethodInfo* method); */

void native_GameResourcesManager___cctor_defa9c(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if ((bRam0000000001346efb & 1) == 0) {
    native_sub_43273c(&GameResourcesManager_TypeInfo_12d47e0);
    native_sub_43273c(&StringLiteral_UIResources_UIPrefab__12f2948);
    bRam0000000001346efb = 1;
  }
  puVar4 = *(undefined8 **)(_GameResourcesManager_TypeInfo_12d47e0 + 0xb8);
  *puVar4 = _StringLiteral_UIResources_UIPrefab__12f2948;
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


