/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* ContainerSelectCarOperUIController$$Start @ 0xde7fec
 * void ContainerSelectCarOperUIController__Start (ContainerSelectCarOperUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerSelectCarOperUIController$$Start
   void ContainerSelectCarOperUIController__Start (ContainerSelectCarOperUIController_o* __this,
   const MethodInfo* method); */

void native_ContainerSelectCarOperUIController__Start_de7fec(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if ((bRam0000000001346ebd & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&Method_ContainerSelectCarOperUIController_OnClickButtonCarPResult___12e30e8);
    native_sub_43273c(&Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonCar1___12e30f0);
    native_sub_43273c(&Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonCar2___12e30f8);
    native_sub_43273c(&Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonCar3___12e3100);
    native_sub_43273c(&Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonCar4___12e3108);
    native_sub_43273c(&Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonControl___12e3110
                     );
    native_sub_43273c(&Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonDrive___12e3118);
    native_sub_43273c(&Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonHand___12e3120);
    native_sub_43273c(&
                      Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonPrograme___12e3128
                     );
    native_sub_43273c(&Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonRoute___12e3130);
    native_sub_43273c(&Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonScene1___12e3138)
    ;
    native_sub_43273c(&Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonScene2___12e3140)
    ;
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_Programe_12f0700);
    native_sub_43273c(&StringLiteral_CarP_ButtonHandtext_12ecf90);
    native_sub_43273c(&StringLiteral_Drive_12ed868);
    native_sub_43273c(&StringLiteral_CarP_ButtonDrivetext_12ecf80);
    native_sub_43273c(&StringLiteral_CarP_ButtonRoutetext_12ecfb0);
    native_sub_43273c(&StringLiteral_Hand_12ee318);
    native_sub_43273c(&StringLiteral_CarP_ButtonProgrametext_12ecfa0);
    native_sub_43273c(&StringLiteral_scene1_12f5f20);
    native_sub_43273c(&StringLiteral_Outdoor_12f0400);
    native_sub_43273c(&StringLiteral_scene2_12f5f28);
    native_sub_43273c(&StringLiteral_car2_12f3d38);
    native_sub_43273c(&StringLiteral_Route_12f0b68);
    native_sub_43273c(&StringLiteral_car4_12f3d48);
    native_sub_43273c(&StringLiteral_Control_12ed2f0);
    native_sub_43273c(&StringLiteral_CarP_ButtonControltext_12ecf70);
    native_sub_43273c(&StringLiteral_Indoor_12ee848);
    native_sub_43273c(&StringLiteral_CarP_ButtonScene2text_12ecfd0);
    native_sub_43273c(&StringLiteral_car1_12f3d30);
    native_sub_43273c(&StringLiteral_car3_12f3d40);
    native_sub_43273c(&StringLiteral_CarP_ButtonScene1text_12ecfc0);
    bRam0000000001346ebd = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(char *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xbc) != '\0') {
    lVar4 = native_UnityEngine_GameObject__Find_8dead0
                      (_StringLiteral_CarP_ButtonControltext_12ecf70,0);
    if ((lVar4 == 0) ||
       (lVar4 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0), lVar4 == 0))
    goto LAB_00de8b50;
    lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (lVar4,_Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0);
    if (lVar4 == 0) goto LAB_00de8b50;
    native_UILabel__set_text_ae81a8(lVar4,_StringLiteral_Control_12ed2f0,0);
    lVar4 = native_UnityEngine_GameObject__Find_8dead0
                      (_StringLiteral_CarP_ButtonDrivetext_12ecf80,0);
    if (((lVar4 == 0) ||
        (lVar4 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0), lVar4 == 0)) ||
       (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                          (lVar4,_Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0),
       lVar4 == 0)) goto LAB_00de8b50;
    native_UILabel__set_text_ae81a8(lVar4,_StringLiteral_Drive_12ed868,0);
    lVar4 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_CarP_ButtonHandtext_12ecf90,0)
    ;
    if (((lVar4 == 0) ||
        (lVar4 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0), lVar4 == 0)) ||
       (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                          (lVar4,_Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0),
       lVar4 == 0)) goto LAB_00de8b50;
    native_UILabel__set_text_ae81a8(lVar4,_StringLiteral_Hand_12ee318,0);
    lVar4 = native_UnityEngine_GameObject__Find_8dead0
                      (_StringLiteral_CarP_ButtonRoutetext_12ecfb0,0);
    if (((lVar4 == 0) ||
        (lVar4 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0), lVar4 == 0)) ||
       (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                          (lVar4,_Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0),
       lVar4 == 0)) goto LAB_00de8b50;
    native_UILabel__set_text_ae81a8(lVar4,_StringLiteral_Route_12f0b68,0);
    lVar4 = native_UnityEngine_GameObject__Find_8dead0
                      (_StringLiteral_CarP_ButtonProgrametext_12ecfa0,0);
    if (((lVar4 == 0) ||
        (lVar4 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0), lVar4 == 0)) ||
       (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                          (lVar4,_Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0),
       lVar4 == 0)) goto LAB_00de8b50;
    native_UILabel__set_text_ae81a8(lVar4,_StringLiteral_Programe_12f0700,0);
    lVar4 = native_UnityEngine_GameObject__Find_8dead0
                      (_StringLiteral_CarP_ButtonScene1text_12ecfc0,0);
    if (((lVar4 == 0) ||
        (lVar4 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0), lVar4 == 0)) ||
       (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                          (lVar4,_Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0),
       lVar4 == 0)) goto LAB_00de8b50;
    native_UILabel__set_text_ae81a8(lVar4,_StringLiteral_Outdoor_12f0400,0);
    lVar4 = native_UnityEngine_GameObject__Find_8dead0
                      (_StringLiteral_CarP_ButtonScene2text_12ecfd0,0);
    if (((lVar4 == 0) ||
        (lVar4 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0), lVar4 == 0)) ||
       (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                          (lVar4,_Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0),
       lVar4 == 0)) goto LAB_00de8b50;
    native_UILabel__set_text_ae81a8(lVar4,_StringLiteral_Indoor_12ee848,0);
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (*(long *)(param_1 + 0x80),
                       _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
    if (lVar4 != 0) {
      lVar4 = *(long *)(lVar4 + 0xc0);
      uVar5 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
      native_EventDelegate_Callback___ctor_54bd18
                (uVar5,param_1,
                 _Method_ContainerSelectCarOperUIController_OnClickButtonCarPResult___12e30e8,0);
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
                     _Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonCar1___12e30f0,0);
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
                         _Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonCar2___12e30f8
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
                             _Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonCar3___12e3100
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
                                 _Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonCar4___12e3108
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
                                     _Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonControl___12e3110
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
                                         _Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonDrive___12e3118
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
                                             _Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonHand___12e3120
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
                                                 _Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonRoute___12e3130
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
                                                                                                          
                                                  _Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonPrograme___12e3128
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
                                                                                                                  
                                                  _Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonScene1___12e3138
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
                                                                                                                          
                                                  _Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonScene2___12e3140
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
                                                  0x60),_StringLiteral_car1_12f3d30,0);
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
                                                  0x60),_StringLiteral_car2_12f3d38,0);
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
                                                  0x60),_StringLiteral_car3_12f3d40,0);
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
                                                  0x60),_StringLiteral_car4_12f3d48,0);
                                                  if ((uVar7 & 1) != 0) {
                                                                                                        
                                                  native_ContainerSelectCarOperUIController__OnClickCarP_ButtonCar4_de8d58
                                                            (param_1);
                                                  }
                                                  }
                                                  else {
                                                                                                        
                                                  native_ContainerSelectCarOperUIController__OnClickCarP_ButtonCar3_de8cac
                                                            (param_1);
                                                  }
                                                  }
                                                  else {
                                                                                                        
                                                  native_ContainerSelectCarOperUIController__OnClickCarP_ButtonCar2_de8c00
                                                            (param_1);
                                                  }
                                                  }
                                                  else {
                                                                                                        
                                                  native_ContainerSelectCarOperUIController__OnClickCarP_ButtonCar1_de8b54
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
                                                  0x70),_StringLiteral_scene1_12f5f20,0);
                                                  if ((uVar7 & 1) != 0) {
                                                    if ((bRam0000000001346ebe & 1) == 0) {
                                                      native_sub_43273c(&
                                                  PanelMainUIController_TypeInfo_12d5600);
                                                  native_sub_43273c(&StringLiteral_scene1_12f5f20);
                                                  native_sub_43273c(&
                                                  StringLiteral_tank_button_scene_active_12f65a0);
                                                  native_sub_43273c(&
                                                  StringLiteral_tank_button_scene_12f6598);
                                                  bRam0000000001346ebe = 1;
                                                  }
                                                  if (*(long *)(param_1 + 0x90) != 0) {
                                                    native_UISprite__set_spriteName_c35c6c
                                                              (*(long *)(param_1 + 0x90),
                                                                                                                              
                                                  _StringLiteral_tank_button_scene_active_12f65a0,0)
                                                  ;
                                                  if (*(long *)(param_1 + 0x98) != 0) {
                                                    native_UISprite__set_spriteName_c35c6c
                                                              (*(long *)(param_1 + 0x98),
                                                                                                                              
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
                                                  0x70);
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
                                                  0x70),_StringLiteral_scene2_12f5f28,0);
                                                  if ((uVar7 & 1) == 0) {
                                                    return;
                                                  }
                                                  if ((bRam0000000001346ebf & 1) == 0) {
                                                    native_sub_43273c(&
                                                  PanelMainUIController_TypeInfo_12d5600);
                                                  native_sub_43273c(&StringLiteral_scene2_12f5f28);
                                                  native_sub_43273c(&
                                                  StringLiteral_tank_button_scene_active_12f65a0);
                                                  native_sub_43273c(&
                                                  StringLiteral_tank_button_scene_12f6598);
                                                  bRam0000000001346ebf = 1;
                                                  }
                                                  if (*(long *)(param_1 + 0x90) != 0) {
                                                    native_UISprite__set_spriteName_c35c6c
                                                              (*(long *)(param_1 + 0x90),
                                                                                                                              
                                                  _StringLiteral_tank_button_scene_12f6598,0);
                                                  if (*(long *)(param_1 + 0x98) != 0) {
                                                    native_UISprite__set_spriteName_c35c6c
                                                              (*(long *)(param_1 + 0x98),
                                                                                                                              
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
                                                  0x70);
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
LAB_00de8b50:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerSelectCarOperUIController$$InitButtonEvent @ 0xde7ff0
 * void ContainerSelectCarOperUIController__InitButtonEvent (ContainerSelectCarOperUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerSelectCarOperUIController$$InitButtonEvent
   void ContainerSelectCarOperUIController__InitButtonEvent (ContainerSelectCarOperUIController_o*
   __this, const MethodInfo* method); */

void native_ContainerSelectCarOperUIController__InitButtonEvent_de7ff0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if ((bRam0000000001346ebd & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&Method_ContainerSelectCarOperUIController_OnClickButtonCarPResult___12e30e8);
    native_sub_43273c(&Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonCar1___12e30f0);
    native_sub_43273c(&Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonCar2___12e30f8);
    native_sub_43273c(&Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonCar3___12e3100);
    native_sub_43273c(&Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonCar4___12e3108);
    native_sub_43273c(&Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonControl___12e3110
                     );
    native_sub_43273c(&Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonDrive___12e3118);
    native_sub_43273c(&Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonHand___12e3120);
    native_sub_43273c(&
                      Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonPrograme___12e3128
                     );
    native_sub_43273c(&Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonRoute___12e3130);
    native_sub_43273c(&Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonScene1___12e3138)
    ;
    native_sub_43273c(&Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonScene2___12e3140)
    ;
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_Programe_12f0700);
    native_sub_43273c(&StringLiteral_CarP_ButtonHandtext_12ecf90);
    native_sub_43273c(&StringLiteral_Drive_12ed868);
    native_sub_43273c(&StringLiteral_CarP_ButtonDrivetext_12ecf80);
    native_sub_43273c(&StringLiteral_CarP_ButtonRoutetext_12ecfb0);
    native_sub_43273c(&StringLiteral_Hand_12ee318);
    native_sub_43273c(&StringLiteral_CarP_ButtonProgrametext_12ecfa0);
    native_sub_43273c(&StringLiteral_scene1_12f5f20);
    native_sub_43273c(&StringLiteral_Outdoor_12f0400);
    native_sub_43273c(&StringLiteral_scene2_12f5f28);
    native_sub_43273c(&StringLiteral_car2_12f3d38);
    native_sub_43273c(&StringLiteral_Route_12f0b68);
    native_sub_43273c(&StringLiteral_car4_12f3d48);
    native_sub_43273c(&StringLiteral_Control_12ed2f0);
    native_sub_43273c(&StringLiteral_CarP_ButtonControltext_12ecf70);
    native_sub_43273c(&StringLiteral_Indoor_12ee848);
    native_sub_43273c(&StringLiteral_CarP_ButtonScene2text_12ecfd0);
    native_sub_43273c(&StringLiteral_car1_12f3d30);
    native_sub_43273c(&StringLiteral_car3_12f3d40);
    native_sub_43273c(&StringLiteral_CarP_ButtonScene1text_12ecfc0);
    bRam0000000001346ebd = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(char *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xbc) != '\0') {
    lVar4 = native_UnityEngine_GameObject__Find_8dead0
                      (_StringLiteral_CarP_ButtonControltext_12ecf70,0);
    if ((lVar4 == 0) ||
       (lVar4 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0), lVar4 == 0))
    goto LAB_00de8b50;
    lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (lVar4,_Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0);
    if (lVar4 == 0) goto LAB_00de8b50;
    native_UILabel__set_text_ae81a8(lVar4,_StringLiteral_Control_12ed2f0,0);
    lVar4 = native_UnityEngine_GameObject__Find_8dead0
                      (_StringLiteral_CarP_ButtonDrivetext_12ecf80,0);
    if (((lVar4 == 0) ||
        (lVar4 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0), lVar4 == 0)) ||
       (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                          (lVar4,_Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0),
       lVar4 == 0)) goto LAB_00de8b50;
    native_UILabel__set_text_ae81a8(lVar4,_StringLiteral_Drive_12ed868,0);
    lVar4 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_CarP_ButtonHandtext_12ecf90,0)
    ;
    if (((lVar4 == 0) ||
        (lVar4 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0), lVar4 == 0)) ||
       (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                          (lVar4,_Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0),
       lVar4 == 0)) goto LAB_00de8b50;
    native_UILabel__set_text_ae81a8(lVar4,_StringLiteral_Hand_12ee318,0);
    lVar4 = native_UnityEngine_GameObject__Find_8dead0
                      (_StringLiteral_CarP_ButtonRoutetext_12ecfb0,0);
    if (((lVar4 == 0) ||
        (lVar4 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0), lVar4 == 0)) ||
       (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                          (lVar4,_Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0),
       lVar4 == 0)) goto LAB_00de8b50;
    native_UILabel__set_text_ae81a8(lVar4,_StringLiteral_Route_12f0b68,0);
    lVar4 = native_UnityEngine_GameObject__Find_8dead0
                      (_StringLiteral_CarP_ButtonProgrametext_12ecfa0,0);
    if (((lVar4 == 0) ||
        (lVar4 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0), lVar4 == 0)) ||
       (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                          (lVar4,_Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0),
       lVar4 == 0)) goto LAB_00de8b50;
    native_UILabel__set_text_ae81a8(lVar4,_StringLiteral_Programe_12f0700,0);
    lVar4 = native_UnityEngine_GameObject__Find_8dead0
                      (_StringLiteral_CarP_ButtonScene1text_12ecfc0,0);
    if (((lVar4 == 0) ||
        (lVar4 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0), lVar4 == 0)) ||
       (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                          (lVar4,_Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0),
       lVar4 == 0)) goto LAB_00de8b50;
    native_UILabel__set_text_ae81a8(lVar4,_StringLiteral_Outdoor_12f0400,0);
    lVar4 = native_UnityEngine_GameObject__Find_8dead0
                      (_StringLiteral_CarP_ButtonScene2text_12ecfd0,0);
    if (((lVar4 == 0) ||
        (lVar4 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0), lVar4 == 0)) ||
       (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                          (lVar4,_Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0),
       lVar4 == 0)) goto LAB_00de8b50;
    native_UILabel__set_text_ae81a8(lVar4,_StringLiteral_Indoor_12ee848,0);
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (*(long *)(param_1 + 0x80),
                       _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
    if (lVar4 != 0) {
      lVar4 = *(long *)(lVar4 + 0xc0);
      uVar5 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
      native_EventDelegate_Callback___ctor_54bd18
                (uVar5,param_1,
                 _Method_ContainerSelectCarOperUIController_OnClickButtonCarPResult___12e30e8,0);
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
                     _Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonCar1___12e30f0,0);
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
                         _Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonCar2___12e30f8
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
                             _Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonCar3___12e3100
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
                                 _Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonCar4___12e3108
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
                                     _Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonControl___12e3110
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
                                         _Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonDrive___12e3118
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
                                             _Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonHand___12e3120
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
                                                 _Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonRoute___12e3130
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
                                                                                                          
                                                  _Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonPrograme___12e3128
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
                                                                                                                  
                                                  _Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonScene1___12e3138
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
                                                                                                                          
                                                  _Method_ContainerSelectCarOperUIController_OnClickCarP_ButtonScene2___12e3140
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
                                                  0x60),_StringLiteral_car1_12f3d30,0);
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
                                                  0x60),_StringLiteral_car2_12f3d38,0);
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
                                                  0x60),_StringLiteral_car3_12f3d40,0);
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
                                                  0x60),_StringLiteral_car4_12f3d48,0);
                                                  if ((uVar7 & 1) != 0) {
                                                                                                        
                                                  native_ContainerSelectCarOperUIController__OnClickCarP_ButtonCar4_de8d58
                                                            (param_1);
                                                  }
                                                  }
                                                  else {
                                                                                                        
                                                  native_ContainerSelectCarOperUIController__OnClickCarP_ButtonCar3_de8cac
                                                            (param_1);
                                                  }
                                                  }
                                                  else {
                                                                                                        
                                                  native_ContainerSelectCarOperUIController__OnClickCarP_ButtonCar2_de8c00
                                                            (param_1);
                                                  }
                                                  }
                                                  else {
                                                                                                        
                                                  native_ContainerSelectCarOperUIController__OnClickCarP_ButtonCar1_de8b54
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
                                                  0x70),_StringLiteral_scene1_12f5f20,0);
                                                  if ((uVar7 & 1) != 0) {
                                                    if ((bRam0000000001346ebe & 1) == 0) {
                                                      native_sub_43273c(&
                                                  PanelMainUIController_TypeInfo_12d5600);
                                                  native_sub_43273c(&StringLiteral_scene1_12f5f20);
                                                  native_sub_43273c(&
                                                  StringLiteral_tank_button_scene_active_12f65a0);
                                                  native_sub_43273c(&
                                                  StringLiteral_tank_button_scene_12f6598);
                                                  bRam0000000001346ebe = 1;
                                                  }
                                                  if (*(long *)(param_1 + 0x90) != 0) {
                                                    native_UISprite__set_spriteName_c35c6c
                                                              (*(long *)(param_1 + 0x90),
                                                                                                                              
                                                  _StringLiteral_tank_button_scene_active_12f65a0,0)
                                                  ;
                                                  if (*(long *)(param_1 + 0x98) != 0) {
                                                    native_UISprite__set_spriteName_c35c6c
                                                              (*(long *)(param_1 + 0x98),
                                                                                                                              
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
                                                  0x70);
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
                                                  0x70),_StringLiteral_scene2_12f5f28,0);
                                                  if ((uVar7 & 1) == 0) {
                                                    return;
                                                  }
                                                  if ((bRam0000000001346ebf & 1) == 0) {
                                                    native_sub_43273c(&
                                                  PanelMainUIController_TypeInfo_12d5600);
                                                  native_sub_43273c(&StringLiteral_scene2_12f5f28);
                                                  native_sub_43273c(&
                                                  StringLiteral_tank_button_scene_active_12f65a0);
                                                  native_sub_43273c(&
                                                  StringLiteral_tank_button_scene_12f6598);
                                                  bRam0000000001346ebf = 1;
                                                  }
                                                  if (*(long *)(param_1 + 0x90) != 0) {
                                                    native_UISprite__set_spriteName_c35c6c
                                                              (*(long *)(param_1 + 0x90),
                                                                                                                              
                                                  _StringLiteral_tank_button_scene_12f6598,0);
                                                  if (*(long *)(param_1 + 0x98) != 0) {
                                                    native_UISprite__set_spriteName_c35c6c
                                                              (*(long *)(param_1 + 0x98),
                                                                                                                              
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
                                                  0x70);
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
LAB_00de8b50:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerSelectCarOperUIController$$OnClickCarP_ButtonScene1 @ 0xde8e04
 * void ContainerSelectCarOperUIController__OnClickCarP_ButtonScene1 (ContainerSelectCarOperUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerSelectCarOperUIController$$OnClickCarP_ButtonScene1
   void ContainerSelectCarOperUIController__OnClickCarP_ButtonScene1
   (ContainerSelectCarOperUIController_o* __this, const MethodInfo* method); */

void native_ContainerSelectCarOperUIController__OnClickCarP_ButtonScene1_de8e04(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if ((bRam0000000001346ebe & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_scene1_12f5f20);
    native_sub_43273c(&StringLiteral_tank_button_scene_active_12f65a0);
    native_sub_43273c(&StringLiteral_tank_button_scene_12f6598);
    bRam0000000001346ebe = 1;
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    native_UISprite__set_spriteName_c35c6c
              (*(long *)(param_1 + 0x90),_StringLiteral_tank_button_scene_active_12f65a0,0);
    if (*(long *)(param_1 + 0x98) != 0) {
      native_UISprite__set_spriteName_c35c6c
                (*(long *)(param_1 + 0x98),_StringLiteral_tank_button_scene_12f6598,0);
      if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      puVar4 = (undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x70);
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



/* ContainerSelectCarOperUIController$$OnClickCarP_ButtonScene2 @ 0xde8ed8
 * void ContainerSelectCarOperUIController__OnClickCarP_ButtonScene2 (ContainerSelectCarOperUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerSelectCarOperUIController$$OnClickCarP_ButtonScene2
   void ContainerSelectCarOperUIController__OnClickCarP_ButtonScene2
   (ContainerSelectCarOperUIController_o* __this, const MethodInfo* method); */

void native_ContainerSelectCarOperUIController__OnClickCarP_ButtonScene2_de8ed8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if ((bRam0000000001346ebf & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_scene2_12f5f28);
    native_sub_43273c(&StringLiteral_tank_button_scene_active_12f65a0);
    native_sub_43273c(&StringLiteral_tank_button_scene_12f6598);
    bRam0000000001346ebf = 1;
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    native_UISprite__set_spriteName_c35c6c
              (*(long *)(param_1 + 0x90),_StringLiteral_tank_button_scene_12f6598,0);
    if (*(long *)(param_1 + 0x98) != 0) {
      native_UISprite__set_spriteName_c35c6c
                (*(long *)(param_1 + 0x98),_StringLiteral_tank_button_scene_active_12f65a0,0);
      if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      puVar4 = (undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x70);
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



/* ContainerSelectCarOperUIController$$OnClickButtonCarPResult @ 0xde8fac
 * void ContainerSelectCarOperUIController__OnClickButtonCarPResult (ContainerSelectCarOperUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072f0b0) */
/* WARNING: Removing unreachable block (ram,0x007394ec) */
/* WARNING: Removing unreachable block (ram,0x0072f0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerSelectCarOperUIController$$OnClickButtonCarPResult
   void ContainerSelectCarOperUIController__OnClickButtonCarPResult
   (ContainerSelectCarOperUIController_o* __this, const MethodInfo* method); */

long native_ContainerSelectCarOperUIController__OnClickButtonCarPResult_de8fac(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam0000000001346ec0 & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    bRam0000000001346ec0 = 1;
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



/* ContainerSelectCarOperUIController$$OnClickCarP_ButtonCar1 @ 0xde8b54
 * void ContainerSelectCarOperUIController__OnClickCarP_ButtonCar1 (ContainerSelectCarOperUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerSelectCarOperUIController$$OnClickCarP_ButtonCar1
   void ContainerSelectCarOperUIController__OnClickCarP_ButtonCar1
   (ContainerSelectCarOperUIController_o* __this, const MethodInfo* method); */

void native_ContainerSelectCarOperUIController__OnClickCarP_ButtonCar1_de8b54(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if ((bRam0000000001346ec1 & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_car_button_car1_12f3d50);
    native_sub_43273c(&StringLiteral_car1_12f3d30);
    bRam0000000001346ec1 = 1;
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    native_UISprite__set_spriteName_c35c6c
              (*(long *)(param_1 + 0x88),_StringLiteral_car_button_car1_12f3d50,0);
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    puVar4 = (undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x60);
    *puVar4 = _StringLiteral_car1_12f3d30;
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



/* ContainerSelectCarOperUIController$$OnClickCarP_ButtonCar2 @ 0xde8c00
 * void ContainerSelectCarOperUIController__OnClickCarP_ButtonCar2 (ContainerSelectCarOperUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerSelectCarOperUIController$$OnClickCarP_ButtonCar2
   void ContainerSelectCarOperUIController__OnClickCarP_ButtonCar2
   (ContainerSelectCarOperUIController_o* __this, const MethodInfo* method); */

void native_ContainerSelectCarOperUIController__OnClickCarP_ButtonCar2_de8c00(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if ((bRam0000000001346ec2 & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_car2_12f3d38);
    native_sub_43273c(&StringLiteral_car_button_car2_12f3d58);
    bRam0000000001346ec2 = 1;
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    native_UISprite__set_spriteName_c35c6c
              (*(long *)(param_1 + 0x88),_StringLiteral_car_button_car2_12f3d58,0);
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    puVar4 = (undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x60);
    *puVar4 = _StringLiteral_car2_12f3d38;
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



/* ContainerSelectCarOperUIController$$OnClickCarP_ButtonCar3 @ 0xde8cac
 * void ContainerSelectCarOperUIController__OnClickCarP_ButtonCar3 (ContainerSelectCarOperUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerSelectCarOperUIController$$OnClickCarP_ButtonCar3
   void ContainerSelectCarOperUIController__OnClickCarP_ButtonCar3
   (ContainerSelectCarOperUIController_o* __this, const MethodInfo* method); */

void native_ContainerSelectCarOperUIController__OnClickCarP_ButtonCar3_de8cac(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if ((bRam0000000001346ec3 & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_car_button_car3_12f3d60);
    native_sub_43273c(&StringLiteral_car3_12f3d40);
    bRam0000000001346ec3 = 1;
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    native_UISprite__set_spriteName_c35c6c
              (*(long *)(param_1 + 0x88),_StringLiteral_car_button_car3_12f3d60,0);
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    puVar4 = (undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x60);
    *puVar4 = _StringLiteral_car3_12f3d40;
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



/* ContainerSelectCarOperUIController$$OnClickCarP_ButtonCar4 @ 0xde8d58
 * void ContainerSelectCarOperUIController__OnClickCarP_ButtonCar4 (ContainerSelectCarOperUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerSelectCarOperUIController$$OnClickCarP_ButtonCar4
   void ContainerSelectCarOperUIController__OnClickCarP_ButtonCar4
   (ContainerSelectCarOperUIController_o* __this, const MethodInfo* method); */

void native_ContainerSelectCarOperUIController__OnClickCarP_ButtonCar4_de8d58(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if ((bRam0000000001346ec4 & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_car4_12f3d48);
    native_sub_43273c(&StringLiteral_car_button_car4_12f3d68);
    bRam0000000001346ec4 = 1;
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    native_UISprite__set_spriteName_c35c6c
              (*(long *)(param_1 + 0x88),_StringLiteral_car_button_car4_12f3d68,0);
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    puVar4 = (undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x60);
    *puVar4 = _StringLiteral_car4_12f3d48;
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



/* ContainerSelectCarOperUIController$$OnClickCarP_ButtonControl @ 0xde9018
 * void ContainerSelectCarOperUIController__OnClickCarP_ButtonControl (ContainerSelectCarOperUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072f0b0) */
/* WARNING: Removing unreachable block (ram,0x007394ec) */
/* WARNING: Removing unreachable block (ram,0x0072f0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerSelectCarOperUIController$$OnClickCarP_ButtonControl
   void ContainerSelectCarOperUIController__OnClickCarP_ButtonControl
   (ContainerSelectCarOperUIController_o* __this, const MethodInfo* method); */

ulong native_ContainerSelectCarOperUIController__OnClickCarP_ButtonControl_de9018(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  if ((bRam0000000001346ec5 & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_scene1_12f5f20);
    native_sub_43273c(&StringLiteral_scene2_12f5f28);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam0000000001346ec5 = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x88) =
       _StringLiteral__12eaac0;
  native_sub_4326e0();
  lVar6 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x70);
  if (lVar6 != 0) {
    uVar7 = native_System_String__Equals_af8bfc(lVar6,_StringLiteral_scene1_12f5f20,0);
    if ((uVar7 & 1) == 0) {
      if (((*(ushort *)(_PanelMainUIController_TypeInfo_12d5600 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
        native_sub_4327ec(_PanelMainUIController_TypeInfo_12d5600);
      }
      lVar6 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x70);
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
          if ((bRam000000000133f5f8 & 1) == 0) {
            native_sub_43273c(&ContainerScreenLoadingUIController_TypeInfo_12d3f80,0);
            native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
            native_sub_43273c(&StringLiteral_ContainerSelectCarOper_12ed270);
            native_sub_43273c(&StringLiteral_ContainerScreenLoading_12ed268);
            native_sub_43273c(&StringLiteral_SceneIndoor_12f0c60);
            bRam000000000133f5f8 = 1;
          }
          if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x10) =
               _StringLiteral_ContainerSelectCarOper_12ed270;
          native_sub_4326e0();
          if (((*(byte *)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0x133) >> 2 & 1) !=
               0) && (*(int *)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          **(undefined8 **)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0xb8) =
               _StringLiteral_SceneIndoor_12f0c60;
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
        if ((bRam000000000133f5f6 & 1) == 0) {
          native_sub_43273c(&ContainerScreenLoadingUIController_TypeInfo_12d3f80,0);
          native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
          native_sub_43273c(&StringLiteral_ContainerSelectCarOper_12ed270);
          native_sub_43273c(&StringLiteral_ContainerScreenLoading_12ed268);
          native_sub_43273c(&StringLiteral_SceneTrack_12f0c70);
          bRam000000000133f5f6 = 1;
        }
        if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x10) =
             _StringLiteral_ContainerSelectCarOper_12ed270;
        native_sub_4326e0();
        if (((*(byte *)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0x133) >> 2 & 1) != 0
            ) && (*(int *)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        **(undefined8 **)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0xb8) =
             _StringLiteral_SceneTrack_12f0c70;
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



/* ContainerSelectCarOperUIController$$OnClickCarP_ButtonDrive @ 0xde9184
 * void ContainerSelectCarOperUIController__OnClickCarP_ButtonDrive (ContainerSelectCarOperUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072f0b0) */
/* WARNING: Removing unreachable block (ram,0x007394ec) */
/* WARNING: Removing unreachable block (ram,0x0072f0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerSelectCarOperUIController$$OnClickCarP_ButtonDrive
   void ContainerSelectCarOperUIController__OnClickCarP_ButtonDrive
   (ContainerSelectCarOperUIController_o* __this, const MethodInfo* method); */

ulong native_ContainerSelectCarOperUIController__OnClickCarP_ButtonDrive_de9184(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  if ((bRam0000000001346ec6 & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_gyro_12f49e0);
    native_sub_43273c(&StringLiteral_scene1_12f5f20);
    native_sub_43273c(&StringLiteral_scene2_12f5f28);
    bRam0000000001346ec6 = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x88) =
       _StringLiteral_gyro_12f49e0;
  native_sub_4326e0();
  lVar6 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x70);
  if (lVar6 != 0) {
    uVar7 = native_System_String__Equals_af8bfc(lVar6,_StringLiteral_scene1_12f5f20,0);
    if ((uVar7 & 1) == 0) {
      if (((*(ushort *)(_PanelMainUIController_TypeInfo_12d5600 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
        native_sub_4327ec(_PanelMainUIController_TypeInfo_12d5600);
      }
      lVar6 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x70);
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
          if ((bRam000000000133f5f8 & 1) == 0) {
            native_sub_43273c(&ContainerScreenLoadingUIController_TypeInfo_12d3f80,0);
            native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
            native_sub_43273c(&StringLiteral_ContainerSelectCarOper_12ed270);
            native_sub_43273c(&StringLiteral_ContainerScreenLoading_12ed268);
            native_sub_43273c(&StringLiteral_SceneIndoor_12f0c60);
            bRam000000000133f5f8 = 1;
          }
          if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x10) =
               _StringLiteral_ContainerSelectCarOper_12ed270;
          native_sub_4326e0();
          if (((*(byte *)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0x133) >> 2 & 1) !=
               0) && (*(int *)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          **(undefined8 **)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0xb8) =
               _StringLiteral_SceneIndoor_12f0c60;
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
        if ((bRam000000000133f5f6 & 1) == 0) {
          native_sub_43273c(&ContainerScreenLoadingUIController_TypeInfo_12d3f80,0);
          native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
          native_sub_43273c(&StringLiteral_ContainerSelectCarOper_12ed270);
          native_sub_43273c(&StringLiteral_ContainerScreenLoading_12ed268);
          native_sub_43273c(&StringLiteral_SceneTrack_12f0c70);
          bRam000000000133f5f6 = 1;
        }
        if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x10) =
             _StringLiteral_ContainerSelectCarOper_12ed270;
        native_sub_4326e0();
        if (((*(byte *)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0x133) >> 2 & 1) != 0
            ) && (*(int *)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        **(undefined8 **)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0xb8) =
             _StringLiteral_SceneTrack_12f0c70;
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



/* ContainerSelectCarOperUIController$$OnClickCarP_ButtonHand @ 0xde92f0
 * void ContainerSelectCarOperUIController__OnClickCarP_ButtonHand (ContainerSelectCarOperUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072f0b0) */
/* WARNING: Removing unreachable block (ram,0x007394ec) */
/* WARNING: Removing unreachable block (ram,0x0072f0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerSelectCarOperUIController$$OnClickCarP_ButtonHand
   void ContainerSelectCarOperUIController__OnClickCarP_ButtonHand
   (ContainerSelectCarOperUIController_o* __this, const MethodInfo* method); */

ulong native_ContainerSelectCarOperUIController__OnClickCarP_ButtonHand_de92f0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  if ((bRam0000000001346ec7 & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_hand_12f4a18);
    native_sub_43273c(&StringLiteral_scene1_12f5f20);
    native_sub_43273c(&StringLiteral_scene2_12f5f28);
    bRam0000000001346ec7 = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x88) =
       _StringLiteral_hand_12f4a18;
  native_sub_4326e0();
  lVar6 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x70);
  if (lVar6 != 0) {
    uVar7 = native_System_String__Equals_af8bfc(lVar6,_StringLiteral_scene1_12f5f20,0);
    if ((uVar7 & 1) == 0) {
      if (((*(ushort *)(_PanelMainUIController_TypeInfo_12d5600 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
        native_sub_4327ec(_PanelMainUIController_TypeInfo_12d5600);
      }
      lVar6 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x70);
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
          if ((bRam000000000133f5f8 & 1) == 0) {
            native_sub_43273c(&ContainerScreenLoadingUIController_TypeInfo_12d3f80,0);
            native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
            native_sub_43273c(&StringLiteral_ContainerSelectCarOper_12ed270);
            native_sub_43273c(&StringLiteral_ContainerScreenLoading_12ed268);
            native_sub_43273c(&StringLiteral_SceneIndoor_12f0c60);
            bRam000000000133f5f8 = 1;
          }
          if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x10) =
               _StringLiteral_ContainerSelectCarOper_12ed270;
          native_sub_4326e0();
          if (((*(byte *)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0x133) >> 2 & 1) !=
               0) && (*(int *)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          **(undefined8 **)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0xb8) =
               _StringLiteral_SceneIndoor_12f0c60;
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
        if ((bRam000000000133f5f6 & 1) == 0) {
          native_sub_43273c(&ContainerScreenLoadingUIController_TypeInfo_12d3f80,0);
          native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
          native_sub_43273c(&StringLiteral_ContainerSelectCarOper_12ed270);
          native_sub_43273c(&StringLiteral_ContainerScreenLoading_12ed268);
          native_sub_43273c(&StringLiteral_SceneTrack_12f0c70);
          bRam000000000133f5f6 = 1;
        }
        if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x10) =
             _StringLiteral_ContainerSelectCarOper_12ed270;
        native_sub_4326e0();
        if (((*(byte *)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0x133) >> 2 & 1) != 0
            ) && (*(int *)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        **(undefined8 **)(_ContainerScreenLoadingUIController_TypeInfo_12d3f80 + 0xb8) =
             _StringLiteral_SceneTrack_12f0c70;
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



/* ContainerSelectCarOperUIController$$OnClickCarP_ButtonRoute @ 0xde945c
 * void ContainerSelectCarOperUIController__OnClickCarP_ButtonRoute (ContainerSelectCarOperUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072f0b0) */
/* WARNING: Removing unreachable block (ram,0x007394ec) */
/* WARNING: Removing unreachable block (ram,0x0072f0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerSelectCarOperUIController$$OnClickCarP_ButtonRoute
   void ContainerSelectCarOperUIController__OnClickCarP_ButtonRoute
   (ContainerSelectCarOperUIController_o* __this, const MethodInfo* method); */

long native_ContainerSelectCarOperUIController__OnClickCarP_ButtonRoute_de945c(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam0000000001346ec8 & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    bRam0000000001346ec8 = 1;
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



/* ContainerSelectCarOperUIController$$OnClickCarP_ButtonPrograme @ 0xde94c8
 * void ContainerSelectCarOperUIController__OnClickCarP_ButtonPrograme (ContainerSelectCarOperUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072f0b0) */
/* WARNING: Removing unreachable block (ram,0x007394ec) */
/* WARNING: Removing unreachable block (ram,0x0072f0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerSelectCarOperUIController$$OnClickCarP_ButtonPrograme
   void ContainerSelectCarOperUIController__OnClickCarP_ButtonPrograme
   (ContainerSelectCarOperUIController_o* __this, const MethodInfo* method); */

long native_ContainerSelectCarOperUIController__OnClickCarP_ButtonPrograme_de94c8(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam0000000001346ec9 & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    bRam0000000001346ec9 = 1;
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



/* ContainerSelectCarOperUIController$$Update @ 0xde9534
 * void ContainerSelectCarOperUIController__Update (ContainerSelectCarOperUIController_o* __this, const MethodInfo* method); */

/* ContainerSelectCarOperUIController$$Update
   void ContainerSelectCarOperUIController__Update (ContainerSelectCarOperUIController_o* __this,
   const MethodInfo* method); */

void native_ContainerSelectCarOperUIController__Update_de9534(void)

{
  return;
}



/* ContainerSelectCarOperUIController$$gethaomiao @ 0xde9538
 * int64_t ContainerSelectCarOperUIController__gethaomiao (ContainerSelectCarOperUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerSelectCarOperUIController$$gethaomiao
   int64_t ContainerSelectCarOperUIController__gethaomiao (ContainerSelectCarOperUIController_o*
   __this, const MethodInfo* method); */

long native_ContainerSelectCarOperUIController__gethaomiao_de9538(void)

{
  long lVar1;
  undefined8 uStack_18;
  
  if ((bRam0000000001346eca & 1) == 0) {
    native_sub_43273c(&System_DateTime_TypeInfo_12d42f8);
    bRam0000000001346eca = 1;
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



/* ContainerSelectCarOperUIController$$Awake @ 0xde95ec
 * void ContainerSelectCarOperUIController__Awake (ContainerSelectCarOperUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerSelectCarOperUIController$$Awake
   void ContainerSelectCarOperUIController__Awake (ContainerSelectCarOperUIController_o* __this,
   const MethodInfo* method); */

void native_ContainerSelectCarOperUIController__Awake_de95ec(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if ((bRam0000000001346ecb & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UISprite____12e2c18);
    native_sub_43273c(&StringLiteral_ButtonCarPResult_12ec890);
    native_sub_43273c(&StringLiteral_CarP_ButtonCar1_12ecf48);
    native_sub_43273c(&StringLiteral_CarP_ButtonRoute_12ecfa8);
    native_sub_43273c(&StringLiteral_CarP_ButtonCar4_12ecf60);
    native_sub_43273c(&StringLiteral_CarP_ButtonCar3_12ecf58);
    native_sub_43273c(&StringLiteral_CarP_ButtonBook_12ecf40);
    native_sub_43273c(&StringLiteral_bg_12f3ba0);
    native_sub_43273c(&StringLiteral_CarP_ButtonScene2_12ecfc8);
    native_sub_43273c(&StringLiteral_CarP_carbg_12ecfe0);
    native_sub_43273c(&StringLiteral_CarP_ButtonPrograme_12ecf98);
    native_sub_43273c(&StringLiteral_CarP_ButtonDrive_12ecf78);
    native_sub_43273c(&StringLiteral_CarP_ButtonCar2_12ecf50);
    native_sub_43273c(&StringLiteral_CarP_ButtonScene1_12ecfb8);
    native_sub_43273c(&StringLiteral_CarP_ButtonControl_12ecf68);
    native_sub_43273c(&StringLiteral_CarP_ButtonHand_12ecf88);
    native_sub_43273c(&StringLiteral_CarP_ButtonSetting_12ecfd8);
    bRam0000000001346ecb = 1;
  }
  lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if ((lVar4 != 0) &&
     (lVar4 = native_UnityEngine_Transform__Find_772c0c
                        (lVar4,_StringLiteral_ButtonCarPResult_12ec890,0), lVar4 != 0)) {
    uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
    *(undefined8 *)(param_1 + 0x80) = uVar5;
    native_sub_4326e0();
    lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if ((lVar4 != 0) &&
       (lVar4 = native_UnityEngine_Transform__Find_772c0c
                          (lVar4,_StringLiteral_CarP_ButtonSetting_12ecfd8,0), lVar4 != 0)) {
      uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
      *(undefined8 *)(param_1 + 0x18) = uVar5;
      native_sub_4326e0();
      lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
      if ((lVar4 != 0) &&
         (lVar4 = native_UnityEngine_Transform__Find_772c0c
                            (lVar4,_StringLiteral_CarP_ButtonBook_12ecf40,0), lVar4 != 0)) {
        uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
        *(undefined8 *)(param_1 + 0x20) = uVar5;
        native_sub_4326e0();
        lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
        if ((lVar4 != 0) &&
           (lVar4 = native_UnityEngine_Transform__Find_772c0c
                              (lVar4,_StringLiteral_CarP_ButtonControl_12ecf68,0), lVar4 != 0)) {
          uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
          *(undefined8 *)(param_1 + 0x28) = uVar5;
          native_sub_4326e0();
          lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
          if ((lVar4 != 0) &&
             (lVar4 = native_UnityEngine_Transform__Find_772c0c
                                (lVar4,_StringLiteral_CarP_ButtonDrive_12ecf78,0), lVar4 != 0)) {
            uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
            *(undefined8 *)(param_1 + 0x30) = uVar5;
            native_sub_4326e0();
            lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
            if ((lVar4 != 0) &&
               (lVar4 = native_UnityEngine_Transform__Find_772c0c
                                  (lVar4,_StringLiteral_CarP_ButtonHand_12ecf88,0), lVar4 != 0)) {
              uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
              *(undefined8 *)(param_1 + 0x38) = uVar5;
              native_sub_4326e0();
              lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
              if ((lVar4 != 0) &&
                 (lVar4 = native_UnityEngine_Transform__Find_772c0c
                                    (lVar4,_StringLiteral_CarP_ButtonRoute_12ecfa8,0), lVar4 != 0))
              {
                uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
                *(undefined8 *)(param_1 + 0x40) = uVar5;
                native_sub_4326e0();
                lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
                if ((lVar4 != 0) &&
                   (lVar4 = native_UnityEngine_Transform__Find_772c0c
                                      (lVar4,_StringLiteral_CarP_ButtonPrograme_12ecf98,0),
                   lVar4 != 0)) {
                  uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
                  *(undefined8 *)(param_1 + 0x48) = uVar5;
                  native_sub_4326e0();
                  lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
                  if ((lVar4 != 0) &&
                     (lVar4 = native_UnityEngine_Transform__Find_772c0c
                                        (lVar4,_StringLiteral_CarP_ButtonScene1_12ecfb8,0),
                     lVar4 != 0)) {
                    uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
                    *(undefined8 *)(param_1 + 0x50) = uVar5;
                    native_sub_4326e0();
                    lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
                    if ((lVar4 != 0) &&
                       (lVar4 = native_UnityEngine_Transform__Find_772c0c
                                          (lVar4,_StringLiteral_CarP_ButtonScene2_12ecfc8,0),
                       lVar4 != 0)) {
                      uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
                      *(undefined8 *)(param_1 + 0x58) = uVar5;
                      native_sub_4326e0();
                      lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
                      if ((lVar4 != 0) &&
                         (lVar4 = native_UnityEngine_Transform__Find_772c0c
                                            (lVar4,_StringLiteral_CarP_ButtonCar1_12ecf48,0),
                         lVar4 != 0)) {
                        uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
                        *(undefined8 *)(param_1 + 0x60) = uVar5;
                        native_sub_4326e0();
                        lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
                        if ((lVar4 != 0) &&
                           (lVar4 = native_UnityEngine_Transform__Find_772c0c
                                              (lVar4,_StringLiteral_CarP_ButtonCar2_12ecf50,0),
                           lVar4 != 0)) {
                          uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
                          *(undefined8 *)(param_1 + 0x68) = uVar5;
                          native_sub_4326e0();
                          lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
                          if ((lVar4 != 0) &&
                             (lVar4 = native_UnityEngine_Transform__Find_772c0c
                                                (lVar4,_StringLiteral_CarP_ButtonCar3_12ecf58,0),
                             lVar4 != 0)) {
                            uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
                            *(undefined8 *)(param_1 + 0x70) = uVar5;
                            native_sub_4326e0();
                            lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
                            if ((lVar4 != 0) &&
                               (lVar4 = native_UnityEngine_Transform__Find_772c0c
                                                  (lVar4,_StringLiteral_CarP_ButtonCar4_12ecf60,0),
                               lVar4 != 0)) {
                              uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
                              *(undefined8 *)(param_1 + 0x78) = uVar5;
                              native_sub_4326e0();
                              lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
                              if ((lVar4 != 0) &&
                                 (lVar4 = native_UnityEngine_Transform__Find_772c0c
                                                    (lVar4,_StringLiteral_CarP_carbg_12ecfe0,0),
                                 lVar4 != 0)) {
                                uVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                                  (lVar4,
                                                  _Method_UnityEngine_Component_GetComponent_UISprite____12e2c18
                                                  );
                                *(undefined8 *)(param_1 + 0x88) = uVar5;
                                native_sub_4326e0((undefined8 *)(param_1 + 0x88),uVar5);
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
                                    *(undefined8 *)(param_1 + 0x90) = uVar5;
                                    native_sub_4326e0((undefined8 *)(param_1 + 0x90),uVar5);
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
                                      puVar6 = (undefined8 *)(param_1 + 0x98);
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



/* ContainerSelectCarOperUIController$$.ctor @ 0xde9b40
 * void ContainerSelectCarOperUIController___ctor (ContainerSelectCarOperUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerSelectCarOperUIController$$.ctor
   void ContainerSelectCarOperUIController___ctor (ContainerSelectCarOperUIController_o* __this,
   const MethodInfo* method); */

undefined1  [16] native_ContainerSelectCarOperUIController___ctor_de9b40(ulong param_1)

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


