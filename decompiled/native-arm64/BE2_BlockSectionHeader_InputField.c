/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_InputField$$get_Transform @ 0x567754
 * UnityEngine_Transform_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__get_Transform (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_InputField$$get_Transform
   UnityEngine_Transform_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__get_Transform
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField_o* __this, const MethodInfo* method);
    */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__get_Transform_567754
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



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_InputField$$get_Size @ 0x56775c
 * UnityEngine_Vector2_o MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__get_Size (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_InputField$$get_Size
   UnityEngine_Vector2_o MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__get_Size
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField_o* __this, const MethodInfo* method);
    */

undefined4
native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__get_Size_56775c(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_28;
  
  if ((bRam000000000133ea52 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea52 = 1;
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



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_InputField$$get_Spot @ 0x567800
 * MG_BlocksEngine2_Block_I_BE2_Spot_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__get_Spot (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_InputField$$get_Spot
   MG_BlocksEngine2_Block_I_BE2_Spot_o*
   MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__get_Spot
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField_o* __this, const MethodInfo* method);
    */

undefined8
native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__get_Spot_567800(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_InputField$$set_Spot @ 0x567808
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__set_Spot (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField_o* __this, MG_BlocksEngine2_Block_I_BE2_Spot_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_InputField$$set_Spot
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__set_Spot
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField_o* __this,
   MG_BlocksEngine2_Block_I_BE2_Spot_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__set_Spot_567808
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



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_InputField$$get_FloatValue @ 0x567810
 * float MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__get_FloatValue (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_InputField$$get_FloatValue
   float MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__get_FloatValue
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField_o* __this, const MethodInfo* method);
    */

undefined4
native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__get_FloatValue_567810(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_InputField$$set_FloatValue @ 0x567818
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__set_FloatValue (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField_o* __this, float value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_InputField$$set_FloatValue
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__set_FloatValue
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField_o* __this, float value, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__set_FloatValue_567818
               (undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x30) = param_1;
  return;
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_InputField$$get_StringValue @ 0x567820
 * System_String_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__get_StringValue (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_InputField$$get_StringValue
   System_String_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__get_StringValue
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField_o* __this, const MethodInfo* method);
    */

undefined8
native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__get_StringValue_567820
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_InputField$$set_StringValue @ 0x567828
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__set_StringValue (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField_o* __this, System_String_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_InputField$$set_StringValue
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__set_StringValue
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField_o* __this, System_String_o* value,
   const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__set_StringValue_567828
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



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_InputField$$get_InputValues @ 0x567830
 * MG_BlocksEngine2_Block_BE2_InputValues_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__get_InputValues (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_InputField$$get_InputValues
   MG_BlocksEngine2_Block_BE2_InputValues_o*
   MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__get_InputValues
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField_o* __this, const MethodInfo* method);
    */

undefined8
native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__get_InputValues_567830
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_InputField$$set_InputValues @ 0x567838
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__set_InputValues (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField_o* __this, MG_BlocksEngine2_Block_BE2_InputValues_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_InputField$$set_InputValues
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__set_InputValues
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField_o* __this,
   MG_BlocksEngine2_Block_BE2_InputValues_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__set_InputValues_567838
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



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_InputField$$OnValidate @ 0x567840
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__OnValidate (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_InputField$$OnValidate
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__OnValidate
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField_o* __this, const MethodInfo* method);
    */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__OnValidate_567840
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133ea53 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Spot____12e2a68);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    bRam000000000133ea53 = 1;
  }
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  native_sub_4326e0(param_1 + 0x20);
  uVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  uVar4 = native_MG_BlocksEngine2_Utils_BE2_InputField__GetBE2Component_601c18(uVar4,0);
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



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_InputField$$Awake @ 0x567844
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__Awake (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_InputField$$Awake
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__Awake
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField_o* __this, const MethodInfo* method);
    */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__Awake_567844(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133ea53 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Spot____12e2a68);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    bRam000000000133ea53 = 1;
  }
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  native_sub_4326e0(param_1 + 0x20);
  uVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  uVar4 = native_MG_BlocksEngine2_Utils_BE2_InputField__GetBE2Component_601c18(uVar4,0);
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



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_InputField$$OnEnable @ 0x5678f4
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__OnEnable (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_InputField$$OnEnable
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__OnEnable
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField_o* __this, const MethodInfo* method);
    */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__OnEnable_5678f4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam000000000133ea54 & 1) == 0) {
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__OnEnable_b__24_0___12e2110
                     );
    native_sub_43273c(&Method_UnityEngine_Events_UnityAction_string___ctor___12de3e0);
    native_sub_43273c(&UnityEngine_Events_UnityAction_string__TypeInfo_12d2f68);
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_string__AddListener___12de4e8);
    bRam000000000133ea54 = 1;
  }
  native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__UpdateValues_5679cc(param_1);
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = native_MG_BlocksEngine2_Utils_BE2_InputField__get_onEndEdit_60218c
                      (*(long *)(param_1 + 0x18),0);
    uVar2 = native_sub_432808(_UnityEngine_Events_UnityAction_string__TypeInfo_12d2f68);
    native_UnityEngine_Events_UnityAction_List_IEventSystemHandler_____ctor_89b93c
              (uVar2,param_1,
               _Method_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__OnEnable_b__24_0___12e2110
               ,_Method_UnityEngine_Events_UnityAction_string___ctor___12de3e0);
    if (lVar1 != 0) {
      uVar2 = (**(code **)**(undefined8 **)
                            (*(long *)(
                                      _Method_UnityEngine_Events_UnityEvent_string__AddListener___12de4e8
                                      + 0x18) + 0xc0))(uVar2);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      lVar1 = *(long *)(lVar1 + 0x10);
      if (lVar1 != 0) {
        if ((bRam0000000001340cbd & 1) == 0) {
          native_sub_43273c(&Method_System_Collections_Generic_List_BaseInvokableCall__Add___12dc5b0
                            ,uVar2,0);
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
      native_sub_432810(0,uVar2,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_InputField$$OnDisable @ 0x567b7c
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__OnDisable (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_InputField$$OnDisable
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__OnDisable
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField_o* __this, const MethodInfo* method);
    */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__OnDisable_567b7c(long param_1)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x18) == 0) ||
     (lVar1 = native_MG_BlocksEngine2_Utils_BE2_InputField__get_onEndEdit_60218c
                        (*(long *)(param_1 + 0x18),0), lVar1 == 0)) {
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



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_InputField$$Start @ 0x567ba8
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__Start (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_InputField$$Start
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__Start
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField_o* __this, const MethodInfo* method);
    */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__Start_567ba8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  if ((bRam000000000133ea55 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_BE2_InputValues_TypeInfo_12d39f0);
    native_sub_43273c(&System_Globalization_CultureInfo_TypeInfo_12d4068);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam000000000133ea55 = 1;
  }
  uVar5 = _StringLiteral__12eaac0;
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar4 = native_MG_BlocksEngine2_Utils_BE2_InputField__get_text_60240c
                      (*(long *)(param_1 + 0x18),0);
    if (lVar4 != 0) {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_00567af8;
      uVar5 = native_MG_BlocksEngine2_Utils_BE2_InputField__get_text_60240c
                        (*(long *)(param_1 + 0x18),0);
    }
    puVar7 = (undefined8 *)(param_1 + 0x38);
    *puVar7 = uVar5;
    native_sub_4326e0(puVar7,uVar5);
    uVar5 = *puVar7;
    if (((*(byte *)(_System_Globalization_CultureInfo_TypeInfo_12d4068 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Globalization_CultureInfo_TypeInfo_12d4068 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = native_System_Globalization_CultureInfo__get_InvariantCulture_b2d3e8(0);
    uVar8 = native_System_Single__Parse_af8a18(uVar5,uVar6,0);
    *(int *)(param_1 + 0x30) = (int)uVar8;
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    uVar5 = native_sub_432808(_MG_BlocksEngine2_Block_BE2_InputValues_TypeInfo_12d39f0);
    native_MG_BlocksEngine2_Block_BE2_InputValues___ctor_6033d4(uVar8,uVar5,uVar6,0,0);
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
LAB_00567af8:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_InputField$$UpdateValues @ 0x5679cc
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__UpdateValues (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_InputField$$UpdateValues
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__UpdateValues
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField_o* __this, const MethodInfo* method);
    */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField__UpdateValues_5679cc
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  if ((bRam000000000133ea55 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_BE2_InputValues_TypeInfo_12d39f0);
    native_sub_43273c(&System_Globalization_CultureInfo_TypeInfo_12d4068);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam000000000133ea55 = 1;
  }
  uVar5 = _StringLiteral__12eaac0;
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar4 = native_MG_BlocksEngine2_Utils_BE2_InputField__get_text_60240c
                      (*(long *)(param_1 + 0x18),0);
    if (lVar4 != 0) {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_00567af8;
      uVar5 = native_MG_BlocksEngine2_Utils_BE2_InputField__get_text_60240c
                        (*(long *)(param_1 + 0x18),0);
    }
    puVar7 = (undefined8 *)(param_1 + 0x38);
    *puVar7 = uVar5;
    native_sub_4326e0(puVar7,uVar5);
    uVar5 = *puVar7;
    if (((*(byte *)(_System_Globalization_CultureInfo_TypeInfo_12d4068 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Globalization_CultureInfo_TypeInfo_12d4068 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = native_System_Globalization_CultureInfo__get_InvariantCulture_b2d3e8(0);
    uVar8 = native_System_Single__Parse_af8a18(uVar5,uVar6,0);
    *(int *)(param_1 + 0x30) = (int)uVar8;
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    uVar5 = native_sub_432808(_MG_BlocksEngine2_Block_BE2_InputValues_TypeInfo_12d39f0);
    native_MG_BlocksEngine2_Block_BE2_InputValues___ctor_6033d4(uVar8,uVar5,uVar6,0,0);
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
LAB_00567af8:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_InputField$$.ctor @ 0x567bac
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField___ctor (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_InputField$$.ctor
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField___ctor
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField_o* __this, const MethodInfo* method);
    */

undefined1  [16]
native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField___ctor_567bac(ulong param_1)

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



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_InputField$$<OnEnable>b__24_0 @ 0x567bb4
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField___OnEnable_b__24_0 (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField_o* __this, System_String_o* _p0_, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader_InputField$$<OnEnable>b__24_0
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField___OnEnable_b__24_0
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField_o* __this, System_String_o* _p0_, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_InputField___OnEnable_b__24_0_567bb4
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  if ((bRam000000000133ea55 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_BE2_InputValues_TypeInfo_12d39f0);
    native_sub_43273c(&System_Globalization_CultureInfo_TypeInfo_12d4068);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam000000000133ea55 = 1;
  }
  uVar5 = _StringLiteral__12eaac0;
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar4 = native_MG_BlocksEngine2_Utils_BE2_InputField__get_text_60240c
                      (*(long *)(param_1 + 0x18),0);
    if (lVar4 != 0) {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_00567af8;
      uVar5 = native_MG_BlocksEngine2_Utils_BE2_InputField__get_text_60240c
                        (*(long *)(param_1 + 0x18),0);
    }
    puVar7 = (undefined8 *)(param_1 + 0x38);
    *puVar7 = uVar5;
    native_sub_4326e0(puVar7,uVar5);
    uVar5 = *puVar7;
    if (((*(byte *)(_System_Globalization_CultureInfo_TypeInfo_12d4068 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Globalization_CultureInfo_TypeInfo_12d4068 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = native_System_Globalization_CultureInfo__get_InvariantCulture_b2d3e8(0);
    uVar8 = native_System_Single__Parse_af8a18(uVar5,uVar6,0);
    *(int *)(param_1 + 0x30) = (int)uVar8;
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    uVar5 = native_sub_432808(_MG_BlocksEngine2_Block_BE2_InputValues_TypeInfo_12d39f0);
    native_MG_BlocksEngine2_Block_BE2_InputValues___ctor_6033d4(uVar8,uVar5,uVar6,0,0);
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
LAB_00567af8:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}


