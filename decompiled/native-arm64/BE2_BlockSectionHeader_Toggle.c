/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Toggle$$get_Transform @ 0x5687fc
 * UnityEngine_Transform_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__get_Transform (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Toggle$$get_Transform
   UnityEngine_Transform_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__get_Transform
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__get_Transform_5687fc
               (undefined8 param_1)

{
  if (pcRam0000000001340ab8 == (code *)0x0) {
    pcRam0000000001340ab8 = (code *)native_sub_4326f0(&UNK_00e2d0e1);
  }
                    /* WARNING: Could not recover jumptable at 0x008da668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000001340ab8)(param_1);
  return;
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Toggle$$get_Size @ 0x568804
 * UnityEngine_Vector2_o MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__get_Size (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Toggle$$get_Size
   UnityEngine_Vector2_o MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__get_Size
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle_o* __this, const MethodInfo* method); */

undefined4
native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__get_Size_568804(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_28;
  
  if ((bRam000000000133ea65 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea65 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar3,0);
  if ((uVar1 & 1) == 0) {
    lVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
  }
  if (lVar2 != 0) {
    uStack_28 = 0;
    if (pcRam000000000133f8e0 == (code *)0x0) {
      pcRam000000000133f8e0 = (code *)native_sub_4326f0(&UNK_00e284ba,0);
    }
    (*pcRam000000000133f8e0)(lVar2,&uStack_28);
    return (undefined4)uStack_28;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Toggle$$get_Spot @ 0x5688a8
 * MG_BlocksEngine2_Block_I_BE2_Spot_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__get_Spot (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Toggle$$get_Spot
   MG_BlocksEngine2_Block_I_BE2_Spot_o*
   MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__get_Spot
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__get_Spot_5688a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Toggle$$set_Spot @ 0x5688b0
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__set_Spot (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle_o* __this, MG_BlocksEngine2_Block_I_BE2_Spot_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Toggle$$set_Spot
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__set_Spot
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle_o* __this,
   MG_BlocksEngine2_Block_I_BE2_Spot_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__set_Spot_5688b0
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



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Toggle$$get_FloatValue @ 0x5688b8
 * float MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__get_FloatValue (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Toggle$$get_FloatValue
   float MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__get_FloatValue
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle_o* __this, const MethodInfo* method); */

undefined4
native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__get_FloatValue_5688b8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Toggle$$set_FloatValue @ 0x5688c0
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__set_FloatValue (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle_o* __this, float value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Toggle$$set_FloatValue
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__set_FloatValue
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle_o* __this, float value, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__set_FloatValue_5688c0
               (undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x30) = param_1;
  return;
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Toggle$$get_StringValue @ 0x5688c8
 * System_String_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__get_StringValue (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Toggle$$get_StringValue
   System_String_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__get_StringValue
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__get_StringValue_5688c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Toggle$$set_StringValue @ 0x5688d0
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__set_StringValue (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle_o* __this, System_String_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Toggle$$set_StringValue
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__set_StringValue
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle_o* __this, System_String_o* value, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__set_StringValue_5688d0
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



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Toggle$$get_InputValues @ 0x5688d8
 * MG_BlocksEngine2_Block_BE2_InputValues_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__get_InputValues (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Toggle$$get_InputValues
   MG_BlocksEngine2_Block_BE2_InputValues_o*
   MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__get_InputValues
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__get_InputValues_5688d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Toggle$$set_InputValues @ 0x5688e0
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__set_InputValues (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle_o* __this, MG_BlocksEngine2_Block_BE2_InputValues_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Toggle$$set_InputValues
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__set_InputValues
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle_o* __this,
   MG_BlocksEngine2_Block_BE2_InputValues_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__set_InputValues_5688e0
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



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Toggle$$OnValidate @ 0x5688e8
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__OnValidate (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Toggle$$OnValidate
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__OnValidate
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__OnValidate_5688e8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133ea66 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Spot____12e2a68);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Toggle____12e2b58);
    bRam000000000133ea66 = 1;
  }
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  native_sub_4326e0(param_1 + 0x20);
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_Toggle____12e2b58);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  native_sub_4326e0(param_1 + 0x18);
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_I_BE2_Spot____12e2a68);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)((param_1 + 0x28U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x28U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Toggle$$Awake @ 0x5688ec
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__Awake (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Toggle$$Awake
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__Awake
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__Awake_5688ec(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133ea66 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Spot____12e2a68);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Toggle____12e2b58);
    bRam000000000133ea66 = 1;
  }
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  native_sub_4326e0(param_1 + 0x20);
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_Toggle____12e2b58);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  native_sub_4326e0(param_1 + 0x18);
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_I_BE2_Spot____12e2a68);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)((param_1 + 0x28U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x28U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Toggle$$OnEnable @ 0x5689a8
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__OnEnable (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Toggle$$OnEnable
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__OnEnable
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__OnEnable_5689a8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam000000000133ea67 & 1) == 0) {
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__OnEnable_b__24_0___12e2118
                     );
    native_sub_43273c(&Method_UnityEngine_Events_UnityAction_bool___ctor___12de388);
    native_sub_43273c(&UnityEngine_Events_UnityAction_bool__TypeInfo_12d2f28);
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_bool__AddListener___12de428);
    bRam000000000133ea67 = 1;
  }
  native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__UpdateValues_568a74(param_1);
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x110);
    uVar1 = native_sub_432808(_UnityEngine_Events_UnityAction_bool__TypeInfo_12d2f28);
    native_UnityEngine_Events_UnityAction_bool____ctor_89abf4
              (uVar1,param_1,
               _Method_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__OnEnable_b__24_0___12e2118
               ,_Method_UnityEngine_Events_UnityAction_bool___ctor___12de388);
    if (lVar2 != 0) {
      uVar1 = (**(code **)**(undefined8 **)
                            (*(long *)(
                                      _Method_UnityEngine_Events_UnityEvent_bool__AddListener___12de428
                                      + 0x18) + 0xc0))(uVar1);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      lVar2 = *(long *)(lVar2 + 0x10);
      if (lVar2 != 0) {
        if ((bRam0000000001340cbd & 1) == 0) {
          native_sub_43273c(&Method_System_Collections_Generic_List_BaseInvokableCall__Add___12dc5b0
                            ,uVar1,0);
          bRam0000000001340cbd = 1;
        }
        if (*(long *)(lVar2 + 0x18) != 0) {
          native_System_Collections_Generic_List_int_____Add_d40c00
                    (*(long *)(lVar2 + 0x18),uVar1,
                     _Method_System_Collections_Generic_List_BaseInvokableCall__Add___12dc5b0);
          *(undefined1 *)(lVar2 + 0x28) = 1;
          return;
        }
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810(0,uVar1,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Toggle$$OnDisable @ 0x568b70
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__OnDisable (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Toggle$$OnDisable
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__OnDisable
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__OnDisable_568b70(long param_1)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x18) == 0) ||
     (lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x110), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar1 = *(long *)(lVar1 + 0x10);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810(0,0);
  }
  if ((bRam0000000001340cbf & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_BaseInvokableCall__Clear___12dc5c0,0);
    bRam0000000001340cbf = 1;
  }
  if (*(long *)(lVar1 + 0x18) != 0) {
    native_System_Collections_Generic_List_Action___Clear_d40e80
              (*(long *)(lVar1 + 0x18),
               _Method_System_Collections_Generic_List_BaseInvokableCall__Clear___12dc5c0);
    *(undefined1 *)(lVar1 + 0x28) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Toggle$$Start @ 0x568b98
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__Start (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Toggle$$Start
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__Start
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__Start_568b98(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  if ((bRam000000000133ea68 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_BE2_InputValues_TypeInfo_12d39f0);
    native_sub_43273c(&StringLiteral_false_12f47a0);
    native_sub_43273c(&StringLiteral_true_12f6790);
    bRam000000000133ea68 = 1;
  }
  puVar5 = (undefined8 *)(param_1 + 0x38);
  *puVar5 = _StringLiteral_false_12f47a0;
  native_sub_4326e0(puVar5);
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    if (*(char *)(*(long *)(param_1 + 0x18) + 0x118) == '\0') {
      uVar7 = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x38) = _StringLiteral_true_12f6790;
      native_sub_4326e0(puVar5);
      uVar7 = 0x3f800000;
      *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
    }
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    uVar4 = native_sub_432808(_MG_BlocksEngine2_Block_BE2_InputValues_TypeInfo_12d39f0);
    native_MG_BlocksEngine2_Block_BE2_InputValues___ctor_6033d4(uVar7,uVar4,uVar6,1,0);
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
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Toggle$$UpdateValues @ 0x568a74
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__UpdateValues (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Toggle$$UpdateValues
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__UpdateValues
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle__UpdateValues_568a74(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  if ((bRam000000000133ea68 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_BE2_InputValues_TypeInfo_12d39f0);
    native_sub_43273c(&StringLiteral_false_12f47a0);
    native_sub_43273c(&StringLiteral_true_12f6790);
    bRam000000000133ea68 = 1;
  }
  puVar5 = (undefined8 *)(param_1 + 0x38);
  *puVar5 = _StringLiteral_false_12f47a0;
  native_sub_4326e0(puVar5);
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    if (*(char *)(*(long *)(param_1 + 0x18) + 0x118) == '\0') {
      uVar7 = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x38) = _StringLiteral_true_12f6790;
      native_sub_4326e0(puVar5);
      uVar7 = 0x3f800000;
      *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
    }
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    uVar4 = native_sub_432808(_MG_BlocksEngine2_Block_BE2_InputValues_TypeInfo_12d39f0);
    native_MG_BlocksEngine2_Block_BE2_InputValues___ctor_6033d4(uVar7,uVar4,uVar6,1,0);
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
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Toggle$$.ctor @ 0x568b9c
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle___ctor (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Toggle$$.ctor
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle___ctor
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle_o* __this, const MethodInfo* method); */

undefined1  [16]
native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle___ctor_568b9c(ulong param_1)

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



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Toggle$$<OnEnable>b__24_0 @ 0x568ba4
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle___OnEnable_b__24_0 (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle_o* __this, bool _p0_, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Toggle$$<OnEnable>b__24_0
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle___OnEnable_b__24_0
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle_o* __this, bool _p0_, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Toggle___OnEnable_b__24_0_568ba4
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  if ((bRam000000000133ea68 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_BE2_InputValues_TypeInfo_12d39f0);
    native_sub_43273c(&StringLiteral_false_12f47a0);
    native_sub_43273c(&StringLiteral_true_12f6790);
    bRam000000000133ea68 = 1;
  }
  puVar5 = (undefined8 *)(param_1 + 0x38);
  *puVar5 = _StringLiteral_false_12f47a0;
  native_sub_4326e0(puVar5);
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    if (*(char *)(*(long *)(param_1 + 0x18) + 0x118) == '\0') {
      uVar7 = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x38) = _StringLiteral_true_12f6790;
      native_sub_4326e0(puVar5);
      uVar7 = 0x3f800000;
      *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
    }
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    uVar4 = native_sub_432808(_MG_BlocksEngine2_Block_BE2_InputValues_TypeInfo_12d39f0);
    native_MG_BlocksEngine2_Block_BE2_InputValues___ctor_6033d4(uVar7,uVar4,uVar6,1,0);
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
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}


