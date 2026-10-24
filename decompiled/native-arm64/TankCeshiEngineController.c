/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TankCeshiEngineController$$Start @ 0x6df5f4
 * void TankCeshiEngineController__Start (TankCeshiEngineController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TankCeshiEngineController$$Start
   void TankCeshiEngineController__Start (TankCeshiEngineController_o* __this, const MethodInfo*
   method); */

void native_TankCeshiEngineController__Start_6df5f4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  
  if ((bRam000000000133f375 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
    native_sub_43273c(&Method_TankCeshiEngineController_OnClickButtonRTankPao___12e7050);
    native_sub_43273c(&StringLiteral_leftJoystick_12f5410);
    native_sub_43273c(&StringLiteral_ButtonRTankPao_12ec928);
    native_sub_43273c(&StringLiteral_rightJoystick_12f5e80);
    bRam000000000133f375 = 1;
  }
  uVar1 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_leftJoystick_12f5410,0);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  native_sub_4326e0();
  uVar1 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_rightJoystick_12f5e80,0);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  native_sub_4326e0(param_1 + 0x20);
  lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if ((lVar2 != 0) &&
     (lVar2 = native_UnityEngine_Transform__FindChild_772e3c
                        (lVar2,_StringLiteral_ButtonRTankPao_12ec928,0), lVar2 != 0)) {
    lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(lVar2,0);
    plVar7 = (long *)(param_1 + 0x28);
    *plVar7 = lVar2;
    native_sub_4326e0(plVar7,lVar2);
    if ((*plVar7 != 0) &&
       (lVar2 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                          (*plVar7,_Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88),
       lVar2 != 0)) {
      lVar2 = *(long *)(lVar2 + 0xc0);
      uVar1 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
      native_EventDelegate_Callback___ctor_54bd18
                (uVar1,param_1,_Method_TankCeshiEngineController_OnClickButtonRTankPao___12e7050,0);
      uVar3 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
      native_EventDelegate___ctor_de0bd0(uVar3,uVar1,0);
      if (lVar2 != 0) {
        lVar6 = *(long *)(lVar2 + 0x10);
        if (lVar6 != 0) {
          uVar5 = *(uint *)(lVar2 + 0x18);
          if (uVar5 == *(uint *)(lVar6 + 0x18)) {
            (*(code *)**(undefined8 **)
                        (*(long *)(*(long *)(
                                            _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740
                                            + 0x18) + 0xc0) + 0x60))(lVar2,uVar5 + 1);
            uVar5 = *(uint *)(lVar2 + 0x18);
            lVar6 = *(long *)(lVar2 + 0x10);
            *(uint *)(lVar2 + 0x18) = uVar5 + 1;
            if (lVar6 == 0) goto code_r0x00d40c5c;
          }
          else {
            *(uint *)(lVar2 + 0x18) = uVar5 + 1;
          }
          if (uVar5 < *(uint *)(lVar6 + 0x18)) {
            puVar4 = (undefined8 *)(lVar6 + (long)(int)uVar5 * 8 + 0x20);
            *puVar4 = uVar3;
            native_sub_4326e0(puVar4,uVar3);
            *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
            return;
          }
          uVar1 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar1,0);
        }
code_r0x00d40c5c:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TankCeshiEngineController$$OnClickButtonRTankPao @ 0x6df7a0
 * void TankCeshiEngineController__OnClickButtonRTankPao (TankCeshiEngineController_o* __this, const MethodInfo* method); */

/* TankCeshiEngineController$$OnClickButtonRTankPao
   void TankCeshiEngineController__OnClickButtonRTankPao (TankCeshiEngineController_o* __this, const
   MethodInfo* method); */

void native_TankCeshiEngineController__OnClickButtonRTankPao_6df7a0(void)

{
  return;
}



/* TankCeshiEngineController$$Update @ 0x6df7a4
 * void TankCeshiEngineController__Update (TankCeshiEngineController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TankCeshiEngineController$$Update
   void TankCeshiEngineController__Update (TankCeshiEngineController_o* __this, const MethodInfo*
   method); */

void native_TankCeshiEngineController__Update_6df7a4
               (undefined1 param_1 [16],float param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  float fVar6;
  double dVar7;
  
  if ((bRam000000000133f376 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_VariableJoystick____12e4af0);
    native_sub_43273c(&System_Math_TypeInfo_12d51c0);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&TankCeshiEngineController_TypeInfo_12d60e8);
    bRam000000000133f376 = 1;
  }
  if (*(long *)(param_3 + 0x18) == 0) goto LAB_006dfa04;
  lVar2 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                    (*(long *)(param_3 + 0x18),
                     _Method_UnityEngine_GameObject_GetComponent_VariableJoystick____12e4af0);
  if ((*(long *)(param_3 + 0x20) == 0) ||
     (lVar3 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                        (*(long *)(param_3 + 0x20),
                         _Method_UnityEngine_GameObject_GetComponent_VariableJoystick____12e4af0),
     lVar2 == 0)) goto LAB_006dfa04;
  native_Joystick__get_Direction_7f72a4(lVar2,0);
  if (-0.3 <= param_2) {
    native_Joystick__get_Direction_7f72a4(lVar2,0);
    dVar7 = (double)param_2;
    if (0.3 < dVar7) {
      if (((*(ushort *)(_PanelMainUIController_TypeInfo_12d5600 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      param_2 = SUB84(dVar7,0);
      *(undefined4 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x50) = 1;
      uVar4 = 0;
      goto LAB_006df8f4;
    }
    if (((*(ushort *)(_PanelMainUIController_TypeInfo_12d5600 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = 0;
    param_2 = 0.0;
    *(undefined4 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x50) = 0;
  }
  else {
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = 1;
    *(undefined4 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x50) = 0xffffffff;
LAB_006df8f4:
    uVar1 = native_Assets_Scripts_Tools_HjdBleTool__setIntegerSomeBit_7f7068(0,uVar4,1,0);
    native_Joystick__get_Direction_7f72a4(lVar2,0);
  }
  if (lVar3 == 0) {
LAB_006dfa04:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  fVar6 = (float)native_Joystick__get_Direction_7f72a4(lVar3,0);
  if (-0.3 <= fVar6) {
    fVar6 = (float)native_Joystick__get_Direction_7f72a4(lVar3,0);
    if (fVar6 <= 0.3) {
      if (((*(ushort *)(_PanelMainUIController_TypeInfo_12d5600 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      fVar6 = 0.0;
      *(undefined4 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x4c) = 0;
      goto LAB_006dfa28;
    }
    if (((*(ushort *)(_PanelMainUIController_TypeInfo_12d5600 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar2 = *(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8);
    uVar5 = 0xffffffff;
    uVar4 = 3;
  }
  else {
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar2 = *(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8);
    uVar5 = 1;
    uVar4 = 2;
  }
  *(undefined4 *)(lVar2 + 0x4c) = uVar5;
  uVar1 = native_Assets_Scripts_Tools_HjdBleTool__setIntegerSomeBit_7f7068(uVar1,uVar4,1,0);
  fVar6 = (float)native_Joystick__get_Direction_7f72a4(lVar3,0);
LAB_006dfa28:
  switch(uVar1 & 0xff) {
  case 1:
  case 2:
  case 3:
    if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    fVar6 = ABS(param_2);
    break;
  case 4:
  case 8:
  case 0xc:
    if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    fVar6 = ABS(fVar6);
    break;
  case 5:
  case 6:
  case 7:
  case 9:
  case 10:
  case 0xb:
  case 0xd:
  case 0xf:
    if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    fVar6 = ABS(param_2) * 0.5 + ABS(fVar6);
    break;
  default:
    fVar6 = 0.0;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar2 = _PanelMainUIController_TypeInfo_12d5600;
  *(float *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x94) = fVar6;
  *(float *)(*(long *)(lVar2 + 0xb8) + 0x98) = fVar6;
  lVar2 = native_TankCeshiEngineController__gethaomiao_6dfbb0();
  if (((*(byte *)(_TankCeshiEngineController_TypeInfo_12d60e8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_TankCeshiEngineController_TypeInfo_12d60e8 + 0xe0) == 0)) {
    native_sub_4327ec(_TankCeshiEngineController_TypeInfo_12d60e8);
  }
  if (99 < lVar2 - **(long **)(_TankCeshiEngineController_TypeInfo_12d60e8 + 0xb8)) {
    uVar4 = native_TankCeshiEngineController__gethaomiao_6dfbb0();
    if (((*(byte *)(_TankCeshiEngineController_TypeInfo_12d60e8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_TankCeshiEngineController_TypeInfo_12d60e8 + 0xe0) == 0)) {
      native_sub_4327ec(_TankCeshiEngineController_TypeInfo_12d60e8);
    }
    **(undefined8 **)(_TankCeshiEngineController_TypeInfo_12d60e8 + 0xb8) = uVar4;
  }
  return;
}



/* TankCeshiEngineController$$gethaomiao @ 0x6dfbb0
 * int64_t TankCeshiEngineController__gethaomiao (TankCeshiEngineController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TankCeshiEngineController$$gethaomiao
   int64_t TankCeshiEngineController__gethaomiao (TankCeshiEngineController_o* __this, const
   MethodInfo* method); */

long native_TankCeshiEngineController__gethaomiao_6dfbb0(void)

{
  long lVar1;
  undefined8 uStack_18;
  
  if ((bRam000000000133f377 & 1) == 0) {
    native_sub_43273c(&System_DateTime_TypeInfo_12d42f8);
    bRam000000000133f377 = 1;
  }
  uStack_18 = 0;
  if (((*(byte *)(_System_DateTime_TypeInfo_12d42f8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_System_DateTime_TypeInfo_12d42f8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uStack_18 = native_System_DateTime__get_Now_9c70d8(0);
  uStack_18 = native_System_DateTime__ToUniversalTime_9c7e74(&uStack_18,0);
  lVar1 = native_System_DateTime__get_Ticks_9c721c(&uStack_18,0);
  return (lVar1 + -0x89f7ff5f7b58000) / 10000;
}



/* TankCeshiEngineController$$doSomething @ 0x6dfc64
 * void TankCeshiEngineController__doSomething (TankCeshiEngineController_o* __this, const MethodInfo* method); */

/* TankCeshiEngineController$$doSomething
   void TankCeshiEngineController__doSomething (TankCeshiEngineController_o* __this, const
   MethodInfo* method); */

void native_TankCeshiEngineController__doSomething_6dfc64(void)

{
  return;
}



/* TankCeshiEngineController$$.ctor @ 0x6dfc68
 * void TankCeshiEngineController___ctor (TankCeshiEngineController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TankCeshiEngineController$$.ctor
   void TankCeshiEngineController___ctor (TankCeshiEngineController_o* __this, const MethodInfo*
   method); */

undefined1  [16] native_TankCeshiEngineController___ctor_6dfc68(ulong param_1)

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



/* TankCeshiEngineController$$.cctor @ 0x6dfc70
 * void TankCeshiEngineController___cctor (const MethodInfo* method); */

/* TankCeshiEngineController$$.cctor
   void TankCeshiEngineController___cctor (const MethodInfo* method); */

void native_TankCeshiEngineController___cctor_6dfc70(void)

{
  return;
}


