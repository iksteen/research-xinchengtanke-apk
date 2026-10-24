/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$get_Instance @ 0x576470
 * MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$get_Instance
   MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o*
   MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance (const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133eaac & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_DragDrop_BE2_DragDropManager_TypeInfo_12d39a0);
    native_sub_43273c(&Method_UnityEngine_Object_FindObjectOfType_BE2_DragDropManager____12e59e8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133eaac = 1;
  }
  uVar3 = **(undefined8 **)(_MG_BlocksEngine2_DragDrop_BE2_DragDropManager_TypeInfo_12d39a0 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar3,0);
  if ((uVar1 & 1) == 0) {
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__FindObjectOfType_BE2_DragDropManager__4a6274
                      (_Method_UnityEngine_Object_FindObjectOfType_BE2_DragDropManager____12e59e8);
    puVar2 = *(undefined8 **)
              (_MG_BlocksEngine2_DragDrop_BE2_DragDropManager_TypeInfo_12d39a0 + 0xb8);
    *puVar2 = uVar3;
    native_sub_4326e0(puVar2,uVar3);
  }
  return **(undefined8 **)(_MG_BlocksEngine2_DragDrop_BE2_DragDropManager_TypeInfo_12d39a0 + 0xb8);
}



/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$set_Instance @ 0x578acc
 * void MG_BlocksEngine2_DragDrop_BE2_DragDropManager__set_Instance (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$set_Instance
   void MG_BlocksEngine2_DragDrop_BE2_DragDropManager__set_Instance
   (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__set_Instance_578acc(undefined8 param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if ((bRam000000000133eaad & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_DragDrop_BE2_DragDropManager_TypeInfo_12d39a0);
    bRam000000000133eaad = 1;
  }
  puVar4 = *(undefined8 **)(_MG_BlocksEngine2_DragDrop_BE2_DragDropManager_TypeInfo_12d39a0 + 0xb8);
  *puVar4 = param_1;
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



/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$get_Raycaster @ 0x578b20
 * MG_BlocksEngine2_DragDrop_I_BE2_Raycaster_o* MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Raycaster (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$get_Raycaster
   MG_BlocksEngine2_DragDrop_I_BE2_Raycaster_o*
   MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Raycaster
   (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Raycaster_578b20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$set_Raycaster @ 0x578b28
 * void MG_BlocksEngine2_DragDrop_BE2_DragDropManager__set_Raycaster (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this, MG_BlocksEngine2_DragDrop_I_BE2_Raycaster_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$set_Raycaster
   void MG_BlocksEngine2_DragDrop_BE2_DragDropManager__set_Raycaster
   (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this,
   MG_BlocksEngine2_DragDrop_I_BE2_Raycaster_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__set_Raycaster_578b28
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



/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$get_DraggedObjectsTransform @ 0x578b30
 * UnityEngine_Transform_o* MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_DraggedObjectsTransform (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$get_DraggedObjectsTransform
   UnityEngine_Transform_o*
   MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_DraggedObjectsTransform
   (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_DraggedObjectsTransform_578b30
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$get_CurrentDrag @ 0x578b38
 * MG_BlocksEngine2_DragDrop_I_BE2_Drag_o* MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_CurrentDrag (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$get_CurrentDrag
   MG_BlocksEngine2_DragDrop_I_BE2_Drag_o*
   MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_CurrentDrag
   (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_CurrentDrag_578b38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$set_CurrentDrag @ 0x578b40
 * void MG_BlocksEngine2_DragDrop_BE2_DragDropManager__set_CurrentDrag (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this, MG_BlocksEngine2_DragDrop_I_BE2_Drag_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$set_CurrentDrag
   void MG_BlocksEngine2_DragDrop_BE2_DragDropManager__set_CurrentDrag
   (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this, MG_BlocksEngine2_DragDrop_I_BE2_Drag_o*
   value, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__set_CurrentDrag_578b40
               (long param_1,undefined8 param_2)

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



/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$get_CurrentSpot @ 0x578b48
 * MG_BlocksEngine2_Block_I_BE2_Spot_o* MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_CurrentSpot (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$get_CurrentSpot
   MG_BlocksEngine2_Block_I_BE2_Spot_o*
   MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_CurrentSpot
   (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_CurrentSpot_578b48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$set_CurrentSpot @ 0x578b50
 * void MG_BlocksEngine2_DragDrop_BE2_DragDropManager__set_CurrentSpot (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this, MG_BlocksEngine2_Block_I_BE2_Spot_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$set_CurrentSpot
   void MG_BlocksEngine2_DragDrop_BE2_DragDropManager__set_CurrentSpot
   (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this, MG_BlocksEngine2_Block_I_BE2_Spot_o*
   value, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__set_CurrentSpot_578b50
               (long param_1,undefined8 param_2)

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



/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$get_SpotsList @ 0x578b58
 * System_Collections_Generic_List_I_BE2_Spot__o* MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_SpotsList (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$get_SpotsList
   System_Collections_Generic_List_I_BE2_Spot__o*
   MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_SpotsList
   (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this, const MethodInfo* method); */

long native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_SpotsList_578b58(long param_1)

{
  long lVar1;
  long *plVar2;
  
  if ((bRam000000000133eaae & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_I_BE2_Spot___ctor___12dca10);
    native_sub_43273c(&System_Collections_Generic_List_I_BE2_Spot__TypeInfo_12d2a88);
    bRam000000000133eaae = 1;
  }
  plVar2 = (long *)(param_1 + 0x40);
  lVar1 = *plVar2;
  if (lVar1 == 0) {
    lVar1 = native_sub_432808(_System_Collections_Generic_List_I_BE2_Spot__TypeInfo_12d2a88);
    native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
              (lVar1,_Method_System_Collections_Generic_List_I_BE2_Spot___ctor___12dca10);
    *plVar2 = lVar1;
    native_sub_4326e0(plVar2,lVar1);
    lVar1 = *plVar2;
  }
  return lVar1;
}



/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$set_SpotsList @ 0x578be0
 * void MG_BlocksEngine2_DragDrop_BE2_DragDropManager__set_SpotsList (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this, System_Collections_Generic_List_I_BE2_Spot__o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$set_SpotsList
   void MG_BlocksEngine2_DragDrop_BE2_DragDropManager__set_SpotsList
   (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this,
   System_Collections_Generic_List_I_BE2_Spot__o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__set_SpotsList_578be0
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x40);
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



/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$get_GhostBlockTransform @ 0x578be8
 * UnityEngine_Transform_o* MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_GhostBlockTransform (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$get_GhostBlockTransform
   UnityEngine_Transform_o* MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_GhostBlockTransform
   (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_GhostBlockTransform_578be8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$get_DragDropComponentsCanvas @ 0x578bf0
 * UnityEngine_Canvas_o* MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_DragDropComponentsCanvas (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$get_DragDropComponentsCanvas
   UnityEngine_Canvas_o* MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_DragDropComponentsCanvas
   (const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_DragDropComponentsCanvas_578bf0(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133eaaf & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_DragDrop_BE2_DragDropManager_TypeInfo_12d39a0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInParent_Canvas____12e2d28);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133eaaf = 1;
  }
  uVar4 = *(undefined8 *)
           (*(long *)(_MG_BlocksEngine2_DragDrop_BE2_DragDropManager_TypeInfo_12d39a0 + 0xb8) + 8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar4,0);
  if ((uVar1 & 1) == 0) {
    lVar2 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470();
    if ((lVar2 == 0) || (*(long *)(lVar2 + 0x28) == 0)) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar4 = native_UnityEngine_Component__GetComponentInParent_BE2_Canvas__49dc70
                      (*(long *)(lVar2 + 0x28),
                       _Method_UnityEngine_Component_GetComponentInParent_Canvas____12e2d28);
    puVar3 = (undefined8 *)
             (*(long *)(_MG_BlocksEngine2_DragDrop_BE2_DragDropManager_TypeInfo_12d39a0 + 0xb8) + 8)
    ;
    *puVar3 = uVar4;
    native_sub_4326e0(puVar3,uVar4);
  }
  return *(undefined8 *)
          (*(long *)(_MG_BlocksEngine2_DragDrop_BE2_DragDropManager_TypeInfo_12d39a0 + 0xb8) + 8);
}



/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$OnEnable @ 0x578ccc
 * void MG_BlocksEngine2_DragDrop_BE2_DragDropManager__OnEnable (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$OnEnable
   void MG_BlocksEngine2_DragDrop_BE2_DragDropManager__OnEnable
   (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__OnEnable_578ccc(undefined8 param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if (cRam000000000133eb09 == '\0') {
    native_sub_43273c(&MG_BlocksEngine2_DragDrop_BE2_DragDropManager_TypeInfo_12d39a0);
    cRam000000000133eb09 = '\x01';
  }
  puVar4 = *(undefined8 **)(_MG_BlocksEngine2_DragDrop_BE2_DragDropManager_TypeInfo_12d39a0 + 0xb8);
  *puVar4 = param_1;
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



/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$Awake @ 0x578d20
 * void MG_BlocksEngine2_DragDrop_BE2_DragDropManager__Awake (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$Awake
   void MG_BlocksEngine2_DragDrop_BE2_DragDropManager__Awake
   (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__Awake_578d20(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if ((bRam000000000133eab0 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_DragDrop_BE2_DragDropManager_TypeInfo_12d39a0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInParent_BE2_Canvas____12e2cf8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Raycaster____12e2a60);
    bRam000000000133eab0 = 1;
  }
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_I_BE2_Raycaster____12e2a60);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  native_sub_4326e0(param_1 + 0x20);
  lVar5 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470();
  if (((lVar5 != 0) && (*(long *)(lVar5 + 0x28) != 0)) &&
     (lVar5 = native_UnityEngine_Component__GetComponentInParent_BE2_Canvas__49dc70
                        (*(long *)(lVar5 + 0x28),
                         _Method_UnityEngine_Component_GetComponentInParent_BE2_Canvas____12e2cf8),
     lVar5 != 0)) {
    uVar4 = native_MG_BlocksEngine2_Environment_BE2_Canvas__get_Canvas_574ec8();
    puVar6 = (undefined8 *)
             (*(long *)(_MG_BlocksEngine2_DragDrop_BE2_DragDropManager_TypeInfo_12d39a0 + 0xb8) + 8)
    ;
    *puVar6 = uVar4;
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
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$Start @ 0x578de0
 * void MG_BlocksEngine2_DragDrop_BE2_DragDropManager__Start (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$Start
   void MG_BlocksEngine2_DragDrop_BE2_DragDropManager__Start
   (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__Start_578de0(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_38;
  
  if ((bRam000000000133eab1 & 1) == 0) {
    native_sub_43273c(&Method_MG_BlocksEngine2_DragDrop_BE2_DragDropManager_OnDrag___12e2148);
    native_sub_43273c(&Method_MG_BlocksEngine2_DragDrop_BE2_DragDropManager_OnPointerDown___12e2150)
    ;
    native_sub_43273c(&Method_MG_BlocksEngine2_DragDrop_BE2_DragDropManager_OnPointerUp___12e2158);
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_DragDrop_BE2_DragDropManager_OnRightPointerDownOrHold___12e2160
                     );
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam000000000133eab1 = 1;
  }
  uVar3 = native_MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager__get_instance_dc6a44(0);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  native_sub_4326e0();
  lVar4 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
  uVar3 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
  native_UnityEngine_Events_UnityAction___ctor_773130
            (uVar3,param_1,
             _Method_MG_BlocksEngine2_DragDrop_BE2_DragDropManager_OnPointerDown___12e2150,0);
  if (lVar4 != 0) {
    native_MG_BlocksEngine2_Core_BE2_EventsManager__StartListening_563268(lVar4,7,uVar3);
    lVar4 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
    uVar3 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    native_UnityEngine_Events_UnityAction___ctor_773130
              (uVar3,param_1,
               _Method_MG_BlocksEngine2_DragDrop_BE2_DragDropManager_OnRightPointerDownOrHold___12e2160
               ,0);
    if (lVar4 != 0) {
      native_MG_BlocksEngine2_Core_BE2_EventsManager__StartListening_563268(lVar4,10,uVar3);
      lVar4 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
      uVar3 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
      native_UnityEngine_Events_UnityAction___ctor_773130
                (uVar3,param_1,
                 _Method_MG_BlocksEngine2_DragDrop_BE2_DragDropManager_OnRightPointerDownOrHold___12e2160
                 ,0);
      if (lVar4 != 0) {
        native_MG_BlocksEngine2_Core_BE2_EventsManager__StartListening_563268(lVar4,0xb,uVar3);
        lVar4 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
        uVar3 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
        native_UnityEngine_Events_UnityAction___ctor_773130
                  (uVar3,param_1,
                   _Method_MG_BlocksEngine2_DragDrop_BE2_DragDropManager_OnDrag___12e2148,0);
        if (lVar4 != 0) {
          native_MG_BlocksEngine2_Core_BE2_EventsManager__StartListening_563268(lVar4,2,uVar3);
          lVar4 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
          uVar3 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
          native_UnityEngine_Events_UnityAction___ctor_773130
                    (uVar3,param_1,
                     _Method_MG_BlocksEngine2_DragDrop_BE2_DragDropManager_OnPointerUp___12e2158,0);
          if (lVar4 != 0) {
            if ((bRam000000000133eaf4 & 1) == 0) {
              native_sub_43273c(&
                                Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__Add___12d8ea0
                               );
              native_sub_43273c(&
                                Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                               );
              native_sub_43273c(&UnityEngine_Events_UnityEvent_TypeInfo_12d65d8);
              bRam000000000133eaf4 = 1;
            }
            lStack_38 = 0;
            if (*(long *)(lVar4 + 0x10) != 0) {
              uVar1 = native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___TryGetValue_c25318
                                (*(long *)(lVar4 + 0x10),9,&lStack_38,
                                 _Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                                );
              if ((uVar1 & 1) == 0) {
                lVar2 = native_sub_432808(_UnityEngine_Events_UnityEvent_TypeInfo_12d65d8);
                native_UnityEngine_Events_UnityEvent___ctor_7733e0(lVar2,0);
                lStack_38 = lVar2;
                if (lVar2 != 0) {
                  native_UnityEngine_Events_UnityEvent__AddListener_7734bc(lVar2,uVar3,0);
                  if (*(long *)(lVar4 + 0x10) != 0) {
                    native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___Add_c235f4
                              (*(long *)(lVar4 + 0x10),9,lStack_38,
                               _Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__Add___12d8ea0
                              );
                    return;
                  }
                }
              }
              else if (lStack_38 != 0) {
                native_UnityEngine_Events_UnityEvent__AddListener_7734bc(lStack_38,uVar3,0);
                return;
              }
            }
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$OnPointerDown @ 0x578fdc
 * void MG_BlocksEngine2_DragDrop_BE2_DragDropManager__OnPointerDown (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$OnPointerDown
   void MG_BlocksEngine2_DragDrop_BE2_DragDropManager__OnPointerDown
   (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__OnPointerDown_578fdc
               (undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  
  if ((bRam000000000133eab2 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18);
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_InputManager_TypeInfo_12d4e20);
    native_sub_43273c(&MG_BlocksEngine2_DragDrop_I_BE2_Raycaster_TypeInfo_12d4e40);
    bRam000000000133eab2 = 1;
  }
  plVar9 = *(long **)(param_3 + 0x20);
  plVar4 = (long *)native_MG_BlocksEngine2_Core_BE2_InputManager__get_Instance_602b04(0);
  if (plVar4 != (long *)0x0) {
    lVar6 = *plVar4;
    if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_InputManager_TypeInfo_12d4e20) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_005790a0;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
    }
    puVar5 = (undefined8 *)
             native_sub_3c9b34(plVar4,_MG_BlocksEngine2_Core_I_BE2_InputManager_TypeInfo_12d4e20,1);
LAB_005790a0:
    uVar10 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
      if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_DragDrop_I_BE2_Raycaster_TypeInfo_12d4e40)
          {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_00579118;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
      }
      puVar5 = (undefined8 *)
               native_sub_3c9b34(plVar9,_MG_BlocksEngine2_DragDrop_I_BE2_Raycaster_TypeInfo_12d4e40,
                                 2);
LAB_00579118:
      plVar9 = (long *)(*(code *)*puVar5)(uVar10,param_2,plVar9,puVar5[1]);
      plVar4 = (long *)(param_3 + 0x30);
      if (plVar9 == (long *)0x0) {
        *plVar4 = 0;
        if (iRam0000000001345318 != 0) {
          puVar1 = (ulong *)(((ulong)plVar4 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar4 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        return;
      }
      *plVar4 = (long)plVar9;
      native_sub_4326e0(plVar4,plVar9);
      lVar6 = *plVar9;
      if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_005791bc;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
      }
      puVar5 = (undefined8 *)
               native_sub_3c9b34(plVar9,_MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18,0);
LAB_005791bc:
                    /* WARNING: Could not recover jumptable at 0x005791d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar5)(plVar9,puVar5[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$OnRightPointerDownOrHold @ 0x5791dc
 * void MG_BlocksEngine2_DragDrop_BE2_DragDropManager__OnRightPointerDownOrHold (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$OnRightPointerDownOrHold
   void MG_BlocksEngine2_DragDrop_BE2_DragDropManager__OnRightPointerDownOrHold
   (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__OnRightPointerDownOrHold_5791dc
               (undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uVar7;
  
  if ((bRam000000000133eab3 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18);
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_InputManager_TypeInfo_12d4e20);
    native_sub_43273c(&MG_BlocksEngine2_DragDrop_I_BE2_Raycaster_TypeInfo_12d4e40);
    bRam000000000133eab3 = 1;
  }
  plVar6 = *(long **)(param_3 + 0x20);
  plVar1 = (long *)native_MG_BlocksEngine2_Core_BE2_InputManager__get_Instance_602b04(0);
  if (plVar1 != (long *)0x0) {
    lVar3 = *plVar1;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar4 = 0;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_Core_I_BE2_InputManager_TypeInfo_12d4e20) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto LAB_0057929c;
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar1,_MG_BlocksEngine2_Core_I_BE2_InputManager_TypeInfo_12d4e20,1);
LAB_0057929c:
    uVar7 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar4 = 0;
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_DragDrop_I_BE2_Raycaster_TypeInfo_12d4e40)
          {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
            goto LAB_00579314;
          }
          uVar4 = uVar4 + 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar2 = (undefined8 *)
               native_sub_3c9b34(plVar6,_MG_BlocksEngine2_DragDrop_I_BE2_Raycaster_TypeInfo_12d4e40,
                                 2);
LAB_00579314:
      plVar1 = (long *)(*(code *)*puVar2)(uVar7,param_2,plVar6,puVar2[1]);
      if (plVar1 == (long *)0x0) {
        return;
      }
      lVar3 = *plVar1;
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar4 = 0;
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_005793a0;
          }
          uVar4 = uVar4 + 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar2 = (undefined8 *)
               native_sub_3c9b34(plVar1,_MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18,1);
LAB_005793a0:
                    /* WARNING: Could not recover jumptable at 0x005793b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)(plVar1,puVar2[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$OnDrag @ 0x5793bc
 * void MG_BlocksEngine2_DragDrop_BE2_DragDropManager__OnDrag (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$OnDrag
   void MG_BlocksEngine2_DragDrop_BE2_DragDropManager__OnDrag
   (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__OnDrag_5793bc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((bRam000000000133eab4 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18);
    bRam000000000133eab4 = 1;
  }
  plVar6 = *(long **)(param_1 + 0x30);
  if (plVar6 != (long *)0x0) {
    if (*(char *)(param_1 + 0x50) == '\0') {
      lVar3 = *plVar6;
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar4 = 0;
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18) {
            puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 6) * 0x10 + 0x138);
            goto LAB_0057945c;
          }
          uVar4 = uVar4 + 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar1 = (undefined8 *)
               native_sub_3c9b34(plVar6,_MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18,6);
LAB_0057945c:
      uVar2 = (*(code *)*puVar1)(plVar6,puVar1[1]);
      uVar2 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDragEvents_57950c
                        (uVar2,uVar2);
      native_UnityEngine_MonoBehaviour__StartCoroutine_8e9174(param_1,uVar2,0);
      plVar6 = *(long **)(param_1 + 0x30);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
    }
    lVar3 = *plVar6;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar4 = 0;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_005794e8;
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar1 = (undefined8 *)
             native_sub_3c9b34(plVar6,_MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18,2);
LAB_005794e8:
    (*(code *)*puVar1)(plVar6,puVar1[1]);
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  return;
}



/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$OnPointerUp @ 0x579584
 * void MG_BlocksEngine2_DragDrop_BE2_DragDropManager__OnPointerUp (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x005797fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$OnPointerUp
   void MG_BlocksEngine2_DragDrop_BE2_DragDropManager__OnPointerUp
   (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__OnPointerUp_579584(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  if ((bRam000000000133eab5 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18);
    bRam000000000133eab5 = 1;
  }
  puVar6 = (undefined8 *)(param_1 + 0x30);
  plVar7 = (long *)*puVar6;
  if ((plVar7 != (long *)0x0) && (*(char *)(param_1 + 0x50) != '\0')) {
    lVar3 = *plVar7;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar4 = 0;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 3) * 0x10 + 0x138);
          goto LAB_0057962c;
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar1 = (undefined8 *)
             native_sub_3c9b34(plVar7,_MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18,3);
LAB_0057962c:
    (*(code *)*puVar1)(plVar7,puVar1[1]);
    plVar7 = (long *)*puVar6;
    if (plVar7 == (long *)0x0) goto LAB_00579718;
    lVar3 = *plVar7;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar4 = 0;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 6) * 0x10 + 0x138);
          goto LAB_00579698;
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar1 = (undefined8 *)
             native_sub_3c9b34(plVar7,_MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18,6);
LAB_00579698:
    uVar2 = (*(code *)*puVar1)(plVar7,puVar1[1]);
    uVar2 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDropEvents_57971c
                      (uVar2,uVar2);
    native_UnityEngine_MonoBehaviour__StartCoroutine_8e9174(param_1,uVar2,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  native_sub_4326e0(puVar6,0);
  *(undefined8 *)(param_1 + 0x38) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x38),0);
  if (*(long *)(param_1 + 0x48) != 0) {
    native_UnityEngine_Transform__SetParent_77208c(*(long *)(param_1 + 0x48),0,0);
    *(undefined1 *)(param_1 + 0x50) = 0;
    lVar3 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
    if (lVar3 != 0) {
      if ((bRam000000000133eaf8 & 1) == 0) {
        native_sub_43273c(&
                          Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                         );
        bRam000000000133eaf8 = 1;
      }
      if ((*(long *)(lVar3 + 0x10) != 0) &&
         (uVar4 = native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___TryGetValue_c25318
                            (*(long *)(lVar3 + 0x10),3,&stack0xffffffffffffffd8,
                             _Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                            ), (uVar4 & 1) == 0)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
LAB_00579718:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$C_HandleDropEvents @ 0x57971c
 * System_Collections_IEnumerator_o* MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDropEvents (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this, MG_BlocksEngine2_Block_I_BE2_Block_o* block, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$C_HandleDropEvents
   System_Collections_IEnumerator_o*
   MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDropEvents
   (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this, MG_BlocksEngine2_Block_I_BE2_Block_o*
   block, const MethodInfo* method); */

long native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDropEvents_57971c
               (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((bRam000000000133eab6 & 1) == 0) {
    native_sub_43273c(&
                      MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDropEvents_d__39_TypeInfo_12d6fe8
                     );
    bRam000000000133eab6 = 1;
  }
  lVar1 = native_sub_432808(
                           _MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDropEvents_d__39_TypeInfo_12d6fe8
                           );
  native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDropEvents_d__39___ctor_546e88
            (lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_2;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x20),param_2);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$C_HandleDragEvents @ 0x57950c
 * System_Collections_IEnumerator_o* MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDragEvents (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this, MG_BlocksEngine2_Block_I_BE2_Block_o* block, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$C_HandleDragEvents
   System_Collections_IEnumerator_o*
   MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDragEvents
   (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this, MG_BlocksEngine2_Block_I_BE2_Block_o*
   block, const MethodInfo* method); */

long native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDragEvents_57950c
               (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((bRam000000000133eab7 & 1) == 0) {
    native_sub_43273c(&
                      MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDragEvents_d__40_TypeInfo_12d6fe0
                     );
    bRam000000000133eab7 = 1;
  }
  lVar1 = native_sub_432808(
                           _MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDragEvents_d__40_TypeInfo_12d6fe0
                           );
  native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__C_HandleDragEvents_d__40___ctor_546744
            (lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_2;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x20),param_2);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$AddToSpotsList @ 0x579818
 * void MG_BlocksEngine2_DragDrop_BE2_DragDropManager__AddToSpotsList (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this, MG_BlocksEngine2_Block_I_BE2_Spot_o* spot, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$AddToSpotsList
   void MG_BlocksEngine2_DragDrop_BE2_DragDropManager__AddToSpotsList
   (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this, MG_BlocksEngine2_Block_I_BE2_Spot_o*
   spot, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__AddToSpotsList_579818
               (undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  
  if ((bRam000000000133eab8 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_I_BE2_Spot__Add___12dca18);
    native_sub_43273c(&Method_System_Collections_Generic_List_I_BE2_Spot__Contains___12dca20);
    bRam000000000133eab8 = 1;
  }
  lVar1 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_SpotsList_578b58(param_1);
  if (lVar1 != 0) {
    uVar2 = native_System_Collections_Generic_List_BE2_UI_SelectionPanel___Contains_d40ec8
                      (lVar1,param_2,
                       _Method_System_Collections_Generic_List_I_BE2_Spot__Contains___12dca20);
    if ((param_2 == 0) || ((uVar2 & 1) != 0)) {
      return;
    }
    lVar1 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_SpotsList_578b58(param_1);
    if (lVar1 != 0) {
      lVar6 = *(long *)(lVar1 + 0x10);
      if (lVar6 != 0) {
        uVar5 = *(uint *)(lVar1 + 0x18);
        if (uVar5 == *(uint *)(lVar6 + 0x18)) {
          (*(code *)**(undefined8 **)
                      (*(long *)(*(long *)(
                                          _Method_System_Collections_Generic_List_I_BE2_Spot__Add___12dca18
                                          + 0x18) + 0xc0) + 0x60))(lVar1,uVar5 + 1);
          uVar5 = *(uint *)(lVar1 + 0x18);
          lVar6 = *(long *)(lVar1 + 0x10);
          *(uint *)(lVar1 + 0x18) = uVar5 + 1;
          if (lVar6 == 0) goto code_r0x00d40c5c;
        }
        else {
          *(uint *)(lVar1 + 0x18) = uVar5 + 1;
        }
        if (uVar5 < *(uint *)(lVar6 + 0x18)) {
          plVar3 = (long *)(lVar6 + (long)(int)uVar5 * 8 + 0x20);
          *plVar3 = param_2;
          native_sub_4326e0(plVar3,param_2);
          *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
          return;
        }
        uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar4,0);
      }
code_r0x00d40c5c:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$RemoveFromSpotsList @ 0x5798c4
 * void MG_BlocksEngine2_DragDrop_BE2_DragDropManager__RemoveFromSpotsList (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this, MG_BlocksEngine2_Block_I_BE2_Spot_o* spot, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$RemoveFromSpotsList
   void MG_BlocksEngine2_DragDrop_BE2_DragDropManager__RemoveFromSpotsList
   (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this, MG_BlocksEngine2_Block_I_BE2_Spot_o*
   spot, const MethodInfo* method); */

ulong native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__RemoveFromSpotsList_5798c4
                (undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  if ((bRam000000000133eab9 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_I_BE2_Spot__Contains___12dca20);
    native_sub_43273c(&Method_System_Collections_Generic_List_I_BE2_Spot__Remove___12dca28);
    bRam000000000133eab9 = 1;
  }
  lVar2 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_SpotsList_578b58(param_1);
  if (lVar2 != 0) {
    uVar3 = native_System_Collections_Generic_List_BE2_UI_SelectionPanel___Contains_d40ec8
                      (lVar2,param_2,
                       _Method_System_Collections_Generic_List_I_BE2_Spot__Contains___12dca20);
    if ((uVar3 & 1) == 0) {
      return uVar3;
    }
    lVar4 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_SpotsList_578b58(param_1);
    lVar2 = _Method_System_Collections_Generic_List_I_BE2_Spot__Remove___12dca28;
    if (lVar4 != 0) {
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810(0,param_2);
      }
      iVar1 = (*(code *)**(undefined8 **)
                          (*(long *)(*(long *)(
                                              _Method_System_Collections_Generic_List_I_BE2_Spot__Remove___12dca28
                                              + 0x18) + 0xc0) + 0xd8))();
      if (-1 < iVar1) {
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar2 + 0x18) + 0xc0) + 0xe8))(lVar4,iVar1);
      }
      return (ulong)(-1 < iVar1);
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$.ctor @ 0x57996c
 * void MG_BlocksEngine2_DragDrop_BE2_DragDropManager___ctor (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragDropManager$$.ctor
   void MG_BlocksEngine2_DragDrop_BE2_DragDropManager___ctor
   (MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* __this, const MethodInfo* method); */

undefined1  [16] native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager___ctor_57996c(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)(param_1 + 0x54) = 0x42200000;
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


