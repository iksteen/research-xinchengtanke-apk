/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Core.BE2_MainEventsManager$$get_Instance @ 0x6001fc
 * MG_BlocksEngine2_Core_BE2_EventsManager_o* MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_MainEventsManager$$get_Instance
   MG_BlocksEngine2_Core_BE2_EventsManager_o*
   MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance (const MethodInfo* method); */

long native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if ((bRam000000000133ee65 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Core_BE2_EventsManager_TypeInfo_12d39b8);
    native_sub_43273c(&MG_BlocksEngine2_Core_BE2_MainEventsManager_TypeInfo_12d3a20);
    bRam000000000133ee65 = 1;
  }
  lVar1 = **(long **)(_MG_BlocksEngine2_Core_BE2_MainEventsManager_TypeInfo_12d3a20 + 0xb8);
  if (lVar1 == 0) {
    uVar2 = native_sub_432808(_MG_BlocksEngine2_Core_BE2_EventsManager_TypeInfo_12d39b8);
    native_MG_BlocksEngine2_Core_BE2_EventsManager___ctor_581070(uVar2,0);
    puVar3 = *(undefined8 **)(_MG_BlocksEngine2_Core_BE2_MainEventsManager_TypeInfo_12d3a20 + 0xb8);
    *puVar3 = uVar2;
    native_sub_4326e0(puVar3,uVar2);
    lVar1 = **(long **)(_MG_BlocksEngine2_Core_BE2_MainEventsManager_TypeInfo_12d3a20 + 0xb8);
  }
  return lVar1;
}



/* MG_BlocksEngine2.Core.BE2_MainEventsManager$$Init @ 0x61205c
 * void MG_BlocksEngine2_Core_BE2_MainEventsManager__Init (MG_BlocksEngine2_Core_BE2_MainEventsManager_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_MainEventsManager$$Init
   void MG_BlocksEngine2_Core_BE2_MainEventsManager__Init
   (MG_BlocksEngine2_Core_BE2_MainEventsManager_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_MainEventsManager__Init_61205c(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((bRam000000000133ee66 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Core_BE2_EventsManager_TypeInfo_12d39b8);
    native_sub_43273c(&MG_BlocksEngine2_Core_BE2_MainEventsManager_TypeInfo_12d3a20);
    bRam000000000133ee66 = 1;
  }
  if (**(long **)(_MG_BlocksEngine2_Core_BE2_MainEventsManager_TypeInfo_12d3a20 + 0xb8) != 0) {
    return;
  }
  uVar4 = native_sub_432808(_MG_BlocksEngine2_Core_BE2_EventsManager_TypeInfo_12d39b8);
  native_MG_BlocksEngine2_Core_BE2_EventsManager___ctor_581070(uVar4,0);
  puVar5 = *(undefined8 **)(_MG_BlocksEngine2_Core_BE2_MainEventsManager_TypeInfo_12d3a20 + 0xb8);
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



/* MG_BlocksEngine2.Core.BE2_MainEventsManager$$Awake @ 0x6120f0
 * void MG_BlocksEngine2_Core_BE2_MainEventsManager__Awake (MG_BlocksEngine2_Core_BE2_MainEventsManager_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_MainEventsManager$$Awake
   void MG_BlocksEngine2_Core_BE2_MainEventsManager__Awake
   (MG_BlocksEngine2_Core_BE2_MainEventsManager_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_MainEventsManager__Awake_6120f0(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((bRam000000000133ee66 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Core_BE2_EventsManager_TypeInfo_12d39b8);
    native_sub_43273c(&MG_BlocksEngine2_Core_BE2_MainEventsManager_TypeInfo_12d3a20);
    bRam000000000133ee66 = 1;
  }
  if (**(long **)(_MG_BlocksEngine2_Core_BE2_MainEventsManager_TypeInfo_12d3a20 + 0xb8) != 0) {
    return;
  }
  uVar4 = native_sub_432808(_MG_BlocksEngine2_Core_BE2_EventsManager_TypeInfo_12d39b8);
  native_MG_BlocksEngine2_Core_BE2_EventsManager___ctor_581070(uVar4,0);
  puVar5 = *(undefined8 **)(_MG_BlocksEngine2_Core_BE2_MainEventsManager_TypeInfo_12d3a20 + 0xb8);
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



/* MG_BlocksEngine2.Core.BE2_MainEventsManager$$.ctor @ 0x6120f4
 * void MG_BlocksEngine2_Core_BE2_MainEventsManager___ctor (MG_BlocksEngine2_Core_BE2_MainEventsManager_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_MainEventsManager$$.ctor
   void MG_BlocksEngine2_Core_BE2_MainEventsManager___ctor
   (MG_BlocksEngine2_Core_BE2_MainEventsManager_o* __this, const MethodInfo* method); */

undefined1  [16] native_MG_BlocksEngine2_Core_BE2_MainEventsManager___ctor_6120f4(ulong param_1)

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


