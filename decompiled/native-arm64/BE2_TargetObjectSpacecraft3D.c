/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Environment.BE2_TargetObjectSpacecraft3D$$get_Transform @ 0x619d6c
 * UnityEngine_Transform_o* MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__get_Transform (MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Environment.BE2_TargetObjectSpacecraft3D$$get_Transform
   UnityEngine_Transform_o* MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__get_Transform
   (MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D_o* __this, const MethodInfo* method);
    */

void native_MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__get_Transform_619d6c
               (undefined8 param_1)

{
  if (pcRam0000000001340ab8 == (code *)0x0) {
    pcRam0000000001340ab8 = (code *)native_sub_4326f0(&UNK_00e2d0e1);
  }
                    /* WARNING: Could not recover jumptable at 0x008da668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000001340ab8)(param_1);
  return;
}



/* MG_BlocksEngine2.Environment.BE2_TargetObjectSpacecraft3D$$Awake @ 0x619d74
 * void MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__Awake (MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0061a028) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_TargetObjectSpacecraft3D$$Awake
   void MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__Awake
   (MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D_o* __this, const MethodInfo* method);
    */

void native_MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__Awake_619d74(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((bRam000000000133eeb8 & 1) == 0) {
    native_sub_43273c(&System_IDisposable_TypeInfo_12d4b00);
    native_sub_43273c(&System_Collections_IEnumerator_TypeInfo_12d4b80);
    native_sub_43273c(&UnityEngine_Transform_TypeInfo_12d6300);
    native_sub_43273c(&StringLiteral_Bullet_12ec850);
    bRam000000000133eeb8 = 1;
  }
  lVar1 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  plVar2 = (long *)native_UnityEngine_Transform__GetEnumerator_772e40(lVar1,0);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  do {
    lVar1 = *plVar2;
    if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
          puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_00619e68;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar1 + 0x12a));
    }
    puVar3 = (undefined8 *)
             native_sub_3c9b34(plVar2,_System_Collections_IEnumerator_TypeInfo_12d4b80,0);
LAB_00619e68:
    uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar6 & 1) == 0) {
      plVar2 = (long *)native_sub_4327f8(plVar2,_System_IDisposable_TypeInfo_12d4b00);
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar1 = *plVar2;
      if ((ulong)*(ushort *)(lVar1 + 0x12a) == 0) goto LAB_00619fb4;
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      break;
    }
    lVar1 = *plVar2;
    if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
          puVar3 = (undefined8 *)(lVar1 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_00619ed0;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar1 + 0x12a));
    }
    puVar3 = (undefined8 *)
             native_sub_3c9b34(plVar2,_System_Collections_IEnumerator_TypeInfo_12d4b80,1);
LAB_00619ed0:
    plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    if (plVar4 == (long *)0x0) goto LAB_0061a01c;
    if ((*(byte *)(*plVar4 + 300) < *(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300)) ||
       (*(long *)(*(long *)(*plVar4 + 200) +
                  (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300) * 8 + -8) !=
        _UnityEngine_Transform_TypeInfo_12d6300)) {
      native_sub_432b04(plVar4);
LAB_0061a01c:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar5 = native_UnityEngine_Object__get_name_8e8098(plVar4,0);
    uVar6 = native_System_String__op_Equality_afc18c(uVar5,_StringLiteral_Bullet_12ec850,0);
    if ((uVar6 & 1) != 0) {
      uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(plVar4,0);
      *(undefined8 *)(param_1 + 0x20) = uVar5;
      native_sub_4326e0((undefined8 *)(param_1 + 0x20));
    }
  } while( true );
  while( true ) {
    uVar6 = uVar6 + 1;
    piVar7 = piVar7 + 4;
    if (*(ushort *)(lVar1 + 0x12a) <= uVar6) break;
    if (*(long *)(piVar7 + -2) == _System_IDisposable_TypeInfo_12d4b00) {
      puVar3 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_00619fd0;
    }
  }
LAB_00619fb4:
  puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_System_IDisposable_TypeInfo_12d4b00,0);
LAB_00619fd0:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}



/* MG_BlocksEngine2.Environment.BE2_TargetObjectSpacecraft3D$$Shoot @ 0x60dd00
 * void MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__Shoot (MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_TargetObjectSpacecraft3D$$Shoot
   void MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__Shoot
   (MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D_o* __this, const MethodInfo* method);
    */

void native_MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__Shoot_60dd00
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  
  if ((bRam000000000133eeb9 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_Rigidbody____12e4a10);
    native_sub_43273c(&Method_UnityEngine_Object_Instantiate_GameObject____12e5a78);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133eeb9 = 1;
  }
  lVar6 = *(long *)(param_5 + 0x20);
  if ((lVar6 != 0) &&
     (lVar1 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar6,0), lVar1 != 0)) {
    uVar8 = native_UnityEngine_Transform__get_position_77169c(lVar1,0);
    uVar3 = param_2;
    uVar5 = param_3;
    uVar9 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar6 = native_UnityEngine_Object__Instantiate_GameObject__4a66b4
                      (uVar8,param_2,param_3,uVar9,uVar3,uVar5,param_4,lVar6,
                       _Method_UnityEngine_Object_Instantiate_GameObject____12e5a78);
    fVar11 = (float)param_3;
    fVar10 = (float)param_2;
    if (lVar6 != 0) {
      native_UnityEngine_GameObject__SetActive_8de698(lVar6,1,0);
      lVar1 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                        (lVar6,_Method_UnityEngine_GameObject_GetComponent_Rigidbody____12e4a10);
      lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_5,0);
      if ((lVar2 != 0) &&
         (fVar7 = (float)native_UnityEngine_Transform__get_forward_771a8c(lVar2,0), lVar1 != 0)) {
        uVar3 = native_UnityEngine_Rigidbody__AddForce_dbd29c
                          (fVar7 * 1000.0,fVar10 * 1000.0,fVar11 * 1000.0,lVar1,0);
        lVar6 = native_MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__C_DestroyTime_61a070
                          (uVar3,lVar6);
        if (lVar6 == 0) {
          native_sub_432740(&System_NullReferenceException_TypeInfo_12d5498,0,0);
          uVar5 = native_sub_432808();
          uVar3 = native_sub_432740(&StringLiteral_routine_is_null_12f5ec0);
          native_System_NullReferenceException___ctor_ad2894(uVar5,uVar3,0);
        }
        else {
          if (pcRam0000000001340fe8 == (code *)0x0) {
            pcRam0000000001340fe8 = (code *)native_sub_4326f0(&UNK_00e2f589);
          }
          uVar4 = (*pcRam0000000001340fe8)(param_5);
          if ((uVar4 & 1) != 0) {
            if (pcRam0000000001340ff8 == (code *)0x0) {
              pcRam0000000001340ff8 = (code *)native_sub_4326f0(&UNK_00e2f61c);
            }
                    /* WARNING: Could not recover jumptable at 0x008e91f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000001340ff8)(param_5,lVar6);
            return;
          }
          native_sub_432740(&System_ArgumentException_TypeInfo_12d3800);
          uVar5 = native_sub_432808();
          uVar3 = native_sub_432740(&
                                    StringLiteral_Coroutines_can_only_be_stopped_on_a_MonoBehaviour_12ed328
                                   );
          native_System_ArgumentException___ctor_953858(uVar5,uVar3,0);
        }
        uVar3 = native_sub_432740(&Method_UnityEngine_MonoBehaviour_StartCoroutine___12e55d8);
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar5,uVar3);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Environment.BE2_TargetObjectSpacecraft3D$$C_DestroyTime @ 0x61a070
 * System_Collections_IEnumerator_o* MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__C_DestroyTime (MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D_o* __this, UnityEngine_GameObject_o* go, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_TargetObjectSpacecraft3D$$C_DestroyTime
   System_Collections_IEnumerator_o*
   MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__C_DestroyTime
   (MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D_o* __this, UnityEngine_GameObject_o*
   go, const MethodInfo* method); */

long native_MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__C_DestroyTime_61a070
               (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((bRam000000000133eeba & 1) == 0) {
    native_sub_43273c(&
                      MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__C_DestroyTime_d__5_TypeInfo_12d7060
                     );
    bRam000000000133eeba = 1;
  }
  lVar1 = native_sub_432808(
                           _MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__C_DestroyTime_d__5_TypeInfo_12d7060
                           );
  native_MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__C_DestroyTime_d__5___ctor_548b84
            (lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_2;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x20),param_2);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Environment.BE2_TargetObjectSpacecraft3D$$.ctor @ 0x61a0e8
 * void MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D___ctor (MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_TargetObjectSpacecraft3D$$.ctor
   void MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D___ctor
   (MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D_o* __this, const MethodInfo* method);
    */

undefined1  [16]
native_MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D___ctor_61a0e8(ulong param_1)

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


