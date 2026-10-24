/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Environment.BE2_ProgrammingEnv$$get_Transform @ 0x617498
 * UnityEngine_Transform_o* MG_BlocksEngine2_Environment_BE2_ProgrammingEnv__get_Transform (MG_BlocksEngine2_Environment_BE2_ProgrammingEnv_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_ProgrammingEnv$$get_Transform
   UnityEngine_Transform_o* MG_BlocksEngine2_Environment_BE2_ProgrammingEnv__get_Transform
   (MG_BlocksEngine2_Environment_BE2_ProgrammingEnv_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Environment_BE2_ProgrammingEnv__get_Transform_617498(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((bRam000000000133ee9a & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ee9a = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar2,0);
  if ((uVar1 & 1) != 0) {
    return *(undefined8 *)(param_1 + 0x18);
  }
  if (pcRam0000000001340ab8 == (code *)0x0) {
    pcRam0000000001340ab8 = (code *)native_sub_4326f0(&UNK_00e2d0e1);
  }
                    /* WARNING: Could not recover jumptable at 0x008da668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*pcRam0000000001340ab8)(param_1);
  return uVar2;
}



/* MG_BlocksEngine2.Environment.BE2_ProgrammingEnv$$get_BlocksList @ 0x617520
 * System_Collections_Generic_List_I_BE2_Block__o* MG_BlocksEngine2_Environment_BE2_ProgrammingEnv__get_BlocksList (MG_BlocksEngine2_Environment_BE2_ProgrammingEnv_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Environment.BE2_ProgrammingEnv$$get_BlocksList
   System_Collections_Generic_List_I_BE2_Block__o*
   MG_BlocksEngine2_Environment_BE2_ProgrammingEnv__get_BlocksList
   (MG_BlocksEngine2_Environment_BE2_ProgrammingEnv_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Environment_BE2_ProgrammingEnv__get_BlocksList_617520(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* MG_BlocksEngine2.Environment.BE2_ProgrammingEnv$$set_BlocksList @ 0x617528
 * void MG_BlocksEngine2_Environment_BE2_ProgrammingEnv__set_BlocksList (MG_BlocksEngine2_Environment_BE2_ProgrammingEnv_o* __this, System_Collections_Generic_List_I_BE2_Block__o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Environment.BE2_ProgrammingEnv$$set_BlocksList
   void MG_BlocksEngine2_Environment_BE2_ProgrammingEnv__set_BlocksList
   (MG_BlocksEngine2_Environment_BE2_ProgrammingEnv_o* __this,
   System_Collections_Generic_List_I_BE2_Block__o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_ProgrammingEnv__set_BlocksList_617528
               (long param_1,undefined8 param_2)

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



/* MG_BlocksEngine2.Environment.BE2_ProgrammingEnv$$get_TargetObject @ 0x617530
 * MG_BlocksEngine2_Environment_I_BE2_TargetObject_o* MG_BlocksEngine2_Environment_BE2_ProgrammingEnv__get_TargetObject (MG_BlocksEngine2_Environment_BE2_ProgrammingEnv_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Environment.BE2_ProgrammingEnv$$get_TargetObject
   MG_BlocksEngine2_Environment_I_BE2_TargetObject_o*
   MG_BlocksEngine2_Environment_BE2_ProgrammingEnv__get_TargetObject
   (MG_BlocksEngine2_Environment_BE2_ProgrammingEnv_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Environment_BE2_ProgrammingEnv__get_TargetObject_617530(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* MG_BlocksEngine2.Environment.BE2_ProgrammingEnv$$get_Visible @ 0x617538
 * bool MG_BlocksEngine2_Environment_BE2_ProgrammingEnv__get_Visible (MG_BlocksEngine2_Environment_BE2_ProgrammingEnv_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Environment.BE2_ProgrammingEnv$$get_Visible
   bool MG_BlocksEngine2_Environment_BE2_ProgrammingEnv__get_Visible
   (MG_BlocksEngine2_Environment_BE2_ProgrammingEnv_o* __this, const MethodInfo* method); */

undefined1 native_MG_BlocksEngine2_Environment_BE2_ProgrammingEnv__get_Visible_617538(long param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}



/* MG_BlocksEngine2.Environment.BE2_ProgrammingEnv$$set_Visible @ 0x617540
 * void MG_BlocksEngine2_Environment_BE2_ProgrammingEnv__set_Visible (MG_BlocksEngine2_Environment_BE2_ProgrammingEnv_o* __this, bool value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_ProgrammingEnv$$set_Visible
   void MG_BlocksEngine2_Environment_BE2_ProgrammingEnv__set_Visible
   (MG_BlocksEngine2_Environment_BE2_ProgrammingEnv_o* __this, bool value, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Environment_BE2_ProgrammingEnv__set_Visible_617540
               (long param_1,byte param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 auStack_28 [2];
  
  if ((bRam000000000133ee9b & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ee9b = 1;
  }
  auStack_28[0] = 0;
  *(byte *)(param_1 + 0x38) = param_2 & 1;
  lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  if (lVar1 == 0) goto LAB_0061763c;
  auStack_28[0] = native_UnityEngine_GameObject__get_scene_8deb10(lVar1,0);
  lVar1 = native_UnityEngine_SceneManagement_Scene__get_name_76995c(auStack_28,0);
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar3,0);
    if ((uVar2 & 1) != 0) {
      lVar1 = *(long *)(param_1 + 0x40);
      if (lVar1 == 0) {
LAB_0061763c:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      if ((param_2 & 1) == 0) {
        native_UnityEngine_CanvasGroup__set_alpha_db6a98(0,lVar1,0);
        lVar1 = *(long *)(param_1 + 0x40);
        if (lVar1 == 0) goto LAB_0061763c;
        uVar3 = 0;
      }
      else {
        native_UnityEngine_CanvasGroup__set_alpha_db6a98(0x3f800000,lVar1,0);
        lVar1 = *(long *)(param_1 + 0x40);
        if (lVar1 == 0) goto LAB_0061763c;
        uVar3 = 1;
      }
      native_UnityEngine_CanvasGroup__set_blocksRaycasts_db6b68(lVar1,uVar3,0);
    }
  }
  return;
}



/* MG_BlocksEngine2.Environment.BE2_ProgrammingEnv$$OnValidate @ 0x617640
 * void MG_BlocksEngine2_Environment_BE2_ProgrammingEnv__OnValidate (MG_BlocksEngine2_Environment_BE2_ProgrammingEnv_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_ProgrammingEnv$$OnValidate
   void MG_BlocksEngine2_Environment_BE2_ProgrammingEnv__OnValidate
   (MG_BlocksEngine2_Environment_BE2_ProgrammingEnv_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_ProgrammingEnv__OnValidate_617640(long param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 auStack_28 [2];
  
  if ((bRam000000000133ee9c & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInParent_CanvasGroup____12e2d30);
    bRam000000000133ee9c = 1;
  }
  uVar4 = native_UnityEngine_Component__GetComponentInParent_BE2_Canvas__49dc70
                    (param_1,
                     _Method_UnityEngine_Component_GetComponentInParent_CanvasGroup____12e2d30);
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  native_sub_4326e0(param_1 + 0x40);
  bVar1 = *(byte *)(param_1 + 0x38);
  if ((bRam000000000133ee9b & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ee9b = 1;
  }
  auStack_28[0] = 0;
  *(byte *)(param_1 + 0x38) = bVar1 & 1;
  lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  if (lVar2 == 0) goto LAB_0061763c;
  auStack_28[0] = native_UnityEngine_GameObject__get_scene_8deb10(lVar2,0);
  lVar2 = native_UnityEngine_SceneManagement_Scene__get_name_76995c(auStack_28,0);
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar4,0);
    if ((uVar3 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x40);
      if (lVar2 == 0) {
LAB_0061763c:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      if ((bVar1 & 1) == 0) {
        native_UnityEngine_CanvasGroup__set_alpha_db6a98(0,lVar2,0);
        lVar2 = *(long *)(param_1 + 0x40);
        if (lVar2 == 0) goto LAB_0061763c;
        uVar4 = 0;
      }
      else {
        native_UnityEngine_CanvasGroup__set_alpha_db6a98(0x3f800000,lVar2,0);
        lVar2 = *(long *)(param_1 + 0x40);
        if (lVar2 == 0) goto LAB_0061763c;
        uVar4 = 1;
      }
      native_UnityEngine_CanvasGroup__set_blocksRaycasts_db6b68(lVar2,uVar4,0);
    }
  }
  return;
}



/* MG_BlocksEngine2.Environment.BE2_ProgrammingEnv$$Awake @ 0x6176a8
 * void MG_BlocksEngine2_Environment_BE2_ProgrammingEnv__Awake (MG_BlocksEngine2_Environment_BE2_ProgrammingEnv_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_ProgrammingEnv$$Awake
   void MG_BlocksEngine2_Environment_BE2_ProgrammingEnv__Awake
   (MG_BlocksEngine2_Environment_BE2_ProgrammingEnv_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_ProgrammingEnv__Awake_6176a8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if ((bRam000000000133ee9d & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInParent_CanvasGroup____12e2d30);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_GraphicRaycaster____12e29f0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ee9d = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar7,0);
  if ((uVar4 & 1) != 0) {
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_006177e0;
    plVar5 = (long *)(*(long *)(param_1 + 0x30) + 0x18);
    *plVar5 = param_1;
    native_sub_4326e0(plVar5,param_1);
  }
  uVar7 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  *(undefined8 *)(param_1 + 0x18) = uVar7;
  native_sub_4326e0(param_1 + 0x18);
  uVar7 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
  *(undefined8 *)(param_1 + 0x20) = uVar7;
  native_sub_4326e0(param_1 + 0x20);
  native_MG_BlocksEngine2_Environment_BE2_ProgrammingEnv__UpdateBlocksList_6177e4(param_1);
  uVar7 = native_UnityEngine_Component__GetComponentInParent_BE2_Canvas__49dc70
                    (param_1,
                     _Method_UnityEngine_Component_GetComponentInParent_CanvasGroup____12e2d30);
  *(undefined8 *)(param_1 + 0x40) = uVar7;
  native_sub_4326e0(param_1 + 0x40);
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar7 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (*(long *)(param_1 + 0x40),
                       _Method_UnityEngine_Component_GetComponent_GraphicRaycaster____12e29f0);
    puVar6 = (undefined8 *)(param_1 + 0x48);
    *puVar6 = uVar7;
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
LAB_006177e0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Environment.BE2_ProgrammingEnv$$Start @ 0x617b58
 * void MG_BlocksEngine2_Environment_BE2_ProgrammingEnv__Start (MG_BlocksEngine2_Environment_BE2_ProgrammingEnv_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_ProgrammingEnv$$Start
   void MG_BlocksEngine2_Environment_BE2_ProgrammingEnv__Start
   (MG_BlocksEngine2_Environment_BE2_ProgrammingEnv_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_ProgrammingEnv__Start_617b58(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  undefined8 uVar6;
  
  if ((bRam000000000133ee9e & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_DragDrop_I_BE2_Raycaster_TypeInfo_12d4e40);
    bRam000000000133ee9e = 1;
  }
  lVar1 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470(0);
  if ((lVar1 == 0) || (plVar5 = *(long **)(lVar1 + 0x20), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar1 = *plVar5;
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
    uVar3 = 0;
    piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == _MG_BlocksEngine2_DragDrop_I_BE2_Raycaster_TypeInfo_12d4e40) {
        puVar2 = (undefined8 *)(lVar1 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_00617bfc;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 < *(ushort *)(lVar1 + 0x12a));
  }
  puVar2 = (undefined8 *)
           native_sub_3c9b34(plVar5,_MG_BlocksEngine2_DragDrop_I_BE2_Raycaster_TypeInfo_12d4e40,0);
LAB_00617bfc:
                    /* WARNING: Could not recover jumptable at 0x00617c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar5,uVar6,puVar2[1]);
  return;
}



/* MG_BlocksEngine2.Environment.BE2_ProgrammingEnv$$UpdateBlocksList @ 0x6177e4
 * void MG_BlocksEngine2_Environment_BE2_ProgrammingEnv__UpdateBlocksList (MG_BlocksEngine2_Environment_BE2_ProgrammingEnv_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00617b04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_ProgrammingEnv$$UpdateBlocksList
   void MG_BlocksEngine2_Environment_BE2_ProgrammingEnv__UpdateBlocksList
   (MG_BlocksEngine2_Environment_BE2_ProgrammingEnv_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_ProgrammingEnv__UpdateBlocksList_6177e4(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((bRam000000000133ee9f & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Block____12e2a08);
    native_sub_43273c(&System_IDisposable_TypeInfo_12d4b00);
    native_sub_43273c(&System_Collections_IEnumerator_TypeInfo_12d4b80);
    native_sub_43273c(&Method_System_Collections_Generic_List_I_BE2_Block__Add___12dc998);
    native_sub_43273c(&Method_System_Collections_Generic_List_I_BE2_Block___ctor___12dc990);
    native_sub_43273c(&System_Collections_Generic_List_I_BE2_Block__TypeInfo_12d2a70);
    native_sub_43273c(&UnityEngine_Transform_TypeInfo_12d6300);
    bRam000000000133ee9f = 1;
  }
  lVar1 = native_sub_432808(_System_Collections_Generic_List_I_BE2_Block__TypeInfo_12d2a70);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (lVar1,_Method_System_Collections_Generic_List_I_BE2_Block___ctor___12dc990);
  plVar7 = (long *)(param_1 + 0x28);
  *plVar7 = lVar1;
  native_sub_4326e0(plVar7,lVar1);
  lVar1 = native_MG_BlocksEngine2_Environment_BE2_ProgrammingEnv__get_Transform_617498(param_1);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  plVar2 = (long *)native_UnityEngine_Transform__GetEnumerator_772e40(lVar1,0);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  do {
    lVar1 = *plVar2;
    if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
          puVar3 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_00617934;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar1 + 0x12a));
    }
    puVar3 = (undefined8 *)
             native_sub_3c9b34(plVar2,_System_Collections_IEnumerator_TypeInfo_12d4b80,0);
LAB_00617934:
    uVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar5 & 1) == 0) {
      plVar7 = (long *)native_sub_4327f8(plVar2,_System_IDisposable_TypeInfo_12d4b00);
      if (plVar7 == (long *)0x0) {
        return;
      }
      lVar1 = *plVar7;
      if ((ulong)*(ushort *)(lVar1 + 0x12a) == 0) goto LAB_00617a88;
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      break;
    }
    lVar1 = *plVar2;
    if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
          puVar3 = (undefined8 *)(lVar1 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_0061799c;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar1 + 0x12a));
    }
    puVar3 = (undefined8 *)
             native_sub_3c9b34(plVar2,_System_Collections_IEnumerator_TypeInfo_12d4b80,1);
LAB_0061799c:
    plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    if (plVar4 == (long *)0x0) {
LAB_00617af0:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    if ((*(byte *)(*plVar4 + 300) < *(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300)) ||
       (*(long *)(*(long *)(*plVar4 + 200) +
                  (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300) * 8 + -8) !=
        _UnityEngine_Transform_TypeInfo_12d6300)) {
      native_sub_432b04(plVar4);
      goto LAB_00617af0;
    }
    lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(plVar4,0);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar5 = native_UnityEngine_GameObject__get_activeSelf_8de6e8(lVar1,0);
    if (((uVar5 & 1) != 0) &&
       (lVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (plVar4,_Method_UnityEngine_Component_GetComponent_I_BE2_Block____12e2a08)
       , lVar1 != 0)) {
      if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      native_System_Collections_Generic_List_int_____Add_d40c00
                (*plVar7,lVar1,_Method_System_Collections_Generic_List_I_BE2_Block__Add___12dc998);
    }
  } while( true );
  while( true ) {
    uVar5 = uVar5 + 1;
    piVar6 = piVar6 + 4;
    if (*(ushort *)(lVar1 + 0x12a) <= uVar5) break;
    if (*(long *)(piVar6 + -2) == _System_IDisposable_TypeInfo_12d4b00) {
      puVar3 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_00617aa4;
    }
  }
LAB_00617a88:
  puVar3 = (undefined8 *)native_sub_3c9b34(plVar7,_System_IDisposable_TypeInfo_12d4b00,0);
LAB_00617aa4:
  (*(code *)*puVar3)(plVar7,puVar3[1]);
  return;
}



/* MG_BlocksEngine2.Environment.BE2_ProgrammingEnv$$OpenContextMenu @ 0x617c18
 * void MG_BlocksEngine2_Environment_BE2_ProgrammingEnv__OpenContextMenu (MG_BlocksEngine2_Environment_BE2_ProgrammingEnv_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_ProgrammingEnv$$OpenContextMenu
   void MG_BlocksEngine2_Environment_BE2_ProgrammingEnv__OpenContextMenu
   (MG_BlocksEngine2_Environment_BE2_ProgrammingEnv_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_ProgrammingEnv__OpenContextMenu_617c18
               (undefined8 param_1)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  
  if ((bRam000000000133eea0 & 1) == 0) {
    native_sub_43273c(&Method_System_Array_Empty_string____12dedf8);
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager_OpenContextMenu_BE2_ProgrammingEnv____12e22c8
                     );
    bRam000000000133eea0 = 1;
  }
  lVar2 = native_MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager__get_instance_dc6a44(0);
  lVar7 = _Method_System_Array_Empty_string____12dedf8;
  lVar6 = **(long **)(_Method_System_Array_Empty_string____12dedf8 + 0x30);
  uVar1 = *(ushort *)(lVar6 + 0x132);
  if ((uVar1 & 1) == 0) {
    native_sub_3c9850(lVar6);
    uVar1 = *(ushort *)(lVar6 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar6 = **(long **)(lVar7 + 0x30);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      native_sub_3c9850(lVar6);
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      lVar6 = **(long **)(lVar7 + 0x30);
      if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
        native_sub_3c9850(lVar6);
      }
      native_sub_4327ec(lVar6);
    }
  }
  lVar7 = **(long **)(lVar7 + 0x30);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    native_sub_3c9850(lVar7);
  }
  lVar6 = 
  _Method_MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager_OpenContextMenu_BE2_ProgrammingEnv____12e22c8
  ;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar3 = **(undefined8 **)(lVar7 + 0xb8);
  if (*(char *)(lVar2 + 0x30) != '\0') {
    return;
  }
  lVar7 = *(long *)(lVar2 + 0x18);
  if (lVar7 != 0) {
    if (*(uint *)(lVar7 + 0x18) < 2) {
      uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar3,0);
    }
    puVar8 = (undefined8 *)(lVar2 + 0x20);
    *puVar8 = *(undefined8 *)(lVar7 + 0x28);
    native_sub_4326e0(puVar8);
    plVar9 = (long *)*puVar8;
    if (plVar9 != (long *)0x0) {
      lVar7 = *plVar9;
      lVar6 = **(long **)(lVar6 + 0x30);
      if ((ulong)*(ushort *)(lVar7 + 0x12a) != 0) {
        uVar4 = 0;
        piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)(lVar6 + 0x18)) {
            lVar7 = lVar7 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar6 + 0x48)) * 0x10 + 0x138;
            goto code_r0x0049cb84;
          }
          uVar4 = uVar4 + 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 < *(ushort *)(lVar7 + 0x12a));
      }
      lVar7 = native_sub_3c9b34(plVar9);
code_r0x0049cb84:
      puVar8 = (undefined8 *)native_sub_4327e8(*(undefined8 *)(lVar7 + 8),lVar6);
      (*(code *)*puVar8)(plVar9,param_1,uVar3,puVar8);
      *(undefined1 *)(lVar2 + 0x30) = 1;
      if (((*(long *)(lVar2 + 0x28) != 0) &&
          (lVar7 = native_UnityEngine_Component__get_transform_8da62c(*(long *)(lVar2 + 0x28),0),
          lVar7 != 0)) &&
         (lVar7 = native_UnityEngine_Component__get_gameObject_8da66c(lVar7,0), lVar7 != 0)) {
        if (pcRam0000000001340bf8 == (code *)0x0) {
          pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
        }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000001340bf8)(lVar7,1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Environment.BE2_ProgrammingEnv$$ClearBlocks @ 0x617d20
 * void MG_BlocksEngine2_Environment_BE2_ProgrammingEnv__ClearBlocks (MG_BlocksEngine2_Environment_BE2_ProgrammingEnv_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x006180e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_ProgrammingEnv$$ClearBlocks
   void MG_BlocksEngine2_Environment_BE2_ProgrammingEnv__ClearBlocks
   (MG_BlocksEngine2_Environment_BE2_ProgrammingEnv_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_ProgrammingEnv__ClearBlocks_617d20(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((bRam000000000133eea1 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Block____12e2a08);
    native_sub_43273c(&System_IDisposable_TypeInfo_12d4b00);
    native_sub_43273c(&System_Collections_IEnumerator_TypeInfo_12d4b80);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&Method_System_Collections_Generic_List_I_BE2_Block___ctor___12dc990);
    native_sub_43273c(&System_Collections_Generic_List_I_BE2_Block__TypeInfo_12d2a70);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_Transform_TypeInfo_12d6300);
    bRam000000000133eea1 = 1;
  }
  uVar1 = native_sub_432808(_System_Collections_Generic_List_I_BE2_Block__TypeInfo_12d2a70);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_I_BE2_Block___ctor___12dc990);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  native_sub_4326e0((undefined8 *)(param_1 + 0x28),uVar1);
  lVar2 = native_MG_BlocksEngine2_Environment_BE2_ProgrammingEnv__get_Transform_617498(param_1);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  plVar3 = (long *)native_UnityEngine_Transform__GetEnumerator_772e40(lVar2,0);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  do {
    lVar2 = *plVar3;
    if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
          puVar4 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_00617e84;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar2 + 0x12a));
    }
    puVar4 = (undefined8 *)
             native_sub_3c9b34(plVar3,_System_Collections_IEnumerator_TypeInfo_12d4b80,0);
LAB_00617e84:
    uVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar6 & 1) == 0) {
      plVar3 = (long *)native_sub_4327f8(plVar3,_System_IDisposable_TypeInfo_12d4b00);
      if (plVar3 == (long *)0x0) goto LAB_00618084;
      lVar2 = *plVar3;
      if ((ulong)*(ushort *)(lVar2 + 0x12a) == 0) goto LAB_0061805c;
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    lVar2 = *plVar3;
    if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
          puVar4 = (undefined8 *)(lVar2 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_00617eec;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar2 + 0x12a));
    }
    puVar4 = (undefined8 *)
             native_sub_3c9b34(plVar3,_System_Collections_IEnumerator_TypeInfo_12d4b80,1);
LAB_00617eec:
    plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (plVar5 == (long *)0x0) {
LAB_006180d0:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    if ((*(byte *)(*plVar5 + 300) < *(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300)) ||
       (*(long *)(*(long *)(*plVar5 + 200) +
                  (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300) * 8 + -8) !=
        _UnityEngine_Transform_TypeInfo_12d6300)) {
      native_sub_432b04(plVar5);
      goto LAB_006180d0;
    }
    lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(plVar5,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar6 = native_UnityEngine_GameObject__get_activeSelf_8de6e8(lVar2,0);
    if (((uVar6 & 1) != 0) &&
       (plVar5 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                   (plVar5,
                                    _Method_UnityEngine_Component_GetComponent_I_BE2_Block____12e2a08
                                   ), plVar5 != (long *)0x0)) {
      lVar2 = *plVar5;
      if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
            puVar4 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_00617fb0;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar2 + 0x12a));
      }
      puVar4 = (undefined8 *)
               native_sub_3c9b34(plVar5,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,0);
LAB_00617fb0:
      lVar2 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      uVar1 = native_UnityEngine_Component__get_gameObject_8da66c(lVar2,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UnityEngine_Object__Destroy_8ea574(uVar1,0);
    }
  } while( true );
  while( true ) {
    uVar6 = uVar6 + 1;
    piVar7 = piVar7 + 4;
    if (*(ushort *)(lVar2 + 0x12a) <= uVar6) break;
    if (*(long *)(piVar7 + -2) == _System_IDisposable_TypeInfo_12d4b00) {
      puVar4 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_00618078;
    }
  }
LAB_0061805c:
  puVar4 = (undefined8 *)native_sub_3c9b34(plVar3,_System_IDisposable_TypeInfo_12d4b00,0);
LAB_00618078:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
LAB_00618084:
  native_MG_BlocksEngine2_Environment_BE2_ProgrammingEnv__UpdateBlocksList_6177e4(param_1);
  return;
}



/* MG_BlocksEngine2.Environment.BE2_ProgrammingEnv$$.ctor @ 0x61813c
 * void MG_BlocksEngine2_Environment_BE2_ProgrammingEnv___ctor (MG_BlocksEngine2_Environment_BE2_ProgrammingEnv_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_ProgrammingEnv$$.ctor
   void MG_BlocksEngine2_Environment_BE2_ProgrammingEnv___ctor
   (MG_BlocksEngine2_Environment_BE2_ProgrammingEnv_o* __this, const MethodInfo* method); */

undefined1  [16] native_MG_BlocksEngine2_Environment_BE2_ProgrammingEnv___ctor_61813c(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined1 *)(param_1 + 0x38) = 1;
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


