/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* ControlSliderFrameMax$$Start @ 0xdeb810
 * void ControlSliderFrameMax__Start (ControlSliderFrameMax_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ControlSliderFrameMax$$Start
   void ControlSliderFrameMax__Start (ControlSliderFrameMax_o* __this, const MethodInfo* method); */

void native_ControlSliderFrameMax__Start_deb810(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if ((bRam0000000001346edd & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UISlider____12e2c10);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_CarRouteY_12ecff0);
    native_sub_43273c(&StringLiteral_x___7_5M_12f6ba0);
    native_sub_43273c(&StringLiteral_y___4_0M_12f6e10);
    native_sub_43273c(&StringLiteral_CarRouteX_12ecfe8);
    bRam0000000001346edd = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(char *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xbc) != '\0') {
    lVar4 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_CarRouteX_12ecfe8,0);
    if ((lVar4 == 0) ||
       (lVar4 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0), lVar4 == 0))
    goto LAB_00deb99c;
    lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (lVar4,_Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0);
    if (lVar4 == 0) goto LAB_00deb99c;
    native_UILabel__set_text_ae81a8(lVar4,_StringLiteral_x___7_5M_12f6ba0,0);
    lVar4 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_CarRouteY_12ecff0,0);
    if (((lVar4 == 0) ||
        (lVar4 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0), lVar4 == 0)) ||
       (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                          (lVar4,_Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0),
       lVar4 == 0)) goto LAB_00deb99c;
    native_UILabel__set_text_ae81a8(lVar4,_StringLiteral_y___4_0M_12f6e10,0);
  }
  uVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_UISlider____12e2c10);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  native_sub_4326e0(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar5 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (*(long *)(param_1 + 0x20),
                       _Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0);
    puVar6 = (undefined8 *)(param_1 + 0x30);
    *puVar6 = uVar5;
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
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
LAB_00deb99c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ControlSliderFrameMax$$RoundToDecimalPlaces @ 0xdeb9a0
 * float ControlSliderFrameMax__RoundToDecimalPlaces (ControlSliderFrameMax_o* __this, float originalNumber, int32_t decimalPlaces, const MethodInfo* method); */

/* ControlSliderFrameMax$$RoundToDecimalPlaces
   float ControlSliderFrameMax__RoundToDecimalPlaces (ControlSliderFrameMax_o* __this, float
   originalNumber, int32_t decimalPlaces, const MethodInfo* method); */

float native_ControlSliderFrameMax__RoundToDecimalPlaces_deb9a0
                (float param_1,undefined8 param_2,int param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  double dStack_28;
  
  fVar1 = (float)func_0x002c89c0(0x41200000,(float)param_3);
  param_1 = fVar1 * param_1;
  dVar3 = (double)func_0x002c9600((double)param_1,&dStack_28);
  if (0.0 <= param_1) {
    if (dVar3 != 0.5) {
      fVar2 = (float)(int)(param_1 + 0.5);
      goto LAB_00deba3c;
    }
    fVar4 = 1.0;
  }
  else {
    if (dVar3 != -0.5) {
      fVar2 = (float)(int)(param_1 + -0.5);
      goto LAB_00deba3c;
    }
    fVar4 = -1.0;
  }
  fVar2 = (float)dStack_28;
  if (((long)dStack_28 & 1U) != 0) {
    fVar2 = (float)dStack_28 + fVar4;
  }
LAB_00deba3c:
  return fVar2 / fVar1;
}



/* ControlSliderFrameMax$$Update @ 0xdeba50
 * void ControlSliderFrameMax__Update (ControlSliderFrameMax_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ControlSliderFrameMax$$Update
   void ControlSliderFrameMax__Update (ControlSliderFrameMax_o* __this, const MethodInfo* method);
    */

void native_ControlSliderFrameMax__Update_deba50(long param_1)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  float fVar7;
  float fStack_34;
  
  if ((bRam0000000001346ede & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_______0_01__12f7438);
    native_sub_43273c(&StringLiteral_One_square____12f0300);
    native_sub_43273c(&StringLiteral___12f7510);
    native_sub_43273c(&StringLiteral_M_12ef690);
    native_sub_43273c(&StringLiteral_One_square___0_01M_12f0308);
    native_sub_43273c(&StringLiteral________12f7430);
    bRam0000000001346ede = 1;
  }
  fStack_34 = 0.0;
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar3 = native_UIProgressBar__get_value_c2b6f0(*(long *)(param_1 + 0x18),0);
    fStack_34 = (float)native_ControlSliderFrameMax__RoundToDecimalPlaces_deb9a0(uVar3,2);
    if (fStack_34 == 0.0) {
      if (((*(ushort *)(_PanelMainUIController_TypeInfo_12d5600 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      if (*(long *)(param_1 + 0x30) != 0) {
        if (*(char *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xbc) == '\0') {
          puVar5 = (undefined8 *)&StringLiteral_______0_01__12f7438;
        }
        else {
          puVar5 = (undefined8 *)&StringLiteral_One_square___0_01M_12f0308;
        }
        native_UILabel__set_text_ae81a8(*(long *)(param_1 + 0x30),*puVar5,0);
        if ((*(long *)(param_1 + 0x28) != 0) &&
           (lVar4 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_1 + 0x28),0)
           , lVar4 != 0)) {
          fVar7 = 1.0;
          native_UnityEngine_Transform__set_localScale_771e30
                    (0x3f800000,0x3f800000,0x3f800000,lVar4,0);
          bVar2 = *(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133);
joined_r0x00debc54:
          if (((bVar2 >> 2 & 1) != 0) &&
             (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          *(float *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x48) = fVar7;
          return;
        }
      }
    }
    else {
      if (((*(ushort *)(_PanelMainUIController_TypeInfo_12d5600 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar4 = *(long *)(param_1 + 0x30);
      cVar1 = *(char *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xbc);
      uVar3 = native_System_Single__ToString_af8928(&fStack_34,0);
      if (cVar1 == '\0') {
        puVar5 = (undefined8 *)&StringLiteral________12f7430;
        puVar6 = (undefined8 *)&StringLiteral___12f7510;
      }
      else {
        puVar5 = (undefined8 *)&StringLiteral_One_square____12f0300;
        puVar6 = (undefined8 *)&StringLiteral_M_12ef690;
      }
      uVar3 = native_System_String__Concat_afc654(*puVar5,uVar3,*puVar6,0);
      if (lVar4 != 0) {
        native_UILabel__set_text_ae81a8(lVar4,uVar3,0);
        if ((*(long *)(param_1 + 0x28) != 0) &&
           (lVar4 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_1 + 0x28),0)
           , lVar4 != 0)) {
          fVar7 = fStack_34 + 1.0;
          native_UnityEngine_Transform__set_localScale_771e30(fVar7,fVar7,fVar7,lVar4,0);
          bVar2 = *(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133);
          fVar7 = fStack_34 * 40.0;
          goto joined_r0x00debc54;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ControlSliderFrameMax$$.ctor @ 0xdebc88
 * void ControlSliderFrameMax___ctor (ControlSliderFrameMax_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ControlSliderFrameMax$$.ctor
   void ControlSliderFrameMax___ctor (ControlSliderFrameMax_o* __this, const MethodInfo* method); */

undefined1  [16] native_ControlSliderFrameMax___ctor_debc88(ulong param_1)

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


