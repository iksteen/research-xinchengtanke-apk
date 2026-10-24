/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.DragDrop.BE2_Pointer$$get_Instance @ 0x6171d4
 * MG_BlocksEngine2_DragDrop_BE2_Pointer_o* MG_BlocksEngine2_DragDrop_BE2_Pointer__get_Instance (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_Pointer$$get_Instance
   MG_BlocksEngine2_DragDrop_BE2_Pointer_o* MG_BlocksEngine2_DragDrop_BE2_Pointer__get_Instance
   (const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_DragDrop_BE2_Pointer__get_Instance_6171d4(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133ee97 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_DragDrop_BE2_Pointer_TypeInfo_12d3a30);
    native_sub_43273c(&Method_UnityEngine_Object_FindObjectOfType_BE2_Pointer____12e5a08);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ee97 = 1;
  }
  uVar3 = **(undefined8 **)(_MG_BlocksEngine2_DragDrop_BE2_Pointer_TypeInfo_12d3a30 + 0xb8);
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
                      (_Method_UnityEngine_Object_FindObjectOfType_BE2_Pointer____12e5a08);
    puVar2 = *(undefined8 **)(_MG_BlocksEngine2_DragDrop_BE2_Pointer_TypeInfo_12d3a30 + 0xb8);
    *puVar2 = uVar3;
    native_sub_4326e0(puVar2,uVar3);
  }
  return **(undefined8 **)(_MG_BlocksEngine2_DragDrop_BE2_Pointer_TypeInfo_12d3a30 + 0xb8);
}



/* MG_BlocksEngine2.DragDrop.BE2_Pointer$$set_Instance @ 0x6172bc
 * void MG_BlocksEngine2_DragDrop_BE2_Pointer__set_Instance (MG_BlocksEngine2_DragDrop_BE2_Pointer_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_Pointer$$set_Instance
   void MG_BlocksEngine2_DragDrop_BE2_Pointer__set_Instance
   (MG_BlocksEngine2_DragDrop_BE2_Pointer_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_Pointer__set_Instance_6172bc(undefined8 param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if ((bRam000000000133ee98 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_DragDrop_BE2_Pointer_TypeInfo_12d3a30);
    bRam000000000133ee98 = 1;
  }
  puVar4 = *(undefined8 **)(_MG_BlocksEngine2_DragDrop_BE2_Pointer_TypeInfo_12d3a30 + 0xb8);
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



/* MG_BlocksEngine2.DragDrop.BE2_Pointer$$Awake @ 0x617310
 * void MG_BlocksEngine2_DragDrop_BE2_Pointer__Awake (MG_BlocksEngine2_DragDrop_BE2_Pointer_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_Pointer$$Awake
   void MG_BlocksEngine2_DragDrop_BE2_Pointer__Awake (MG_BlocksEngine2_DragDrop_BE2_Pointer_o*
   __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_Pointer__Awake_617310(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  uVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)((param_1 + 0x18U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x18U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* MG_BlocksEngine2.DragDrop.BE2_Pointer$$OnUpdate @ 0x617340
 * void MG_BlocksEngine2_DragDrop_BE2_Pointer__OnUpdate (MG_BlocksEngine2_DragDrop_BE2_Pointer_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_Pointer$$OnUpdate
   void MG_BlocksEngine2_DragDrop_BE2_Pointer__OnUpdate (MG_BlocksEngine2_DragDrop_BE2_Pointer_o*
   __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_Pointer__OnUpdate_617340
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  float fVar6;
  undefined8 uVar7;
  
  if ((bRam000000000133ee99 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_InputManager_TypeInfo_12d4e20);
    bRam000000000133ee99 = 1;
  }
  plVar1 = (long *)native_MG_BlocksEngine2_Core_BE2_InputManager__get_Instance_602b04();
  if (plVar1 != (long *)0x0) {
    lVar3 = *plVar1;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar4 = 0;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_Core_I_BE2_InputManager_TypeInfo_12d4e20) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_006173e4;
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar1,_MG_BlocksEngine2_Core_I_BE2_InputManager_TypeInfo_12d4e20,2);
LAB_006173e4:
    uVar7 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    lVar3 = *(long *)(param_4 + 0x18);
    *(int *)(param_4 + 0x20) = (int)uVar7;
    *(undefined4 *)(param_4 + 0x24) = param_2;
    *(undefined4 *)(param_4 + 0x28) = param_3;
    if (lVar3 != 0) {
      native_UnityEngine_Transform__get_position_77169c(lVar3,0);
      native_UnityEngine_Transform__set_position_77174c(uVar7,lVar3,0);
      lVar3 = *(long *)(param_4 + 0x18);
      if (lVar3 != 0) {
        uVar7 = native_UnityEngine_Transform__get_localPosition_7717f4(lVar3,0);
        if (*(long *)(param_4 + 0x18) != 0) {
          native_UnityEngine_Transform__get_localPosition_7717f4(*(long *)(param_4 + 0x18),0);
          native_UnityEngine_Transform__set_localPosition_7718a4(uVar7,lVar3,0);
          lVar3 = *(long *)(param_4 + 0x18);
          fVar6 = (float)native_UnityEngine_Vector3__get_zero_776668(0);
          if (lVar3 != 0) {
            native_UnityEngine_Quaternion__Internal_FromEulerRad_762560(fVar6 * 0.017453292,lVar3,0)
            ;
            if (pcRam000000000133ff08 == (code *)0x0) {
              pcRam000000000133ff08 = (code *)native_sub_4326f0(&UNK_00e2aec2);
            }
            (*pcRam000000000133ff08)(lVar3,&stack0xffffffffffffffd0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.DragDrop.BE2_Pointer$$UpdatePointerPosition @ 0x617344
 * void MG_BlocksEngine2_DragDrop_BE2_Pointer__UpdatePointerPosition (MG_BlocksEngine2_DragDrop_BE2_Pointer_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_Pointer$$UpdatePointerPosition
   void MG_BlocksEngine2_DragDrop_BE2_Pointer__UpdatePointerPosition
   (MG_BlocksEngine2_DragDrop_BE2_Pointer_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_Pointer__UpdatePointerPosition_617344
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  float fVar6;
  undefined8 uVar7;
  
  if ((bRam000000000133ee99 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_InputManager_TypeInfo_12d4e20);
    bRam000000000133ee99 = 1;
  }
  plVar1 = (long *)native_MG_BlocksEngine2_Core_BE2_InputManager__get_Instance_602b04();
  if (plVar1 != (long *)0x0) {
    lVar3 = *plVar1;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar4 = 0;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_Core_I_BE2_InputManager_TypeInfo_12d4e20) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_006173e4;
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar1,_MG_BlocksEngine2_Core_I_BE2_InputManager_TypeInfo_12d4e20,2);
LAB_006173e4:
    uVar7 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    lVar3 = *(long *)(param_4 + 0x18);
    *(int *)(param_4 + 0x20) = (int)uVar7;
    *(undefined4 *)(param_4 + 0x24) = param_2;
    *(undefined4 *)(param_4 + 0x28) = param_3;
    if (lVar3 != 0) {
      native_UnityEngine_Transform__get_position_77169c(lVar3,0);
      native_UnityEngine_Transform__set_position_77174c(uVar7,lVar3,0);
      lVar3 = *(long *)(param_4 + 0x18);
      if (lVar3 != 0) {
        uVar7 = native_UnityEngine_Transform__get_localPosition_7717f4(lVar3,0);
        if (*(long *)(param_4 + 0x18) != 0) {
          native_UnityEngine_Transform__get_localPosition_7717f4(*(long *)(param_4 + 0x18),0);
          native_UnityEngine_Transform__set_localPosition_7718a4(uVar7,lVar3,0);
          lVar3 = *(long *)(param_4 + 0x18);
          fVar6 = (float)native_UnityEngine_Vector3__get_zero_776668(0);
          if (lVar3 != 0) {
            native_UnityEngine_Quaternion__Internal_FromEulerRad_762560(fVar6 * 0.017453292,lVar3,0)
            ;
            if (pcRam000000000133ff08 == (code *)0x0) {
              pcRam000000000133ff08 = (code *)native_sub_4326f0(&UNK_00e2aec2);
            }
            (*pcRam000000000133ff08)(lVar3,&stack0xffffffffffffffd0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.DragDrop.BE2_Pointer$$.ctor @ 0x617490
 * void MG_BlocksEngine2_DragDrop_BE2_Pointer___ctor (MG_BlocksEngine2_DragDrop_BE2_Pointer_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_Pointer$$.ctor
   void MG_BlocksEngine2_DragDrop_BE2_Pointer___ctor (MG_BlocksEngine2_DragDrop_BE2_Pointer_o*
   __this, const MethodInfo* method); */

undefined1  [16] native_MG_BlocksEngine2_DragDrop_BE2_Pointer___ctor_617490(ulong param_1)

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


