/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* BE2_Ins_Return$$Function @ 0x60cb88
 * void BE2_Ins_Return__Function (BE2_Ins_Return_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x007d0294) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_Return$$Function
   void BE2_Ins_Return__Function (BE2_Ins_Return_o* __this, const MethodInfo* method); */

void native_BE2_Ins_Return__Function_60cb88(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  lVar1 = native_MG_BlocksEngine2_Core_BE2_ExecutionManager__get_Instance_564464(0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam000000000133eb02 & 1) == 0) {
    native_sub_43273c(&UnityEngine_EventSystems_EventSystem_TypeInfo_12d45c8,0);
    bRam000000000133eb02 = 1;
  }
  lVar1 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
  if (lVar1 != 0) {
    native_MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent_579794(lVar1,1);
    if (((*(byte *)(_UnityEngine_EventSystems_EventSystem_TypeInfo_12d45c8 + 0x133) >> 2 & 1) != 0)
       && (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo_12d45c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar1 = native_UnityEngine_EventSystems_EventSystem__get_current_7dca28(0);
    if (lVar1 != 0) {
      uVar2 = native_UnityEngine_EventSystems_EventSystem__get_baseEventDataCache_7dcdb0(lVar1,0,0);
      if ((bRam0000000001340358 & 1) == 0) {
        native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
        native_sub_43273c(&
                          Method_UnityEngine_EventSystems_ExecuteEvents_Execute_IDeselectHandler____12e41b8
                         );
        native_sub_43273c(&
                          Method_UnityEngine_EventSystems_ExecuteEvents_Execute_ISelectHandler____12e4200
                         );
        native_sub_43273c(&UnityEngine_EventSystems_ExecuteEvents_TypeInfo_12d4600);
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        native_sub_43273c(&StringLiteral_Attempting_to_select__12ec680);
        native_sub_43273c(&StringLiteral_while_already_selecting_an_object__12f6b18);
        bRam0000000001340358 = 1;
      }
      if (*(char *)(lVar1 + 0x41) == '\0') {
        puVar3 = (undefined8 *)(lVar1 + 0x38);
        uVar4 = *puVar3;
        *(undefined1 *)(lVar1 + 0x41) = 1;
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(0,uVar4,0);
        if ((uVar5 & 1) == 0) {
          uVar4 = *puVar3;
          if (((*(byte *)(_UnityEngine_EventSystems_ExecuteEvents_TypeInfo_12d4600 + 0x133) >> 2 & 1
               ) != 0) &&
             (*(int *)(_UnityEngine_EventSystems_ExecuteEvents_TypeInfo_12d4600 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          if (cRam00000000013403d7 == '\0') {
            native_sub_43273c(&UnityEngine_EventSystems_ExecuteEvents_TypeInfo_12d4600);
            cRam00000000013403d7 = '\x01';
          }
          if (((*(byte *)(_UnityEngine_EventSystems_ExecuteEvents_TypeInfo_12d4600 + 0x133) >> 2 & 1
               ) != 0) &&
             (*(int *)(_UnityEngine_EventSystems_ExecuteEvents_TypeInfo_12d4600 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          native_UnityEngine_EventSystems_ExecuteEvents__Execute_IBeginDragHandler__4a0f98
                    (uVar4,uVar2,
                     *(undefined8 *)
                      (*(long *)(_UnityEngine_EventSystems_ExecuteEvents_TypeInfo_12d4600 + 0xb8) +
                      0x68),
                     _Method_UnityEngine_EventSystems_ExecuteEvents_Execute_IDeselectHandler____12e41b8
                    );
          *puVar3 = 0;
          native_sub_4326e0(puVar3,0);
          uVar4 = *puVar3;
          if (cRam00000000013403d8 == '\0') {
            native_sub_43273c(&UnityEngine_EventSystems_ExecuteEvents_TypeInfo_12d4600);
            cRam00000000013403d8 = '\x01';
          }
          if (((*(byte *)(_UnityEngine_EventSystems_ExecuteEvents_TypeInfo_12d4600 + 0x133) >> 2 & 1
               ) != 0) &&
             (*(int *)(_UnityEngine_EventSystems_ExecuteEvents_TypeInfo_12d4600 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          native_UnityEngine_EventSystems_ExecuteEvents__Execute_IBeginDragHandler__4a0f98
                    (uVar4,uVar2,
                     *(undefined8 *)
                      (*(long *)(_UnityEngine_EventSystems_ExecuteEvents_TypeInfo_12d4600 + 0xb8) +
                      0x60),
                     _Method_UnityEngine_EventSystems_ExecuteEvents_Execute_ISelectHandler____12e4200
                    );
        }
        *(undefined1 *)(lVar1 + 0x41) = 0;
        return;
      }
      uVar2 = native_System_String__Concat_afc654
                        (_StringLiteral_Attempting_to_select__12ec680,0,
                         _StringLiteral_while_already_selecting_an_object__12f6b18,0);
      if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Debug_TypeInfo_12d4338);
      }
      uVar4 = 0;
      if ((bRam0000000001340b52 & 1) == 0) {
        native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338,0);
        native_sub_43273c(&UnityEngine_ILogger_TypeInfo_12d4c10);
        bRam0000000001340b52 = 1;
        uVar4 = extraout_x1;
      }
      if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
        native_sub_4327ec();
        uVar4 = extraout_x1_00;
      }
      if (cRam000000000134112a == '\0') {
        native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338,uVar4);
        cRam000000000134112a = '\x01';
      }
      if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      plVar7 = *(long **)(*(long *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xb8) + 8);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      lVar1 = *plVar7;
      if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
        uVar5 = 0;
        piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == _UnityEngine_ILogger_TypeInfo_12d4c10) {
            puVar3 = (undefined8 *)(lVar1 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto code_r0x008dc6d4;
          }
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 < *(ushort *)(lVar1 + 0x12a));
      }
      puVar3 = (undefined8 *)native_sub_3c9b34(plVar7,_UnityEngine_ILogger_TypeInfo_12d4c10,2);
code_r0x008dc6d4:
                    /* WARNING: Could not recover jumptable at 0x008dc6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar7,0,uVar2,puVar3[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Ins_Return$$.ctor @ 0x60cbac
 * void BE2_Ins_Return___ctor (BE2_Ins_Return_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_Return$$.ctor
   void BE2_Ins_Return___ctor (BE2_Ins_Return_o* __this, const MethodInfo* method); */

undefined1  [16] native_BE2_Ins_Return___ctor_60cbac(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)(param_1 + 0x60) = 100;
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


