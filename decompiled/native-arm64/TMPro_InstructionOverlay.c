/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.Examples.TMPro_InstructionOverlay$$Awake @ 0x6df23c
 * void TMPro_Examples_TMPro_InstructionOverlay__Awake (TMPro_Examples_TMPro_InstructionOverlay_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TMPro_InstructionOverlay$$Awake
   void TMPro_Examples_TMPro_InstructionOverlay__Awake (TMPro_Examples_TMPro_InstructionOverlay_o*
   __this, const MethodInfo* method); */

void native_TMPro_Examples_TMPro_InstructionOverlay__Awake_6df23c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  if ((bRam000000000133f374 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_TextMeshPro____12e48a8);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_TextContainer____12e4a60);
    native_sub_43273c(&UnityEngine_GameObject_TypeInfo_12d47d8);
    native_sub_43273c(&Method_UnityEngine_Resources_Load_Material____12e6330);
    native_sub_43273c(&Method_UnityEngine_Resources_Load_TMP_FontAsset____12e6340);
    native_sub_43273c(&
                      StringLiteral_Camera_Control_____ffff00_Shift___RMB___color_Zoom_____ffff00_Mouse_wheel__12ecb78
                     );
    native_sub_43273c(&StringLiteral_Fonts___Materials_LiberationSans_SDF___Overlay_12ee038);
    native_sub_43273c(&StringLiteral_Frame_Counter_12ee0c8);
    native_sub_43273c(&StringLiteral_Fonts___Materials_LiberationSans_SDF_12ee020);
    bRam000000000133f374 = 1;
  }
  uVar1 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if ((uVar1 & 1) != 0) {
    uVar2 = native_UnityEngine_Camera__get_main_8d93c0(0);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    native_sub_4326e0();
    lVar3 = native_sub_432808(_UnityEngine_GameObject_TypeInfo_12d47d8);
    native_UnityEngine_GameObject___ctor_8de828(lVar3,_StringLiteral_Frame_Counter_12ee0c8,0);
    if (lVar3 != 0) {
      lVar4 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0);
      plVar5 = (long *)(param_1 + 0x30);
      *plVar5 = lVar4;
      native_sub_4326e0(plVar5,lVar4);
      if (*(long *)(param_1 + 0x38) != 0) {
        lVar4 = *plVar5;
        uVar2 = native_UnityEngine_Component__get_transform_8da62c(*(long *)(param_1 + 0x38),0);
        if (lVar4 != 0) {
          native_UnityEngine_Transform__set_parent_771f18(lVar4,uVar2,0);
          lVar4 = *plVar5;
          native_UnityEngine_Quaternion__get_identity_7628fc(0);
          if (lVar4 != 0) {
            native_UnityEngine_Transform__set_localRotation_771984(lVar4,0);
            lVar4 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                              (lVar3,
                               _Method_UnityEngine_GameObject_AddComponent_TextMeshPro____12e48a8);
            plVar5 = (long *)(param_1 + 0x20);
            *plVar5 = lVar4;
            native_sub_4326e0(plVar5,lVar4);
            lVar4 = *plVar5;
            uVar2 = native_UnityEngine_Resources__Load_Font__4a7de0
                              (_StringLiteral_Fonts___Materials_LiberationSans_SDF_12ee020,
                               _Method_UnityEngine_Resources_Load_TMP_FontAsset____12e6340);
            if (lVar4 != 0) {
              native_TMPro_TMP_Text__set_font_4ba17c(lVar4,uVar2,0);
              plVar6 = (long *)*plVar5;
              uVar2 = native_UnityEngine_Resources__Load_Font__4a7de0
                                (_StringLiteral_Fonts___Materials_LiberationSans_SDF___Overlay_12ee038
                                 ,_Method_UnityEngine_Resources_Load_Material____12e6330);
              if (plVar6 != (long *)0x0) {
                (**(code **)(*plVar6 + 0x578))(plVar6,uVar2,*(undefined8 *)(*plVar6 + 0x580));
                if (*plVar5 != 0) {
                  native_TMPro_TMP_Text__set_fontSize_4bae20(0x41f00000,*plVar5,0);
                  if (*plVar5 != 0) {
                    native_TMPro_TMP_Text__set_isOverlay_4bbb54(*plVar5,1,0);
                    uVar2 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                      (lVar3,
                                       _Method_UnityEngine_GameObject_GetComponent_TextContainer____12e4a60
                                      );
                    *(undefined8 *)(param_1 + 0x28) = uVar2;
                    native_sub_4326e0();
                    native_TMPro_Examples_TMPro_InstructionOverlay__Set_FrameCounter_Position_6df4bc
                              (param_1,*(undefined4 *)(param_1 + 0x18));
                    plVar5 = *(long **)(param_1 + 0x20);
                    if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006df4a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (**(code **)(*plVar5 + 0x558))
                                (plVar5,
                                 _StringLiteral_Camera_Control_____ffff00_Shift___RMB___color_Zoom_____ffff00_Mouse_wheel__12ecb78
                                 ,*(undefined8 *)(*plVar5 + 0x560));
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
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return;
}



/* TMPro.Examples.TMPro_InstructionOverlay$$Set_FrameCounter_Position @ 0x6df4bc
 * void TMPro_Examples_TMPro_InstructionOverlay__Set_FrameCounter_Position (TMPro_Examples_TMPro_InstructionOverlay_o* __this, int32_t anchor_position, const MethodInfo* method); */

/* TMPro.Examples.TMPro_InstructionOverlay$$Set_FrameCounter_Position
   void TMPro_Examples_TMPro_InstructionOverlay__Set_FrameCounter_Position
   (TMPro_Examples_TMPro_InstructionOverlay_o* __this, int32_t anchor_position, const MethodInfo*
   method); */

void native_TMPro_Examples_TMPro_InstructionOverlay__Set_FrameCounter_Position_6df4bc
               (long param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  switch(param_2) {
  case 0:
    if (*(long *)(param_1 + 0x28) == 0) goto code_r0x006df5e0;
    native_TMPro_TextContainer__set_anchorPosition_6aeb04(*(long *)(param_1 + 0x28),0,0);
    lVar1 = *(long *)(param_1 + 0x38);
    if (lVar1 == 0) goto code_r0x006df5e0;
    lVar2 = *(long *)(param_1 + 0x30);
    uStack_2c = 0x3f800000;
    uVar3 = 0;
    break;
  case 1:
    if (*(long *)(param_1 + 0x28) == 0) goto code_r0x006df5e0;
    native_TMPro_TextContainer__set_anchorPosition_6aeb04(*(long *)(param_1 + 0x28),6,0);
    lVar1 = *(long *)(param_1 + 0x38);
    if (lVar1 == 0) goto code_r0x006df5e0;
    lVar2 = *(long *)(param_1 + 0x30);
    uVar3 = 0;
    goto code_r0x006df5b0;
  case 2:
    if (*(long *)(param_1 + 0x28) == 0) goto code_r0x006df5e0;
    native_TMPro_TextContainer__set_anchorPosition_6aeb04(*(long *)(param_1 + 0x28),2,0);
    lVar1 = *(long *)(param_1 + 0x38);
    if (lVar1 == 0) goto code_r0x006df5e0;
    lVar2 = *(long *)(param_1 + 0x30);
    uVar3 = 0x3f800000;
    uStack_2c = 0x3f800000;
    break;
  case 3:
    if (*(long *)(param_1 + 0x28) == 0) goto code_r0x006df5e0;
    native_TMPro_TextContainer__set_anchorPosition_6aeb04(*(long *)(param_1 + 0x28),8,0);
    lVar1 = *(long *)(param_1 + 0x38);
    if (lVar1 == 0) goto code_r0x006df5e0;
    lVar2 = *(long *)(param_1 + 0x30);
    uVar3 = 0x3f800000;
code_r0x006df5b0:
    uStack_2c = 0;
    break;
  default:
    return;
  }
  uVar4 = 0x42c80000;
  uStack_30 = native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(uVar3,lVar1,0);
  if (lVar2 != 0) {
    uStack_28 = uVar4;
    if (pcRam000000000133fed8 == (code *)0x0) {
      pcRam000000000133fed8 = (code *)native_sub_4326f0(&UNK_00e2ad18,0);
    }
    (*pcRam000000000133fed8)(lVar2,&uStack_30);
    return;
  }
code_r0x006df5e0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.TMPro_InstructionOverlay$$.ctor @ 0x6df5e4
 * void TMPro_Examples_TMPro_InstructionOverlay___ctor (TMPro_Examples_TMPro_InstructionOverlay_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TMPro_InstructionOverlay$$.ctor
   void TMPro_Examples_TMPro_InstructionOverlay___ctor (TMPro_Examples_TMPro_InstructionOverlay_o*
   __this, const MethodInfo* method); */

undefined1  [16] native_TMPro_Examples_TMPro_InstructionOverlay___ctor_6df5e4(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)(param_1 + 0x18) = 1;
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


