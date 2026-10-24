/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* BE2_VirtualJoystickButton$$.ctor @ 0xdd07b4
 * void BE2_VirtualJoystickButton___ctor (BE2_VirtualJoystickButton_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_VirtualJoystickButton$$.ctor
   void BE2_VirtualJoystickButton___ctor (BE2_VirtualJoystickButton_o* __this, const MethodInfo*
   method); */

undefined1  [16] native_BE2_VirtualJoystickButton___ctor_dd07b4(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam00000000013402fa & 1) == 0) {
    native_sub_43273c(&UnityEngine_UI_Button_ButtonClickedEvent_TypeInfo_12d70e0,0);
    native_sub_43273c(&UnityEngine_UI_Selectable_TypeInfo_12d5c78);
    bRam00000000013402fa = 1;
  }
  uVar1 = native_sub_432808(_UnityEngine_UI_Button_ButtonClickedEvent_TypeInfo_12d70e0);
  native_UnityEngine_UI_Button_ButtonClickedEvent___ctor_c6c1a8(uVar1,0);
  *(undefined8 *)(param_1 + 0xf8) = uVar1;
  native_sub_4326e0((undefined8 *)(param_1 + 0xf8),uVar1);
  if (((*(byte *)(_UnityEngine_UI_Selectable_TypeInfo_12d5c78 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_UI_Selectable_TypeInfo_12d5c78 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam0000000001341df8 & 1) == 0) {
    native_sub_43273c(&UnityEngine_UI_AnimationTriggers_TypeInfo_12d37b0,0);
    native_sub_43273c(&UnityEngine_UI_ColorBlock_TypeInfo_12d3e50);
    native_sub_43273c(&Method_System_Collections_Generic_List_CanvasGroup___ctor___12dc620);
    native_sub_43273c(&System_Collections_Generic_List_CanvasGroup__TypeInfo_12d29d8);
    bRam0000000001341df8 = 1;
  }
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x3d) = 0;
  *(undefined8 *)(param_1 + 0x35) = 0;
  *(undefined8 *)(param_1 + 0x2d) = 0;
  *(undefined8 *)(param_1 + 0x25) = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  *(undefined2 *)(param_1 + 0x45) = 0;
  *(undefined4 *)(param_1 + 0x20) = 3;
  native_sub_4326e0(param_1 + 0x28,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  if (((*(byte *)(_UnityEngine_UI_ColorBlock_TypeInfo_12d3e50 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_UI_ColorBlock_TypeInfo_12d3e50 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  func_0x002c9160(param_1 + 0x4c,*(undefined8 *)(_UnityEngine_UI_ColorBlock_TypeInfo_12d3e50 + 0xb8)
                  ,0x58);
  uVar1 = native_sub_432808(_UnityEngine_UI_AnimationTriggers_TypeInfo_12d37b0);
  native_UnityEngine_UI_AnimationTriggers___ctor_7cf6d0(uVar1,0);
  *(undefined8 *)(param_1 + 200) = uVar1;
  native_sub_4326e0(param_1 + 200,uVar1);
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined1 *)(param_1 + 0xe0) = 1;
  *(undefined4 *)(param_1 + 0xe4) = 0xffffffff;
  uVar1 = native_sub_432808(_System_Collections_Generic_List_CanvasGroup__TypeInfo_12d29d8);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_CanvasGroup___ctor___12dc620);
  *(undefined8 *)(param_1 + 0xf0) = uVar1;
  native_sub_4326e0(param_1 + 0xf0,uVar1);
  if ((bRam0000000001340ae0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001340ae0 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* BE2_VirtualJoystickButton$$OnPointerDown @ 0xdd07bc
 * void BE2_VirtualJoystickButton__OnPointerDown (BE2_VirtualJoystickButton_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

/* BE2_VirtualJoystickButton$$OnPointerDown
   void BE2_VirtualJoystickButton__OnPointerDown (BE2_VirtualJoystickButton_o* __this,
   UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

void native_BE2_VirtualJoystickButton__OnPointerDown_dd07bc(long param_1,undefined8 param_2)

{
  native_UnityEngine_UI_Selectable__OnPointerDown_a8d490(param_1,param_2,0);
  *(undefined1 *)(param_1 + 0x100) = 1;
  return;
}



/* BE2_VirtualJoystickButton$$OnPointerUp @ 0xdd07e8
 * void BE2_VirtualJoystickButton__OnPointerUp (BE2_VirtualJoystickButton_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

/* BE2_VirtualJoystickButton$$OnPointerUp
   void BE2_VirtualJoystickButton__OnPointerUp (BE2_VirtualJoystickButton_o* __this,
   UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

void native_BE2_VirtualJoystickButton__OnPointerUp_dd07e8(long param_1,undefined8 param_2)

{
  native_UnityEngine_UI_Selectable__OnPointerUp_a8d6f0(param_1,param_2,0);
  *(undefined1 *)(param_1 + 0x100) = 0;
  return;
}


