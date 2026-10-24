/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Block.BE2_Block$$get_Type @ 0x562fb4
 * int32_t MG_BlocksEngine2_Block_BE2_Block__get_Type (MG_BlocksEngine2_Block_BE2_Block_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_Block$$get_Type
   int32_t MG_BlocksEngine2_Block_BE2_Block__get_Type (MG_BlocksEngine2_Block_BE2_Block_o* __this,
   const MethodInfo* method); */

undefined4 native_MG_BlocksEngine2_Block_BE2_Block__get_Type_562fb4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* MG_BlocksEngine2.Block.BE2_Block$$set_Type @ 0x562fbc
 * void MG_BlocksEngine2_Block_BE2_Block__set_Type (MG_BlocksEngine2_Block_BE2_Block_o* __this, int32_t value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_Block$$set_Type
   void MG_BlocksEngine2_Block_BE2_Block__set_Type (MG_BlocksEngine2_Block_BE2_Block_o* __this,
   int32_t value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_Block__set_Type_562fbc(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}



/* MG_BlocksEngine2.Block.BE2_Block$$get_Transform @ 0x562fc4
 * UnityEngine_Transform_o* MG_BlocksEngine2_Block_BE2_Block__get_Transform (MG_BlocksEngine2_Block_BE2_Block_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_Block$$get_Transform
   UnityEngine_Transform_o* MG_BlocksEngine2_Block_BE2_Block__get_Transform
   (MG_BlocksEngine2_Block_BE2_Block_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Block_BE2_Block__get_Transform_562fc4(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((bRam000000000133ea2e & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea2e = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar2,0);
  if ((uVar1 & 1) != 0) {
    return *(undefined8 *)(param_1 + 0x20);
  }
  if (pcRam0000000001340ab8 == (code *)0x0) {
    pcRam0000000001340ab8 = (code *)native_sub_4326f0(&UNK_00e2d0e1);
  }
                    /* WARNING: Could not recover jumptable at 0x008da668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*pcRam0000000001340ab8)(param_1);
  return uVar2;
}



/* MG_BlocksEngine2.Block.BE2_Block$$get_Layout @ 0x56304c
 * MG_BlocksEngine2_Block_I_BE2_BlockLayout_o* MG_BlocksEngine2_Block_BE2_Block__get_Layout (MG_BlocksEngine2_Block_BE2_Block_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_Block$$get_Layout
   MG_BlocksEngine2_Block_I_BE2_BlockLayout_o* MG_BlocksEngine2_Block_BE2_Block__get_Layout
   (MG_BlocksEngine2_Block_BE2_Block_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Block_BE2_Block__get_Layout_56304c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* MG_BlocksEngine2.Block.BE2_Block$$set_Layout @ 0x563054
 * void MG_BlocksEngine2_Block_BE2_Block__set_Layout (MG_BlocksEngine2_Block_BE2_Block_o* __this, MG_BlocksEngine2_Block_I_BE2_BlockLayout_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_Block$$set_Layout
   void MG_BlocksEngine2_Block_BE2_Block__set_Layout (MG_BlocksEngine2_Block_BE2_Block_o* __this,
   MG_BlocksEngine2_Block_I_BE2_BlockLayout_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_Block__set_Layout_563054(long param_1,undefined8 param_2)

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



/* MG_BlocksEngine2.Block.BE2_Block$$get_Instruction @ 0x56305c
 * MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_o* MG_BlocksEngine2_Block_BE2_Block__get_Instruction (MG_BlocksEngine2_Block_BE2_Block_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_Block$$get_Instruction
   MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_o*
   MG_BlocksEngine2_Block_BE2_Block__get_Instruction (MG_BlocksEngine2_Block_BE2_Block_o* __this,
   const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Block_BE2_Block__get_Instruction_56305c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* MG_BlocksEngine2.Block.BE2_Block$$set_Instruction @ 0x563064
 * void MG_BlocksEngine2_Block_BE2_Block__set_Instruction (MG_BlocksEngine2_Block_BE2_Block_o* __this, MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_Block$$set_Instruction
   void MG_BlocksEngine2_Block_BE2_Block__set_Instruction (MG_BlocksEngine2_Block_BE2_Block_o*
   __this, MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_o* value, const MethodInfo* method);
    */

void native_MG_BlocksEngine2_Block_BE2_Block__set_Instruction_563064
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



/* MG_BlocksEngine2.Block.BE2_Block$$get_ParentSection @ 0x56306c
 * MG_BlocksEngine2_Block_I_BE2_BlockSection_o* MG_BlocksEngine2_Block_BE2_Block__get_ParentSection (MG_BlocksEngine2_Block_BE2_Block_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_Block$$get_ParentSection
   MG_BlocksEngine2_Block_I_BE2_BlockSection_o* MG_BlocksEngine2_Block_BE2_Block__get_ParentSection
   (MG_BlocksEngine2_Block_BE2_Block_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Block_BE2_Block__get_ParentSection_56306c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* MG_BlocksEngine2.Block.BE2_Block$$set_ParentSection @ 0x563074
 * void MG_BlocksEngine2_Block_BE2_Block__set_ParentSection (MG_BlocksEngine2_Block_BE2_Block_o* __this, MG_BlocksEngine2_Block_I_BE2_BlockSection_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_Block$$set_ParentSection
   void MG_BlocksEngine2_Block_BE2_Block__set_ParentSection (MG_BlocksEngine2_Block_BE2_Block_o*
   __this, MG_BlocksEngine2_Block_I_BE2_BlockSection_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_Block__set_ParentSection_563074
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



/* MG_BlocksEngine2.Block.BE2_Block$$get_Drag @ 0x56307c
 * MG_BlocksEngine2_DragDrop_I_BE2_Drag_o* MG_BlocksEngine2_Block_BE2_Block__get_Drag (MG_BlocksEngine2_Block_BE2_Block_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_Block$$get_Drag
   MG_BlocksEngine2_DragDrop_I_BE2_Drag_o* MG_BlocksEngine2_Block_BE2_Block__get_Drag
   (MG_BlocksEngine2_Block_BE2_Block_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Block_BE2_Block__get_Drag_56307c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* MG_BlocksEngine2.Block.BE2_Block$$set_Drag @ 0x563084
 * void MG_BlocksEngine2_Block_BE2_Block__set_Drag (MG_BlocksEngine2_Block_BE2_Block_o* __this, MG_BlocksEngine2_DragDrop_I_BE2_Drag_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_Block$$set_Drag
   void MG_BlocksEngine2_Block_BE2_Block__set_Drag (MG_BlocksEngine2_Block_BE2_Block_o* __this,
   MG_BlocksEngine2_DragDrop_I_BE2_Drag_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_Block__set_Drag_563084(long param_1,undefined8 param_2)

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



/* MG_BlocksEngine2.Block.BE2_Block$$OnValidate @ 0x56308c
 * void MG_BlocksEngine2_Block_BE2_Block__OnValidate (MG_BlocksEngine2_Block_BE2_Block_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_Block$$OnValidate
   void MG_BlocksEngine2_Block_BE2_Block__OnValidate (MG_BlocksEngine2_Block_BE2_Block_o* __this,
   const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_Block__OnValidate_56308c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133ea2f & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Drag____12e2a48);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Instruction____12e2a50);
    bRam000000000133ea2f = 1;
  }
  uVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  native_sub_4326e0(param_1 + 0x20);
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10
                    );
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  native_sub_4326e0(param_1 + 0x28);
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_I_BE2_Instruction____12e2a50
                    );
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  native_sub_4326e0(param_1 + 0x30);
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_I_BE2_Drag____12e2a48);
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)((param_1 + 0x40U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x40U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* MG_BlocksEngine2.Block.BE2_Block$$Awake @ 0x563090
 * void MG_BlocksEngine2_Block_BE2_Block__Awake (MG_BlocksEngine2_Block_BE2_Block_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_Block$$Awake
   void MG_BlocksEngine2_Block_BE2_Block__Awake (MG_BlocksEngine2_Block_BE2_Block_o* __this, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_Block__Awake_563090(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133ea2f & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Drag____12e2a48);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Instruction____12e2a50);
    bRam000000000133ea2f = 1;
  }
  uVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  native_sub_4326e0(param_1 + 0x20);
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10
                    );
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  native_sub_4326e0(param_1 + 0x28);
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_I_BE2_Instruction____12e2a50
                    );
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  native_sub_4326e0(param_1 + 0x30);
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_I_BE2_Drag____12e2a48);
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)((param_1 + 0x40U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x40U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* MG_BlocksEngine2.Block.BE2_Block$$Start @ 0x563168
 * void MG_BlocksEngine2_Block_BE2_Block__Start (MG_BlocksEngine2_Block_BE2_Block_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_Block$$Start
   void MG_BlocksEngine2_Block_BE2_Block__Start (MG_BlocksEngine2_Block_BE2_Block_o* __this, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_Block__Start_563168(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133ea32 & 1) == 0) {
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponentInParent_I_BE2_BlockSection____12e2d48
                     );
    bRam000000000133ea32 = 1;
  }
  uVar4 = native_UnityEngine_Component__GetComponentInParent_BE2_Canvas__49dc70
                    (param_1,
                     _Method_UnityEngine_Component_GetComponentInParent_I_BE2_BlockSection____12e2d48
                    );
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)((param_1 + 0x38U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x38U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* MG_BlocksEngine2.Block.BE2_Block$$OnEnable @ 0x5631c8
 * void MG_BlocksEngine2_Block_BE2_Block__OnEnable (MG_BlocksEngine2_Block_BE2_Block_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_Block$$OnEnable
   void MG_BlocksEngine2_Block_BE2_Block__OnEnable (MG_BlocksEngine2_Block_BE2_Block_o* __this,
   const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_Block__OnEnable_5631c8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lStack_38;
  
  if ((bRam000000000133ea30 & 1) == 0) {
    native_sub_43273c(&Method_MG_BlocksEngine2_Block_BE2_Block_GetParentSection___12e2100);
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam000000000133ea30 = 1;
  }
  lVar1 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
  uVar2 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
  native_UnityEngine_Events_UnityAction___ctor_773130
            (uVar2,param_1,_Method_MG_BlocksEngine2_Block_BE2_Block_GetParentSection___12e2100,0);
  if (lVar1 != 0) {
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
    if (*(long *)(lVar1 + 0x10) != 0) {
      uVar3 = native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___TryGetValue_c25318
                        (*(long *)(lVar1 + 0x10),3,&lStack_38,
                         _Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                        );
      if ((uVar3 & 1) == 0) {
        lVar4 = native_sub_432808(_UnityEngine_Events_UnityEvent_TypeInfo_12d65d8);
        native_UnityEngine_Events_UnityEvent___ctor_7733e0(lVar4,0);
        lStack_38 = lVar4;
        if (lVar4 != 0) {
          native_UnityEngine_Events_UnityEvent__AddListener_7734bc(lVar4,uVar2,0);
          if (*(long *)(lVar1 + 0x10) != 0) {
            native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___Add_c235f4
                      (*(long *)(lVar1 + 0x10),3,lStack_38,
                       _Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__Add___12d8ea0
                      );
            return;
          }
        }
      }
      else if (lStack_38 != 0) {
        native_UnityEngine_Events_UnityEvent__AddListener_7734bc(lStack_38,uVar2,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_Block$$OnDisable @ 0x56336c
 * void MG_BlocksEngine2_Block_BE2_Block__OnDisable (MG_BlocksEngine2_Block_BE2_Block_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_Block$$OnDisable
   void MG_BlocksEngine2_Block_BE2_Block__OnDisable (MG_BlocksEngine2_Block_BE2_Block_o* __this,
   const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_Block__OnDisable_56336c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lStack_38;
  
  if ((bRam000000000133ea31 & 1) == 0) {
    native_sub_43273c(&Method_MG_BlocksEngine2_Block_BE2_Block_GetParentSection___12e2100);
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam000000000133ea31 = 1;
  }
  lVar1 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
  uVar2 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
  native_UnityEngine_Events_UnityAction___ctor_773130
            (uVar2,param_1,_Method_MG_BlocksEngine2_Block_BE2_Block_GetParentSection___12e2100,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam000000000133eaf6 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                     );
    bRam000000000133eaf6 = 1;
  }
  lStack_38 = 0;
  if (*(long *)(lVar1 + 0x10) != 0) {
    uVar3 = native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___TryGetValue_c25318
                      (*(long *)(lVar1 + 0x10),3,&lStack_38,
                       _Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                      );
    if ((uVar3 & 1) != 0) {
      if (lStack_38 == 0) goto LAB_0056349c;
      native_UnityEngine_Events_UnityEvent__RemoveListener_773574(lStack_38,uVar2,0);
    }
    return;
  }
LAB_0056349c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_Block$$GetParentSection @ 0x56316c
 * void MG_BlocksEngine2_Block_BE2_Block__GetParentSection (MG_BlocksEngine2_Block_BE2_Block_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_Block$$GetParentSection
   void MG_BlocksEngine2_Block_BE2_Block__GetParentSection (MG_BlocksEngine2_Block_BE2_Block_o*
   __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_Block__GetParentSection_56316c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133ea32 & 1) == 0) {
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponentInParent_I_BE2_BlockSection____12e2d48
                     );
    bRam000000000133ea32 = 1;
  }
  uVar4 = native_UnityEngine_Component__GetComponentInParent_BE2_Canvas__49dc70
                    (param_1,
                     _Method_UnityEngine_Component_GetComponentInParent_I_BE2_BlockSection____12e2d48
                    );
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)((param_1 + 0x38U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x38U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* MG_BlocksEngine2.Block.BE2_Block$$SetShadowActive @ 0x5634a0
 * void MG_BlocksEngine2_Block_BE2_Block__SetShadowActive (MG_BlocksEngine2_Block_BE2_Block_o* __this, bool value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_Block$$SetShadowActive
   void MG_BlocksEngine2_Block_BE2_Block__SetShadowActive (MG_BlocksEngine2_Block_BE2_Block_o*
   __this, bool value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_Block__SetShadowActive_5634a0(long param_1,ulong param_2)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  uint uVar13;
  
  if ((bRam000000000133ea33 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam000000000133ea33 = 1;
  }
  if (*(int *)(param_1 + 0x18) == 3) {
    return;
  }
  plVar12 = *(long **)(param_1 + 0x28);
  if (plVar12 != (long *)0x0) {
    lVar8 = *plVar12;
    if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
      uVar10 = 0;
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_0056359c;
        }
        uVar10 = uVar10 + 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 < *(ushort *)(lVar8 + 0x12a));
    }
    puVar5 = (undefined8 *)
             native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,2)
    ;
LAB_0056359c:
    lVar8 = (*(code *)*puVar5)(plVar12,puVar5[1]);
    if ((param_2 & 1) == 0) {
      if (lVar8 != 0) {
        uVar2 = *(uint *)(lVar8 + 0x18);
        if (0 < (int)uVar2) {
          uVar13 = 0;
          do {
            if (uVar2 <= uVar13) goto LAB_00563fec;
            plVar12 = *(long **)(lVar8 + (long)(int)uVar13 * 8 + 0x20);
            if (plVar12 == (long *)0x0) goto LAB_00563fe8;
            lVar9 = *plVar12;
            if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
              uVar10 = 0;
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) ==
                    _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                  puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                  goto LAB_00563b50;
                }
                uVar10 = uVar10 + 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
            }
            puVar5 = (undefined8 *)
                     native_sub_3c9b34(plVar12,
                                       _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,1
                                      );
LAB_00563b50:
            lVar9 = (*(code *)*puVar5)(plVar12,puVar5[1]);
            if (lVar9 != 0) {
              lVar9 = *plVar12;
              if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
                uVar10 = 0;
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                    puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                    goto LAB_00563bb8;
                  }
                  uVar10 = uVar10 + 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
              }
              puVar5 = (undefined8 *)
                       native_sub_3c9b34(plVar12,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                         ,1);
LAB_00563bb8:
              plVar6 = (long *)(*(code *)*puVar5)(plVar12,puVar5[1]);
              if (plVar6 == (long *)0x0) goto LAB_00563fe8;
              lVar9 = *plVar6;
              if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
                uVar10 = 0;
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                    puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 4) * 0x10 + 0x138);
                    goto LAB_00563c24;
                  }
                  uVar10 = uVar10 + 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
              }
              puVar5 = (undefined8 *)
                       native_sub_3c9b34(plVar6,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                         ,4);
LAB_00563c24:
              uVar7 = (*(code *)*puVar5)(plVar6,puVar5[1]);
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
              }
              uVar10 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar7,0);
              if ((uVar10 & 1) != 0) {
                lVar9 = *plVar12;
                if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
                  uVar10 = 0;
                  piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                      puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                      goto LAB_00563cb8;
                    }
                    uVar10 = uVar10 + 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
                }
                puVar5 = (undefined8 *)
                         native_sub_3c9b34(plVar12,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                           ,1);
LAB_00563cb8:
                plVar6 = (long *)(*(code *)*puVar5)(plVar12,puVar5[1]);
                if (plVar6 == (long *)0x0) goto LAB_00563fe8;
                lVar9 = *plVar6;
                if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
                  uVar10 = 0;
                  piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                      puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 4) * 0x10 + 0x138);
                      goto LAB_00563d24;
                    }
                    uVar10 = uVar10 + 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
                }
                puVar5 = (undefined8 *)
                         native_sub_3c9b34(plVar6,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                           ,4);
LAB_00563d24:
                lVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
                if (lVar9 == 0) goto LAB_00563fe8;
                native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar9,0,0);
              }
            }
            lVar9 = *plVar12;
            if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
              uVar10 = 0;
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) ==
                    _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                  puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                  goto LAB_00563d98;
                }
                uVar10 = uVar10 + 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
            }
            puVar5 = (undefined8 *)
                     native_sub_3c9b34(plVar12,
                                       _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,2
                                      );
LAB_00563d98:
            lVar9 = (*(code *)*puVar5)(plVar12,puVar5[1]);
            if (lVar9 != 0) {
              lVar9 = *plVar12;
              if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
                uVar10 = 0;
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                    puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                    goto LAB_00563e00;
                  }
                  uVar10 = uVar10 + 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
              }
              puVar5 = (undefined8 *)
                       native_sub_3c9b34(plVar12,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                         ,2);
LAB_00563e00:
              plVar6 = (long *)(*(code *)*puVar5)(plVar12,puVar5[1]);
              if (plVar6 == (long *)0x0) goto LAB_00563fe8;
              lVar9 = *plVar6;
              if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
                uVar10 = 0;
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0) {
                    puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 7) * 0x10 + 0x138);
                    goto LAB_00563e6c;
                  }
                  uVar10 = uVar10 + 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
              }
              puVar5 = (undefined8 *)
                       native_sub_3c9b34(plVar6,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0
                                         ,7);
LAB_00563e6c:
              uVar7 = (*(code *)*puVar5)(plVar6,puVar5[1]);
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
              }
              uVar10 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar7,0);
              if ((uVar10 & 1) != 0) {
                lVar9 = *plVar12;
                if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
                  uVar10 = 0;
                  piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                      puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                      goto LAB_00563f00;
                    }
                    uVar10 = uVar10 + 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
                }
                puVar5 = (undefined8 *)
                         native_sub_3c9b34(plVar12,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                           ,2);
LAB_00563f00:
                plVar12 = (long *)(*(code *)*puVar5)(plVar12,puVar5[1]);
                if (plVar12 == (long *)0x0) goto LAB_00563fe8;
                lVar9 = *plVar12;
                if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
                  uVar10 = 0;
                  piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0) {
                      puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 7) * 0x10 + 0x138);
                      goto LAB_00563f6c;
                    }
                    uVar10 = uVar10 + 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
                }
                puVar5 = (undefined8 *)
                         native_sub_3c9b34(plVar12,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0
                                           ,7);
LAB_00563f6c:
                lVar9 = (*(code *)*puVar5)(plVar12,puVar5[1]);
                if (lVar9 == 0) goto LAB_00563fe8;
                native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar9,0,0);
              }
            }
            uVar2 = *(uint *)(lVar8 + 0x18);
            uVar13 = uVar13 + 1;
          } while ((int)uVar13 < (int)uVar2);
        }
        if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        puVar5 = (undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x28);
        *puVar5 = _StringLiteral__12eaac0;
        if (iRam0000000001345318 != 0) {
          puVar1 = (ulong *)(((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        return;
      }
    }
    else if (lVar8 != 0) {
      uVar2 = *(uint *)(lVar8 + 0x18);
      if ((int)uVar2 < 1) {
        return;
      }
      uVar13 = 0;
      do {
        if (uVar2 <= uVar13) {
LAB_00563fec:
          uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar7,0);
        }
        plVar12 = *(long **)(lVar8 + (long)(int)uVar13 * 8 + 0x20);
        if (plVar12 == (long *)0x0) break;
        lVar9 = *plVar12;
        if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
          uVar10 = 0;
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) ==
                _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
              puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_00563650;
            }
            uVar10 = uVar10 + 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
        }
        puVar5 = (undefined8 *)
                 native_sub_3c9b34(plVar12,
                                   _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,1);
LAB_00563650:
        lVar9 = (*(code *)*puVar5)(plVar12,puVar5[1]);
        if (lVar9 != 0) {
          lVar9 = *plVar12;
          if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
            uVar10 = 0;
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                goto LAB_005636b8;
              }
              uVar10 = uVar10 + 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
          }
          puVar5 = (undefined8 *)
                   native_sub_3c9b34(plVar12,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,1);
LAB_005636b8:
          plVar6 = (long *)(*(code *)*puVar5)(plVar12,puVar5[1]);
          if (plVar6 == (long *)0x0) break;
          lVar9 = *plVar6;
          if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
            uVar10 = 0;
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 4) * 0x10 + 0x138);
                goto LAB_00563724;
              }
              uVar10 = uVar10 + 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
          }
          puVar5 = (undefined8 *)
                   native_sub_3c9b34(plVar6,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                     ,4);
LAB_00563724:
          uVar7 = (*(code *)*puVar5)(plVar6,puVar5[1]);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
          }
          uVar10 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar7,0);
          if ((uVar10 & 1) != 0) {
            lVar9 = *plVar12;
            if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
              uVar10 = 0;
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) ==
                    _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                  puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                  goto LAB_005637b8;
                }
                uVar10 = uVar10 + 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
            }
            puVar5 = (undefined8 *)
                     native_sub_3c9b34(plVar12,
                                       _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,1
                                      );
LAB_005637b8:
            plVar6 = (long *)(*(code *)*puVar5)(plVar12,puVar5[1]);
            if (plVar6 == (long *)0x0) break;
            lVar9 = *plVar6;
            if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
              uVar10 = 0;
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) ==
                    _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                  puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 4) * 0x10 + 0x138);
                  goto LAB_00563824;
                }
                uVar10 = uVar10 + 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
            }
            puVar5 = (undefined8 *)
                     native_sub_3c9b34(plVar6,
                                       _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                       ,4);
LAB_00563824:
            lVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
            if (lVar9 == 0) break;
            native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar9,1,0);
          }
        }
        lVar9 = *plVar12;
        if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
          uVar10 = 0;
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) ==
                _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
              puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
              goto LAB_00563898;
            }
            uVar10 = uVar10 + 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
        }
        puVar5 = (undefined8 *)
                 native_sub_3c9b34(plVar12,
                                   _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,2);
LAB_00563898:
        lVar9 = (*(code *)*puVar5)(plVar12,puVar5[1]);
        if (lVar9 != 0) {
          lVar9 = *plVar12;
          if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
            uVar10 = 0;
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                goto LAB_00563900;
              }
              uVar10 = uVar10 + 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
          }
          puVar5 = (undefined8 *)
                   native_sub_3c9b34(plVar12,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,2);
LAB_00563900:
          plVar6 = (long *)(*(code *)*puVar5)(plVar12,puVar5[1]);
          if (plVar6 == (long *)0x0) break;
          lVar9 = *plVar6;
          if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
            uVar10 = 0;
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0) {
                puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 7) * 0x10 + 0x138);
                goto LAB_0056396c;
              }
              uVar10 = uVar10 + 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
          }
          puVar5 = (undefined8 *)
                   native_sub_3c9b34(plVar6,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0
                                     ,7);
LAB_0056396c:
          uVar7 = (*(code *)*puVar5)(plVar6,puVar5[1]);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
          }
          uVar10 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar7,0);
          if ((uVar10 & 1) != 0) {
            lVar9 = *plVar12;
            if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
              uVar10 = 0;
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) ==
                    _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                  puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                  goto LAB_00563a00;
                }
                uVar10 = uVar10 + 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
            }
            puVar5 = (undefined8 *)
                     native_sub_3c9b34(plVar12,
                                       _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,2
                                      );
LAB_00563a00:
            plVar12 = (long *)(*(code *)*puVar5)(plVar12,puVar5[1]);
            if (plVar12 == (long *)0x0) break;
            lVar9 = *plVar12;
            if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
              uVar10 = 0;
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) ==
                    _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0) {
                  puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 7) * 0x10 + 0x138);
                  goto LAB_00563a6c;
                }
                uVar10 = uVar10 + 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 < *(ushort *)(lVar9 + 0x12a));
            }
            puVar5 = (undefined8 *)
                     native_sub_3c9b34(plVar12,
                                       _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0
                                       ,7);
LAB_00563a6c:
            lVar9 = (*(code *)*puVar5)(plVar12,puVar5[1]);
            if (lVar9 == 0) break;
            native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar9,1,0);
          }
        }
        uVar2 = *(uint *)(lVar8 + 0x18);
        uVar13 = uVar13 + 1;
        if ((int)uVar2 <= (int)uVar13) {
          return;
        }
      } while( true );
    }
  }
LAB_00563fe8:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_Block$$.ctor @ 0x563ff8
 * void MG_BlocksEngine2_Block_BE2_Block___ctor (MG_BlocksEngine2_Block_BE2_Block_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_Block$$.ctor
   void MG_BlocksEngine2_Block_BE2_Block___ctor (MG_BlocksEngine2_Block_BE2_Block_o* __this, const
   MethodInfo* method); */

undefined1  [16] native_MG_BlocksEngine2_Block_BE2_Block___ctor_563ff8(ulong param_1)

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


