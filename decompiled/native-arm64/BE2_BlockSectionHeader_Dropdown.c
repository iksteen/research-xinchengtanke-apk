/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Dropdown$$get_Transform @ 0x566d98
 * UnityEngine_Transform_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__get_Transform (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Dropdown$$get_Transform
   UnityEngine_Transform_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__get_Transform
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__get_Transform_566d98
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



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Dropdown$$get_Size @ 0x566da0
 * UnityEngine_Vector2_o MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__get_Size (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Dropdown$$get_Size
   UnityEngine_Vector2_o MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__get_Size
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown_o* __this, const MethodInfo* method); */

undefined4
native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__get_Size_566da0(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_28;
  
  if ((bRam000000000133ea4d & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea4d = 1;
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



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Dropdown$$get_Spot @ 0x566e44
 * MG_BlocksEngine2_Block_I_BE2_Spot_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__get_Spot (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Dropdown$$get_Spot
   MG_BlocksEngine2_Block_I_BE2_Spot_o*
   MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__get_Spot
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__get_Spot_566e44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Dropdown$$set_Spot @ 0x566e4c
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__set_Spot (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown_o* __this, MG_BlocksEngine2_Block_I_BE2_Spot_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Dropdown$$set_Spot
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__set_Spot
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown_o* __this,
   MG_BlocksEngine2_Block_I_BE2_Spot_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__set_Spot_566e4c
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



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Dropdown$$get_FloatValue @ 0x566e54
 * float MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__get_FloatValue (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Dropdown$$get_FloatValue
   float MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__get_FloatValue
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown_o* __this, const MethodInfo* method); */

undefined4
native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__get_FloatValue_566e54(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Dropdown$$set_FloatValue @ 0x566e5c
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__set_FloatValue (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown_o* __this, float value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Dropdown$$set_FloatValue
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__set_FloatValue
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown_o* __this, float value, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__set_FloatValue_566e5c
               (undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x30) = param_1;
  return;
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Dropdown$$get_StringValue @ 0x566e64
 * System_String_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__get_StringValue (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Dropdown$$get_StringValue
   System_String_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__get_StringValue
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__get_StringValue_566e64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Dropdown$$set_StringValue @ 0x566e6c
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__set_StringValue (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown_o* __this, System_String_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Dropdown$$set_StringValue
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__set_StringValue
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown_o* __this, System_String_o* value, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__set_StringValue_566e6c
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



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Dropdown$$get_InputValues @ 0x566e74
 * MG_BlocksEngine2_Block_BE2_InputValues_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__get_InputValues (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Dropdown$$get_InputValues
   MG_BlocksEngine2_Block_BE2_InputValues_o*
   MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__get_InputValues
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__get_InputValues_566e74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Dropdown$$set_InputValues @ 0x566e7c
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__set_InputValues (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown_o* __this, MG_BlocksEngine2_Block_BE2_InputValues_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Dropdown$$set_InputValues
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__set_InputValues
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown_o* __this,
   MG_BlocksEngine2_Block_BE2_InputValues_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__set_InputValues_566e7c
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



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Dropdown$$OnValidate @ 0x566e84
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__OnValidate (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Dropdown$$OnValidate
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__OnValidate
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__OnValidate_566e84(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133ea4e & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Spot____12e2a68);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    bRam000000000133ea4e = 1;
  }
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  native_sub_4326e0(param_1 + 0x20);
  native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  uVar4 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetBE2Component_566f34();
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



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Dropdown$$Awake @ 0x566e88
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__Awake (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Dropdown$$Awake
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__Awake
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__Awake_566e88(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133ea4e & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Spot____12e2a68);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    bRam000000000133ea4e = 1;
  }
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  native_sub_4326e0(param_1 + 0x20);
  native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  uVar4 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetBE2Component_566f34();
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



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Dropdown$$OnEnable @ 0x566fb8
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__OnEnable (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Dropdown$$OnEnable
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__OnEnable
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__OnEnable_566fb8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam000000000133ea4f & 1) == 0) {
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__OnEnable_b__24_0___12e2108
                     );
    native_sub_43273c(&Method_UnityEngine_Events_UnityAction_int___ctor___12de3b0);
    native_sub_43273c(&UnityEngine_Events_UnityAction_int__TypeInfo_12d2f48);
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_int__AddListener___12de488);
    bRam000000000133ea4f = 1;
  }
  native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__UpdateValues_56709c(param_1);
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  lVar1 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__get_onValueChanged_567184();
  uVar2 = native_sub_432808(_UnityEngine_Events_UnityAction_int__TypeInfo_12d2f48);
  native_UnityEngine_Events_UnityAction_int____ctor_89b2bc
            (uVar2,param_1,
             _Method_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__OnEnable_b__24_0___12e2108
             ,_Method_UnityEngine_Events_UnityAction_int___ctor___12de3b0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar2 = (**(code **)**(undefined8 **)
                        (*(long *)(_Method_UnityEngine_Events_UnityEvent_int__AddListener___12de488
                                  + 0x18) + 0xc0))(uVar2);
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810(0,uVar2,0);
    }
    if ((bRam0000000001340cbd & 1) == 0) {
      native_sub_43273c(&Method_System_Collections_Generic_List_BaseInvokableCall__Add___12dc5b0,
                        uVar2,0);
      bRam0000000001340cbd = 1;
    }
    if (*(long *)(lVar1 + 0x18) != 0) {
      native_System_Collections_Generic_List_int_____Add_d40c00
                (*(long *)(lVar1 + 0x18),uVar2,
                 _Method_System_Collections_Generic_List_BaseInvokableCall__Add___12dc5b0);
      *(undefined1 *)(lVar1 + 0x28) = 1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Dropdown$$OnDisable @ 0x567250
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__OnDisable (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Dropdown$$OnDisable
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__OnDisable
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__OnDisable_567250(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  lVar1 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__get_onValueChanged_567184();
  if (lVar1 == 0) {
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



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Dropdown$$Start @ 0x567280
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__Start (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Dropdown$$Start
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__Start
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__Start_567280(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((bRam000000000133ea50 & 1) == 0) {
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponent_BE2_DropdownDynamicResize____12e2950
                     );
    bRam000000000133ea50 = 1;
  }
  lVar6 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,
                     _Method_UnityEngine_Component_GetComponent_BE2_DropdownDynamicResize____12e2950
                    );
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  native_MG_BlocksEngine2_Block_BE2_DropdownDynamicResize__Resize_5672e4(lVar6,0);
  if ((bRam000000000133ea51 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_BE2_InputValues_TypeInfo_12d39f0);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam000000000133ea51 = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    iVar4 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetOptionsCount_56742c();
    uVar5 = _StringLiteral__12eaac0;
    if (0 < iVar4) {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_00567180;
      uVar5 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetSelectedOptionText_567528();
    }
    *(undefined8 *)(param_1 + 0x38) = uVar5;
    native_sub_4326e0();
    if (*(long *)(param_1 + 0x18) != 0) {
      iVar4 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__get_value_567678();
      *(float *)(param_1 + 0x30) = (float)iVar4;
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      uVar5 = native_sub_432808(_MG_BlocksEngine2_Block_BE2_InputValues_TypeInfo_12d39f0);
      native_MG_BlocksEngine2_Block_BE2_InputValues___ctor_6033d4((float)iVar4,uVar5,uVar7,0,0);
      *(undefined8 *)(param_1 + 0x40) = uVar5;
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
  }
LAB_00567180:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Dropdown$$UpdateValues @ 0x56709c
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__UpdateValues (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Dropdown$$UpdateValues
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__UpdateValues
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown__UpdateValues_56709c
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((bRam000000000133ea51 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_BE2_InputValues_TypeInfo_12d39f0);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam000000000133ea51 = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    iVar4 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetOptionsCount_56742c();
    uVar5 = _StringLiteral__12eaac0;
    if (0 < iVar4) {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_00567180;
      uVar5 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetSelectedOptionText_567528();
    }
    *(undefined8 *)(param_1 + 0x38) = uVar5;
    native_sub_4326e0();
    if (*(long *)(param_1 + 0x18) != 0) {
      iVar4 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__get_value_567678();
      *(float *)(param_1 + 0x30) = (float)iVar4;
      uVar6 = *(undefined8 *)(param_1 + 0x38);
      uVar5 = native_sub_432808(_MG_BlocksEngine2_Block_BE2_InputValues_TypeInfo_12d39f0);
      native_MG_BlocksEngine2_Block_BE2_InputValues___ctor_6033d4((float)iVar4,uVar5,uVar6,0,0);
      *(undefined8 *)(param_1 + 0x40) = uVar5;
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
  }
LAB_00567180:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Dropdown$$.ctor @ 0x567748
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown___ctor (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Dropdown$$.ctor
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown___ctor
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown_o* __this, const MethodInfo* method); */

undefined1  [16]
native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown___ctor_567748(ulong param_1)

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



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Dropdown$$<OnEnable>b__24_0 @ 0x567750
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown___OnEnable_b__24_0 (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown_o* __this, int32_t _p0_, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_Dropdown$$<OnEnable>b__24_0
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown___OnEnable_b__24_0
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown_o* __this, int32_t _p0_, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Dropdown___OnEnable_b__24_0_567750
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((bRam000000000133ea51 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_BE2_InputValues_TypeInfo_12d39f0);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam000000000133ea51 = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    iVar4 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetOptionsCount_56742c();
    uVar5 = _StringLiteral__12eaac0;
    if (0 < iVar4) {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_00567180;
      uVar5 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetSelectedOptionText_567528();
    }
    *(undefined8 *)(param_1 + 0x38) = uVar5;
    native_sub_4326e0();
    if (*(long *)(param_1 + 0x18) != 0) {
      iVar4 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__get_value_567678();
      *(float *)(param_1 + 0x30) = (float)iVar4;
      uVar6 = *(undefined8 *)(param_1 + 0x38);
      uVar5 = native_sub_432808(_MG_BlocksEngine2_Block_BE2_InputValues_TypeInfo_12d39f0);
      native_MG_BlocksEngine2_Block_BE2_InputValues___ctor_6033d4((float)iVar4,uVar5,uVar6,0,0);
      *(undefined8 *)(param_1 + 0x40) = uVar5;
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
  }
LAB_00567180:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}


