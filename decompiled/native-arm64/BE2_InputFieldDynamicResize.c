/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Block.BE2_InputFieldDynamicResize$$Awake @ 0x60277c
 * void MG_BlocksEngine2_Block_BE2_InputFieldDynamicResize__Awake (MG_BlocksEngine2_Block_BE2_InputFieldDynamicResize_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_InputFieldDynamicResize$$Awake
   void MG_BlocksEngine2_Block_BE2_InputFieldDynamicResize__Awake
   (MG_BlocksEngine2_Block_BE2_InputFieldDynamicResize_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_InputFieldDynamicResize__Awake_60277c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133edef & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_TMP_InputField____12e2b28);
    bRam000000000133edef = 1;
  }
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  native_sub_4326e0(param_1 + 0x18);
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_TMP_InputField____12e2b28);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)((param_1 + 0x20U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x20U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* MG_BlocksEngine2.Block.BE2_InputFieldDynamicResize$$OnEnable @ 0x602808
 * void MG_BlocksEngine2_Block_BE2_InputFieldDynamicResize__OnEnable (MG_BlocksEngine2_Block_BE2_InputFieldDynamicResize_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_InputFieldDynamicResize$$OnEnable
   void MG_BlocksEngine2_Block_BE2_InputFieldDynamicResize__OnEnable
   (MG_BlocksEngine2_Block_BE2_InputFieldDynamicResize_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_InputFieldDynamicResize__OnEnable_602808(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((bRam000000000133edf0 & 1) == 0) {
    native_sub_43273c(&Method_MG_BlocksEngine2_Block_BE2_InputFieldDynamicResize_Resize___12e2198);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&Method_UnityEngine_Events_UnityAction_string___ctor___12de3e0);
    native_sub_43273c(&UnityEngine_Events_UnityAction_string__TypeInfo_12d2f68);
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_string__AddListener___12de4e8);
    bRam000000000133edf0 = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar2,0,0);
  if ((uVar1 & 1) != 0) {
    native_MG_BlocksEngine2_Block_BE2_InputFieldDynamicResize__Awake_60277c(param_1);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x1d8);
    uVar2 = native_sub_432808(_UnityEngine_Events_UnityAction_string__TypeInfo_12d2f68);
    native_UnityEngine_Events_UnityAction_List_IEventSystemHandler_____ctor_89b93c
              (uVar2,param_1,
               _Method_MG_BlocksEngine2_Block_BE2_InputFieldDynamicResize_Resize___12e2198,
               _Method_UnityEngine_Events_UnityAction_string___ctor___12de3e0);
    if (lVar3 != 0) {
      uVar2 = (**(code **)**(undefined8 **)
                            (*(long *)(
                                      _Method_UnityEngine_Events_UnityEvent_string__AddListener___12de4e8
                                      + 0x18) + 0xc0))(uVar2);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      if (lVar3 != 0) {
        if ((bRam0000000001340cbd & 1) == 0) {
          native_sub_43273c(&Method_System_Collections_Generic_List_BaseInvokableCall__Add___12dc5b0
                            ,uVar2,0);
          bRam0000000001340cbd = 1;
        }
        if (*(long *)(lVar3 + 0x18) != 0) {
          native_System_Collections_Generic_List_int_____Add_d40c00
                    (*(long *)(lVar3 + 0x18),uVar2,
                     _Method_System_Collections_Generic_List_BaseInvokableCall__Add___12dc5b0);
          *(undefined1 *)(lVar3 + 0x28) = 1;
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



/* MG_BlocksEngine2.Block.BE2_InputFieldDynamicResize$$OnDisable @ 0x602958
 * void MG_BlocksEngine2_Block_BE2_InputFieldDynamicResize__OnDisable (MG_BlocksEngine2_Block_BE2_InputFieldDynamicResize_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_InputFieldDynamicResize$$OnDisable
   void MG_BlocksEngine2_Block_BE2_InputFieldDynamicResize__OnDisable
   (MG_BlocksEngine2_Block_BE2_InputFieldDynamicResize_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_InputFieldDynamicResize__OnDisable_602958(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133edf1 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133edf1 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    native_MG_BlocksEngine2_Block_BE2_InputFieldDynamicResize__Awake_60277c(param_1);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if ((*(long *)(param_1 + 0x20) == 0) ||
     (lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x1d8), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar2 = *(long *)(lVar2 + 0x10);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810(0,0);
  }
  if ((bRam0000000001340cbf & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_BaseInvokableCall__Clear___12dc5c0,0);
    bRam0000000001340cbf = 1;
  }
  if (*(long *)(lVar2 + 0x18) != 0) {
    native_System_Collections_Generic_List_Action___Clear_d40e80
              (*(long *)(lVar2 + 0x18),
               _Method_System_Collections_Generic_List_BaseInvokableCall__Clear___12dc5c0);
    *(undefined1 *)(lVar2 + 0x28) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_InputFieldDynamicResize$$Resize @ 0x602a34
 * void MG_BlocksEngine2_Block_BE2_InputFieldDynamicResize__Resize (MG_BlocksEngine2_Block_BE2_InputFieldDynamicResize_o* __this, System_String_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_InputFieldDynamicResize$$Resize
   void MG_BlocksEngine2_Block_BE2_InputFieldDynamicResize__Resize
   (MG_BlocksEngine2_Block_BE2_InputFieldDynamicResize_o* __this, System_String_o* value, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_InputFieldDynamicResize__Resize_602a34
               (long param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x130), lVar4 != 0)) {
    fVar6 = *(float *)(param_1 + 0x2c);
    fVar5 = (float)native_TMPro_TMP_Text__GetPreferredValues_4c1074(lVar4,param_2,0);
    lVar4 = *(long *)(param_1 + 0x18);
    fVar6 = fVar6 + fVar5;
    fVar5 = *(float *)(param_1 + 0x28);
    if (*(float *)(param_1 + 0x28) <= fVar6) {
      fVar5 = fVar6;
    }
    if (lVar4 != 0) {
      fVar6 = *(float *)(param_1 + 0x30);
      bVar1 = false;
      bVar2 = true;
      bVar3 = false;
      if (fVar6 < fVar5) {
        bVar1 = false;
        bVar2 = false;
        bVar3 = true;
        if (!NAN(fVar6)) {
          bVar1 = fVar6 < 0.0;
          bVar2 = fVar6 == 0.0;
          bVar3 = false;
        }
      }
      if (bVar2 || bVar1 != bVar3) {
        fVar6 = fVar5;
      }
      native_UnityEngine_RectTransform__get_sizeDelta_764f64(lVar4,0);
      native_UnityEngine_RectTransform__set_sizeDelta_76500c(fVar6,lVar4,0);
      if ((*(long *)(param_1 + 0x20) != 0) &&
         (lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x130), lVar4 != 0)) {
        lVar4 = native_TMPro_TMP_Text__get_transform_4b926c(lVar4,0);
        native_UnityEngine_Vector3__get_zero_776668(0);
        if (lVar4 != 0) {
          if (pcRam000000000133fee8 == (code *)0x0) {
            pcRam000000000133fee8 = (code *)native_sub_4326f0(&UNK_00e2ada3,0);
          }
          (*pcRam000000000133fee8)(lVar4,&stack0xffffffffffffffd0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_InputFieldDynamicResize$$.ctor @ 0x602af0
 * void MG_BlocksEngine2_Block_BE2_InputFieldDynamicResize___ctor (MG_BlocksEngine2_Block_BE2_InputFieldDynamicResize_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_InputFieldDynamicResize$$.ctor
   void MG_BlocksEngine2_Block_BE2_InputFieldDynamicResize___ctor
   (MG_BlocksEngine2_Block_BE2_InputFieldDynamicResize_o* __this, const MethodInfo* method); */

long native_MG_BlocksEngine2_Block_BE2_InputFieldDynamicResize___ctor_602af0(long param_1)

{
  *(undefined8 *)(param_1 + 0x28) = 0x420c0000428c0000;
  if ((bRam0000000001340ae0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001340ae0 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  return param_1;
}


