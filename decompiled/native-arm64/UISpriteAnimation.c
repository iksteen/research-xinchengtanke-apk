/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UISpriteAnimation$$get_frames @ 0xc3741c
 * int32_t UISpriteAnimation__get_frames (UISpriteAnimation_o* __this, const MethodInfo* method); */

/* UISpriteAnimation$$get_frames
   int32_t UISpriteAnimation__get_frames (UISpriteAnimation_o* __this, const MethodInfo* method); */

undefined4 native_UISpriteAnimation__get_frames_c3741c(long param_1)

{
  if ((bRam0000000001342761 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_string__get_Count___12dcef8);
    bRam0000000001342761 = 1;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UISpriteAnimation$$get_framesPerSecond @ 0xc37468
 * int32_t UISpriteAnimation__get_framesPerSecond (UISpriteAnimation_o* __this, const MethodInfo* method); */

/* UISpriteAnimation$$get_framesPerSecond
   int32_t UISpriteAnimation__get_framesPerSecond (UISpriteAnimation_o* __this, const MethodInfo*
   method); */

undefined4 native_UISpriteAnimation__get_framesPerSecond_c37468(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



/* UISpriteAnimation$$set_framesPerSecond @ 0xc37470
 * void UISpriteAnimation__set_framesPerSecond (UISpriteAnimation_o* __this, int32_t value, const MethodInfo* method); */

/* UISpriteAnimation$$set_framesPerSecond
   void UISpriteAnimation__set_framesPerSecond (UISpriteAnimation_o* __this, int32_t value, const
   MethodInfo* method); */

void native_UISpriteAnimation__set_framesPerSecond_c37470(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}



/* UISpriteAnimation$$get_namePrefix @ 0xc37478
 * System_String_o* UISpriteAnimation__get_namePrefix (UISpriteAnimation_o* __this, const MethodInfo* method); */

/* UISpriteAnimation$$get_namePrefix
   System_String_o* UISpriteAnimation__get_namePrefix (UISpriteAnimation_o* __this, const
   MethodInfo* method); */

undefined8 native_UISpriteAnimation__get_namePrefix_c37478(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* UISpriteAnimation$$set_namePrefix @ 0xc37480
 * void UISpriteAnimation__set_namePrefix (UISpriteAnimation_o* __this, System_String_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpriteAnimation$$set_namePrefix
   void UISpriteAnimation__set_namePrefix (UISpriteAnimation_o* __this, System_String_o* value,
   const MethodInfo* method); */

void native_UISpriteAnimation__set_namePrefix_c37480(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar3 = native_System_String__op_Inequality_afbbb4(*(undefined8 *)(param_1 + 0x20),param_2,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x20) = param_2;
  native_sub_4326e0((undefined8 *)(param_1 + 0x20),param_2);
  if ((bRam0000000001342763 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UISprite____12e2c18);
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__Add___12dcea0);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__Clear___12dcea8);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__Sort___12dcee8);
    native_sub_43273c(&Method_System_Collections_Generic_List_UISpriteData__get_Count___12dd3c8);
    native_sub_43273c(&Method_System_Collections_Generic_List_UISpriteData__get_Item___12dd3d0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342763 = 1;
  }
  plVar8 = (long *)(param_1 + 0x30);
  lVar9 = *plVar8;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar9,0,0);
  if ((uVar3 & 1) != 0) {
    uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_1,_Method_UnityEngine_Component_GetComponent_UISprite____12e2c18);
    *(undefined8 *)(param_1 + 0x30) = uVar4;
    native_sub_4326e0(plVar8,uVar4);
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    native_System_Collections_Generic_List_Action___Clear_d40e80
              (*(long *)(param_1 + 0x40),
               _Method_System_Collections_Generic_List_string__Clear___12dcea8);
    lVar9 = *plVar8;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar9,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (*plVar8 != 0) {
      plVar8 = (long *)native_UISprite__get_atlas_c358c4();
      if (plVar8 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar8;
      if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
        uVar3 = 0;
        piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
            puVar5 = (undefined8 *)(lVar9 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_00c3769c;
          }
          uVar3 = uVar3 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 < *(ushort *)(lVar9 + 0x12a));
      }
      puVar5 = (undefined8 *)native_sub_3c9b34(plVar8,_INGUIAtlas_TypeInfo_12d4c68,2);
LAB_00c3769c:
      lVar9 = (*(code *)*puVar5)(plVar8,puVar5[1]);
      if (lVar9 != 0) {
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (0 < (int)uVar1) {
          uVar3 = 0;
          lVar10 = (long)(int)uVar1;
          do {
            if (uVar1 <= uVar3) {
              native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            }
            lVar11 = *(long *)(*(long *)(lVar9 + 0x10) + uVar3 * 8 + 0x20);
            uVar6 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x20),0);
            if ((uVar6 & 1) == 0) {
              if ((lVar11 == 0) || (*(long *)(lVar11 + 0x10) == 0)) goto LAB_00c3776c;
              uVar6 = native_System_String__StartsWith_b0cc2c
                                (*(long *)(lVar11 + 0x10),*(undefined8 *)(param_1 + 0x20),0);
              if ((uVar6 & 1) != 0) goto LAB_00c37724;
            }
            else {
              if (lVar11 == 0) goto LAB_00c3776c;
LAB_00c37724:
              if (*(long *)(param_1 + 0x40) == 0) goto LAB_00c3776c;
              native_System_Collections_Generic_List_int_____Add_d40c00
                        (*(long *)(param_1 + 0x40),*(undefined8 *)(lVar11 + 0x10),
                         _Method_System_Collections_Generic_List_string__Add___12dcea0);
            }
            uVar3 = uVar3 + 1;
            if (lVar10 <= (long)uVar3) break;
            uVar1 = *(uint *)(lVar9 + 0x18);
          } while( true );
        }
        lVar9 = _Method_System_Collections_Generic_List_string__Sort___12dcee8;
        lVar10 = *(long *)(param_1 + 0x40);
        if (lVar10 != 0) {
          if (lVar10 != 0) {
            uVar2 = (*(code *)**(undefined8 **)
                                (*(long *)(*(long *)(
                                                  _Method_System_Collections_Generic_List_string__Sort___12dcee8
                                                  + 0x18) + 0xc0) + 0x68))();
                    /* WARNING: Could not recover jumptable at 0x00d42544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar9 + 0x18) + 0xc0) + 0x108))
                      (lVar10,0,uVar2,0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
      }
    }
  }
LAB_00c3776c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UISpriteAnimation$$get_loop @ 0xc37770
 * bool UISpriteAnimation__get_loop (UISpriteAnimation_o* __this, const MethodInfo* method); */

/* UISpriteAnimation$$get_loop
   bool UISpriteAnimation__get_loop (UISpriteAnimation_o* __this, const MethodInfo* method); */

undefined1 native_UISpriteAnimation__get_loop_c37770(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



/* UISpriteAnimation$$set_loop @ 0xc37778
 * void UISpriteAnimation__set_loop (UISpriteAnimation_o* __this, bool value, const MethodInfo* method); */

/* UISpriteAnimation$$set_loop
   void UISpriteAnimation__set_loop (UISpriteAnimation_o* __this, bool value, const MethodInfo*
   method); */

void native_UISpriteAnimation__set_loop_c37778(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x28) = param_2 & 1;
  return;
}



/* UISpriteAnimation$$get_isPlaying @ 0xc37784
 * bool UISpriteAnimation__get_isPlaying (UISpriteAnimation_o* __this, const MethodInfo* method); */

/* UISpriteAnimation$$get_isPlaying
   bool UISpriteAnimation__get_isPlaying (UISpriteAnimation_o* __this, const MethodInfo* method); */

undefined1 native_UISpriteAnimation__get_isPlaying_c37784(long param_1)

{
  return *(undefined1 *)(param_1 + 0x3c);
}



/* UISpriteAnimation$$Start @ 0xc3778c
 * void UISpriteAnimation__Start (UISpriteAnimation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpriteAnimation$$Start
   void UISpriteAnimation__Start (UISpriteAnimation_o* __this, const MethodInfo* method); */

void native_UISpriteAnimation__Start_c3778c(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  if ((bRam0000000001342763 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UISprite____12e2c18);
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__Add___12dcea0);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__Clear___12dcea8);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__Sort___12dcee8);
    native_sub_43273c(&Method_System_Collections_Generic_List_UISpriteData__get_Count___12dd3c8);
    native_sub_43273c(&Method_System_Collections_Generic_List_UISpriteData__get_Item___12dd3d0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342763 = 1;
  }
  plVar8 = (long *)(param_1 + 0x30);
  lVar9 = *plVar8;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar9,0,0);
  if ((uVar3 & 1) != 0) {
    uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_1,_Method_UnityEngine_Component_GetComponent_UISprite____12e2c18);
    *(undefined8 *)(param_1 + 0x30) = uVar4;
    native_sub_4326e0(plVar8,uVar4);
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    native_System_Collections_Generic_List_Action___Clear_d40e80
              (*(long *)(param_1 + 0x40),
               _Method_System_Collections_Generic_List_string__Clear___12dcea8);
    lVar9 = *plVar8;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar9,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (*plVar8 != 0) {
      plVar8 = (long *)native_UISprite__get_atlas_c358c4();
      if (plVar8 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar8;
      if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
        uVar3 = 0;
        piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
            puVar5 = (undefined8 *)(lVar9 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_00c3769c;
          }
          uVar3 = uVar3 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 < *(ushort *)(lVar9 + 0x12a));
      }
      puVar5 = (undefined8 *)native_sub_3c9b34(plVar8,_INGUIAtlas_TypeInfo_12d4c68,2);
LAB_00c3769c:
      lVar9 = (*(code *)*puVar5)(plVar8,puVar5[1]);
      if (lVar9 != 0) {
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (0 < (int)uVar1) {
          uVar3 = 0;
          lVar10 = (long)(int)uVar1;
          do {
            if (uVar1 <= uVar3) {
              native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            }
            lVar11 = *(long *)(*(long *)(lVar9 + 0x10) + uVar3 * 8 + 0x20);
            uVar6 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x20),0);
            if ((uVar6 & 1) == 0) {
              if ((lVar11 == 0) || (*(long *)(lVar11 + 0x10) == 0)) goto LAB_00c3776c;
              uVar6 = native_System_String__StartsWith_b0cc2c
                                (*(long *)(lVar11 + 0x10),*(undefined8 *)(param_1 + 0x20),0);
              if ((uVar6 & 1) != 0) goto LAB_00c37724;
            }
            else {
              if (lVar11 == 0) goto LAB_00c3776c;
LAB_00c37724:
              if (*(long *)(param_1 + 0x40) == 0) goto LAB_00c3776c;
              native_System_Collections_Generic_List_int_____Add_d40c00
                        (*(long *)(param_1 + 0x40),*(undefined8 *)(lVar11 + 0x10),
                         _Method_System_Collections_Generic_List_string__Add___12dcea0);
            }
            uVar3 = uVar3 + 1;
            if (lVar10 <= (long)uVar3) break;
            uVar1 = *(uint *)(lVar9 + 0x18);
          } while( true );
        }
        lVar9 = _Method_System_Collections_Generic_List_string__Sort___12dcee8;
        lVar10 = *(long *)(param_1 + 0x40);
        if (lVar10 != 0) {
          if (lVar10 != 0) {
            uVar2 = (*(code *)**(undefined8 **)
                                (*(long *)(*(long *)(
                                                  _Method_System_Collections_Generic_List_string__Sort___12dcee8
                                                  + 0x18) + 0xc0) + 0x68))();
                    /* WARNING: Could not recover jumptable at 0x00d42544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar9 + 0x18) + 0xc0) + 0x108))
                      (lVar10,0,uVar2,0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
      }
    }
  }
LAB_00c3776c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UISpriteAnimation$$Update @ 0xc37790
 * void UISpriteAnimation__Update (UISpriteAnimation_o* __this, const MethodInfo* method); */

/* UISpriteAnimation$$Update
   void UISpriteAnimation__Update (UISpriteAnimation_o* __this, const MethodInfo* method); */

void native_UISpriteAnimation__Update_c37790(long param_1)

{
  char cVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  
  if ((bRam0000000001342762 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_string__get_Count___12dcef8);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__get_Item___12dcf00);
    bRam0000000001342762 = 1;
  }
  if (*(char *)(param_1 + 0x3c) != '\0') {
    if (*(long *)(param_1 + 0x40) == 0) {
LAB_00c37908:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    if (((1 < *(int *)(*(long *)(param_1 + 0x40) + 0x18)) &&
        (uVar2 = native_UnityEngine_Application__get_isPlaying_8d60cc(0), (uVar2 & 1) != 0)) &&
       (0 < *(int *)(param_1 + 0x1c))) {
      fVar9 = *(float *)(param_1 + 0x38);
      uVar8 = native_RealTime__get_deltaTime_73d0b8(0);
      fVar7 = (float)native_UnityEngine_Mathf__Min_8e4bb8(0x3f800000,uVar8,0);
      fVar9 = fVar9 + fVar7;
      *(float *)(param_1 + 0x38) = fVar9;
      fVar7 = 1.0 / (float)*(int *)(param_1 + 0x1c);
      if (fVar7 < fVar9) {
        do {
          lVar5 = *(long *)(param_1 + 0x40);
          fVar9 = fVar9 - fVar7;
          if (fVar7 <= 0.0) {
            fVar9 = 0.0;
          }
          uVar6 = *(int *)(param_1 + 0x18) + 1;
          *(float *)(param_1 + 0x38) = fVar9;
          *(uint *)(param_1 + 0x18) = uVar6;
          if (lVar5 == 0) goto LAB_00c37908;
          if ((int)uVar6 < *(int *)(lVar5 + 0x18)) {
            cVar1 = *(char *)(param_1 + 0x3c);
          }
          else {
            cVar1 = *(char *)(param_1 + 0x28);
            uVar6 = 0;
            *(undefined4 *)(param_1 + 0x18) = 0;
            *(char *)(param_1 + 0x3c) = cVar1;
          }
          if (cVar1 != '\0') {
            lVar4 = *(long *)(param_1 + 0x30);
            if (*(uint *)(lVar5 + 0x18) <= uVar6) {
              native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            }
            if (lVar4 == 0) goto LAB_00c37908;
            native_UISprite__set_spriteName_c35c6c
                      (lVar4,*(undefined8 *)(*(long *)(lVar5 + 0x10) + (long)(int)uVar6 * 8 + 0x20))
            ;
            if (*(char *)(param_1 + 0x29) != '\0') {
              plVar3 = *(long **)(param_1 + 0x30);
              if (plVar3 == (long *)0x0) goto LAB_00c37908;
              (**(code **)(*plVar3 + 0x3a8))(plVar3,*(undefined8 *)(*plVar3 + 0x3b0));
            }
          }
          fVar9 = *(float *)(param_1 + 0x38);
        } while (fVar7 < fVar9);
      }
    }
  }
  return;
}



/* UISpriteAnimation$$RebuildSpriteList @ 0xc374e0
 * void UISpriteAnimation__RebuildSpriteList (UISpriteAnimation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpriteAnimation$$RebuildSpriteList
   void UISpriteAnimation__RebuildSpriteList (UISpriteAnimation_o* __this, const MethodInfo*
   method); */

void native_UISpriteAnimation__RebuildSpriteList_c374e0(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  if ((bRam0000000001342763 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UISprite____12e2c18);
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__Add___12dcea0);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__Clear___12dcea8);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__Sort___12dcee8);
    native_sub_43273c(&Method_System_Collections_Generic_List_UISpriteData__get_Count___12dd3c8);
    native_sub_43273c(&Method_System_Collections_Generic_List_UISpriteData__get_Item___12dd3d0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342763 = 1;
  }
  plVar8 = (long *)(param_1 + 0x30);
  lVar9 = *plVar8;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar9,0,0);
  if ((uVar3 & 1) != 0) {
    uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_1,_Method_UnityEngine_Component_GetComponent_UISprite____12e2c18);
    *(undefined8 *)(param_1 + 0x30) = uVar4;
    native_sub_4326e0(plVar8,uVar4);
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    native_System_Collections_Generic_List_Action___Clear_d40e80
              (*(long *)(param_1 + 0x40),
               _Method_System_Collections_Generic_List_string__Clear___12dcea8);
    lVar9 = *plVar8;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar9,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (*plVar8 != 0) {
      plVar8 = (long *)native_UISprite__get_atlas_c358c4();
      if (plVar8 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar8;
      if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
        uVar3 = 0;
        piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
            puVar5 = (undefined8 *)(lVar9 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_00c3769c;
          }
          uVar3 = uVar3 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 < *(ushort *)(lVar9 + 0x12a));
      }
      puVar5 = (undefined8 *)native_sub_3c9b34(plVar8,_INGUIAtlas_TypeInfo_12d4c68,2);
LAB_00c3769c:
      lVar9 = (*(code *)*puVar5)(plVar8,puVar5[1]);
      if (lVar9 != 0) {
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (0 < (int)uVar1) {
          uVar3 = 0;
          lVar10 = (long)(int)uVar1;
          do {
            if (uVar1 <= uVar3) {
              native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            }
            lVar11 = *(long *)(*(long *)(lVar9 + 0x10) + uVar3 * 8 + 0x20);
            uVar6 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x20),0);
            if ((uVar6 & 1) == 0) {
              if ((lVar11 == 0) || (*(long *)(lVar11 + 0x10) == 0)) goto LAB_00c3776c;
              uVar6 = native_System_String__StartsWith_b0cc2c
                                (*(long *)(lVar11 + 0x10),*(undefined8 *)(param_1 + 0x20),0);
              if ((uVar6 & 1) != 0) goto LAB_00c37724;
            }
            else {
              if (lVar11 == 0) goto LAB_00c3776c;
LAB_00c37724:
              if (*(long *)(param_1 + 0x40) == 0) goto LAB_00c3776c;
              native_System_Collections_Generic_List_int_____Add_d40c00
                        (*(long *)(param_1 + 0x40),*(undefined8 *)(lVar11 + 0x10),
                         _Method_System_Collections_Generic_List_string__Add___12dcea0);
            }
            uVar3 = uVar3 + 1;
            if (lVar10 <= (long)uVar3) break;
            uVar1 = *(uint *)(lVar9 + 0x18);
          } while( true );
        }
        lVar9 = _Method_System_Collections_Generic_List_string__Sort___12dcee8;
        lVar10 = *(long *)(param_1 + 0x40);
        if (lVar10 != 0) {
          if (lVar10 != 0) {
            uVar2 = (*(code *)**(undefined8 **)
                                (*(long *)(*(long *)(
                                                  _Method_System_Collections_Generic_List_string__Sort___12dcee8
                                                  + 0x18) + 0xc0) + 0x68))();
                    /* WARNING: Could not recover jumptable at 0x00d42544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar9 + 0x18) + 0xc0) + 0x108))
                      (lVar10,0,uVar2,0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
      }
    }
  }
LAB_00c3776c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UISpriteAnimation$$Play @ 0xc3790c
 * void UISpriteAnimation__Play (UISpriteAnimation_o* __this, const MethodInfo* method); */

/* UISpriteAnimation$$Play
   void UISpriteAnimation__Play (UISpriteAnimation_o* __this, const MethodInfo* method); */

void native_UISpriteAnimation__Play_c3790c(long param_1)

{
  *(undefined1 *)(param_1 + 0x3c) = 1;
  return;
}



/* UISpriteAnimation$$Pause @ 0xc37918
 * void UISpriteAnimation__Pause (UISpriteAnimation_o* __this, const MethodInfo* method); */

/* UISpriteAnimation$$Pause
   void UISpriteAnimation__Pause (UISpriteAnimation_o* __this, const MethodInfo* method); */

void native_UISpriteAnimation__Pause_c37918(long param_1)

{
  *(undefined1 *)(param_1 + 0x3c) = 0;
  return;
}



/* UISpriteAnimation$$ResetToBeginning @ 0xc37920
 * void UISpriteAnimation__ResetToBeginning (UISpriteAnimation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpriteAnimation$$ResetToBeginning
   void UISpriteAnimation__ResetToBeginning (UISpriteAnimation_o* __this, const MethodInfo* method);
    */

void native_UISpriteAnimation__ResetToBeginning_c37920(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  if ((bRam0000000001342764 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_string__get_Count___12dcef8);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__get_Item___12dcf00);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342764 = 1;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar6 = *(long *)(param_1 + 0x40);
  if (lVar6 != 0) {
    if ((int)*(uint *)(lVar6 + 0x18) < 1) {
      return;
    }
    uVar1 = *(uint *)(param_1 + 0x18);
    lVar5 = *(long *)(param_1 + 0x30);
    if (*(uint *)(lVar6 + 0x18) <= uVar1) {
      native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
    }
    if (lVar5 != 0) {
      native_UISprite__set_spriteName_c35c6c
                (lVar5,*(undefined8 *)(*(long *)(lVar6 + 0x10) + (long)(int)uVar1 * 8 + 0x20));
      if (*(char *)(param_1 + 0x29) == '\0') {
        return;
      }
      plVar3 = *(long **)(param_1 + 0x30);
      if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c37a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x3a8))(plVar3,*(undefined8 *)(*plVar3 + 0x3b0));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UISpriteAnimation$$.ctor @ 0xc37a34
 * void UISpriteAnimation___ctor (UISpriteAnimation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISpriteAnimation$$.ctor
   void UISpriteAnimation___ctor (UISpriteAnimation_o* __this, const MethodInfo* method); */

undefined1  [16] native_UISpriteAnimation___ctor_c37a34(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000001342765 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_string___ctor___12dce88);
    native_sub_43273c(&System_Collections_Generic_List_string__TypeInfo_12d2b60);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam0000000001342765 = 1;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0x1e;
  *(undefined8 *)(param_1 + 0x20) = _StringLiteral__12eaac0;
  native_sub_4326e0(param_1 + 0x20);
  *(undefined2 *)(param_1 + 0x28) = 0x101;
  *(undefined1 *)(param_1 + 0x3c) = 1;
  uVar1 = native_sub_432808(_System_Collections_Generic_List_string__TypeInfo_12d2b60);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_string___ctor___12dce88);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  native_sub_4326e0(param_1 + 0x40,uVar1);
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


