/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* ContainerSelectTankOperUIController$$Start @ 0xde9b48
 * void ContainerSelectTankOperUIController__Start (ContainerSelectTankOperUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerSelectTankOperUIController$$Start
   void ContainerSelectTankOperUIController__Start (ContainerSelectTankOperUIController_o* __this,
   const MethodInfo* method); */

void native_ContainerSelectTankOperUIController__Start_de9b48(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if ((bRam0000000001346ecc & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&Method_ContainerSelectTankOperUIController_OnClickButtonTankPResult___12e3148
                     );
    native_sub_43273c(&
                      Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonControl___12e3150
                     );
    native_sub_43273c(&Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonDrive___12e3158
                     );
    native_sub_43273c(&Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonHand___12e3160)
    ;
    native_sub_43273c(&
                      Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonPrograme___12e3168
                     );
    native_sub_43273c(&Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonRoute___12e3170
                     );
    native_sub_43273c(&
                      Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonScene1___12e3178
                     );
    native_sub_43273c(&
                      Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonScene2___12e3180
                     );
    native_sub_43273c(&Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonTank1___12e3188
                     );
    native_sub_43273c(&Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonTank2___12e3190
                     );
    native_sub_43273c(&Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonTank3___12e3198
                     );
    native_sub_43273c(&Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonTank4___12e31a0
                     );
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_TankP_ButtonScene2text_12f1510);
    native_sub_43273c(&StringLiteral_Programe_12f0700);
    native_sub_43273c(&StringLiteral_Drive_12ed868);
    native_sub_43273c(&StringLiteral_Hand_12ee318);
    native_sub_43273c(&StringLiteral_TankP_ButtonHandtext_12f14d0);
    native_sub_43273c(&StringLiteral_tank3_12f6588);
    native_sub_43273c(&StringLiteral_TankP_ButtonControltext_12f14b0);
    native_sub_43273c(&StringLiteral_scene1_12f5f20);
    native_sub_43273c(&StringLiteral_scene2_12f5f28);
    native_sub_43273c(&StringLiteral_Route_12f0b68);
    native_sub_43273c(&StringLiteral_tank1_12f6578);
    native_sub_43273c(&StringLiteral_TankP_ButtonDrivetext_12f14c0);
    native_sub_43273c(&StringLiteral_Control_12ed2f0);
    native_sub_43273c(&StringLiteral_Snow_12f0ef0);
    native_sub_43273c(&StringLiteral_Forest_12ee068);
    native_sub_43273c(&StringLiteral_tank2_12f6580);
    native_sub_43273c(&StringLiteral_tank4_12f6590);
    native_sub_43273c(&StringLiteral_TankP_ButtonRoutetext_12f14f0);
    native_sub_43273c(&StringLiteral_TankP_ButtonScene1text_12f1500);
    native_sub_43273c(&StringLiteral_TankP_ButtonProgrametext_12f14e0);
    bRam0000000001346ecc = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(char *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xbc) != '\0') {
    lVar4 = native_UnityEngine_GameObject__Find_8dead0
                      (_StringLiteral_TankP_ButtonControltext_12f14b0,0);
    if ((lVar4 == 0) ||
       (lVar4 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0), lVar4 == 0))
    goto LAB_00dea6ac;
    lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (lVar4,_Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0);
    if (lVar4 == 0) goto LAB_00dea6ac;
    native_UILabel__set_text_ae81a8(lVar4,_StringLiteral_Control_12ed2f0,0);
    lVar4 = native_UnityEngine_GameObject__Find_8dead0
                      (_StringLiteral_TankP_ButtonDrivetext_12f14c0,0);
    if (((lVar4 == 0) ||
        (lVar4 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0), lVar4 == 0)) ||
       (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                          (lVar4,_Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0),
       lVar4 == 0)) goto LAB_00dea6ac;
    native_UILabel__set_text_ae81a8(lVar4,_StringLiteral_Drive_12ed868,0);
    lVar4 = native_UnityEngine_GameObject__Find_8dead0
                      (_StringLiteral_TankP_ButtonHandtext_12f14d0,0);
    if (((lVar4 == 0) ||
        (lVar4 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0), lVar4 == 0)) ||
       (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                          (lVar4,_Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0),
       lVar4 == 0)) goto LAB_00dea6ac;
    native_UILabel__set_text_ae81a8(lVar4,_StringLiteral_Hand_12ee318,0);
    lVar4 = native_UnityEngine_GameObject__Find_8dead0
                      (_StringLiteral_TankP_ButtonRoutetext_12f14f0,0);
    if (((lVar4 == 0) ||
        (lVar4 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0), lVar4 == 0)) ||
       (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                          (lVar4,_Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0),
       lVar4 == 0)) goto LAB_00dea6ac;
    native_UILabel__set_text_ae81a8(lVar4,_StringLiteral_Route_12f0b68,0);
    lVar4 = native_UnityEngine_GameObject__Find_8dead0
                      (_StringLiteral_TankP_ButtonProgrametext_12f14e0,0);
    if (((lVar4 == 0) ||
        (lVar4 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0), lVar4 == 0)) ||
       (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                          (lVar4,_Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0),
       lVar4 == 0)) goto LAB_00dea6ac;
    native_UILabel__set_text_ae81a8(lVar4,_StringLiteral_Programe_12f0700,0);
    lVar4 = native_UnityEngine_GameObject__Find_8dead0
                      (_StringLiteral_TankP_ButtonScene1text_12f1500,0);
    if (((lVar4 == 0) ||
        (lVar4 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0), lVar4 == 0)) ||
       (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                          (lVar4,_Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0),
       lVar4 == 0)) goto LAB_00dea6ac;
    native_UILabel__set_text_ae81a8(lVar4,_StringLiteral_Forest_12ee068,0);
    lVar4 = native_UnityEngine_GameObject__Find_8dead0
                      (_StringLiteral_TankP_ButtonScene2text_12f1510,0);
    if (((lVar4 == 0) ||
        (lVar4 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0), lVar4 == 0)) ||
       (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                          (lVar4,_Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0),
       lVar4 == 0)) goto LAB_00dea6ac;
    native_UILabel__set_text_ae81a8(lVar4,_StringLiteral_Snow_12f0ef0,0);
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (*(long *)(param_1 + 0x98),
                       _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
    if (lVar4 != 0) {
      lVar4 = *(long *)(lVar4 + 0xc0);
      uVar5 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
      native_EventDelegate_Callback___ctor_54bd18
                (uVar5,param_1,
                 _Method_ContainerSelectTankOperUIController_OnClickButtonTankPResult___12e3148,0);
      uVar6 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
      native_System_Object___ctor_ad2798(uVar6,0);
      native_EventDelegate__Set_dedf08(uVar6,uVar5);
      if (lVar4 != 0) {
        native_System_Collections_Generic_List_int_____Add_d40c00
                  (lVar4,uVar6,_Method_System_Collections_Generic_List_EventDelegate__Add___12dc740)
        ;
        if ((*(long *)(param_1 + 0x60) != 0) &&
           (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                              (*(long *)(param_1 + 0x60),
                               _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88),
           lVar4 != 0)) {
          lVar4 = *(long *)(lVar4 + 0xc0);
          uVar5 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
          native_EventDelegate_Callback___ctor_54bd18
                    (uVar5,param_1,
                     _Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonTank1___12e3188,
                     0);
          uVar6 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
          native_System_Object___ctor_ad2798(uVar6,0);
          native_EventDelegate__Set_dedf08(uVar6,uVar5);
          if (lVar4 != 0) {
            native_System_Collections_Generic_List_int_____Add_d40c00
                      (lVar4,uVar6,
                       _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
            if ((*(long *)(param_1 + 0x68) != 0) &&
               (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                  (*(long *)(param_1 + 0x68),
                                   _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88),
               lVar4 != 0)) {
              lVar4 = *(long *)(lVar4 + 0xc0);
              uVar5 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
              native_EventDelegate_Callback___ctor_54bd18
                        (uVar5,param_1,
                         _Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonTank2___12e3190
                         ,0);
              uVar6 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
              native_System_Object___ctor_ad2798(uVar6,0);
              native_EventDelegate__Set_dedf08(uVar6,uVar5);
              if (lVar4 != 0) {
                native_System_Collections_Generic_List_int_____Add_d40c00
                          (lVar4,uVar6,
                           _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
                if ((*(long *)(param_1 + 0x70) != 0) &&
                   (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                      (*(long *)(param_1 + 0x70),
                                       _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88
                                      ), lVar4 != 0)) {
                  lVar4 = *(long *)(lVar4 + 0xc0);
                  uVar5 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
                  native_EventDelegate_Callback___ctor_54bd18
                            (uVar5,param_1,
                             _Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonTank3___12e3198
                             ,0);
                  uVar6 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
                  native_System_Object___ctor_ad2798(uVar6,0);
                  native_EventDelegate__Set_dedf08(uVar6,uVar5);
                  if (lVar4 != 0) {
                    native_System_Collections_Generic_List_int_____Add_d40c00
                              (lVar4,uVar6,
                               _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740)
                    ;
                    if ((*(long *)(param_1 + 0x78) != 0) &&
                       (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                          (*(long *)(param_1 + 0x78),
                                           _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88
                                          ), lVar4 != 0)) {
                      lVar4 = *(long *)(lVar4 + 0xc0);
                      uVar5 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
                      native_EventDelegate_Callback___ctor_54bd18
                                (uVar5,param_1,
                                 _Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonTank4___12e31a0
                                 ,0);
                      uVar6 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
                      native_System_Object___ctor_ad2798(uVar6,0);
                      native_EventDelegate__Set_dedf08(uVar6,uVar5);
                      if (lVar4 != 0) {
                        native_System_Collections_Generic_List_int_____Add_d40c00
                                  (lVar4,uVar6,
                                   _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740
                                  );
                        if ((*(long *)(param_1 + 0x28) != 0) &&
                           (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                              (*(long *)(param_1 + 0x28),
                                               _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88
                                              ), lVar4 != 0)) {
                          lVar4 = *(long *)(lVar4 + 0xc0);
                          uVar5 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
                          native_EventDelegate_Callback___ctor_54bd18
                                    (uVar5,param_1,
                                     _Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonControl___12e3150
                                     ,0);
                          uVar6 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
                          native_System_Object___ctor_ad2798(uVar6,0);
                          native_EventDelegate__Set_dedf08(uVar6,uVar5);
                          if (lVar4 != 0) {
                            native_System_Collections_Generic_List_int_____Add_d40c00
                                      (lVar4,uVar6,
                                       _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740
                                      );
                            if ((*(long *)(param_1 + 0x30) != 0) &&
                               (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                                  (*(long *)(param_1 + 0x30),
                                                                                                      
                                                  _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88
                                                  ), lVar4 != 0)) {
                              lVar4 = *(long *)(lVar4 + 0xc0);
                              uVar5 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
                              native_EventDelegate_Callback___ctor_54bd18
                                        (uVar5,param_1,
                                         _Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonDrive___12e3158
                                         ,0);
                              uVar6 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
                              native_System_Object___ctor_ad2798(uVar6,0);
                              native_EventDelegate__Set_dedf08(uVar6,uVar5);
                              if (lVar4 != 0) {
                                native_System_Collections_Generic_List_int_____Add_d40c00
                                          (lVar4,uVar6,
                                           _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740
                                          );
                                if ((*(long *)(param_1 + 0x38) != 0) &&
                                   (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                                      (*(long *)(param_1 + 0x38),
                                                                                                              
                                                  _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88
                                                  ), lVar4 != 0)) {
                                  lVar4 = *(long *)(lVar4 + 0xc0);
                                  uVar5 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8
                                                           );
                                  native_EventDelegate_Callback___ctor_54bd18
                                            (uVar5,param_1,
                                             _Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonHand___12e3160
                                             ,0);
                                  uVar6 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
                                  native_System_Object___ctor_ad2798(uVar6,0);
                                  native_EventDelegate__Set_dedf08(uVar6,uVar5);
                                  if (lVar4 != 0) {
                                    native_System_Collections_Generic_List_int_____Add_d40c00
                                              (lVar4,uVar6,
                                               _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740
                                              );
                                    if ((*(long *)(param_1 + 0x40) != 0) &&
                                       (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                                          (*(long *)(param_1 + 0x40),
                                                                                                                      
                                                  _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88
                                                  ), lVar4 != 0)) {
                                      lVar4 = *(long *)(lVar4 + 0xc0);
                                      uVar5 = native_sub_432808(
                                                  _EventDelegate_Callback_TypeInfo_12d72e8);
                                      native_EventDelegate_Callback___ctor_54bd18
                                                (uVar5,param_1,
                                                 _Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonRoute___12e3170
                                                 ,0);
                                      uVar6 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
                                      native_System_Object___ctor_ad2798(uVar6,0);
                                      native_EventDelegate__Set_dedf08(uVar6,uVar5);
                                      if (lVar4 != 0) {
                                        native_System_Collections_Generic_List_int_____Add_d40c00
                                                  (lVar4,uVar6,
                                                                                                      
                                                  _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740
                                                  );
                                        if ((*(long *)(param_1 + 0x48) != 0) &&
                                           (lVar4 = 
                                                  native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                                            (*(long *)(param_1 + 0x48),
                                                                                                                          
                                                  _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88
                                                  ), lVar4 != 0)) {
                                          lVar4 = *(long *)(lVar4 + 0xc0);
                                          uVar5 = native_sub_432808(
                                                  _EventDelegate_Callback_TypeInfo_12d72e8);
                                          native_EventDelegate_Callback___ctor_54bd18
                                                    (uVar5,param_1,
                                                                                                          
                                                  _Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonPrograme___12e3168
                                                  ,0);
                                          uVar6 = native_sub_432808(_EventDelegate_TypeInfo_12d4590)
                                          ;
                                          native_System_Object___ctor_ad2798(uVar6,0);
                                          native_EventDelegate__Set_dedf08(uVar6,uVar5);
                                          if (lVar4 != 0) {
                                            native_System_Collections_Generic_List_int_____Add_d40c00
                                                      (lVar4,uVar6,
                                                                                                              
                                                  _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740
                                                  );
                                            if ((*(long *)(param_1 + 0x50) != 0) &&
                                               (lVar4 = 
                                                  native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                                            (*(long *)(param_1 + 0x50),
                                                                                                                          
                                                  _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88
                                                  ), lVar4 != 0)) {
                                              lVar4 = *(long *)(lVar4 + 0xc0);
                                              uVar5 = native_sub_432808(
                                                  _EventDelegate_Callback_TypeInfo_12d72e8);
                                              native_EventDelegate_Callback___ctor_54bd18
                                                        (uVar5,param_1,
                                                                                                                  
                                                  _Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonScene1___12e3178
                                                  ,0);
                                              uVar6 = native_sub_432808(
                                                  _EventDelegate_TypeInfo_12d4590);
                                              native_System_Object___ctor_ad2798(uVar6,0);
                                              native_EventDelegate__Set_dedf08(uVar6,uVar5);
                                              if (lVar4 != 0) {
                                                native_System_Collections_Generic_List_int_____Add_d40c00
                                                          (lVar4,uVar6,
                                                                                                                      
                                                  _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740
                                                  );
                                                if ((*(long *)(param_1 + 0x58) != 0) &&
                                                   (lVar4 = 
                                                  native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                                            (*(long *)(param_1 + 0x58),
                                                                                                                          
                                                  _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88
                                                  ), lVar4 != 0)) {
                                                  lVar4 = *(long *)(lVar4 + 0xc0);
                                                  uVar5 = native_sub_432808(
                                                  _EventDelegate_Callback_TypeInfo_12d72e8);
                                                  native_EventDelegate_Callback___ctor_54bd18
                                                            (uVar5,param_1,
                                                                                                                          
                                                  _Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonScene2___12e3180
                                                  ,0);
                                                  uVar6 = native_sub_432808(
                                                  _EventDelegate_TypeInfo_12d4590);
                                                  native_System_Object___ctor_ad2798(uVar6,0);
                                                  native_EventDelegate__Set_dedf08(uVar6,uVar5);
                                                  if (lVar4 != 0) {
                                                                                                        
                                                  native_System_Collections_Generic_List_int_____Add_d40c00
                                                            (lVar4,uVar6,
                                                                                                                          
                                                  _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740
                                                  );
                                                  if (((*(byte *)(
                                                  _PanelMainUIController_TypeInfo_12d5600 + 0x133)
                                                  >> 2 & 1) != 0) &&
                                                  (*(int *)(_PanelMainUIController_TypeInfo_12d5600
                                                           + 0xe0) == 0)) {
                                                    native_sub_4327ec();
                                                  }
                                                  uVar7 = native_System_String__op_Equality_afc18c
                                                                    (*(undefined8 *)
                                                                      (*(long *)(
                                                  _PanelMainUIController_TypeInfo_12d5600 + 0xb8) +
                                                  0x68),_StringLiteral_tank1_12f6578,0);
                                                  if ((uVar7 & 1) == 0) {
                                                    if (((*(byte *)(
                                                  _PanelMainUIController_TypeInfo_12d5600 + 0x133)
                                                  >> 2 & 1) != 0) &&
                                                  (*(int *)(_PanelMainUIController_TypeInfo_12d5600
                                                           + 0xe0) == 0)) {
                                                    native_sub_4327ec();
                                                  }
                                                  uVar7 = native_System_String__op_Equality_afc18c
                                                                    (*(undefined8 *)
                                                                      (*(long *)(
                                                  _PanelMainUIController_TypeInfo_12d5600 + 0xb8) +
                                                  0x68),_StringLiteral_tank2_12f6580,0);
                                                  if ((uVar7 & 1) == 0) {
                                                    if (((*(byte *)(
                                                  _PanelMainUIController_TypeInfo_12d5600 + 0x133)
                                                  >> 2 & 1) != 0) &&
                                                  (*(int *)(_PanelMainUIController_TypeInfo_12d5600
                                                           + 0xe0) == 0)) {
                                                    native_sub_4327ec();
                                                  }
                                                  uVar7 = native_System_String__op_Equality_afc18c
                                                                    (*(undefined8 *)
                                                                      (*(long *)(
                                                  _PanelMainUIController_TypeInfo_12d5600 + 0xb8) +
                                                  0x68),_StringLiteral_tank3_12f6588,0);
                                                  if ((uVar7 & 1) == 0) {
                                                    if (((*(byte *)(
                                                  _PanelMainUIController_TypeInfo_12d5600 + 0x133)
                                                  >> 2 & 1) != 0) &&
                                                  (*(int *)(_PanelMainUIController_TypeInfo_12d5600
                                                           + 0xe0) == 0)) {
                                                    native_sub_4327ec();
                                                  }
                                                  uVar7 = native_System_String__op_Equality_afc18c
                                                                    (*(undefined8 *)
                                                                      (*(long *)(
                                                  _PanelMainUIController_TypeInfo_12d5600 + 0xb8) +
                                                  0x68),_StringLiteral_tank4_12f6590,0);
                                                  if ((uVar7 & 1) != 0) {
                                                                                                        
                                                  native_ContainerSelectTankOperUIController__OnClickTankP_ButtonTank4_dea8b4
                                                            (param_1);
                                                  }
                                                  }
                                                  else {
                                                                                                        
                                                  native_ContainerSelectTankOperUIController__OnClickTankP_ButtonTank3_dea808
                                                            (param_1);
                                                  }
                                                  }
                                                  else {
                                                                                                        
                                                  native_ContainerSelectTankOperUIController__OnClickTankP_ButtonTank2_dea75c
                                                            (param_1);
                                                  }
                                                  }
                                                  else {
                                                                                                        
                                                  native_ContainerSelectTankOperUIController__OnClickTankP_ButtonTank1_dea6b0
                                                            (param_1);
                                                  }
                                                  if (((*(byte *)(
                                                  _PanelMainUIController_TypeInfo_12d5600 + 0x133)
                                                  >> 2 & 1) != 0) &&
                                                  (*(int *)(_PanelMainUIController_TypeInfo_12d5600
                                                           + 0xe0) == 0)) {
                                                    native_sub_4327ec();
                                                  }
                                                  uVar7 = native_System_String__op_Equality_afc18c
                                                                    (*(undefined8 *)
                                                                      (*(long *)(
                                                  _PanelMainUIController_TypeInfo_12d5600 + 0xb8) +
                                                  0x78),_StringLiteral_scene1_12f5f20,0);
                                                  if ((uVar7 & 1) != 0) {
                                                    if ((bRam0000000001346ed2 & 1) == 0) {
                                                      native_sub_43273c(&
                                                  PanelMainUIController_TypeInfo_12d5600);
                                                  native_sub_43273c(&StringLiteral_scene1_12f5f20);
                                                  native_sub_43273c(&
                                                  StringLiteral_tank_button_scene_active_12f65a0);
                                                  native_sub_43273c(&
                                                  StringLiteral_tank_button_scene_12f6598);
                                                  bRam0000000001346ed2 = 1;
                                                  }
                                                  if (*(long *)(param_1 + 0x88) != 0) {
                                                    native_UISprite__set_spriteName_c35c6c
                                                              (*(long *)(param_1 + 0x88),
                                                                                                                              
                                                  _StringLiteral_tank_button_scene_active_12f65a0,0)
                                                  ;
                                                  if (*(long *)(param_1 + 0x90) != 0) {
                                                    native_UISprite__set_spriteName_c35c6c
                                                              (*(long *)(param_1 + 0x90),
                                                                                                                              
                                                  _StringLiteral_tank_button_scene_12f6598,0);
                                                  if (((*(byte *)(
                                                  _PanelMainUIController_TypeInfo_12d5600 + 0x133)
                                                  >> 2 & 1) != 0) &&
                                                  (*(int *)(_PanelMainUIController_TypeInfo_12d5600
                                                           + 0xe0) == 0)) {
                                                    native_sub_4327ec();
                                                  }
                                                  puVar8 = (undefined8 *)
                                                           (*(long *)(
                                                  _PanelMainUIController_TypeInfo_12d5600 + 0xb8) +
                                                  0x78);
                                                  *puVar8 = _StringLiteral_scene1_12f5f20;
native_sub_41086c:
                                                  if (iRam0000000001345318 != 0) {
                                                    puVar1 = (ulong *)(((ulong)puVar8 >> 0x12 &
                                                                       0x7fff) * 8 + 0x138ecd8);
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >>
                                                                                   0xc & 0x3f);
                                                        cVar2 = ExclusiveMonitorsStatus();
                                                      }
                                                    } while (cVar2 != '\0');
                                                  }
                                                  return;
                                                  }
                                                  }
                    /* WARNING: Subroutine does not return */
                                                  native_sub_432810();
                                                  }
                                                  if (((*(byte *)(
                                                  _PanelMainUIController_TypeInfo_12d5600 + 0x133)
                                                  >> 2 & 1) != 0) &&
                                                  (*(int *)(_PanelMainUIController_TypeInfo_12d5600
                                                           + 0xe0) == 0)) {
                                                    native_sub_4327ec();
                                                  }
                                                  uVar7 = native_System_String__op_Equality_afc18c
                                                                    (*(undefined8 *)
                                                                      (*(long *)(
                                                  _PanelMainUIController_TypeInfo_12d5600 + 0xb8) +
                                                  0x78),_StringLiteral_scene2_12f5f28,0);
                                                  if ((uVar7 & 1) == 0) {
                                                    return;
                                                  }
                                                  if ((bRam0000000001346ed3 & 1) == 0) {
                                                    native_sub_43273c(&
                                                  PanelMainUIController_TypeInfo_12d5600);
                                                  native_sub_43273c(&StringLiteral_scene2_12f5f28);
                                                  native_sub_43273c(&
                                                  StringLiteral_tank_button_scene_active_12f65a0);
                                                  native_sub_43273c(&
                                                  StringLiteral_tank_button_scene_12f6598);
                                                  bRam0000000001346ed3 = 1;
                                                  }
                                                  if (*(long *)(param_1 + 0x88) != 0) {
                                                    native_UISprite__set_spriteName_c35c6c
                                                              (*(long *)(param_1 + 0x88),
                                                                                                                              
                                                  _StringLiteral_tank_button_scene_12f6598,0);
                                                  if (*(long *)(param_1 + 0x90) != 0) {
                                                    native_UISprite__set_spriteName_c35c6c
                                                              (*(long *)(param_1 + 0x90),
                                                                                                                              
                                                  _StringLiteral_tank_button_scene_active_12f65a0,0)
                                                  ;
                                                  if (((*(byte *)(
                                                  _PanelMainUIController_TypeInfo_12d5600 + 0x133)
                                                  >> 2 & 1) != 0) &&
                                                  (*(int *)(_PanelMainUIController_TypeInfo_12d5600
                                                           + 0xe0) == 0)) {
                                                    native_sub_4327ec();
                                                  }
                                                  puVar8 = (undefined8 *)
                                                           (*(long *)(
                                                  _PanelMainUIController_TypeInfo_12d5600 + 0xb8) +
                                                  0x78);
                                                  *puVar8 = _StringLiteral_scene2_12f5f28;
                                                  goto native_sub_41086c;
                                                  }
                                                  }
                    /* WARNING: Subroutine does not return */
                                                  native_sub_432810();
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00dea6ac:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerSelectTankOperUIController$$InitButtonEvent @ 0xde9b4c
 * void ContainerSelectTankOperUIController__InitButtonEvent (ContainerSelectTankOperUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerSelectTankOperUIController$$InitButtonEvent
   void ContainerSelectTankOperUIController__InitButtonEvent (ContainerSelectTankOperUIController_o*
   __this, const MethodInfo* method); */

void native_ContainerSelectTankOperUIController__InitButtonEvent_de9b4c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if ((bRam0000000001346ecc & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&Method_ContainerSelectTankOperUIController_OnClickButtonTankPResult___12e3148
                     );
    native_sub_43273c(&
                      Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonControl___12e3150
                     );
    native_sub_43273c(&Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonDrive___12e3158
                     );
    native_sub_43273c(&Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonHand___12e3160)
    ;
    native_sub_43273c(&
                      Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonPrograme___12e3168
                     );
    native_sub_43273c(&Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonRoute___12e3170
                     );
    native_sub_43273c(&
                      Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonScene1___12e3178
                     );
    native_sub_43273c(&
                      Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonScene2___12e3180
                     );
    native_sub_43273c(&Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonTank1___12e3188
                     );
    native_sub_43273c(&Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonTank2___12e3190
                     );
    native_sub_43273c(&Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonTank3___12e3198
                     );
    native_sub_43273c(&Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonTank4___12e31a0
                     );
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_TankP_ButtonScene2text_12f1510);
    native_sub_43273c(&StringLiteral_Programe_12f0700);
    native_sub_43273c(&StringLiteral_Drive_12ed868);
    native_sub_43273c(&StringLiteral_Hand_12ee318);
    native_sub_43273c(&StringLiteral_TankP_ButtonHandtext_12f14d0);
    native_sub_43273c(&StringLiteral_tank3_12f6588);
    native_sub_43273c(&StringLiteral_TankP_ButtonControltext_12f14b0);
    native_sub_43273c(&StringLiteral_scene1_12f5f20);
    native_sub_43273c(&StringLiteral_scene2_12f5f28);
    native_sub_43273c(&StringLiteral_Route_12f0b68);
    native_sub_43273c(&StringLiteral_tank1_12f6578);
    native_sub_43273c(&StringLiteral_TankP_ButtonDrivetext_12f14c0);
    native_sub_43273c(&StringLiteral_Control_12ed2f0);
    native_sub_43273c(&StringLiteral_Snow_12f0ef0);
    native_sub_43273c(&StringLiteral_Forest_12ee068);
    native_sub_43273c(&StringLiteral_tank2_12f6580);
    native_sub_43273c(&StringLiteral_tank4_12f6590);
    native_sub_43273c(&StringLiteral_TankP_ButtonRoutetext_12f14f0);
    native_sub_43273c(&StringLiteral_TankP_ButtonScene1text_12f1500);
    native_sub_43273c(&StringLiteral_TankP_ButtonProgrametext_12f14e0);
    bRam0000000001346ecc = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(char *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xbc) != '\0') {
    lVar4 = native_UnityEngine_GameObject__Find_8dead0
                      (_StringLiteral_TankP_ButtonControltext_12f14b0,0);
    if ((lVar4 == 0) ||
       (lVar4 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0), lVar4 == 0))
    goto LAB_00dea6ac;
    lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (lVar4,_Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0);
    if (lVar4 == 0) goto LAB_00dea6ac;
    native_UILabel__set_text_ae81a8(lVar4,_StringLiteral_Control_12ed2f0,0);
    lVar4 = native_UnityEngine_GameObject__Find_8dead0
                      (_StringLiteral_TankP_ButtonDrivetext_12f14c0,0);
    if (((lVar4 == 0) ||
        (lVar4 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0), lVar4 == 0)) ||
       (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                          (lVar4,_Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0),
       lVar4 == 0)) goto LAB_00dea6ac;
    native_UILabel__set_text_ae81a8(lVar4,_StringLiteral_Drive_12ed868,0);
    lVar4 = native_UnityEngine_GameObject__Find_8dead0
                      (_StringLiteral_TankP_ButtonHandtext_12f14d0,0);
    if (((lVar4 == 0) ||
        (lVar4 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0), lVar4 == 0)) ||
       (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                          (lVar4,_Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0),
       lVar4 == 0)) goto LAB_00dea6ac;
    native_UILabel__set_text_ae81a8(lVar4,_StringLiteral_Hand_12ee318,0);
    lVar4 = native_UnityEngine_GameObject__Find_8dead0
                      (_StringLiteral_TankP_ButtonRoutetext_12f14f0,0);
    if (((lVar4 == 0) ||
        (lVar4 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0), lVar4 == 0)) ||
       (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                          (lVar4,_Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0),
       lVar4 == 0)) goto LAB_00dea6ac;
    native_UILabel__set_text_ae81a8(lVar4,_StringLiteral_Route_12f0b68,0);
    lVar4 = native_UnityEngine_GameObject__Find_8dead0
                      (_StringLiteral_TankP_ButtonProgrametext_12f14e0,0);
    if (((lVar4 == 0) ||
        (lVar4 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0), lVar4 == 0)) ||
       (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                          (lVar4,_Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0),
       lVar4 == 0)) goto LAB_00dea6ac;
    native_UILabel__set_text_ae81a8(lVar4,_StringLiteral_Programe_12f0700,0);
    lVar4 = native_UnityEngine_GameObject__Find_8dead0
                      (_StringLiteral_TankP_ButtonScene1text_12f1500,0);
    if (((lVar4 == 0) ||
        (lVar4 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0), lVar4 == 0)) ||
       (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                          (lVar4,_Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0),
       lVar4 == 0)) goto LAB_00dea6ac;
    native_UILabel__set_text_ae81a8(lVar4,_StringLiteral_Forest_12ee068,0);
    lVar4 = native_UnityEngine_GameObject__Find_8dead0
                      (_StringLiteral_TankP_ButtonScene2text_12f1510,0);
    if (((lVar4 == 0) ||
        (lVar4 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0), lVar4 == 0)) ||
       (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                          (lVar4,_Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0),
       lVar4 == 0)) goto LAB_00dea6ac;
    native_UILabel__set_text_ae81a8(lVar4,_StringLiteral_Snow_12f0ef0,0);
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (*(long *)(param_1 + 0x98),
                       _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
    if (lVar4 != 0) {
      lVar4 = *(long *)(lVar4 + 0xc0);
      uVar5 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
      native_EventDelegate_Callback___ctor_54bd18
                (uVar5,param_1,
                 _Method_ContainerSelectTankOperUIController_OnClickButtonTankPResult___12e3148,0);
      uVar6 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
      native_System_Object___ctor_ad2798(uVar6,0);
      native_EventDelegate__Set_dedf08(uVar6,uVar5);
      if (lVar4 != 0) {
        native_System_Collections_Generic_List_int_____Add_d40c00
                  (lVar4,uVar6,_Method_System_Collections_Generic_List_EventDelegate__Add___12dc740)
        ;
        if ((*(long *)(param_1 + 0x60) != 0) &&
           (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                              (*(long *)(param_1 + 0x60),
                               _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88),
           lVar4 != 0)) {
          lVar4 = *(long *)(lVar4 + 0xc0);
          uVar5 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
          native_EventDelegate_Callback___ctor_54bd18
                    (uVar5,param_1,
                     _Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonTank1___12e3188,
                     0);
          uVar6 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
          native_System_Object___ctor_ad2798(uVar6,0);
          native_EventDelegate__Set_dedf08(uVar6,uVar5);
          if (lVar4 != 0) {
            native_System_Collections_Generic_List_int_____Add_d40c00
                      (lVar4,uVar6,
                       _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
            if ((*(long *)(param_1 + 0x68) != 0) &&
               (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                  (*(long *)(param_1 + 0x68),
                                   _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88),
               lVar4 != 0)) {
              lVar4 = *(long *)(lVar4 + 0xc0);
              uVar5 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
              native_EventDelegate_Callback___ctor_54bd18
                        (uVar5,param_1,
                         _Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonTank2___12e3190
                         ,0);
              uVar6 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
              native_System_Object___ctor_ad2798(uVar6,0);
              native_EventDelegate__Set_dedf08(uVar6,uVar5);
              if (lVar4 != 0) {
                native_System_Collections_Generic_List_int_____Add_d40c00
                          (lVar4,uVar6,
                           _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
                if ((*(long *)(param_1 + 0x70) != 0) &&
                   (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                      (*(long *)(param_1 + 0x70),
                                       _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88
                                      ), lVar4 != 0)) {
                  lVar4 = *(long *)(lVar4 + 0xc0);
                  uVar5 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
                  native_EventDelegate_Callback___ctor_54bd18
                            (uVar5,param_1,
                             _Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonTank3___12e3198
                             ,0);
                  uVar6 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
                  native_System_Object___ctor_ad2798(uVar6,0);
                  native_EventDelegate__Set_dedf08(uVar6,uVar5);
                  if (lVar4 != 0) {
                    native_System_Collections_Generic_List_int_____Add_d40c00
                              (lVar4,uVar6,
                               _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740)
                    ;
                    if ((*(long *)(param_1 + 0x78) != 0) &&
                       (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                          (*(long *)(param_1 + 0x78),
                                           _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88
                                          ), lVar4 != 0)) {
                      lVar4 = *(long *)(lVar4 + 0xc0);
                      uVar5 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
                      native_EventDelegate_Callback___ctor_54bd18
                                (uVar5,param_1,
                                 _Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonTank4___12e31a0
                                 ,0);
                      uVar6 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
                      native_System_Object___ctor_ad2798(uVar6,0);
                      native_EventDelegate__Set_dedf08(uVar6,uVar5);
                      if (lVar4 != 0) {
                        native_System_Collections_Generic_List_int_____Add_d40c00
                                  (lVar4,uVar6,
                                   _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740
                                  );
                        if ((*(long *)(param_1 + 0x28) != 0) &&
                           (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                              (*(long *)(param_1 + 0x28),
                                               _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88
                                              ), lVar4 != 0)) {
                          lVar4 = *(long *)(lVar4 + 0xc0);
                          uVar5 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
                          native_EventDelegate_Callback___ctor_54bd18
                                    (uVar5,param_1,
                                     _Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonControl___12e3150
                                     ,0);
                          uVar6 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
                          native_System_Object___ctor_ad2798(uVar6,0);
                          native_EventDelegate__Set_dedf08(uVar6,uVar5);
                          if (lVar4 != 0) {
                            native_System_Collections_Generic_List_int_____Add_d40c00
                                      (lVar4,uVar6,
                                       _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740
                                      );
                            if ((*(long *)(param_1 + 0x30) != 0) &&
                               (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                                  (*(long *)(param_1 + 0x30),
                                                                                                      
                                                  _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88
                                                  ), lVar4 != 0)) {
                              lVar4 = *(long *)(lVar4 + 0xc0);
                              uVar5 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
                              native_EventDelegate_Callback___ctor_54bd18
                                        (uVar5,param_1,
                                         _Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonDrive___12e3158
                                         ,0);
                              uVar6 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
                              native_System_Object___ctor_ad2798(uVar6,0);
                              native_EventDelegate__Set_dedf08(uVar6,uVar5);
                              if (lVar4 != 0) {
                                native_System_Collections_Generic_List_int_____Add_d40c00
                                          (lVar4,uVar6,
                                           _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740
                                          );
                                if ((*(long *)(param_1 + 0x38) != 0) &&
                                   (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                                      (*(long *)(param_1 + 0x38),
                                                                                                              
                                                  _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88
                                                  ), lVar4 != 0)) {
                                  lVar4 = *(long *)(lVar4 + 0xc0);
                                  uVar5 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8
                                                           );
                                  native_EventDelegate_Callback___ctor_54bd18
                                            (uVar5,param_1,
                                             _Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonHand___12e3160
                                             ,0);
                                  uVar6 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
                                  native_System_Object___ctor_ad2798(uVar6,0);
                                  native_EventDelegate__Set_dedf08(uVar6,uVar5);
                                  if (lVar4 != 0) {
                                    native_System_Collections_Generic_List_int_____Add_d40c00
                                              (lVar4,uVar6,
                                               _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740
                                              );
                                    if ((*(long *)(param_1 + 0x40) != 0) &&
                                       (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                                          (*(long *)(param_1 + 0x40),
                                                                                                                      
                                                  _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88
                                                  ), lVar4 != 0)) {
                                      lVar4 = *(long *)(lVar4 + 0xc0);
                                      uVar5 = native_sub_432808(
                                                  _EventDelegate_Callback_TypeInfo_12d72e8);
                                      native_EventDelegate_Callback___ctor_54bd18
                                                (uVar5,param_1,
                                                 _Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonRoute___12e3170
                                                 ,0);
                                      uVar6 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
                                      native_System_Object___ctor_ad2798(uVar6,0);
                                      native_EventDelegate__Set_dedf08(uVar6,uVar5);
                                      if (lVar4 != 0) {
                                        native_System_Collections_Generic_List_int_____Add_d40c00
                                                  (lVar4,uVar6,
                                                                                                      
                                                  _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740
                                                  );
                                        if ((*(long *)(param_1 + 0x48) != 0) &&
                                           (lVar4 = 
                                                  native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                                            (*(long *)(param_1 + 0x48),
                                                                                                                          
                                                  _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88
                                                  ), lVar4 != 0)) {
                                          lVar4 = *(long *)(lVar4 + 0xc0);
                                          uVar5 = native_sub_432808(
                                                  _EventDelegate_Callback_TypeInfo_12d72e8);
                                          native_EventDelegate_Callback___ctor_54bd18
                                                    (uVar5,param_1,
                                                                                                          
                                                  _Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonPrograme___12e3168
                                                  ,0);
                                          uVar6 = native_sub_432808(_EventDelegate_TypeInfo_12d4590)
                                          ;
                                          native_System_Object___ctor_ad2798(uVar6,0);
                                          native_EventDelegate__Set_dedf08(uVar6,uVar5);
                                          if (lVar4 != 0) {
                                            native_System_Collections_Generic_List_int_____Add_d40c00
                                                      (lVar4,uVar6,
                                                                                                              
                                                  _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740
                                                  );
                                            if ((*(long *)(param_1 + 0x50) != 0) &&
                                               (lVar4 = 
                                                  native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                                            (*(long *)(param_1 + 0x50),
                                                                                                                          
                                                  _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88
                                                  ), lVar4 != 0)) {
                                              lVar4 = *(long *)(lVar4 + 0xc0);
                                              uVar5 = native_sub_432808(
                                                  _EventDelegate_Callback_TypeInfo_12d72e8);
                                              native_EventDelegate_Callback___ctor_54bd18
                                                        (uVar5,param_1,
                                                                                                                  
                                                  _Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonScene1___12e3178
                                                  ,0);
                                              uVar6 = native_sub_432808(
                                                  _EventDelegate_TypeInfo_12d4590);
                                              native_System_Object___ctor_ad2798(uVar6,0);
                                              native_EventDelegate__Set_dedf08(uVar6,uVar5);
                                              if (lVar4 != 0) {
                                                native_System_Collections_Generic_List_int_____Add_d40c00
                                                          (lVar4,uVar6,
                                                                                                                      
                                                  _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740
                                                  );
                                                if ((*(long *)(param_1 + 0x58) != 0) &&
                                                   (lVar4 = 
                                                  native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                                            (*(long *)(param_1 + 0x58),
                                                                                                                          
                                                  _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88
                                                  ), lVar4 != 0)) {
                                                  lVar4 = *(long *)(lVar4 + 0xc0);
                                                  uVar5 = native_sub_432808(
                                                  _EventDelegate_Callback_TypeInfo_12d72e8);
                                                  native_EventDelegate_Callback___ctor_54bd18
                                                            (uVar5,param_1,
                                                                                                                          
                                                  _Method_ContainerSelectTankOperUIController_OnClickTankP_ButtonScene2___12e3180
                                                  ,0);
                                                  uVar6 = native_sub_432808(
                                                  _EventDelegate_TypeInfo_12d4590);
                                                  native_System_Object___ctor_ad2798(uVar6,0);
                                                  native_EventDelegate__Set_dedf08(uVar6,uVar5);
                                                  if (lVar4 != 0) {
                                                                                                        
                                                  native_System_Collections_Generic_List_int_____Add_d40c00
                                                            (lVar4,uVar6,
                                                                                                                          
                                                  _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740
                                                  );
                                                  if (((*(byte *)(
                                                  _PanelMainUIController_TypeInfo_12d5600 + 0x133)
                                                  >> 2 & 1) != 0) &&
                                                  (*(int *)(_PanelMainUIController_TypeInfo_12d5600
                                                           + 0xe0) == 0)) {
                                                    native_sub_4327ec();
                                                  }
                                                  uVar7 = native_System_String__op_Equality_afc18c
                                                                    (*(undefined8 *)
                                                                      (*(long *)(
                                                  _PanelMainUIController_TypeInfo_12d5600 + 0xb8) +
                                                  0x68),_StringLiteral_tank1_12f6578,0);
                                                  if ((uVar7 & 1) == 0) {
                                                    if (((*(byte *)(
                                                  _PanelMainUIController_TypeInfo_12d5600 + 0x133)
                                                  >> 2 & 1) != 0) &&
                                                  (*(int *)(_PanelMainUIController_TypeInfo_12d5600
                                                           + 0xe0) == 0)) {
                                                    native_sub_4327ec();
                                                  }
                                                  uVar7 = native_System_String__op_Equality_afc18c
                                                                    (*(undefined8 *)
                                                                      (*(long *)(
                                                  _PanelMainUIController_TypeInfo_12d5600 + 0xb8) +
                                                  0x68),_StringLiteral_tank2_12f6580,0);
                                                  if ((uVar7 & 1) == 0) {
                                                    if (((*(byte *)(
                                                  _PanelMainUIController_TypeInfo_12d5600 + 0x133)
                                                  >> 2 & 1) != 0) &&
                                                  (*(int *)(_PanelMainUIController_TypeInfo_12d5600
                                                           + 0xe0) == 0)) {
                                                    native_sub_4327ec();
                                                  }
                                                  uVar7 = native_System_String__op_Equality_afc18c
                                                                    (*(undefined8 *)
                                                                      (*(long *)(
                                                  _PanelMainUIController_TypeInfo_12d5600 + 0xb8) +
                                                  0x68),_StringLiteral_tank3_12f6588,0);
                                                  if ((uVar7 & 1) == 0) {
                                                    if (((*(byte *)(
                                                  _PanelMainUIController_TypeInfo_12d5600 + 0x133)
                                                  >> 2 & 1) != 0) &&
                                                  (*(int *)(_PanelMainUIController_TypeInfo_12d5600
                                                           + 0xe0) == 0)) {
                                                    native_sub_4327ec();
                                                  }
                                                  uVar7 = native_System_String__op_Equality_afc18c
                                                                    (*(undefined8 *)
                                                                      (*(long *)(
                                                  _PanelMainUIController_TypeInfo_12d5600 + 0xb8) +
                                                  0x68),_StringLiteral_tank4_12f6590,0);
                                                  if ((uVar7 & 1) != 0) {
                                                                                                        
                                                  native_ContainerSelectTankOperUIController__OnClickTankP_ButtonTank4_dea8b4
                                                            (param_1);
                                                  }
                                                  }
                                                  else {
                                                                                                        
                                                  native_ContainerSelectTankOperUIController__OnClickTankP_ButtonTank3_dea808
                                                            (param_1);
                                                  }
                                                  }
                                                  else {
                                                                                                        
                                                  native_ContainerSelectTankOperUIController__OnClickTankP_ButtonTank2_dea75c
                                                            (param_1);
                                                  }
                                                  }
                                                  else {
                                                                                                        
                                                  native_ContainerSelectTankOperUIController__OnClickTankP_ButtonTank1_dea6b0
                                                            (param_1);
                                                  }
                                                  if (((*(byte *)(
                                                  _PanelMainUIController_TypeInfo_12d5600 + 0x133)
                                                  >> 2 & 1) != 0) &&
                                                  (*(int *)(_PanelMainUIController_TypeInfo_12d5600
                                                           + 0xe0) == 0)) {
                                                    native_sub_4327ec();
                                                  }
                                                  uVar7 = native_System_String__op_Equality_afc18c
                                                                    (*(undefined8 *)
                                                                      (*(long *)(
                                                  _PanelMainUIController_TypeInfo_12d5600 + 0xb8) +
                                                  0x78),_StringLiteral_scene1_12f5f20,0);
                                                  if ((uVar7 & 1) != 0) {
                                                    if ((bRam0000000001346ed2 & 1) == 0) {
                                                      native_sub_43273c(&
                                                  PanelMainUIController_TypeInfo_12d5600);
                                                  native_sub_43273c(&StringLiteral_scene1_12f5f20);
                                                  native_sub_43273c(&
                                                  StringLiteral_tank_button_scene_active_12f65a0);
                                                  native_sub_43273c(&
                                                  StringLiteral_tank_button_scene_12f6598);
                                                  bRam0000000001346ed2 = 1;
                                                  }
                                                  if (*(long *)(param_1 + 0x88) != 0) {
                                                    native_UISprite__set_spriteName_c35c6c
                                                              (*(long *)(param_1 + 0x88),
                                                                                                                              
                                                  _StringLiteral_tank_button_scene_active_12f65a0,0)
                                                  ;
                                                  if (*(long *)(param_1 + 0x90) != 0) {
                                                    native_UISprite__set_spriteName_c35c6c
                                                              (*(long *)(param_1 + 0x90),
                                                                                                                              
                                                  _StringLiteral_tank_button_scene_12f6598,0);
                                                  if (((*(byte *)(
                                                  _PanelMainUIController_TypeInfo_12d5600 + 0x133)
                                                  >> 2 & 1) != 0) &&
                                                  (*(int *)(_PanelMainUIController_TypeInfo_12d5600
                                                           + 0xe0) == 0)) {
                                                    native_sub_4327ec();
                                                  }
                                                  puVar8 = (undefined8 *)
                                                           (*(long *)(
                                                  _PanelMainUIController_TypeInfo_12d5600 + 0xb8) +
                                                  0x78);
                                                  *puVar8 = _StringLiteral_scene1_12f5f20;
native_sub_41086c:
                                                  if (iRam0000000001345318 != 0) {
                                                    puVar1 = (ulong *)(((ulong)puVar8 >> 0x12 &
                                                                       0x7fff) * 8 + 0x138ecd8);
                                                    do {
                                                      cVar2 = '\x01';
                                                      bVar3 = (bool)ExclusiveMonitorPass
                                                                              (puVar1,0x10);
                                                      if (bVar3) {
                                                        *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >>
                                                                                   0xc & 0x3f);
                                                        cVar2 = ExclusiveMonitorsStatus();
                                                      }
                                                    } while (cVar2 != '\0');
                                                  }
                                                  return;
                                                  }
                                                  }
                    /* WARNING: Subroutine does not return */
                                                  native_sub_432810();
                                                  }
                                                  if (((*(byte *)(
                                                  _PanelMainUIController_TypeInfo_12d5600 + 0x133)
                                                  >> 2 & 1) != 0) &&
                                                  (*(int *)(_PanelMainUIController_TypeInfo_12d5600
                                                           + 0xe0) == 0)) {
                                                    native_sub_4327ec();
                                                  }
                                                  uVar7 = native_System_String__op_Equality_afc18c
                                                                    (*(undefined8 *)
                                                                      (*(long *)(
                                                  _PanelMainUIController_TypeInfo_12d5600 + 0xb8) +
                                                  0x78),_StringLiteral_scene2_12f5f28,0);
                                                  if ((uVar7 & 1) == 0) {
                                                    return;
                                                  }
                                                  if ((bRam0000000001346ed3 & 1) == 0) {
                                                    native_sub_43273c(&
                                                  PanelMainUIController_TypeInfo_12d5600);
                                                  native_sub_43273c(&StringLiteral_scene2_12f5f28);
                                                  native_sub_43273c(&
                                                  StringLiteral_tank_button_scene_active_12f65a0);
                                                  native_sub_43273c(&
                                                  StringLiteral_tank_button_scene_12f6598);
                                                  bRam0000000001346ed3 = 1;
                                                  }
                                                  if (*(long *)(param_1 + 0x88) != 0) {
                                                    native_UISprite__set_spriteName_c35c6c
                                                              (*(long *)(param_1 + 0x88),
                                                                                                                              
                                                  _StringLiteral_tank_button_scene_12f6598,0);
                                                  if (*(long *)(param_1 + 0x90) != 0) {
                                                    native_UISprite__set_spriteName_c35c6c
                                                              (*(long *)(param_1 + 0x90),
                                                                                                                              
                                                  _StringLiteral_tank_button_scene_active_12f65a0,0)
                                                  ;
                                                  if (((*(byte *)(
                                                  _PanelMainUIController_TypeInfo_12d5600 + 0x133)
                                                  >> 2 & 1) != 0) &&
                                                  (*(int *)(_PanelMainUIController_TypeInfo_12d5600
                                                           + 0xe0) == 0)) {
                                                    native_sub_4327ec();
                                                  }
                                                  puVar8 = (undefined8 *)
                                                           (*(long *)(
                                                  _PanelMainUIController_TypeInfo_12d5600 + 0xb8) +
                                                  0x78);
                                                  *puVar8 = _StringLiteral_scene2_12f5f28;
                                                  goto native_sub_41086c;
                                                  }
                                                  }
                    /* WARNING: Subroutine does not return */
                                                  native_sub_432810();
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00dea6ac:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerSelectTankOperUIController$$OnClickButtonTankPResult @ 0xdeab08
 * void ContainerSelectTankOperUIController__OnClickButtonTankPResult (ContainerSelectTankOperUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072f0b0) */
/* WARNING: Removing unreachable block (ram,0x007394ec) */
/* WARNING: Removing unreachable block (ram,0x0072f0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerSelectTankOperUIController$$OnClickButtonTankPResult
   void ContainerSelectTankOperUIController__OnClickButtonTankPResult
   (ContainerSelectTankOperUIController_o* __this, const MethodInfo* method); */

long native_ContainerSelectTankOperUIController__OnClickButtonTankPResult_deab08(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam0000000001346ecd & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    bRam0000000001346ecd = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar7 = native_PanelMainUIController__get_Instance_738fb0(0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam000000000133f5ec & 1) == 0) {
    native_sub_43273c(&StringLiteral_ContainerBeforeLogin_12ed200,0);
    bRam000000000133f5ec = 1;
  }
  native_PanelMainUIController__CleanAllUI_73954c(lVar7);
  uVar2 = _StringLiteral_ContainerBeforeLogin_12ed200;
  if ((bRam000000000133f5e5 & 1) == 0) {
    native_sub_43273c(&GameResourcesManager_TypeInfo_12d47e0);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5e5 = 1;
  }
  if (((*(byte *)(_GameResourcesManager_TypeInfo_12d47e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_GameResourcesManager_TypeInfo_12d47e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = native_GameResourcesManager__GetUIPrefab_defa08(uVar2,0);
  lVar7 = *(long *)(lVar7 + 0x30);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f596 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f596 = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f597 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f597 = 1;
  }
  if (lVar7 != 0) {
    uVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar7,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    lVar3 = native_UnityEngine_Object__Instantiate_GameObject__4a6564
                      (lVar6,uVar2,_Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
    if ((uVar4 & 1) == 0) {
      return lVar3;
    }
    if ((lVar3 != 0) &&
       (lVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0), lVar6 != 0)) {
      uVar2 = native_UnityEngine_Object__get_name_8e8098(lVar6,0);
      native_UnityEngine_Object__set_name_8e9c08(lVar3,uVar2,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
      if ((uVar4 & 1) != 0) {
        uVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar7,0);
        native_UnityEngine_GameObject__set_layer_8de648(lVar3,uVar1,0);
      }
      native_UnityEngine_Vector3__get_zero_776668(0);
      if (lVar5 != 0) {
        native_UnityEngine_Transform__set_localPosition_7718a4(lVar5,0);
        native_UnityEngine_Quaternion__get_identity_7628fc(0);
        native_UnityEngine_Transform__set_localRotation_771984(lVar5,0);
        native_UnityEngine_Vector3__get_one_776a20(0);
        native_UnityEngine_Transform__set_localScale_771e30(lVar5,0);
        native_UnityEngine_GameObject__SetActive_8de698(lVar3,1,0);
        return lVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerSelectTankOperUIController$$OnClickTankP_ButtonTank1 @ 0xdea6b0
 * void ContainerSelectTankOperUIController__OnClickTankP_ButtonTank1 (ContainerSelectTankOperUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerSelectTankOperUIController$$OnClickTankP_ButtonTank1
   void ContainerSelectTankOperUIController__OnClickTankP_ButtonTank1
   (ContainerSelectTankOperUIController_o* __this, const MethodInfo* method); */

void native_ContainerSelectTankOperUIController__OnClickTankP_ButtonTank1_dea6b0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if ((bRam0000000001346ece & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_tank_button_tank1_12f65a8);
    native_sub_43273c(&StringLiteral_tank1_12f6578);
    bRam0000000001346ece = 1;
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    native_UISprite__set_spriteName_c35c6c
              (*(long *)(param_1 + 0x80),_StringLiteral_tank_button_tank1_12f65a8,0);
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    puVar4 = (undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x68);
    *puVar4 = _StringLiteral_tank1_12f6578;
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
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerSelectTankOperUIController$$OnClickTankP_ButtonTank2 @ 0xdea75c
 * void ContainerSelectTankOperUIController__OnClickTankP_ButtonTank2 (ContainerSelectTankOperUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerSelectTankOperUIController$$OnClickTankP_ButtonTank2
   void ContainerSelectTankOperUIController__OnClickTankP_ButtonTank2
   (ContainerSelectTankOperUIController_o* __this, const MethodInfo* method); */

void native_ContainerSelectTankOperUIController__OnClickTankP_ButtonTank2_dea75c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if ((bRam0000000001346ecf & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_tank_button_tank2_12f65b0);
    native_sub_43273c(&StringLiteral_tank2_12f6580);
    bRam0000000001346ecf = 1;
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    native_UISprite__set_spriteName_c35c6c
              (*(long *)(param_1 + 0x80),_StringLiteral_tank_button_tank2_12f65b0,0);
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    puVar4 = (undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x68);
    *puVar4 = _StringLiteral_tank2_12f6580;
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
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerSelectTankOperUIController$$OnClickTankP_ButtonTank3 @ 0xdea808
 * void ContainerSelectTankOperUIController__OnClickTankP_ButtonTank3 (ContainerSelectTankOperUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerSelectTankOperUIController$$OnClickTankP_ButtonTank3
   void ContainerSelectTankOperUIController__OnClickTankP_ButtonTank3
   (ContainerSelectTankOperUIController_o* __this, const MethodInfo* method); */

void native_ContainerSelectTankOperUIController__OnClickTankP_ButtonTank3_dea808(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if ((bRam0000000001346ed0 & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_tank3_12f6588);
    native_sub_43273c(&StringLiteral_tank_button_tank3_12f65b8);
    bRam0000000001346ed0 = 1;
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    native_UISprite__set_spriteName_c35c6c
              (*(long *)(param_1 + 0x80),_StringLiteral_tank_button_tank3_12f65b8,0);
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    puVar4 = (undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x68);
    *puVar4 = _StringLiteral_tank3_12f6588;
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
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerSelectTankOperUIController$$OnClickTankP_ButtonTank4 @ 0xdea8b4
 * void ContainerSelectTankOperUIController__OnClickTankP_ButtonTank4 (ContainerSelectTankOperUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerSelectTankOperUIController$$OnClickTankP_ButtonTank4
   void ContainerSelectTankOperUIController__OnClickTankP_ButtonTank4
   (ContainerSelectTankOperUIController_o* __this, const MethodInfo* method); */

void native_ContainerSelectTankOperUIController__OnClickTankP_ButtonTank4_dea8b4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if ((bRam0000000001346ed1 & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_tank_button_tank4_12f65c0);
    native_sub_43273c(&StringLiteral_tank4_12f6590);
    bRam0000000001346ed1 = 1;
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    native_UISprite__set_spriteName_c35c6c
              (*(long *)(param_1 + 0x80),_StringLiteral_tank_button_tank4_12f65c0,0);
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    puVar4 = (undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x68);
    *puVar4 = _StringLiteral_tank4_12f6590;
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
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerSelectTankOperUIController$$OnClickTankP_ButtonScene1 @ 0xdea960
 * void ContainerSelectTankOperUIController__OnClickTankP_ButtonScene1 (ContainerSelectTankOperUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerSelectTankOperUIController$$OnClickTankP_ButtonScene1
   void ContainerSelectTankOperUIController__OnClickTankP_ButtonScene1
   (ContainerSelectTankOperUIController_o* __this, const MethodInfo* method); */

void native_ContainerSelectTankOperUIController__OnClickTankP_ButtonScene1_dea960(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if ((bRam0000000001346ed2 & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_scene1_12f5f20);
    native_sub_43273c(&StringLiteral_tank_button_scene_active_12f65a0);
    native_sub_43273c(&StringLiteral_tank_button_scene_12f6598);
    bRam0000000001346ed2 = 1;
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    native_UISprite__set_spriteName_c35c6c
              (*(long *)(param_1 + 0x88),_StringLiteral_tank_button_scene_active_12f65a0,0);
    if (*(long *)(param_1 + 0x90) != 0) {
      native_UISprite__set_spriteName_c35c6c
                (*(long *)(param_1 + 0x90),_StringLiteral_tank_button_scene_12f6598,0);
      if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      puVar4 = (undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x78);
      *puVar4 = _StringLiteral_scene1_12f5f20;
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
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerSelectTankOperUIController$$OnClickTankP_ButtonScene2 @ 0xdeaa34
 * void ContainerSelectTankOperUIController__OnClickTankP_ButtonScene2 (ContainerSelectTankOperUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerSelectTankOperUIController$$OnClickTankP_ButtonScene2
   void ContainerSelectTankOperUIController__OnClickTankP_ButtonScene2
   (ContainerSelectTankOperUIController_o* __this, const MethodInfo* method); */

void native_ContainerSelectTankOperUIController__OnClickTankP_ButtonScene2_deaa34(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if ((bRam0000000001346ed3 & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_scene2_12f5f28);
    native_sub_43273c(&StringLiteral_tank_button_scene_active_12f65a0);
    native_sub_43273c(&StringLiteral_tank_button_scene_12f6598);
    bRam0000000001346ed3 = 1;
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    native_UISprite__set_spriteName_c35c6c
              (*(long *)(param_1 + 0x88),_StringLiteral_tank_button_scene_12f6598,0);
    if (*(long *)(param_1 + 0x90) != 0) {
      native_UISprite__set_spriteName_c35c6c
                (*(long *)(param_1 + 0x90),_StringLiteral_tank_button_scene_active_12f65a0,0);
      if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      puVar4 = (undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x78);
      *puVar4 = _StringLiteral_scene2_12f5f28;
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
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerSelectTankOperUIController$$OnClickTankP_ButtonControl @ 0xdeab74
 * void ContainerSelectTankOperUIController__OnClickTankP_ButtonControl (ContainerSelectTankOperUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072f0b0) */
/* WARNING: Removing unreachable block (ram,0x007394ec) */
/* WARNING: Removing unreachable block (ram,0x0072f0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerSelectTankOperUIController$$OnClickTankP_ButtonControl
   void ContainerSelectTankOperUIController__OnClickTankP_ButtonControl
   (ContainerSelectTankOperUIController_o* __this, const MethodInfo* method); */

ulong native_ContainerSelectTankOperUIController__OnClickTankP_ButtonControl_deab74(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  if ((bRam0000000001346ed4 & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_scene1_12f5f20);
    native_sub_43273c(&StringLiteral_scene2_12f5f28);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam0000000001346ed4 = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = _PanelMainUIController_TypeInfo_12d5600;
  *(undefined4 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xa8) = 5;
  *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x80) = _StringLiteral__12eaac0;
  native_sub_4326e0();
  lVar6 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x78);
  if (lVar6 != 0) {
    uVar7 = native_System_String__Equals_af8bfc(lVar6,_StringLiteral_scene1_12f5f20,0);
    if ((uVar7 & 1) == 0) {
      if (((*(ushort *)(_PanelMainUIController_TypeInfo_12d5600 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
        native_sub_4327ec(_PanelMainUIController_TypeInfo_12d5600);
      }
      lVar6 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x78);
      if (lVar6 != 0) {
        uVar7 = native_System_String__Equals_af8bfc(lVar6,_StringLiteral_scene2_12f5f28,0);
        if ((uVar7 & 1) == 0) {
          return uVar7;
        }
        if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar6 = native_PanelMainUIController__get_Instance_738fb0(0);
        if (lVar6 != 0) {
          if ((bRam000000000133f5fa & 1) == 0) {
            native_sub_43273c(&ContainerScreenLoadingUIController_TypeInfo_12d3f80,0);
            native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
            native_sub_43273c(&StringLiteral_ContainerScreenLoading_12ed268);
            native_sub_43273c(&StringLiteral_ContainerSelectTankOper_12ed278);
            native_sub_43273c(&StringLiteral_SceneSnow_12f0c68);
            bRam000000000133f5fa = 1;
          }
          if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x10) =
               _StringLiteral_ContainerSelectTankOper_12ed278;
          native_sub_4326e0();
          if (((*(byte *)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0x133) >> 2 & 1) !=
               0) && (*(int *)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          **(undefined8 **)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0xb8) =
               _StringLiteral_SceneSnow_12f0c68;
          native_sub_4326e0();
          native_PanelMainUIController__CleanAllUI_73954c(lVar6);
          goto native_PanelMainUIController__AddUI_73944c;
        }
      }
    }
    else {
      if (((*(ushort *)(_PanelMainUIController_TypeInfo_12d5600 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
        native_sub_4327ec(_PanelMainUIController_TypeInfo_12d5600);
      }
      lVar6 = native_PanelMainUIController__get_Instance_738fb0(0);
      if (lVar6 != 0) {
        if ((bRam000000000133f5f9 & 1) == 0) {
          native_sub_43273c(&ContainerScreenLoadingUIController_TypeInfo_12d3f80,0);
          native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
          native_sub_43273c(&StringLiteral_SceneForest_12f0c58);
          native_sub_43273c(&StringLiteral_ContainerScreenLoading_12ed268);
          native_sub_43273c(&StringLiteral_ContainerSelectTankOper_12ed278);
          bRam000000000133f5f9 = 1;
        }
        if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x10) =
             _StringLiteral_ContainerSelectTankOper_12ed278;
        native_sub_4326e0();
        if (((*(byte *)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0x133) >> 2 & 1) != 0
            ) && (*(int *)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        **(undefined8 **)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0xb8) =
             _StringLiteral_SceneForest_12f0c58;
        native_sub_4326e0();
        native_PanelMainUIController__CleanAllUI_73954c(lVar6);
native_PanelMainUIController__AddUI_73944c:
        uVar2 = _StringLiteral_ContainerScreenLoading_12ed268;
        if ((bRam000000000133f5e5 & 1) == 0) {
          native_sub_43273c(&GameResourcesManager_TypeInfo_12d47e0);
          native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
          bRam000000000133f5e5 = 1;
        }
        if (((*(byte *)(_GameResourcesManager_TypeInfo_12d47e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_GameResourcesManager_TypeInfo_12d47e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar5 = native_GameResourcesManager__GetUIPrefab_defa08(uVar2,0);
        lVar6 = *(long *)(lVar6 + 0x30);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        if ((bRam000000000133f596 & 1) == 0) {
          native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
          bRam000000000133f596 = 1;
        }
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        if ((bRam000000000133f597 & 1) == 0) {
          native_sub_43273c(&Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
          native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
          bRam000000000133f597 = 1;
        }
        if (lVar6 != 0) {
          uVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar6,0);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
          }
          uVar7 = native_UnityEngine_Object__Instantiate_GameObject__4a6564
                            (lVar5,uVar2,
                             _Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
          uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
          if ((uVar3 & 1) == 0) {
            return uVar7;
          }
          if ((uVar7 != 0) &&
             (lVar4 = native_UnityEngine_GameObject__get_transform_8de5c8(uVar7,0), lVar5 != 0)) {
            uVar2 = native_UnityEngine_Object__get_name_8e8098(lVar5,0);
            native_UnityEngine_Object__set_name_8e9c08(uVar7,uVar2,0);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar6,0,0);
            if ((uVar3 & 1) != 0) {
              uVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar6,0);
              native_UnityEngine_GameObject__set_layer_8de648(uVar7,uVar1,0);
            }
            native_UnityEngine_Vector3__get_zero_776668(0);
            if (lVar4 != 0) {
              native_UnityEngine_Transform__set_localPosition_7718a4(lVar4,0);
              native_UnityEngine_Quaternion__get_identity_7628fc(0);
              native_UnityEngine_Transform__set_localRotation_771984(lVar4,0);
              native_UnityEngine_Vector3__get_one_776a20(0);
              native_UnityEngine_Transform__set_localScale_771e30(lVar4,0);
              native_UnityEngine_GameObject__SetActive_8de698(uVar7,1,0);
              return uVar7;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerSelectTankOperUIController$$OnClickTankP_ButtonDrive @ 0xdeacec
 * void ContainerSelectTankOperUIController__OnClickTankP_ButtonDrive (ContainerSelectTankOperUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072f0b0) */
/* WARNING: Removing unreachable block (ram,0x007394ec) */
/* WARNING: Removing unreachable block (ram,0x0072f0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerSelectTankOperUIController$$OnClickTankP_ButtonDrive
   void ContainerSelectTankOperUIController__OnClickTankP_ButtonDrive
   (ContainerSelectTankOperUIController_o* __this, const MethodInfo* method); */

ulong native_ContainerSelectTankOperUIController__OnClickTankP_ButtonDrive_deacec(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  if ((bRam0000000001346ed5 & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_gyro_12f49e0);
    native_sub_43273c(&StringLiteral_scene1_12f5f20);
    native_sub_43273c(&StringLiteral_scene2_12f5f28);
    bRam0000000001346ed5 = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = _PanelMainUIController_TypeInfo_12d5600;
  *(undefined4 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xa8) = 5;
  *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x80) = _StringLiteral_gyro_12f49e0;
  native_sub_4326e0();
  lVar6 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x78);
  if (lVar6 != 0) {
    uVar7 = native_System_String__Equals_af8bfc(lVar6,_StringLiteral_scene1_12f5f20,0);
    if ((uVar7 & 1) == 0) {
      if (((*(ushort *)(_PanelMainUIController_TypeInfo_12d5600 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
        native_sub_4327ec(_PanelMainUIController_TypeInfo_12d5600);
      }
      lVar6 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x78);
      if (lVar6 != 0) {
        uVar7 = native_System_String__Equals_af8bfc(lVar6,_StringLiteral_scene2_12f5f28,0);
        if ((uVar7 & 1) == 0) {
          return uVar7;
        }
        if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar6 = native_PanelMainUIController__get_Instance_738fb0(0);
        if (lVar6 != 0) {
          if ((bRam000000000133f5fa & 1) == 0) {
            native_sub_43273c(&ContainerScreenLoadingUIController_TypeInfo_12d3f80,0);
            native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
            native_sub_43273c(&StringLiteral_ContainerScreenLoading_12ed268);
            native_sub_43273c(&StringLiteral_ContainerSelectTankOper_12ed278);
            native_sub_43273c(&StringLiteral_SceneSnow_12f0c68);
            bRam000000000133f5fa = 1;
          }
          if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x10) =
               _StringLiteral_ContainerSelectTankOper_12ed278;
          native_sub_4326e0();
          if (((*(byte *)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0x133) >> 2 & 1) !=
               0) && (*(int *)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          **(undefined8 **)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0xb8) =
               _StringLiteral_SceneSnow_12f0c68;
          native_sub_4326e0();
          native_PanelMainUIController__CleanAllUI_73954c(lVar6);
          goto native_PanelMainUIController__AddUI_73944c;
        }
      }
    }
    else {
      if (((*(ushort *)(_PanelMainUIController_TypeInfo_12d5600 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
        native_sub_4327ec(_PanelMainUIController_TypeInfo_12d5600);
      }
      lVar6 = native_PanelMainUIController__get_Instance_738fb0(0);
      if (lVar6 != 0) {
        if ((bRam000000000133f5f9 & 1) == 0) {
          native_sub_43273c(&ContainerScreenLoadingUIController_TypeInfo_12d3f80,0);
          native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
          native_sub_43273c(&StringLiteral_SceneForest_12f0c58);
          native_sub_43273c(&StringLiteral_ContainerScreenLoading_12ed268);
          native_sub_43273c(&StringLiteral_ContainerSelectTankOper_12ed278);
          bRam000000000133f5f9 = 1;
        }
        if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x10) =
             _StringLiteral_ContainerSelectTankOper_12ed278;
        native_sub_4326e0();
        if (((*(byte *)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0x133) >> 2 & 1) != 0
            ) && (*(int *)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        **(undefined8 **)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0xb8) =
             _StringLiteral_SceneForest_12f0c58;
        native_sub_4326e0();
        native_PanelMainUIController__CleanAllUI_73954c(lVar6);
native_PanelMainUIController__AddUI_73944c:
        uVar2 = _StringLiteral_ContainerScreenLoading_12ed268;
        if ((bRam000000000133f5e5 & 1) == 0) {
          native_sub_43273c(&GameResourcesManager_TypeInfo_12d47e0);
          native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
          bRam000000000133f5e5 = 1;
        }
        if (((*(byte *)(_GameResourcesManager_TypeInfo_12d47e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_GameResourcesManager_TypeInfo_12d47e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar5 = native_GameResourcesManager__GetUIPrefab_defa08(uVar2,0);
        lVar6 = *(long *)(lVar6 + 0x30);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        if ((bRam000000000133f596 & 1) == 0) {
          native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
          bRam000000000133f596 = 1;
        }
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        if ((bRam000000000133f597 & 1) == 0) {
          native_sub_43273c(&Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
          native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
          bRam000000000133f597 = 1;
        }
        if (lVar6 != 0) {
          uVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar6,0);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
          }
          uVar7 = native_UnityEngine_Object__Instantiate_GameObject__4a6564
                            (lVar5,uVar2,
                             _Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
          uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
          if ((uVar3 & 1) == 0) {
            return uVar7;
          }
          if ((uVar7 != 0) &&
             (lVar4 = native_UnityEngine_GameObject__get_transform_8de5c8(uVar7,0), lVar5 != 0)) {
            uVar2 = native_UnityEngine_Object__get_name_8e8098(lVar5,0);
            native_UnityEngine_Object__set_name_8e9c08(uVar7,uVar2,0);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar6,0,0);
            if ((uVar3 & 1) != 0) {
              uVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar6,0);
              native_UnityEngine_GameObject__set_layer_8de648(uVar7,uVar1,0);
            }
            native_UnityEngine_Vector3__get_zero_776668(0);
            if (lVar4 != 0) {
              native_UnityEngine_Transform__set_localPosition_7718a4(lVar4,0);
              native_UnityEngine_Quaternion__get_identity_7628fc(0);
              native_UnityEngine_Transform__set_localRotation_771984(lVar4,0);
              native_UnityEngine_Vector3__get_one_776a20(0);
              native_UnityEngine_Transform__set_localScale_771e30(lVar4,0);
              native_UnityEngine_GameObject__SetActive_8de698(uVar7,1,0);
              return uVar7;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerSelectTankOperUIController$$OnClickTankP_ButtonHand @ 0xdeae64
 * void ContainerSelectTankOperUIController__OnClickTankP_ButtonHand (ContainerSelectTankOperUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072f0b0) */
/* WARNING: Removing unreachable block (ram,0x007394ec) */
/* WARNING: Removing unreachable block (ram,0x0072f0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerSelectTankOperUIController$$OnClickTankP_ButtonHand
   void ContainerSelectTankOperUIController__OnClickTankP_ButtonHand
   (ContainerSelectTankOperUIController_o* __this, const MethodInfo* method); */

ulong native_ContainerSelectTankOperUIController__OnClickTankP_ButtonHand_deae64(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  if ((bRam0000000001346ed6 & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_hand_12f4a18);
    native_sub_43273c(&StringLiteral_scene1_12f5f20);
    native_sub_43273c(&StringLiteral_scene2_12f5f28);
    bRam0000000001346ed6 = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = _PanelMainUIController_TypeInfo_12d5600;
  *(undefined4 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xa8) = 5;
  *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x80) = _StringLiteral_hand_12f4a18;
  native_sub_4326e0();
  lVar6 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x78);
  if (lVar6 != 0) {
    uVar7 = native_System_String__Equals_af8bfc(lVar6,_StringLiteral_scene1_12f5f20,0);
    if ((uVar7 & 1) == 0) {
      if (((*(ushort *)(_PanelMainUIController_TypeInfo_12d5600 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
        native_sub_4327ec(_PanelMainUIController_TypeInfo_12d5600);
      }
      lVar6 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x78);
      if (lVar6 != 0) {
        uVar7 = native_System_String__Equals_af8bfc(lVar6,_StringLiteral_scene2_12f5f28,0);
        if ((uVar7 & 1) == 0) {
          return uVar7;
        }
        if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar6 = native_PanelMainUIController__get_Instance_738fb0(0);
        if (lVar6 != 0) {
          if ((bRam000000000133f5fa & 1) == 0) {
            native_sub_43273c(&ContainerScreenLoadingUIController_TypeInfo_12d3f80,0);
            native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
            native_sub_43273c(&StringLiteral_ContainerScreenLoading_12ed268);
            native_sub_43273c(&StringLiteral_ContainerSelectTankOper_12ed278);
            native_sub_43273c(&StringLiteral_SceneSnow_12f0c68);
            bRam000000000133f5fa = 1;
          }
          if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x10) =
               _StringLiteral_ContainerSelectTankOper_12ed278;
          native_sub_4326e0();
          if (((*(byte *)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0x133) >> 2 & 1) !=
               0) && (*(int *)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          **(undefined8 **)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0xb8) =
               _StringLiteral_SceneSnow_12f0c68;
          native_sub_4326e0();
          native_PanelMainUIController__CleanAllUI_73954c(lVar6);
          goto native_PanelMainUIController__AddUI_73944c;
        }
      }
    }
    else {
      if (((*(ushort *)(_PanelMainUIController_TypeInfo_12d5600 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
        native_sub_4327ec(_PanelMainUIController_TypeInfo_12d5600);
      }
      lVar6 = native_PanelMainUIController__get_Instance_738fb0(0);
      if (lVar6 != 0) {
        if ((bRam000000000133f5f9 & 1) == 0) {
          native_sub_43273c(&ContainerScreenLoadingUIController_TypeInfo_12d3f80,0);
          native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
          native_sub_43273c(&StringLiteral_SceneForest_12f0c58);
          native_sub_43273c(&StringLiteral_ContainerScreenLoading_12ed268);
          native_sub_43273c(&StringLiteral_ContainerSelectTankOper_12ed278);
          bRam000000000133f5f9 = 1;
        }
        if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x10) =
             _StringLiteral_ContainerSelectTankOper_12ed278;
        native_sub_4326e0();
        if (((*(byte *)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0x133) >> 2 & 1) != 0
            ) && (*(int *)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        **(undefined8 **)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0xb8) =
             _StringLiteral_SceneForest_12f0c58;
        native_sub_4326e0();
        native_PanelMainUIController__CleanAllUI_73954c(lVar6);
native_PanelMainUIController__AddUI_73944c:
        uVar2 = _StringLiteral_ContainerScreenLoading_12ed268;
        if ((bRam000000000133f5e5 & 1) == 0) {
          native_sub_43273c(&GameResourcesManager_TypeInfo_12d47e0);
          native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
          bRam000000000133f5e5 = 1;
        }
        if (((*(byte *)(_GameResourcesManager_TypeInfo_12d47e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_GameResourcesManager_TypeInfo_12d47e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar5 = native_GameResourcesManager__GetUIPrefab_defa08(uVar2,0);
        lVar6 = *(long *)(lVar6 + 0x30);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        if ((bRam000000000133f596 & 1) == 0) {
          native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
          bRam000000000133f596 = 1;
        }
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        if ((bRam000000000133f597 & 1) == 0) {
          native_sub_43273c(&Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
          native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
          bRam000000000133f597 = 1;
        }
        if (lVar6 != 0) {
          uVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar6,0);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
          }
          uVar7 = native_UnityEngine_Object__Instantiate_GameObject__4a6564
                            (lVar5,uVar2,
                             _Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
          uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
          if ((uVar3 & 1) == 0) {
            return uVar7;
          }
          if ((uVar7 != 0) &&
             (lVar4 = native_UnityEngine_GameObject__get_transform_8de5c8(uVar7,0), lVar5 != 0)) {
            uVar2 = native_UnityEngine_Object__get_name_8e8098(lVar5,0);
            native_UnityEngine_Object__set_name_8e9c08(uVar7,uVar2,0);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar6,0,0);
            if ((uVar3 & 1) != 0) {
              uVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar6,0);
              native_UnityEngine_GameObject__set_layer_8de648(uVar7,uVar1,0);
            }
            native_UnityEngine_Vector3__get_zero_776668(0);
            if (lVar4 != 0) {
              native_UnityEngine_Transform__set_localPosition_7718a4(lVar4,0);
              native_UnityEngine_Quaternion__get_identity_7628fc(0);
              native_UnityEngine_Transform__set_localRotation_771984(lVar4,0);
              native_UnityEngine_Vector3__get_one_776a20(0);
              native_UnityEngine_Transform__set_localScale_771e30(lVar4,0);
              native_UnityEngine_GameObject__SetActive_8de698(uVar7,1,0);
              return uVar7;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerSelectTankOperUIController$$OnClickTankP_ButtonRoute @ 0xdeafdc
 * void ContainerSelectTankOperUIController__OnClickTankP_ButtonRoute (ContainerSelectTankOperUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072f0b0) */
/* WARNING: Removing unreachable block (ram,0x007394ec) */
/* WARNING: Removing unreachable block (ram,0x0072f0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerSelectTankOperUIController$$OnClickTankP_ButtonRoute
   void ContainerSelectTankOperUIController__OnClickTankP_ButtonRoute
   (ContainerSelectTankOperUIController_o* __this, const MethodInfo* method); */

long native_ContainerSelectTankOperUIController__OnClickTankP_ButtonRoute_deafdc(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam0000000001346ed7 & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    bRam0000000001346ed7 = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar7 = native_PanelMainUIController__get_Instance_738fb0(0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam000000000133f5f1 & 1) == 0) {
    native_sub_43273c(&StringLiteral_ContainerRemoveCarRoute_12ed258,0);
    bRam000000000133f5f1 = 1;
  }
  native_PanelMainUIController__CleanAllUI_73954c(lVar7);
  uVar2 = _StringLiteral_ContainerRemoveCarRoute_12ed258;
  if ((bRam000000000133f5e5 & 1) == 0) {
    native_sub_43273c(&GameResourcesManager_TypeInfo_12d47e0);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5e5 = 1;
  }
  if (((*(byte *)(_GameResourcesManager_TypeInfo_12d47e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_GameResourcesManager_TypeInfo_12d47e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = native_GameResourcesManager__GetUIPrefab_defa08(uVar2,0);
  lVar7 = *(long *)(lVar7 + 0x30);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f596 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f596 = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f597 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f597 = 1;
  }
  if (lVar7 != 0) {
    uVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar7,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    lVar3 = native_UnityEngine_Object__Instantiate_GameObject__4a6564
                      (lVar6,uVar2,_Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
    if ((uVar4 & 1) == 0) {
      return lVar3;
    }
    if ((lVar3 != 0) &&
       (lVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0), lVar6 != 0)) {
      uVar2 = native_UnityEngine_Object__get_name_8e8098(lVar6,0);
      native_UnityEngine_Object__set_name_8e9c08(lVar3,uVar2,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
      if ((uVar4 & 1) != 0) {
        uVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar7,0);
        native_UnityEngine_GameObject__set_layer_8de648(lVar3,uVar1,0);
      }
      native_UnityEngine_Vector3__get_zero_776668(0);
      if (lVar5 != 0) {
        native_UnityEngine_Transform__set_localPosition_7718a4(lVar5,0);
        native_UnityEngine_Quaternion__get_identity_7628fc(0);
        native_UnityEngine_Transform__set_localRotation_771984(lVar5,0);
        native_UnityEngine_Vector3__get_one_776a20(0);
        native_UnityEngine_Transform__set_localScale_771e30(lVar5,0);
        native_UnityEngine_GameObject__SetActive_8de698(lVar3,1,0);
        return lVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerSelectTankOperUIController$$OnClickTankP_ButtonPrograme @ 0xdeb048
 * void ContainerSelectTankOperUIController__OnClickTankP_ButtonPrograme (ContainerSelectTankOperUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072f0b0) */
/* WARNING: Removing unreachable block (ram,0x007394ec) */
/* WARNING: Removing unreachable block (ram,0x0072f0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerSelectTankOperUIController$$OnClickTankP_ButtonPrograme
   void ContainerSelectTankOperUIController__OnClickTankP_ButtonPrograme
   (ContainerSelectTankOperUIController_o* __this, const MethodInfo* method); */

long native_ContainerSelectTankOperUIController__OnClickTankP_ButtonPrograme_deb048(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam0000000001346ed8 & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    bRam0000000001346ed8 = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar7 = native_PanelMainUIController__get_Instance_738fb0(0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam000000000133f5f2 & 1) == 0) {
    native_sub_43273c(&StringLiteral_ContainerRemoveCarPrograme_12ed250,0);
    bRam000000000133f5f2 = 1;
  }
  native_PanelMainUIController__CleanAllUI_73954c(lVar7);
  uVar2 = _StringLiteral_ContainerRemoveCarPrograme_12ed250;
  if ((bRam000000000133f5e5 & 1) == 0) {
    native_sub_43273c(&GameResourcesManager_TypeInfo_12d47e0);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5e5 = 1;
  }
  if (((*(byte *)(_GameResourcesManager_TypeInfo_12d47e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_GameResourcesManager_TypeInfo_12d47e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = native_GameResourcesManager__GetUIPrefab_defa08(uVar2,0);
  lVar7 = *(long *)(lVar7 + 0x30);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f596 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f596 = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f597 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f597 = 1;
  }
  if (lVar7 != 0) {
    uVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar7,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    lVar3 = native_UnityEngine_Object__Instantiate_GameObject__4a6564
                      (lVar6,uVar2,_Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
    if ((uVar4 & 1) == 0) {
      return lVar3;
    }
    if ((lVar3 != 0) &&
       (lVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0), lVar6 != 0)) {
      uVar2 = native_UnityEngine_Object__get_name_8e8098(lVar6,0);
      native_UnityEngine_Object__set_name_8e9c08(lVar3,uVar2,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
      if ((uVar4 & 1) != 0) {
        uVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar7,0);
        native_UnityEngine_GameObject__set_layer_8de648(lVar3,uVar1,0);
      }
      native_UnityEngine_Vector3__get_zero_776668(0);
      if (lVar5 != 0) {
        native_UnityEngine_Transform__set_localPosition_7718a4(lVar5,0);
        native_UnityEngine_Quaternion__get_identity_7628fc(0);
        native_UnityEngine_Transform__set_localRotation_771984(lVar5,0);
        native_UnityEngine_Vector3__get_one_776a20(0);
        native_UnityEngine_Transform__set_localScale_771e30(lVar5,0);
        native_UnityEngine_GameObject__SetActive_8de698(lVar3,1,0);
        return lVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerSelectTankOperUIController$$Update @ 0xdeb0b4
 * void ContainerSelectTankOperUIController__Update (ContainerSelectTankOperUIController_o* __this, const MethodInfo* method); */

/* ContainerSelectTankOperUIController$$Update
   void ContainerSelectTankOperUIController__Update (ContainerSelectTankOperUIController_o* __this,
   const MethodInfo* method); */

void native_ContainerSelectTankOperUIController__Update_deb0b4(void)

{
  return;
}



/* ContainerSelectTankOperUIController$$Awake @ 0xdeb0b8
 * void ContainerSelectTankOperUIController__Awake (ContainerSelectTankOperUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerSelectTankOperUIController$$Awake
   void ContainerSelectTankOperUIController__Awake (ContainerSelectTankOperUIController_o* __this,
   const MethodInfo* method); */

void native_ContainerSelectTankOperUIController__Awake_deb0b8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if ((bRam0000000001346ed9 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UISprite____12e2c18);
    native_sub_43273c(&StringLiteral_TankP_tankbg_12f1540);
    native_sub_43273c(&StringLiteral_TankP_ButtonRoute_12f14e8);
    native_sub_43273c(&StringLiteral_TankP_ButtonTank4_12f1538);
    native_sub_43273c(&StringLiteral_ButtonTankPResult_12ec988);
    native_sub_43273c(&StringLiteral_TankP_ButtonTank2_12f1528);
    native_sub_43273c(&StringLiteral_TankP_ButtonPrograme_12f14d8);
    native_sub_43273c(&StringLiteral_TankP_ButtonControl_12f14a8);
    native_sub_43273c(&StringLiteral_TankP_ButtonDrive_12f14b8);
    native_sub_43273c(&StringLiteral_bg_12f3ba0);
    native_sub_43273c(&StringLiteral_TankP_ButtonTank3_12f1530);
    native_sub_43273c(&StringLiteral_TankP_ButtonSetting_12f1518);
    native_sub_43273c(&StringLiteral_TankP_ButtonHand_12f14c8);
    native_sub_43273c(&StringLiteral_TankP_ButtonTank1_12f1520);
    native_sub_43273c(&StringLiteral_TankP_ButtonScene1_12f14f8);
    native_sub_43273c(&StringLiteral_TankP_ButtonScene2_12f1508);
    native_sub_43273c(&StringLiteral_TankP_ButtonBook_12f14a0);
    bRam0000000001346ed9 = 1;
  }
  lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if ((lVar4 != 0) &&
     (lVar4 = native_UnityEngine_Transform__Find_772c0c
                        (lVar4,_StringLiteral_ButtonTankPResult_12ec988,0), lVar4 != 0)) {
    uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
    *(undefined8 *)(param_1 + 0x98) = uVar5;
    native_sub_4326e0();
    lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if ((lVar4 != 0) &&
       (lVar4 = native_UnityEngine_Transform__Find_772c0c
                          (lVar4,_StringLiteral_TankP_ButtonSetting_12f1518,0), lVar4 != 0)) {
      uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
      *(undefined8 *)(param_1 + 0x18) = uVar5;
      native_sub_4326e0();
      lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
      if ((lVar4 != 0) &&
         (lVar4 = native_UnityEngine_Transform__Find_772c0c
                            (lVar4,_StringLiteral_TankP_ButtonBook_12f14a0,0), lVar4 != 0)) {
        uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
        *(undefined8 *)(param_1 + 0x20) = uVar5;
        native_sub_4326e0();
        lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
        if ((lVar4 != 0) &&
           (lVar4 = native_UnityEngine_Transform__Find_772c0c
                              (lVar4,_StringLiteral_TankP_ButtonControl_12f14a8,0), lVar4 != 0)) {
          uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
          *(undefined8 *)(param_1 + 0x28) = uVar5;
          native_sub_4326e0();
          lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
          if ((lVar4 != 0) &&
             (lVar4 = native_UnityEngine_Transform__Find_772c0c
                                (lVar4,_StringLiteral_TankP_ButtonDrive_12f14b8,0), lVar4 != 0)) {
            uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
            *(undefined8 *)(param_1 + 0x30) = uVar5;
            native_sub_4326e0();
            lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
            if ((lVar4 != 0) &&
               (lVar4 = native_UnityEngine_Transform__Find_772c0c
                                  (lVar4,_StringLiteral_TankP_ButtonHand_12f14c8,0), lVar4 != 0)) {
              uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
              *(undefined8 *)(param_1 + 0x38) = uVar5;
              native_sub_4326e0();
              lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
              if ((lVar4 != 0) &&
                 (lVar4 = native_UnityEngine_Transform__Find_772c0c
                                    (lVar4,_StringLiteral_TankP_ButtonRoute_12f14e8,0), lVar4 != 0))
              {
                uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
                *(undefined8 *)(param_1 + 0x40) = uVar5;
                native_sub_4326e0();
                lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
                if ((lVar4 != 0) &&
                   (lVar4 = native_UnityEngine_Transform__Find_772c0c
                                      (lVar4,_StringLiteral_TankP_ButtonPrograme_12f14d8,0),
                   lVar4 != 0)) {
                  uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
                  *(undefined8 *)(param_1 + 0x48) = uVar5;
                  native_sub_4326e0();
                  lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
                  if ((lVar4 != 0) &&
                     (lVar4 = native_UnityEngine_Transform__Find_772c0c
                                        (lVar4,_StringLiteral_TankP_ButtonScene1_12f14f8,0),
                     lVar4 != 0)) {
                    uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
                    *(undefined8 *)(param_1 + 0x50) = uVar5;
                    native_sub_4326e0();
                    lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
                    if ((lVar4 != 0) &&
                       (lVar4 = native_UnityEngine_Transform__Find_772c0c
                                          (lVar4,_StringLiteral_TankP_ButtonScene2_12f1508,0),
                       lVar4 != 0)) {
                      uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
                      *(undefined8 *)(param_1 + 0x58) = uVar5;
                      native_sub_4326e0();
                      lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
                      if ((lVar4 != 0) &&
                         (lVar4 = native_UnityEngine_Transform__Find_772c0c
                                            (lVar4,_StringLiteral_TankP_ButtonTank1_12f1520,0),
                         lVar4 != 0)) {
                        uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
                        *(undefined8 *)(param_1 + 0x60) = uVar5;
                        native_sub_4326e0();
                        lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
                        if ((lVar4 != 0) &&
                           (lVar4 = native_UnityEngine_Transform__Find_772c0c
                                              (lVar4,_StringLiteral_TankP_ButtonTank2_12f1528,0),
                           lVar4 != 0)) {
                          uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
                          *(undefined8 *)(param_1 + 0x68) = uVar5;
                          native_sub_4326e0();
                          lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
                          if ((lVar4 != 0) &&
                             (lVar4 = native_UnityEngine_Transform__Find_772c0c
                                                (lVar4,_StringLiteral_TankP_ButtonTank3_12f1530,0),
                             lVar4 != 0)) {
                            uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
                            *(undefined8 *)(param_1 + 0x70) = uVar5;
                            native_sub_4326e0();
                            lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
                            if ((lVar4 != 0) &&
                               (lVar4 = native_UnityEngine_Transform__Find_772c0c
                                                  (lVar4,_StringLiteral_TankP_ButtonTank4_12f1538,0)
                               , lVar4 != 0)) {
                              uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
                              *(undefined8 *)(param_1 + 0x78) = uVar5;
                              native_sub_4326e0();
                              lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
                              if ((lVar4 != 0) &&
                                 (lVar4 = native_UnityEngine_Transform__Find_772c0c
                                                    (lVar4,_StringLiteral_TankP_tankbg_12f1540,0),
                                 lVar4 != 0)) {
                                uVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                                  (lVar4,
                                                  _Method_UnityEngine_Component_GetComponent_UISprite____12e2c18
                                                  );
                                *(undefined8 *)(param_1 + 0x80) = uVar5;
                                native_sub_4326e0((undefined8 *)(param_1 + 0x80),uVar5);
                                if ((*(long *)(param_1 + 0x50) != 0) &&
                                   (lVar4 = native_UnityEngine_GameObject__get_transform_8de5c8
                                                      (*(long *)(param_1 + 0x50),0), lVar4 != 0)) {
                                  lVar4 = native_UnityEngine_Transform__FindChild_772e3c
                                                    (lVar4,_StringLiteral_bg_12f3ba0,0);
                                  if (lVar4 != 0) {
                                    uVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                                      (lVar4,
                                                  _Method_UnityEngine_Component_GetComponent_UISprite____12e2c18
                                                  );
                                    *(undefined8 *)(param_1 + 0x88) = uVar5;
                                    native_sub_4326e0((undefined8 *)(param_1 + 0x88),uVar5);
                                    if (((*(long *)(param_1 + 0x58) != 0) &&
                                        (lVar4 = native_UnityEngine_GameObject__get_transform_8de5c8
                                                           (*(long *)(param_1 + 0x58),0), lVar4 != 0
                                        )) && (lVar4 = 
                                                  native_UnityEngine_Transform__FindChild_772e3c
                                                            (lVar4,_StringLiteral_bg_12f3ba0,0),
                                              lVar4 != 0)) {
                                      uVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                                        (lVar4,
                                                  _Method_UnityEngine_Component_GetComponent_UISprite____12e2c18
                                                  );
                                      puVar6 = (undefined8 *)(param_1 + 0x90);
                                      *puVar6 = uVar5;
                                      if (iRam0000000001345318 != 0) {
                                        puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 +
                                                          0x138ecd8);
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
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerSelectTankOperUIController$$.ctor @ 0xdeb60c
 * void ContainerSelectTankOperUIController___ctor (ContainerSelectTankOperUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerSelectTankOperUIController$$.ctor
   void ContainerSelectTankOperUIController___ctor (ContainerSelectTankOperUIController_o* __this,
   const MethodInfo* method); */

undefined1  [16] native_ContainerSelectTankOperUIController___ctor_deb60c(ulong param_1)

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


