/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* AnimateTiledTexture$$RegisterCallback @ 0x5622d8
 * void AnimateTiledTexture__RegisterCallback (AnimateTiledTexture_o* __this, AnimateTiledTexture_VoidEvent_o* cbFunction, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimateTiledTexture$$RegisterCallback
   void AnimateTiledTexture__RegisterCallback (AnimateTiledTexture_o* __this,
   AnimateTiledTexture_VoidEvent_o* cbFunction, const MethodInfo* method); */

void native_AnimateTiledTexture__RegisterCallback_5622d8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  
  if ((bRam000000000133ea1f & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_AnimateTiledTexture_VoidEvent__Add___12dd658
                     );
    native_sub_43273c(&
                      StringLiteral_AnimateTiledTexture__You_are_attempting_to_register_a_callback_but_the_events_of_this_object_are_not_enabled__12ec408
                     );
    bRam000000000133ea1f = 1;
  }
  if (*(char *)(param_1 + 0x3e) == '\0') {
    if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = 
    _StringLiteral_AnimateTiledTexture__You_are_attempting_to_register_a_callback_but_the_events_of_this_object_are_not_enabled__12ec408
    ;
    uVar4 = 0;
    if ((bRam0000000001340b57 & 1) == 0) {
      native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338,0);
      native_sub_43273c(&UnityEngine_ILogger_TypeInfo_12d4c10);
      bRam0000000001340b57 = 1;
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
    plVar9 = *(long **)(*(long *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xb8) + 8);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    lVar1 = *plVar9;
    if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _UnityEngine_ILogger_TypeInfo_12d4c10) {
          puVar2 = (undefined8 *)(lVar1 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto code_r0x008dcba4;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar1 + 0x12a));
    }
    puVar2 = (undefined8 *)native_sub_3c9b34(plVar9,_UnityEngine_ILogger_TypeInfo_12d4c10,2);
code_r0x008dcba4:
                    /* WARNING: Could not recover jumptable at 0x008dcbc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(plVar9,2,uVar3,puVar2[1]);
    return;
  }
  lVar1 = *(long *)(param_1 + 0x60);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar6 = *(long *)(lVar1 + 0x10);
  if (lVar6 != 0) {
    uVar5 = *(uint *)(lVar1 + 0x18);
    if (uVar5 == *(uint *)(lVar6 + 0x18)) {
      (*(code *)**(undefined8 **)
                  (*(long *)(*(long *)(
                                      _Method_System_Collections_Generic_List_AnimateTiledTexture_VoidEvent__Add___12dd658
                                      + 0x18) + 0xc0) + 0x60))(lVar1,uVar5 + 1);
      uVar5 = *(uint *)(lVar1 + 0x18);
      lVar6 = *(long *)(lVar1 + 0x10);
      *(uint *)(lVar1 + 0x18) = uVar5 + 1;
      if (lVar6 == 0) goto code_r0x00d40c5c;
    }
    else {
      *(uint *)(lVar1 + 0x18) = uVar5 + 1;
    }
    if (uVar5 < *(uint *)(lVar6 + 0x18)) {
      puVar2 = (undefined8 *)(lVar6 + (long)(int)uVar5 * 8 + 0x20);
      *puVar2 = param_2;
      native_sub_4326e0(puVar2,param_2);
      *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
      return;
    }
    uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar3,0);
  }
code_r0x00d40c5c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* AnimateTiledTexture$$UnRegisterCallback @ 0x56239c
 * void AnimateTiledTexture__UnRegisterCallback (AnimateTiledTexture_o* __this, AnimateTiledTexture_VoidEvent_o* cbFunction, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimateTiledTexture$$UnRegisterCallback
   void AnimateTiledTexture__UnRegisterCallback (AnimateTiledTexture_o* __this,
   AnimateTiledTexture_VoidEvent_o* cbFunction, const MethodInfo* method); */

ulong native_AnimateTiledTexture__UnRegisterCallback_56239c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  
  if ((bRam000000000133ea20 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_AnimateTiledTexture_VoidEvent__Remove___12dd660
                     );
    native_sub_43273c(&
                      StringLiteral_AnimateTiledTexture__You_are_attempting_to_un_register_a_callback_but_the_events_of_this_object_are_not_enabled__12ec410
                     );
    bRam000000000133ea20 = 1;
  }
  lVar6 = _Method_System_Collections_Generic_List_AnimateTiledTexture_VoidEvent__Remove___12dd660;
  if (*(char *)(param_1 + 0x3e) != '\0') {
    lVar3 = *(long *)(param_1 + 0x60);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810(0,param_2);
    }
    iVar2 = (*(code *)**(undefined8 **)
                        (*(long *)(*(long *)(
                                            _Method_System_Collections_Generic_List_AnimateTiledTexture_VoidEvent__Remove___12dd660
                                            + 0x18) + 0xc0) + 0xd8))();
    if (-1 < iVar2) {
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar6 + 0x18) + 0xc0) + 0xe8))(lVar3,iVar2);
    }
    return (ulong)(-1 < iVar2);
  }
  if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = 
  _StringLiteral_AnimateTiledTexture__You_are_attempting_to_un_register_a_callback_but_the_events_of_this_object_are_not_enabled__12ec410
  ;
  uVar5 = 0;
  if ((bRam0000000001340b57 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338,0);
    native_sub_43273c(&UnityEngine_ILogger_TypeInfo_12d4c10);
    bRam0000000001340b57 = 1;
    uVar5 = extraout_x1;
  }
  if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
    native_sub_4327ec();
    uVar5 = extraout_x1_00;
  }
  if (cRam000000000134112a == '\0') {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338,uVar5);
    cRam000000000134112a = '\x01';
  }
  if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  plVar9 = *(long **)(*(long *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xb8) + 8);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar6 = *plVar9;
  if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
    uVar7 = 0;
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == _UnityEngine_ILogger_TypeInfo_12d4c10) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
        goto code_r0x008dcba4;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
  }
  puVar4 = (undefined8 *)native_sub_3c9b34(plVar9,_UnityEngine_ILogger_TypeInfo_12d4c10,2);
code_r0x008dcba4:
                    /* WARNING: Could not recover jumptable at 0x008dcbc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (*(code *)*puVar4)(plVar9,2,uVar1,puVar4[1]);
  return uVar7;
}



/* AnimateTiledTexture$$Play @ 0x562460
 * void AnimateTiledTexture__Play (AnimateTiledTexture_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimateTiledTexture$$Play
   void AnimateTiledTexture__Play (AnimateTiledTexture_o* __this, const MethodInfo* method); */

void native_AnimateTiledTexture__Play_562460(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133ea21 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Renderer____12e2ad8);
    native_sub_43273c(&StringLiteral_updateTiling_12f6908);
    bRam000000000133ea21 = 1;
  }
  if (*(char *)(param_1 + 0x59) != '\0') {
    native_UnityEngine_MonoBehaviour__StopCoroutine_8e955c
              (param_1,_StringLiteral_updateTiling_12f6908,0);
    *(undefined1 *)(param_1 + 0x59) = 0;
  }
  lVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_Renderer____12e2ad8);
  if (lVar1 != 0) {
    native_UnityEngine_Renderer__set_enabled_768bbc(lVar1,1,0);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x18);
    lVar1 = native_AnimateTiledTexture__updateTiling_562510(param_1);
    if (lVar1 == 0) {
      native_sub_432740(&System_NullReferenceException_TypeInfo_12d5498,0,0);
      uVar3 = native_sub_432808();
      uVar4 = native_sub_432740(&StringLiteral_routine_is_null_12f5ec0);
      native_System_NullReferenceException___ctor_ad2894(uVar3,uVar4,0);
    }
    else {
      if (pcRam0000000001340fe8 == (code *)0x0) {
        pcRam0000000001340fe8 = (code *)native_sub_4326f0(&UNK_00e2f589);
      }
      uVar2 = (*pcRam0000000001340fe8)(param_1);
      if ((uVar2 & 1) != 0) {
        if (pcRam0000000001340ff8 == (code *)0x0) {
          pcRam0000000001340ff8 = (code *)native_sub_4326f0(&UNK_00e2f61c);
        }
                    /* WARNING: Could not recover jumptable at 0x008e91f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000001340ff8)(param_1,lVar1);
        return;
      }
      native_sub_432740(&System_ArgumentException_TypeInfo_12d3800);
      uVar3 = native_sub_432808();
      uVar4 = native_sub_432740(&
                                StringLiteral_Coroutines_can_only_be_stopped_on_a_MonoBehaviour_12ed328
                               );
      native_System_ArgumentException___ctor_953858(uVar3,uVar4,0);
    }
    uVar4 = native_sub_432740(&Method_UnityEngine_MonoBehaviour_StartCoroutine___12e55d8);
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar3,uVar4);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* AnimateTiledTexture$$ChangeMaterial @ 0x562588
 * void AnimateTiledTexture__ChangeMaterial (AnimateTiledTexture_o* __this, UnityEngine_Material_o* newMaterial, bool newInstance, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimateTiledTexture$$ChangeMaterial
   void AnimateTiledTexture__ChangeMaterial (AnimateTiledTexture_o* __this, UnityEngine_Material_o*
   newMaterial, bool newInstance, const MethodInfo* method); */

void native_AnimateTiledTexture__ChangeMaterial_562588
               (long param_1,undefined8 param_2,ulong param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133ea22 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Renderer____12e2ad8);
    native_sub_43273c(&UnityEngine_Material_TypeInfo_12d51a8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral__MainTex_12f3608);
    bRam000000000133ea22 = 1;
  }
  if ((param_3 & 1) == 0) {
    lVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_1,_Method_UnityEngine_Component_GetComponent_Renderer____12e2ad8);
    if (lVar2 == 0) goto LAB_00562734;
    native_UnityEngine_Renderer__set_sharedMaterial_768f9c(lVar2,param_2,0);
  }
  else {
    if (*(char *)(param_1 + 0x58) != '\0') {
      lVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (param_1,_Method_UnityEngine_Component_GetComponent_Renderer____12e2ad8);
      if (lVar2 == 0) goto LAB_00562734;
      uVar3 = native_UnityEngine_Renderer__get_sharedMaterial_768f5c(lVar2,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      native_UnityEngine_Object__Destroy_8ea574(uVar3,0);
    }
    uVar3 = native_sub_432808(_UnityEngine_Material_TypeInfo_12d51a8);
    native_UnityEngine_Material___ctor_8e2f50(uVar3,param_2,0);
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    native_sub_4326e0((undefined8 *)(param_1 + 0x50),uVar3);
    lVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_1,_Method_UnityEngine_Component_GetComponent_Renderer____12e2ad8);
    if (lVar2 == 0) goto LAB_00562734;
    native_UnityEngine_Renderer__set_sharedMaterial_768f9c(lVar2,*(undefined8 *)(param_1 + 0x50),0);
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  uVar4 = NEON_fmov(0x3f800000,4);
  uVar3 = NEON_scvtf(*(undefined8 *)(param_1 + 0x18),4);
  *(ulong *)(param_1 + 0x48) =
       CONCAT44(((float)((ulong)uVar4 >> 0x20) / (float)((ulong)uVar3 >> 0x20)) /
                (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) -
                (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20),
                ((float)uVar4 / (float)uVar3) / (float)*(undefined8 *)(param_1 + 0x20) -
                (float)*(undefined8 *)(param_1 + 0x30));
  lVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_Renderer____12e2ad8);
  if ((lVar2 != 0) &&
     (lVar2 = native_UnityEngine_Renderer__get_sharedMaterial_768f5c(lVar2,0), lVar2 != 0)) {
    uVar1 = native_UnityEngine_Shader__PropertyToID_76b308(_StringLiteral__MainTex_12f3608,0,0);
    if (pcRam0000000001340e50 == (code *)0x0) {
      pcRam0000000001340e50 = (code *)native_sub_4326f0(&UNK_00e2ea7d);
    }
    (*pcRam0000000001340e50)(lVar2,uVar1,&stack0xffffffffffffffd8);
    return;
  }
LAB_00562734:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* AnimateTiledTexture$$Awake @ 0x56275c
 * void AnimateTiledTexture__Awake (AnimateTiledTexture_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimateTiledTexture$$Awake
   void AnimateTiledTexture__Awake (AnimateTiledTexture_o* __this, const MethodInfo* method); */

void native_AnimateTiledTexture__Awake_56275c(long param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((bRam000000000133ea23 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Renderer____12e2ad8);
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_AnimateTiledTexture_VoidEvent___ctor___12dd650
                     );
    native_sub_43273c(&
                      System_Collections_Generic_List_AnimateTiledTexture_VoidEvent__TypeInfo_12d2cb0
                     );
    bRam000000000133ea23 = 1;
  }
  if (*(char *)(param_1 + 0x3e) != '\0') {
    uVar4 = native_sub_432808(
                             _System_Collections_Generic_List_AnimateTiledTexture_VoidEvent__TypeInfo_12d2cb0
                             );
    native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
              (uVar4,
               _Method_System_Collections_Generic_List_AnimateTiledTexture_VoidEvent___ctor___12dd650
              );
    *(undefined8 *)(param_1 + 0x60) = uVar4;
    native_sub_4326e0((undefined8 *)(param_1 + 0x60),uVar4);
  }
  lVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_Renderer____12e2ad8);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar4 = native_UnityEngine_Renderer__get_sharedMaterial_768f5c(lVar5,0);
  bVar1 = *(byte *)(param_1 + 0x40);
  if ((bRam000000000133ea22 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Renderer____12e2ad8);
    native_sub_43273c(&UnityEngine_Material_TypeInfo_12d51a8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral__MainTex_12f3608);
    bRam000000000133ea22 = 1;
  }
  if ((bVar1 & 1) == 0) {
    lVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_1,_Method_UnityEngine_Component_GetComponent_Renderer____12e2ad8);
    if (lVar5 == 0) goto LAB_00562734;
    native_UnityEngine_Renderer__set_sharedMaterial_768f9c(lVar5,uVar4,0);
  }
  else {
    if (*(char *)(param_1 + 0x58) != '\0') {
      lVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (param_1,_Method_UnityEngine_Component_GetComponent_Renderer____12e2ad8);
      if (lVar5 == 0) goto LAB_00562734;
      uVar3 = native_UnityEngine_Renderer__get_sharedMaterial_768f5c(lVar5,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      native_UnityEngine_Object__Destroy_8ea574(uVar3,0);
    }
    uVar3 = native_sub_432808(_UnityEngine_Material_TypeInfo_12d51a8);
    native_UnityEngine_Material___ctor_8e2f50(uVar3,uVar4,0);
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    native_sub_4326e0((undefined8 *)(param_1 + 0x50),uVar3);
    lVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_1,_Method_UnityEngine_Component_GetComponent_Renderer____12e2ad8);
    if (lVar5 == 0) goto LAB_00562734;
    native_UnityEngine_Renderer__set_sharedMaterial_768f9c(lVar5,*(undefined8 *)(param_1 + 0x50),0);
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  uVar3 = NEON_fmov(0x3f800000,4);
  uVar4 = NEON_scvtf(*(undefined8 *)(param_1 + 0x18),4);
  *(ulong *)(param_1 + 0x48) =
       CONCAT44(((float)((ulong)uVar3 >> 0x20) / (float)((ulong)uVar4 >> 0x20)) /
                (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) -
                (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20),
                ((float)uVar3 / (float)uVar4) / (float)*(undefined8 *)(param_1 + 0x20) -
                (float)*(undefined8 *)(param_1 + 0x30));
  lVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_Renderer____12e2ad8);
  if ((lVar5 != 0) &&
     (lVar5 = native_UnityEngine_Renderer__get_sharedMaterial_768f5c(lVar5,0), lVar5 != 0)) {
    uVar2 = native_UnityEngine_Shader__PropertyToID_76b308(_StringLiteral__MainTex_12f3608,0,0);
    if (pcRam0000000001340e50 == (code *)0x0) {
      pcRam0000000001340e50 = (code *)native_sub_4326f0(&UNK_00e2ea7d);
    }
    (*pcRam0000000001340e50)(lVar5,uVar2,&stack0xffffffffffffffd8);
    return;
  }
LAB_00562734:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* AnimateTiledTexture$$OnDestroy @ 0x56281c
 * void AnimateTiledTexture__OnDestroy (AnimateTiledTexture_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimateTiledTexture$$OnDestroy
   void AnimateTiledTexture__OnDestroy (AnimateTiledTexture_o* __this, const MethodInfo* method); */

void native_AnimateTiledTexture__OnDestroy_56281c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam000000000133ea24 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Renderer____12e2ad8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea24 = 1;
  }
  if (*(char *)(param_1 + 0x58) != '\0') {
    lVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_1,_Method_UnityEngine_Component_GetComponent_Renderer____12e2ad8);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar2 = native_UnityEngine_Renderer__get_sharedMaterial_768f5c(lVar1,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    native_UnityEngine_Object__Destroy_8ea574(uVar2,0);
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  return;
}



/* AnimateTiledTexture$$HandleCallbacks @ 0x5628c8
 * void AnimateTiledTexture__HandleCallbacks (AnimateTiledTexture_o* __this, System_Collections_Generic_List_AnimateTiledTexture_VoidEvent__o* cbList, const MethodInfo* method); */

/* AnimateTiledTexture$$HandleCallbacks
   void AnimateTiledTexture__HandleCallbacks (AnimateTiledTexture_o* __this,
   System_Collections_Generic_List_AnimateTiledTexture_VoidEvent__o* cbList, const MethodInfo*
   method); */

void native_AnimateTiledTexture__HandleCallbacks_5628c8(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  if ((bRam000000000133ea25 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_AnimateTiledTexture_VoidEvent__get_Count___12dd668
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_AnimateTiledTexture_VoidEvent__get_Item___12dd670
                     );
    bRam000000000133ea25 = 1;
  }
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0x18);
    if (0 < (int)uVar1) {
      uVar3 = 0;
      do {
        if (uVar1 <= uVar3) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar2 = *(long *)(*(long *)(param_2 + 0x10) + (long)(int)uVar3 * 8 + 0x20);
        if (lVar2 == 0) goto LAB_0056295c;
        native_AnimateTiledTexture_VoidEvent__Invoke_94fe20(lVar2,0);
        uVar1 = *(uint *)(param_2 + 0x18);
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < (int)uVar1);
    }
    return;
  }
LAB_0056295c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* AnimateTiledTexture$$OnEnable @ 0x562960
 * void AnimateTiledTexture__OnEnable (AnimateTiledTexture_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimateTiledTexture$$OnEnable
   void AnimateTiledTexture__OnEnable (AnimateTiledTexture_o* __this, const MethodInfo* method); */

void native_AnimateTiledTexture__OnEnable_562960(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = NEON_fmov(0x3f800000,4);
  uVar3 = NEON_scvtf(*(undefined8 *)(param_1 + 0x18),4);
  *(ulong *)(param_1 + 0x48) =
       CONCAT44(((float)((ulong)uVar4 >> 0x20) / (float)((ulong)uVar3 >> 0x20)) /
                (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) -
                (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20),
                ((float)uVar4 / (float)uVar3) / (float)*(undefined8 *)(param_1 + 0x20) -
                (float)*(undefined8 *)(param_1 + 0x30));
  if (*(char *)(param_1 + 0x3f) == '\0') {
    return;
  }
  if ((bRam000000000133ea21 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Renderer____12e2ad8);
    native_sub_43273c(&StringLiteral_updateTiling_12f6908);
    bRam000000000133ea21 = 1;
  }
  if (*(char *)(param_1 + 0x59) != '\0') {
    native_UnityEngine_MonoBehaviour__StopCoroutine_8e955c
              (param_1,_StringLiteral_updateTiling_12f6908,0);
    *(undefined1 *)(param_1 + 0x59) = 0;
  }
  lVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_Renderer____12e2ad8);
  if (lVar1 != 0) {
    native_UnityEngine_Renderer__set_enabled_768bbc(lVar1,1,0);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x18);
    lVar1 = native_AnimateTiledTexture__updateTiling_562510(param_1);
    if (lVar1 == 0) {
      native_sub_432740(&System_NullReferenceException_TypeInfo_12d5498,0,0);
      uVar4 = native_sub_432808();
      uVar3 = native_sub_432740(&StringLiteral_routine_is_null_12f5ec0);
      native_System_NullReferenceException___ctor_ad2894(uVar4,uVar3,0);
    }
    else {
      if (pcRam0000000001340fe8 == (code *)0x0) {
        pcRam0000000001340fe8 = (code *)native_sub_4326f0(&UNK_00e2f589);
      }
      uVar2 = (*pcRam0000000001340fe8)(param_1);
      if ((uVar2 & 1) != 0) {
        if (pcRam0000000001340ff8 == (code *)0x0) {
          pcRam0000000001340ff8 = (code *)native_sub_4326f0(&UNK_00e2f61c);
        }
                    /* WARNING: Could not recover jumptable at 0x008e91f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000001340ff8)(param_1,lVar1);
        return;
      }
      native_sub_432740(&System_ArgumentException_TypeInfo_12d3800);
      uVar4 = native_sub_432808();
      uVar3 = native_sub_432740(&
                                StringLiteral_Coroutines_can_only_be_stopped_on_a_MonoBehaviour_12ed328
                               );
      native_System_ArgumentException___ctor_953858(uVar4,uVar3,0);
    }
    uVar3 = native_sub_432740(&Method_UnityEngine_MonoBehaviour_StartCoroutine___12e55d8);
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar4,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* AnimateTiledTexture$$CalcTextureSize @ 0x562738
 * void AnimateTiledTexture__CalcTextureSize (AnimateTiledTexture_o* __this, const MethodInfo* method); */

/* AnimateTiledTexture$$CalcTextureSize
   void AnimateTiledTexture__CalcTextureSize (AnimateTiledTexture_o* __this, const MethodInfo*
   method); */

void native_AnimateTiledTexture__CalcTextureSize_562738(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = NEON_fmov(0x3f800000,4);
  uVar1 = NEON_scvtf(*(undefined8 *)(param_1 + 0x18),4);
  *(ulong *)(param_1 + 0x48) =
       CONCAT44(((float)((ulong)uVar2 >> 0x20) / (float)((ulong)uVar1 >> 0x20)) /
                (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) -
                (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20),
                ((float)uVar2 / (float)uVar1) / (float)*(undefined8 *)(param_1 + 0x20) -
                (float)*(undefined8 *)(param_1 + 0x30));
  return;
}



/* AnimateTiledTexture$$updateTiling @ 0x562510
 * System_Collections_IEnumerator_o* AnimateTiledTexture__updateTiling (AnimateTiledTexture_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimateTiledTexture$$updateTiling
   System_Collections_IEnumerator_o* AnimateTiledTexture__updateTiling (AnimateTiledTexture_o*
   __this, const MethodInfo* method); */

long native_AnimateTiledTexture__updateTiling_562510(undefined8 param_1)

{
  long lVar1;
  
  if ((bRam000000000133ea26 & 1) == 0) {
    native_sub_43273c(&AnimateTiledTexture__updateTiling_d__27_TypeInfo_12d6f40);
    bRam000000000133ea26 = 1;
  }
  lVar1 = native_sub_432808(_AnimateTiledTexture__updateTiling_d__27_TypeInfo_12d6f40);
  native_AnimateTiledTexture__updateTiling_d__27___ctor_94fbb0(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x20),param_1);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* AnimateTiledTexture$$ApplyOffset @ 0x562990
 * void AnimateTiledTexture__ApplyOffset (AnimateTiledTexture_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimateTiledTexture$$ApplyOffset
   void AnimateTiledTexture__ApplyOffset (AnimateTiledTexture_o* __this, const MethodInfo* method);
    */

void native_AnimateTiledTexture__ApplyOffset_562990(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if ((bRam000000000133ea27 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Renderer____12e2ad8);
    native_sub_43273c(&StringLiteral__MainTex_12f3608);
    bRam000000000133ea27 = 1;
  }
  NEON_scvtf(*(undefined8 *)(param_1 + 0x18),4);
  lVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_Renderer____12e2ad8);
  if ((lVar2 != 0) &&
     (lVar2 = native_UnityEngine_Renderer__get_sharedMaterial_768f5c(lVar2,0), lVar2 != 0)) {
    NEON_fmov(0x3f800000,4);
    uVar1 = native_UnityEngine_Shader__PropertyToID_76b308(_StringLiteral__MainTex_12f3608,0,0);
    if (pcRam0000000001340e48 == (code *)0x0) {
      pcRam0000000001340e48 = (code *)native_sub_4326f0(&UNK_00e2ea26);
    }
    (*pcRam0000000001340e48)(lVar2,uVar1,&stack0xffffffffffffffd8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* AnimateTiledTexture$$.ctor @ 0x562aa0
 * void AnimateTiledTexture___ctor (AnimateTiledTexture_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimateTiledTexture$$.ctor
   void AnimateTiledTexture___ctor (AnimateTiledTexture_o* __this, const MethodInfo* method); */

undefined1  [16] native_AnimateTiledTexture___ctor_562aa0(ulong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  uVar3 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(param_1 + 0x18) = 0x200000002;
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  uVar1 = native_UnityEngine_Vector2__get_zero_765ef0(0);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar2 = (undefined4)uVar3;
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  uVar1 = native_UnityEngine_Vector2__get_zero_765ef0(0);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 0x38) = 0x41200000;
  *(undefined1 *)(param_1 + 0x3f) = 1;
  uVar1 = native_UnityEngine_Vector2__get_zero_765ef0(0);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  if ((bRam0000000001340ae0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001340ae0 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
  return auVar4;
}


