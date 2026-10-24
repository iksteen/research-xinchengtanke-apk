/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.Examples.TMP_TextSelector_B$$Awake @ 0x6dd284
 * void TMPro_Examples_TMP_TextSelector_B__Awake (TMPro_Examples_TMP_TextSelector_B_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TMP_TextSelector_B$$Awake
   void TMPro_Examples_TMP_TextSelector_B__Awake (TMPro_Examples_TMP_TextSelector_B_o* __this, const
   MethodInfo* method); */

void native_TMPro_Examples_TMP_TextSelector_B__Awake_6dd284(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if ((bRam000000000133f36d & 1) == 0) {
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponentInChildren_TextMeshProUGUI____12e2ca8
                     );
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentInParent_Canvas____12e4b28);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_TextMeshProUGUI____12e4a70);
    native_sub_43273c(&Method_UnityEngine_Object_Instantiate_RectTransform____12e5a50);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f36d = 1;
  }
  lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  if (lVar2 != 0) {
    uVar3 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (lVar2,_Method_UnityEngine_GameObject_GetComponent_TextMeshProUGUI____12e4a70)
    ;
    *(undefined8 *)(param_1 + 0x30) = uVar3;
    native_sub_4326e0();
    lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (lVar2 != 0) {
      lVar2 = native_UnityEngine_GameObject__GetComponentInParent_Canvas__4a23c0
                        (lVar2,_Method_UnityEngine_GameObject_GetComponentInParent_Canvas____12e4b28
                        );
      plVar4 = (long *)(param_1 + 0x38);
      *plVar4 = lVar2;
      native_sub_4326e0(plVar4,lVar2);
      if (*plVar4 != 0) {
        iVar1 = native_UnityEngine_Canvas__get_renderMode_db6058(*plVar4,0);
        if (iVar1 == 0) {
          *(undefined8 *)(param_1 + 0x40) = 0;
          uVar3 = 0;
        }
        else {
          if (*plVar4 == 0) goto LAB_006dd45c;
          uVar3 = native_UnityEngine_Canvas__get_worldCamera_db6680(*plVar4,0);
          *(undefined8 *)(param_1 + 0x40) = uVar3;
        }
        native_sub_4326e0(param_1 + 0x40,uVar3);
        uVar3 = *(undefined8 *)(param_1 + 0x18);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar2 = native_UnityEngine_Object__Instantiate_GameObject__4a6428
                          (uVar3,_Method_UnityEngine_Object_Instantiate_RectTransform____12e5a50);
        plVar4 = (long *)(param_1 + 0x20);
        *plVar4 = lVar2;
        native_sub_4326e0(plVar4,lVar2);
        if (*(long *)(param_1 + 0x38) != 0) {
          lVar2 = *plVar4;
          uVar3 = native_UnityEngine_Component__get_transform_8da62c(*(long *)(param_1 + 0x38),0);
          if (lVar2 != 0) {
            native_UnityEngine_Transform__SetParent_7720e0(lVar2,uVar3,0,0);
            if (*plVar4 != 0) {
              uVar3 = native_UnityEngine_Component__GetComponentInChildren_Animation__49db98
                                (*plVar4,
                                 _Method_UnityEngine_Component_GetComponentInChildren_TextMeshProUGUI____12e2ca8
                                );
              *(undefined8 *)(param_1 + 0x28) = uVar3;
              native_sub_4326e0((undefined8 *)(param_1 + 0x28),uVar3);
              if ((*(long *)(param_1 + 0x20) != 0) &&
                 (lVar2 = native_UnityEngine_Component__get_gameObject_8da66c
                                    (*(long *)(param_1 + 0x20),0), lVar2 != 0)) {
                if (pcRam0000000001340bf8 == (code *)0x0) {
                  pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
                }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pcRam0000000001340bf8)(lVar2,0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_006dd45c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.TMP_TextSelector_B$$OnEnable @ 0x6dd460
 * void TMPro_Examples_TMP_TextSelector_B__OnEnable (TMPro_Examples_TMP_TextSelector_B_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TMP_TextSelector_B$$OnEnable
   void TMPro_Examples_TMP_TextSelector_B__OnEnable (TMPro_Examples_TMP_TextSelector_B_o* __this,
   const MethodInfo* method); */

void native_TMPro_Examples_TMP_TextSelector_B__OnEnable_6dd460(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  if ((bRam000000000133f36e & 1) == 0) {
    native_sub_43273c(&Method_System_Action_Object___ctor___12d7fd0);
    native_sub_43273c(&System_Action_Object__TypeInfo_12d2070);
    native_sub_43273c(&Method_TMPro_FastAction_Object__Add___12db178);
    native_sub_43273c(&Method_TMPro_Examples_TMP_TextSelector_B_ON_TEXT_CHANGED___12e6ff8);
    native_sub_43273c(&TMPro_TMPro_EventManager_TypeInfo_12d60c8);
    bRam000000000133f36e = 1;
  }
  if (((*(byte *)(_TMPro_TMPro_EventManager_TypeInfo_12d60c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_TMPro_TMPro_EventManager_TypeInfo_12d60c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar5 = *(long *)(*(long *)(_TMPro_TMPro_EventManager_TypeInfo_12d60c8 + 0xb8) + 0x58);
  uVar2 = native_sub_432808(_System_Action_Object__TypeInfo_12d2070);
  native_System_Action_Font____ctor_9867a8
            (uVar2,param_1,_Method_TMPro_Examples_TMP_TextSelector_B_ON_TEXT_CHANGED___12e6ff8,
             _Method_System_Action_Object___ctor___12d7fd0);
  lVar1 = _Method_TMPro_FastAction_Object__Add___12db178;
  if (lVar5 != 0) {
    if (*(long *)(lVar5 + 0x18) != 0) {
      uVar3 = (**(code **)**(undefined8 **)
                            (*(long *)(_Method_TMPro_FastAction_Object__Add___12db178 + 0x18) + 0xc0
                            ))();
      if ((uVar3 & 1) != 0) {
        return;
      }
      if (*(long *)(lVar5 + 0x10) != 0) {
        lVar6 = *(long *)(lVar5 + 0x18);
        uVar4 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar1 + 0x18) + 0xc0) + 8))
                          (*(long *)(lVar5 + 0x10),uVar2);
        if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00b46448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar1 + 0x18) + 0xc0) + 0x10))
                    (lVar6,uVar2,uVar4);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.TMP_TextSelector_B$$OnDisable @ 0x6dd550
 * void TMPro_Examples_TMP_TextSelector_B__OnDisable (TMPro_Examples_TMP_TextSelector_B_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TMP_TextSelector_B$$OnDisable
   void TMPro_Examples_TMP_TextSelector_B__OnDisable (TMPro_Examples_TMP_TextSelector_B_o* __this,
   const MethodInfo* method); */

void native_TMPro_Examples_TMP_TextSelector_B__OnDisable_6dd550(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uStack_28;
  
  if ((bRam000000000133f36f & 1) == 0) {
    native_sub_43273c(&Method_System_Action_Object___ctor___12d7fd0);
    native_sub_43273c(&System_Action_Object__TypeInfo_12d2070);
    native_sub_43273c(&Method_TMPro_FastAction_Object__Remove___12db188);
    native_sub_43273c(&Method_TMPro_Examples_TMP_TextSelector_B_ON_TEXT_CHANGED___12e6ff8);
    native_sub_43273c(&TMPro_TMPro_EventManager_TypeInfo_12d60c8);
    bRam000000000133f36f = 1;
  }
  if (((*(byte *)(_TMPro_TMPro_EventManager_TypeInfo_12d60c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_TMPro_TMPro_EventManager_TypeInfo_12d60c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar4 = *(long *)(*(long *)(_TMPro_TMPro_EventManager_TypeInfo_12d60c8 + 0xb8) + 0x58);
  uVar2 = native_sub_432808(_System_Action_Object__TypeInfo_12d2070);
  native_System_Action_Font____ctor_9867a8
            (uVar2,param_1,_Method_TMPro_Examples_TMP_TextSelector_B_ON_TEXT_CHANGED___12e6ff8,
             _Method_System_Action_Object___ctor___12d7fd0);
  lVar1 = _Method_TMPro_FastAction_Object__Remove___12db188;
  if (lVar4 != 0) {
    uStack_28 = 0;
    if (*(long *)(lVar4 + 0x18) != 0) {
      uVar3 = (*(code *)**(undefined8 **)
                          (*(long *)(*(long *)(_Method_TMPro_FastAction_Object__Remove___12db188 +
                                              0x18) + 0xc0) + 0x18))
                        (*(long *)(lVar4 + 0x18),uVar2,&uStack_28);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (*(long *)(lVar4 + 0x18) != 0) {
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar1 + 0x18) + 0xc0) + 0x20))
                  (*(long *)(lVar4 + 0x18),uVar2);
        if (*(long *)(lVar4 + 0x10) != 0) {
          (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar1 + 0x18) + 0xc0) + 0x28))
                    (*(long *)(lVar4 + 0x10),uStack_28);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.TMP_TextSelector_B$$ON_TEXT_CHANGED @ 0x6dd640
 * void TMPro_Examples_TMP_TextSelector_B__ON_TEXT_CHANGED (TMPro_Examples_TMP_TextSelector_B_o* __this, UnityEngine_Object_o* obj, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TMP_TextSelector_B$$ON_TEXT_CHANGED
   void TMPro_Examples_TMP_TextSelector_B__ON_TEXT_CHANGED (TMPro_Examples_TMP_TextSelector_B_o*
   __this, UnityEngine_Object_o* obj, const MethodInfo* method); */

void native_TMPro_Examples_TMP_TextSelector_B__ON_TEXT_CHANGED_6dd640
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if ((bRam000000000133f370 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f370 = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(param_2,uVar7,0);
  if ((uVar4 & 1) != 0) {
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 0x360), lVar5 != 0)) {
      uVar7 = native_TMPro_TMP_TextInfo__CopyMeshInfoVertexData_6a80b4(lVar5,0);
      puVar6 = (undefined8 *)(param_1 + 0x98);
      *puVar6 = uVar7;
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
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return;
}



/* TMPro.Examples.TMP_TextSelector_B$$LateUpdate @ 0x6dd6f8
 * void TMPro_Examples_TMP_TextSelector_B__LateUpdate (TMPro_Examples_TMP_TextSelector_B_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TMP_TextSelector_B$$LateUpdate
   void TMPro_Examples_TMP_TextSelector_B__LateUpdate (TMPro_Examples_TMP_TextSelector_B_o* __this,
   const MethodInfo* method); */

void native_TMPro_Examples_TMP_TextSelector_B__LateUpdate_6dd6f8
               (undefined1 param_1 [16],ulong param_2,ulong param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  long lVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  float *pfVar15;
  float *pfVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined8 *puVar24;
  long lVar25;
  undefined8 *puVar26;
  float *pfVar27;
  undefined4 *puVar28;
  undefined4 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar36;
  undefined8 uVar35;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar41;
  undefined8 uVar40;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [88];
  undefined4 auStack_98 [2];
  
  if ((bRam000000000133f371 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_RectTransformUtility_TypeInfo_12d58f8);
    native_sub_43273c(&TMPro_TMP_TextUtilities_TypeInfo_12d60a8);
    native_sub_43273c(&StringLiteral_You_have_selected_link___ffff00__ID_02_12f3200);
    native_sub_43273c(&StringLiteral_id_01_12f4cd8);
    native_sub_43273c(&StringLiteral_You_have_selected_link___ffff00__ID_01_12f31f8);
    native_sub_43273c(&StringLiteral_id_02_12f4ce0);
    bRam000000000133f371 = 1;
  }
  auStack_98[0] = 0;
  func_0x002c8be0(auStack_f8,0,0x50);
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_130 = 0;
  if (*(char *)(param_4 + 0x48) == '\0') {
    if (*(int *)(param_4 + 0x54) == -1) {
      return;
    }
    native_TMPro_Examples_TMP_TextSelector_B__RestoreCachedVertexAttributes_6de360(param_4);
    *(undefined4 *)(param_4 + 0x54) = 0xffffffff;
    return;
  }
  uVar20 = *(undefined8 *)(param_4 + 0x30);
  uVar30 = native_UnityEngine_Input__get_mousePosition_dbdd8c(0);
  uVar21 = *(undefined8 *)(param_4 + 0x40);
  if (((*(byte *)(_TMPro_TMP_TextUtilities_TypeInfo_12d60a8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_TMPro_TMP_TextUtilities_TypeInfo_12d60a8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = native_TMPro_TMP_TextUtilities__FindIntersectingCharacter_6a9a58
                     (uVar30,param_2,param_3,uVar20,uVar21,1,0);
  if (uVar10 == 0xffffffff) {
    native_TMPro_Examples_TMP_TextSelector_B__RestoreCachedVertexAttributes_6de360(param_4);
    *(undefined4 *)(param_4 + 0x54) = 0xffffffff;
  }
  else if (uVar10 != *(uint *)(param_4 + 0x54)) {
    native_TMPro_Examples_TMP_TextSelector_B__RestoreCachedVertexAttributes_6de360(param_4);
    *(undefined4 *)(param_4 + 0x54) = 0xffffffff;
    uVar11 = native_UnityEngine_Input__GetKey_dbdbe4(0x130,0);
    if (((uVar11 & 1) != 0) ||
       (uVar11 = native_UnityEngine_Input__GetKey_dbdbe4(0x12f,0), (uVar11 & 1) != 0)) {
      *(uint *)(param_4 + 0x54) = uVar10;
      if ((*(long *)(param_4 + 0x30) == 0) ||
         ((lVar13 = *(long *)(*(long *)(param_4 + 0x30) + 0x360), lVar13 == 0 ||
          (lVar17 = *(long *)(lVar13 + 0x38), lVar17 == 0)))) goto LAB_006de35c;
      if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_006de350;
      lVar13 = *(long *)(lVar13 + 0x60);
      if (lVar13 == 0) goto LAB_006de35c;
      lVar17 = lVar17 + (long)(int)uVar10 * 0x178;
      uVar10 = *(uint *)(lVar17 + 0x58);
      lVar19 = (long)(int)uVar10;
      if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_006de350;
      lVar13 = *(long *)(lVar13 + lVar19 * 0x50 + 0x30);
      if (lVar13 == 0) goto LAB_006de35c;
      uVar18 = *(uint *)(lVar17 + 0x6c);
      if (*(uint *)(lVar13 + 0x18) <= uVar18) goto LAB_006de350;
      lVar17 = lVar13 + (long)(int)uVar18 * 0xc;
      puVar22 = (undefined8 *)(lVar17 + 0x20);
      uVar1 = uVar18 + 2;
      if (*(uint *)(lVar13 + 0x18) <= uVar1) goto LAB_006de350;
      lVar25 = lVar13 + (long)(int)uVar1 * 0xc;
      puVar26 = (undefined8 *)(lVar25 + 0x20);
      uVar21 = 0x3f0000003f000000;
      uVar2 = uVar18 + 1;
      fVar38 = (float)*puVar26;
      fVar39 = (float)*puVar22;
      fVar34 = (float)((ulong)*puVar26 >> 0x20);
      fVar36 = (float)((ulong)*puVar22 >> 0x20);
      fVar37 = (fVar39 + fVar38) * 0.5;
      fVar41 = (fVar36 + fVar34) * 0.5;
      uVar20 = CONCAT44(fVar41,fVar37);
      *puVar22 = CONCAT44(fVar36 - fVar41,fVar39 - fVar37);
      if (*(uint *)(lVar13 + 0x18) <= uVar2) goto LAB_006de350;
      lVar23 = lVar13 + (long)(int)uVar2 * 0xc;
      puVar24 = (undefined8 *)(lVar23 + 0x20);
      uVar30 = CONCAT44((float)((ulong)*puVar24 >> 0x20) - fVar41,(float)*puVar24 - fVar37);
      pfVar27 = (float *)(lVar23 + 0x28);
      *puVar24 = uVar30;
      if (*(uint *)(lVar13 + 0x18) <= uVar1) goto LAB_006de350;
      *puVar26 = CONCAT44(fVar34 - fVar41,fVar38 - fVar37);
      uVar3 = uVar18 + 3;
      if (*(uint *)(lVar13 + 0x18) <= uVar3) goto LAB_006de350;
      lVar14 = lVar13 + (long)(int)uVar3 * 0xc;
      pfVar15 = (float *)(lVar14 + 0x20);
      pfVar16 = (float *)(lVar14 + 0x28);
      *(ulong *)pfVar15 =
           CONCAT44((float)((ulong)*(undefined8 *)pfVar15 >> 0x20) - fVar41,
                    (float)*(undefined8 *)pfVar15 - fVar37);
      uVar31 = native_UnityEngine_Vector3__get_zero_776668(0);
      uVar35 = uVar30;
      uVar40 = uVar20;
      uVar32 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
      native_UnityEngine_Vector3__get_one_776a20(0);
      native_UnityEngine_Matrix4x4__TRS_8e56d4
                (&uStack_170,uVar31,uVar30,uVar20,uVar32,uVar35,uVar40,uVar21,0);
      *(undefined8 *)(param_4 + 0x90) = uStack_138;
      *(undefined8 *)(param_4 + 0x88) = uStack_140;
      *(undefined8 *)(param_4 + 0x80) = uStack_148;
      *(undefined8 *)(param_4 + 0x78) = uStack_150;
      *(undefined8 *)(param_4 + 0x70) = uStack_158;
      *(undefined8 *)(param_4 + 0x68) = uStack_160;
      *(undefined8 *)(param_4 + 0x60) = uStack_168;
      *(undefined8 *)(param_4 + 0x58) = uStack_170;
      if (*(uint *)(lVar13 + 0x18) <= uVar18) goto LAB_006de350;
      pfVar4 = (float *)(lVar17 + 0x28);
      uVar33 = *(undefined4 *)(lVar17 + 0x24);
      fVar38 = *pfVar4;
      lVar5 = param_4 + 0x58;
      uVar29 = native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec(*(undefined4 *)puVar22,lVar5,0)
      ;
      if (*(uint *)(lVar13 + 0x18) <= uVar18) goto LAB_006de350;
      *(undefined4 *)puVar22 = uVar29;
      *(undefined4 *)(lVar17 + 0x24) = uVar33;
      *pfVar4 = fVar38;
      if (*(uint *)(lVar13 + 0x18) <= uVar2) goto LAB_006de350;
      uVar33 = *(undefined4 *)(lVar23 + 0x24);
      fVar38 = *pfVar27;
      uVar29 = native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec(*(undefined4 *)puVar24,lVar5,0)
      ;
      if (*(uint *)(lVar13 + 0x18) <= uVar2) goto LAB_006de350;
      *(undefined4 *)puVar24 = uVar29;
      *(undefined4 *)(lVar23 + 0x24) = uVar33;
      *pfVar27 = fVar38;
      if (*(uint *)(lVar13 + 0x18) <= uVar1) goto LAB_006de350;
      pfVar6 = (float *)(lVar25 + 0x28);
      uVar33 = *(undefined4 *)(lVar25 + 0x24);
      fVar38 = *pfVar6;
      uVar29 = native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec(*(undefined4 *)puVar26,lVar5,0)
      ;
      if (*(uint *)(lVar13 + 0x18) <= uVar1) goto LAB_006de350;
      *(undefined4 *)puVar26 = uVar29;
      *(undefined4 *)(lVar25 + 0x24) = uVar33;
      *pfVar6 = fVar38;
      if (*(uint *)(lVar13 + 0x18) <= uVar3) goto LAB_006de350;
      pfVar7 = (float *)(lVar14 + 0x24);
      fVar34 = *pfVar7;
      fVar39 = *pfVar16;
      fVar38 = (float)native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec(*pfVar15,lVar5,0);
      if (*(uint *)(lVar13 + 0x18) <= uVar3) goto LAB_006de350;
      *pfVar15 = fVar38;
      *pfVar7 = fVar34;
      *pfVar16 = fVar39;
      if (*(uint *)(lVar13 + 0x18) <= uVar18) goto LAB_006de350;
      *puVar22 = CONCAT44(fVar41 + (float)((ulong)*puVar22 >> 0x20),fVar37 + (float)*puVar22);
      *pfVar4 = *pfVar4 + 0.0;
      if (*(uint *)(lVar13 + 0x18) <= uVar2) goto LAB_006de350;
      *puVar24 = CONCAT44(fVar41 + (float)((ulong)*puVar24 >> 0x20),fVar37 + (float)*puVar24);
      *pfVar27 = *pfVar27 + 0.0;
      if (*(uint *)(lVar13 + 0x18) <= uVar1) goto LAB_006de350;
      *puVar26 = CONCAT44(fVar41 + (float)((ulong)*puVar26 >> 0x20),fVar37 + (float)*puVar26);
      *pfVar6 = *pfVar6 + 0.0;
      if (*(uint *)(lVar13 + 0x18) <= uVar3) goto LAB_006de350;
      param_3 = (ulong)(uint)(fVar39 + 0.0);
      param_2 = (ulong)(uint)(fVar41 + fVar34);
      *pfVar15 = fVar37 + fVar38;
      *pfVar7 = fVar41 + fVar34;
      *pfVar16 = fVar39 + 0.0;
      native_UnityEngine_Color32___ctor_8d9fa0(auStack_98,0xff,0xff,0xc0,0xff,0);
      if (((*(long *)(param_4 + 0x30) == 0) ||
          (lVar17 = *(long *)(*(long *)(param_4 + 0x30) + 0x360), lVar17 == 0)) ||
         (lVar17 = *(long *)(lVar17 + 0x60), lVar17 == 0)) goto LAB_006de35c;
      if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_006de350;
      lVar17 = *(long *)(lVar17 + lVar19 * 0x50 + 0x58);
      if (lVar17 == 0) goto LAB_006de35c;
      if (((*(uint *)(lVar17 + 0x18) <= uVar18) ||
          (*(undefined4 *)(lVar17 + (long)(int)uVar18 * 4 + 0x20) = auStack_98[0],
          *(uint *)(lVar17 + 0x18) <= uVar2)) ||
         ((*(undefined4 *)(lVar17 + (long)(int)uVar2 * 4 + 0x20) = auStack_98[0],
          *(uint *)(lVar17 + 0x18) <= uVar1 ||
          (*(undefined4 *)(lVar17 + (long)(int)uVar1 * 4 + 0x20) = auStack_98[0],
          *(uint *)(lVar17 + 0x18) <= uVar3)))) goto LAB_006de350;
      *(undefined4 *)(lVar17 + (long)(int)uVar3 * 4 + 0x20) = auStack_98[0];
      if (((*(long *)(param_4 + 0x30) == 0) ||
          (lVar17 = *(long *)(*(long *)(param_4 + 0x30) + 0x360), lVar17 == 0)) ||
         (lVar17 = *(long *)(lVar17 + 0x60), lVar17 == 0)) goto LAB_006de35c;
      if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_006de350;
      func_0x002c9160(auStack_f8,lVar17 + lVar19 * 0x50 + 0x20,0x50);
      native_TMPro_TMP_MeshInfo__SwapVertexData_4b2514
                (auStack_f8,uVar18,*(int *)(lVar13 + 0x18) + -4,0);
      plVar12 = *(long **)(param_4 + 0x30);
      if (plVar12 == (long *)0x0) goto LAB_006de35c;
      (**(code **)(*plVar12 + 0x7f8))(plVar12,0xff,*(undefined8 *)(*plVar12 + 0x800));
    }
  }
  uVar20 = *(undefined8 *)(param_4 + 0x30);
  uVar30 = native_UnityEngine_Input__get_mousePosition_dbdd8c(0);
  uVar21 = *(undefined8 *)(param_4 + 0x40);
  if (((*(byte *)(_TMPro_TMP_TextUtilities_TypeInfo_12d60a8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_TMPro_TMP_TextUtilities_TypeInfo_12d60a8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = native_TMPro_TMP_TextUtilities__FindIntersectingWord_6a9c80
                     (uVar30,param_2,param_3,uVar20,uVar21,0);
  uVar20 = *(undefined8 *)(param_4 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar11 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar20,0,0);
  if ((uVar11 & 1) == 0) {
LAB_006ddf68:
    if (((uVar10 != 0xffffffff) && (uVar10 != *(uint *)(param_4 + 0x4c))) &&
       ((uVar11 = native_UnityEngine_Input__GetKey_dbdbe4(0x130,0), (uVar11 & 1) == 0 &&
        (uVar11 = native_UnityEngine_Input__GetKey_dbdbe4(0x12f,0), (uVar11 & 1) == 0)))) {
      plVar12 = *(long **)(param_4 + 0x30);
      *(uint *)(param_4 + 0x4c) = uVar10;
      if (((plVar12 == (long *)0x0) || (plVar12[0x6c] == 0)) ||
         (lVar13 = *(long *)(plVar12[0x6c] + 0x40), lVar13 == 0)) goto LAB_006de35c;
      if (*(uint *)(lVar13 + 0x18) <= uVar10) goto LAB_006de350;
      lVar13 = lVar13 + (long)(int)uVar10 * 0x18;
      iVar9 = *(int *)(lVar13 + 0x30);
      if (0 < iVar9) {
        iVar8 = *(int *)(lVar13 + 0x28);
        lVar13 = 0;
        do {
          if (((plVar12 == (long *)0x0) || (lVar17 = plVar12[0x6c], lVar17 == 0)) ||
             (lVar19 = *(long *)(lVar17 + 0x38), lVar19 == 0)) goto LAB_006de35c;
          uVar10 = iVar8 + (int)lVar13;
          if (*(uint *)(lVar19 + 0x18) <= uVar10) goto LAB_006de350;
          lVar17 = *(long *)(lVar17 + 0x60);
          if (lVar17 == 0) goto LAB_006de35c;
          lVar19 = lVar19 + (long)(int)uVar10 * 0x178;
          uVar10 = *(uint *)(lVar19 + 0x58);
          if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_006de350;
          lVar17 = *(long *)(lVar17 + (long)(int)uVar10 * 0x50 + 0x58);
          if (lVar17 == 0) goto LAB_006de35c;
          uVar10 = *(uint *)(lVar19 + 0x6c);
          if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_006de350;
          puVar28 = (undefined4 *)(lVar17 + (long)(int)uVar10 * 4 + 0x20);
          uVar29 = native_TMPro_TMPro_ExtensionMethods__Tint_6ae520(0x3f400000,*puVar28,0);
          if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_006de350;
          *puVar28 = uVar29;
          if (*(uint *)(lVar17 + 0x18) <= uVar10 + 1) goto LAB_006de350;
          *(undefined4 *)(lVar17 + (long)(int)(uVar10 + 1) * 4 + 0x20) = uVar29;
          if (*(uint *)(lVar17 + 0x18) <= uVar10 + 2) goto LAB_006de350;
          *(undefined4 *)(lVar17 + (long)(int)(uVar10 + 2) * 4 + 0x20) = uVar29;
          if (*(uint *)(lVar17 + 0x18) <= uVar10 + 3) goto LAB_006de350;
          *(undefined4 *)(lVar17 + (long)(int)(uVar10 + 3) * 4 + 0x20) = uVar29;
          plVar12 = *(long **)(param_4 + 0x30);
          lVar13 = lVar13 + 1;
        } while (lVar13 < iVar9);
        if (plVar12 == (long *)0x0) goto LAB_006de35c;
      }
      (**(code **)(*plVar12 + 0x7f8))(plVar12,0xff,*(undefined8 *)(*plVar12 + 0x800));
    }
  }
  else {
    uVar18 = *(uint *)(param_4 + 0x4c);
    if (uVar18 == 0xffffffff) goto LAB_006ddf68;
    if ((uVar10 == 0xffffffff) || (uVar10 != uVar18)) {
      plVar12 = *(long **)(param_4 + 0x30);
      if ((plVar12 == (long *)0x0) ||
         ((plVar12[0x6c] == 0 || (lVar13 = *(long *)(plVar12[0x6c] + 0x40), lVar13 == 0))))
      goto LAB_006de35c;
      if (*(uint *)(lVar13 + 0x18) <= uVar18) goto LAB_006de350;
      lVar13 = lVar13 + (long)(int)uVar18 * 0x18;
      iVar9 = *(int *)(lVar13 + 0x30);
      if (0 < iVar9) {
        iVar8 = *(int *)(lVar13 + 0x28);
        lVar13 = 0;
        do {
          if (((plVar12 == (long *)0x0) || (lVar17 = plVar12[0x6c], lVar17 == 0)) ||
             (lVar19 = *(long *)(lVar17 + 0x38), lVar19 == 0)) goto LAB_006de35c;
          uVar18 = iVar8 + (int)lVar13;
          if (*(uint *)(lVar19 + 0x18) <= uVar18) goto LAB_006de350;
          lVar17 = *(long *)(lVar17 + 0x60);
          if (lVar17 == 0) goto LAB_006de35c;
          lVar19 = lVar19 + (long)(int)uVar18 * 0x178;
          uVar18 = *(uint *)(lVar19 + 0x58);
          if (*(uint *)(lVar17 + 0x18) <= uVar18) goto LAB_006de350;
          lVar17 = *(long *)(lVar17 + (long)(int)uVar18 * 0x50 + 0x58);
          if (lVar17 == 0) goto LAB_006de35c;
          uVar18 = *(uint *)(lVar19 + 0x6c);
          if (*(uint *)(lVar17 + 0x18) <= uVar18) goto LAB_006de350;
          puVar28 = (undefined4 *)(lVar17 + (long)(int)uVar18 * 4 + 0x20);
          uVar29 = native_TMPro_TMPro_ExtensionMethods__Tint_6ae520(0x3faaaa8f,*puVar28,0);
          if (*(uint *)(lVar17 + 0x18) <= uVar18) goto LAB_006de350;
          *puVar28 = uVar29;
          if (*(uint *)(lVar17 + 0x18) <= uVar18 + 1) goto LAB_006de350;
          *(undefined4 *)(lVar17 + (long)(int)(uVar18 + 1) * 4 + 0x20) = uVar29;
          if (*(uint *)(lVar17 + 0x18) <= uVar18 + 2) goto LAB_006de350;
          *(undefined4 *)(lVar17 + (long)(int)(uVar18 + 2) * 4 + 0x20) = uVar29;
          if (*(uint *)(lVar17 + 0x18) <= uVar18 + 3) goto LAB_006de350;
          *(undefined4 *)(lVar17 + (long)(int)(uVar18 + 3) * 4 + 0x20) = uVar29;
          plVar12 = *(long **)(param_4 + 0x30);
          lVar13 = lVar13 + 1;
        } while (lVar13 < iVar9);
        if (plVar12 == (long *)0x0) goto LAB_006de35c;
      }
      (**(code **)(*plVar12 + 0x7f8))(plVar12,0xff,*(undefined8 *)(*plVar12 + 0x800));
      *(undefined4 *)(param_4 + 0x4c) = 0xffffffff;
      goto LAB_006ddf68;
    }
  }
  uVar20 = *(undefined8 *)(param_4 + 0x30);
  uVar30 = native_UnityEngine_Input__get_mousePosition_dbdd8c(0);
  uVar21 = *(undefined8 *)(param_4 + 0x40);
  if (((*(byte *)(_TMPro_TMP_TextUtilities_TypeInfo_12d60a8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_TMPro_TMP_TextUtilities_TypeInfo_12d60a8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = native_TMPro_TMP_TextUtilities__FindIntersectingLink_6aa9c0
                     (uVar30,param_2,param_3,uVar20,uVar21,0);
  if (uVar10 == 0xffffffff) {
    if (*(uint *)(param_4 + 0x50) == 0xffffffff) {
      return;
    }
  }
  else if (uVar10 == *(uint *)(param_4 + 0x50)) {
    return;
  }
  if ((*(long *)(param_4 + 0x20) != 0) &&
     (lVar13 = native_UnityEngine_Component__get_gameObject_8da66c(*(long *)(param_4 + 0x20),0),
     lVar13 != 0)) {
    native_UnityEngine_GameObject__SetActive_8de698(lVar13,0,0);
    *(undefined4 *)(param_4 + 0x50) = 0xffffffff;
    if (uVar10 == 0xffffffff) {
      return;
    }
    lVar13 = *(long *)(param_4 + 0x30);
    *(uint *)(param_4 + 0x50) = uVar10;
    if (((lVar13 != 0) && (*(long *)(lVar13 + 0x360) != 0)) &&
       (lVar17 = *(long *)(*(long *)(lVar13 + 0x360) + 0x48), lVar17 != 0)) {
      if (*(uint *)(lVar17 + 0x18) <= uVar10) {
LAB_006de350:
        uVar20 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar20,0);
      }
      lVar17 = lVar17 + (long)(int)uVar10 * 0x28;
      uStack_100 = *(undefined8 *)(lVar17 + 0x40);
      uStack_118 = *(undefined8 *)(lVar17 + 0x28);
      uVar35 = *(undefined8 *)(lVar17 + 0x20);
      uStack_108 = *(undefined8 *)(lVar17 + 0x38);
      uStack_110 = *(undefined8 *)(lVar17 + 0x30);
      uStack_120 = uVar35;
      uVar20 = native_TMPro_TMP_Text__get_rectTransform_4b9320(lVar13,0);
      uVar30 = native_UnityEngine_Input__get_mousePosition_dbdd8c(0);
      uVar21 = *(undefined8 *)(param_4 + 0x40);
      if (((*(byte *)(_UnityEngine_RectTransformUtility_TypeInfo_12d58f8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_RectTransformUtility_TypeInfo_12d58f8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UnityEngine_RectTransformUtility__ScreenPointToWorldPointInRectangle_db7dfc
                (uVar30,uVar35,uVar20,uVar21,&uStack_130,0);
      lVar13 = native_TMPro_TMP_LinkInfo__GetLinkID_8963bc(&uStack_120,0);
      if (lVar13 != 0) {
        uVar11 = native_System_String__op_Equality_afc18c(lVar13,_StringLiteral_id_01_12f4cd8,0);
        if ((uVar11 & 1) == 0) {
          uVar11 = native_System_String__op_Equality_afc18c(lVar13,_StringLiteral_id_02_12f4ce0,0);
          if ((uVar11 & 1) == 0) {
            return;
          }
          if (*(long *)(param_4 + 0x20) == 0) goto LAB_006de35c;
          native_UnityEngine_Transform__set_position_77174c
                    (uStack_130 & 0xffffffff,uStack_130._4_4_,uStack_128,*(long *)(param_4 + 0x20),0
                    );
          if ((*(long *)(param_4 + 0x20) == 0) ||
             (lVar13 = native_UnityEngine_Component__get_gameObject_8da66c
                                 (*(long *)(param_4 + 0x20),0), lVar13 == 0)) goto LAB_006de35c;
          native_UnityEngine_GameObject__SetActive_8de698(lVar13,1,0);
          plVar12 = *(long **)(param_4 + 0x28);
          if (plVar12 == (long *)0x0) goto LAB_006de35c;
          lVar13 = *plVar12;
          puVar22 = (undefined8 *)&StringLiteral_You_have_selected_link___ffff00__ID_02_12f3200;
        }
        else {
          if (*(long *)(param_4 + 0x20) == 0) goto LAB_006de35c;
          native_UnityEngine_Transform__set_position_77174c
                    (uStack_130 & 0xffffffff,uStack_130._4_4_,uStack_128,*(long *)(param_4 + 0x20),0
                    );
          if ((*(long *)(param_4 + 0x20) == 0) ||
             (lVar13 = native_UnityEngine_Component__get_gameObject_8da66c
                                 (*(long *)(param_4 + 0x20),0), lVar13 == 0)) goto LAB_006de35c;
          native_UnityEngine_GameObject__SetActive_8de698(lVar13,1,0);
          plVar12 = *(long **)(param_4 + 0x28);
          if (plVar12 == (long *)0x0) goto LAB_006de35c;
          lVar13 = *plVar12;
          puVar22 = (undefined8 *)&StringLiteral_You_have_selected_link___ffff00__ID_01_12f31f8;
        }
        (**(code **)(lVar13 + 0x558))(plVar12,*puVar22,*(undefined8 *)(lVar13 + 0x560));
      }
      return;
    }
  }
LAB_006de35c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.TMP_TextSelector_B$$OnPointerEnter @ 0x6debf0
 * void TMPro_Examples_TMP_TextSelector_B__OnPointerEnter (TMPro_Examples_TMP_TextSelector_B_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

/* TMPro.Examples.TMP_TextSelector_B$$OnPointerEnter
   void TMPro_Examples_TMP_TextSelector_B__OnPointerEnter (TMPro_Examples_TMP_TextSelector_B_o*
   __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

void native_TMPro_Examples_TMP_TextSelector_B__OnPointerEnter_6debf0(long param_1)

{
  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}



/* TMPro.Examples.TMP_TextSelector_B$$OnPointerExit @ 0x6debfc
 * void TMPro_Examples_TMP_TextSelector_B__OnPointerExit (TMPro_Examples_TMP_TextSelector_B_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

/* TMPro.Examples.TMP_TextSelector_B$$OnPointerExit
   void TMPro_Examples_TMP_TextSelector_B__OnPointerExit (TMPro_Examples_TMP_TextSelector_B_o*
   __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

void native_TMPro_Examples_TMP_TextSelector_B__OnPointerExit_6debfc(long param_1)

{
  *(undefined1 *)(param_1 + 0x48) = 0;
  return;
}



/* TMPro.Examples.TMP_TextSelector_B$$OnPointerClick @ 0x6dec04
 * void TMPro_Examples_TMP_TextSelector_B__OnPointerClick (TMPro_Examples_TMP_TextSelector_B_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

/* TMPro.Examples.TMP_TextSelector_B$$OnPointerClick
   void TMPro_Examples_TMP_TextSelector_B__OnPointerClick (TMPro_Examples_TMP_TextSelector_B_o*
   __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

void native_TMPro_Examples_TMP_TextSelector_B__OnPointerClick_6dec04(void)

{
  return;
}



/* TMPro.Examples.TMP_TextSelector_B$$OnPointerUp @ 0x6dec08
 * void TMPro_Examples_TMP_TextSelector_B__OnPointerUp (TMPro_Examples_TMP_TextSelector_B_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

/* TMPro.Examples.TMP_TextSelector_B$$OnPointerUp
   void TMPro_Examples_TMP_TextSelector_B__OnPointerUp (TMPro_Examples_TMP_TextSelector_B_o* __this,
   UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

void native_TMPro_Examples_TMP_TextSelector_B__OnPointerUp_6dec08(void)

{
  return;
}



/* TMPro.Examples.TMP_TextSelector_B$$RestoreCachedVertexAttributes @ 0x6de360
 * void TMPro_Examples_TMP_TextSelector_B__RestoreCachedVertexAttributes (TMPro_Examples_TMP_TextSelector_B_o* __this, int32_t index, const MethodInfo* method); */

/* TMPro.Examples.TMP_TextSelector_B$$RestoreCachedVertexAttributes
   void TMPro_Examples_TMP_TextSelector_B__RestoreCachedVertexAttributes
   (TMPro_Examples_TMP_TextSelector_B_o* __this, int32_t index, const MethodInfo* method); */

void native_TMPro_Examples_TMP_TextSelector_B__RestoreCachedVertexAttributes_6de360
               (long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  if (param_2 == 0xffffffff) {
    return;
  }
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (lVar11 = *(long *)(*(long *)(param_1 + 0x30) + 0x360), lVar11 != 0)) {
    if (*(int *)(lVar11 + 0x18) + -1 < (int)param_2) {
      return;
    }
    lVar9 = *(long *)(lVar11 + 0x38);
    if (lVar9 != 0) {
      if (param_2 < *(uint *)(lVar9 + 0x18)) {
        lVar12 = *(long *)(param_1 + 0x98);
        if (lVar12 == 0) goto LAB_006debec;
        lVar9 = lVar9 + (long)(int)param_2 * 0x178;
        uVar5 = *(uint *)(lVar9 + 0x58);
        lVar10 = (long)(int)uVar5;
        if (uVar5 < *(uint *)(lVar12 + 0x18)) {
          lVar11 = *(long *)(lVar11 + 0x60);
          if (lVar11 == 0) goto LAB_006debec;
          if (uVar5 < *(uint *)(lVar11 + 0x18)) {
            lVar12 = *(long *)(lVar12 + lVar10 * 0x50 + 0x30);
            if (lVar12 == 0) goto LAB_006debec;
            uVar6 = *(uint *)(lVar9 + 0x6c);
            lVar9 = (long)(int)uVar6;
            if (uVar6 < *(uint *)(lVar12 + 0x18)) {
              lVar11 = *(long *)(lVar11 + lVar10 * 0x50 + 0x30);
              if (lVar11 == 0) goto LAB_006debec;
              if (uVar6 < *(uint *)(lVar11 + 0x18)) {
                lVar13 = lVar12 + lVar9 * 0xc;
                uVar4 = *(undefined4 *)(lVar13 + 0x28);
                lVar14 = lVar11 + lVar9 * 0xc;
                *(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)(lVar13 + 0x20);
                *(undefined4 *)(lVar14 + 0x28) = uVar4;
                uVar1 = uVar6 + 1;
                if ((uVar1 < *(uint *)(lVar12 + 0x18)) &&
                   (lVar13 = (long)(int)uVar1, uVar1 < *(uint *)(lVar11 + 0x18))) {
                  lVar14 = lVar12 + lVar13 * 0xc;
                  uVar4 = *(undefined4 *)(lVar14 + 0x28);
                  lVar15 = lVar11 + lVar13 * 0xc;
                  *(undefined8 *)(lVar15 + 0x20) = *(undefined8 *)(lVar14 + 0x20);
                  *(undefined4 *)(lVar15 + 0x28) = uVar4;
                  uVar2 = uVar6 + 2;
                  if ((uVar2 < *(uint *)(lVar12 + 0x18)) &&
                     (lVar14 = (long)(int)uVar2, uVar2 < *(uint *)(lVar11 + 0x18))) {
                    lVar15 = lVar12 + lVar14 * 0xc;
                    uVar4 = *(undefined4 *)(lVar15 + 0x28);
                    lVar16 = lVar11 + lVar14 * 0xc;
                    *(undefined8 *)(lVar16 + 0x20) = *(undefined8 *)(lVar15 + 0x20);
                    *(undefined4 *)(lVar16 + 0x28) = uVar4;
                    uVar3 = uVar6 + 3;
                    if ((uVar3 < *(uint *)(lVar12 + 0x18)) &&
                       (lVar15 = (long)(int)uVar3, uVar3 < *(uint *)(lVar11 + 0x18))) {
                      lVar16 = lVar12 + lVar15 * 0xc;
                      uVar4 = *(undefined4 *)(lVar16 + 0x28);
                      lVar17 = lVar11 + lVar15 * 0xc;
                      *(undefined8 *)(lVar17 + 0x20) = *(undefined8 *)(lVar16 + 0x20);
                      *(undefined4 *)(lVar17 + 0x28) = uVar4;
                      if ((*(long *)(param_1 + 0x30) == 0) ||
                         ((lVar16 = *(long *)(*(long *)(param_1 + 0x30) + 0x360), lVar16 == 0 ||
                          (lVar16 = *(long *)(lVar16 + 0x60), lVar16 == 0)))) goto LAB_006debec;
                      if (uVar5 < *(uint *)(lVar16 + 0x18)) {
                        lVar17 = *(long *)(param_1 + 0x98);
                        if (lVar17 == 0) goto LAB_006debec;
                        if (uVar5 < *(uint *)(lVar17 + 0x18)) {
                          lVar17 = *(long *)(lVar17 + lVar10 * 0x50 + 0x58);
                          if (lVar17 == 0) goto LAB_006debec;
                          if (uVar6 < *(uint *)(lVar17 + 0x18)) {
                            lVar16 = *(long *)(lVar16 + lVar10 * 0x50 + 0x58);
                            if (lVar16 == 0) goto LAB_006debec;
                            if ((((((uVar6 < *(uint *)(lVar16 + 0x18)) &&
                                   (*(undefined4 *)(lVar16 + lVar9 * 4 + 0x20) =
                                         *(undefined4 *)(lVar17 + lVar9 * 4 + 0x20),
                                   uVar1 < *(uint *)(lVar17 + 0x18))) &&
                                  (uVar1 < *(uint *)(lVar16 + 0x18))) &&
                                 ((*(undefined4 *)(lVar16 + lVar13 * 4 + 0x20) =
                                        *(undefined4 *)(lVar17 + lVar13 * 4 + 0x20),
                                  uVar2 < *(uint *)(lVar17 + 0x18) &&
                                  (uVar2 < *(uint *)(lVar16 + 0x18))))) &&
                                (*(undefined4 *)(lVar16 + lVar14 * 4 + 0x20) =
                                      *(undefined4 *)(lVar17 + lVar14 * 4 + 0x20),
                                uVar3 < *(uint *)(lVar17 + 0x18))) &&
                               (uVar3 < *(uint *)(lVar16 + 0x18))) {
                              *(undefined4 *)(lVar16 + lVar15 * 4 + 0x20) =
                                   *(undefined4 *)(lVar17 + lVar15 * 4 + 0x20);
                              lVar16 = *(long *)(param_1 + 0x98);
                              if (lVar16 == 0) goto LAB_006debec;
                              if (uVar5 < *(uint *)(lVar16 + 0x18)) {
                                if (((*(long *)(param_1 + 0x30) == 0) ||
                                    (lVar17 = *(long *)(*(long *)(param_1 + 0x30) + 0x360),
                                    lVar17 == 0)) ||
                                   (lVar17 = *(long *)(lVar17 + 0x60), lVar17 == 0))
                                goto LAB_006debec;
                                if (uVar5 < *(uint *)(lVar17 + 0x18)) {
                                  lVar16 = *(long *)(lVar16 + lVar10 * 0x50 + 0x48);
                                  if (lVar16 == 0) goto LAB_006debec;
                                  if (uVar6 < *(uint *)(lVar16 + 0x18)) {
                                    lVar17 = *(long *)(lVar17 + lVar10 * 0x50 + 0x48);
                                    if (lVar17 == 0) goto LAB_006debec;
                                    if ((((uVar6 < *(uint *)(lVar17 + 0x18)) &&
                                         (*(undefined8 *)(lVar17 + lVar9 * 8 + 0x20) =
                                               *(undefined8 *)(lVar16 + lVar9 * 8 + 0x20),
                                         uVar1 < *(uint *)(lVar16 + 0x18))) &&
                                        (uVar1 < *(uint *)(lVar17 + 0x18))) &&
                                       (((*(undefined8 *)(lVar17 + lVar13 * 8 + 0x20) =
                                               *(undefined8 *)(lVar16 + lVar13 * 8 + 0x20),
                                         uVar2 < *(uint *)(lVar16 + 0x18) &&
                                         (uVar2 < *(uint *)(lVar17 + 0x18))) &&
                                        ((*(undefined8 *)(lVar17 + lVar14 * 8 + 0x20) =
                                               *(undefined8 *)(lVar16 + lVar14 * 8 + 0x20),
                                         uVar3 < *(uint *)(lVar16 + 0x18) &&
                                         (uVar3 < *(uint *)(lVar17 + 0x18))))))) {
                                      *(undefined8 *)(lVar17 + lVar15 * 8 + 0x20) =
                                           *(undefined8 *)(lVar16 + lVar15 * 8 + 0x20);
                                      lVar16 = *(long *)(param_1 + 0x98);
                                      if (lVar16 == 0) goto LAB_006debec;
                                      if (uVar5 < *(uint *)(lVar16 + 0x18)) {
                                        if (((*(long *)(param_1 + 0x30) == 0) ||
                                            (lVar17 = *(long *)(*(long *)(param_1 + 0x30) + 0x360),
                                            lVar17 == 0)) ||
                                           (lVar17 = *(long *)(lVar17 + 0x60), lVar17 == 0))
                                        goto LAB_006debec;
                                        if (uVar5 < *(uint *)(lVar17 + 0x18)) {
                                          lVar16 = *(long *)(lVar16 + lVar10 * 0x50 + 0x50);
                                          if (lVar16 == 0) goto LAB_006debec;
                                          if (uVar6 < *(uint *)(lVar16 + 0x18)) {
                                            lVar17 = *(long *)(lVar17 + lVar10 * 0x50 + 0x50);
                                            if (lVar17 == 0) goto LAB_006debec;
                                            if ((((uVar6 < *(uint *)(lVar17 + 0x18)) &&
                                                 (*(undefined8 *)(lVar17 + lVar9 * 8 + 0x20) =
                                                       *(undefined8 *)(lVar16 + lVar9 * 8 + 0x20),
                                                 uVar1 < *(uint *)(lVar16 + 0x18))) &&
                                                (uVar1 < *(uint *)(lVar17 + 0x18))) &&
                                               (((*(undefined8 *)(lVar17 + lVar13 * 8 + 0x20) =
                                                       *(undefined8 *)(lVar16 + lVar13 * 8 + 0x20),
                                                 uVar2 < *(uint *)(lVar16 + 0x18) &&
                                                 (uVar2 < *(uint *)(lVar17 + 0x18))) &&
                                                ((*(undefined8 *)(lVar17 + lVar14 * 8 + 0x20) =
                                                       *(undefined8 *)(lVar16 + lVar14 * 8 + 0x20),
                                                 uVar3 < *(uint *)(lVar16 + 0x18) &&
                                                 (uVar3 < *(uint *)(lVar17 + 0x18))))))) {
                                              *(undefined8 *)(lVar17 + lVar15 * 8 + 0x20) =
                                                   *(undefined8 *)(lVar16 + lVar15 * 8 + 0x20);
                                              uVar1 = *(uint *)(lVar12 + 0x18);
                                              uVar6 = uVar1 + 3;
                                              if (-1 < (int)uVar1) {
                                                uVar6 = uVar1;
                                              }
                                              uVar6 = uVar6 & 0xfffffffc;
                                              uVar2 = uVar6 - 4;
                                              if ((uVar2 < uVar1) &&
                                                 (lVar9 = (long)(int)uVar2,
                                                 uVar2 < *(uint *)(lVar11 + 0x18))) {
                                                lVar13 = lVar12 + lVar9 * 0xc;
                                                uVar4 = *(undefined4 *)(lVar13 + 0x28);
                                                lVar14 = lVar11 + lVar9 * 0xc;
                                                *(undefined8 *)(lVar14 + 0x20) =
                                                     *(undefined8 *)(lVar13 + 0x20);
                                                *(undefined4 *)(lVar14 + 0x28) = uVar4;
                                                uVar1 = uVar6 - 3;
                                                if ((uVar1 < *(uint *)(lVar12 + 0x18)) &&
                                                   (lVar13 = (long)(int)uVar1,
                                                   uVar1 < *(uint *)(lVar11 + 0x18))) {
                                                  lVar14 = lVar12 + lVar13 * 0xc;
                                                  uVar4 = *(undefined4 *)(lVar14 + 0x28);
                                                  lVar15 = lVar11 + lVar13 * 0xc;
                                                  *(undefined8 *)(lVar15 + 0x20) =
                                                       *(undefined8 *)(lVar14 + 0x20);
                                                  *(undefined4 *)(lVar15 + 0x28) = uVar4;
                                                  uVar3 = uVar6 - 2;
                                                  if ((uVar3 < *(uint *)(lVar12 + 0x18)) &&
                                                     (lVar14 = (long)(int)uVar3,
                                                     uVar3 < *(uint *)(lVar11 + 0x18))) {
                                                    lVar15 = lVar12 + lVar14 * 0xc;
                                                    uVar4 = *(undefined4 *)(lVar15 + 0x28);
                                                    lVar16 = lVar11 + lVar14 * 0xc;
                                                    uVar6 = uVar6 - 1;
                                                    *(undefined8 *)(lVar16 + 0x20) =
                                                         *(undefined8 *)(lVar15 + 0x20);
                                                    *(undefined4 *)(lVar16 + 0x28) = uVar4;
                                                    if ((uVar6 < *(uint *)(lVar12 + 0x18)) &&
                                                       (lVar15 = (long)(int)uVar6,
                                                       uVar6 < *(uint *)(lVar11 + 0x18))) {
                                                      lVar12 = lVar12 + lVar15 * 0xc;
                                                      uVar4 = *(undefined4 *)(lVar12 + 0x28);
                                                      lVar11 = lVar11 + lVar15 * 0xc;
                                                      *(undefined8 *)(lVar11 + 0x20) =
                                                           *(undefined8 *)(lVar12 + 0x20);
                                                      *(undefined4 *)(lVar11 + 0x28) = uVar4;
                                                      lVar11 = *(long *)(param_1 + 0x98);
                                                      if (lVar11 != 0) {
                                                        if (*(uint *)(lVar11 + 0x18) <= uVar5)
                                                        goto LAB_006debe0;
                                                        if (((*(long *)(param_1 + 0x30) != 0) &&
                                                            (lVar12 = *(long *)(*(long *)(param_1 +
                                                                                         0x30) +
                                                                               0x360), lVar12 != 0))
                                                           && (lVar12 = *(long *)(lVar12 + 0x60),
                                                              lVar12 != 0)) {
                                                          if (*(uint *)(lVar12 + 0x18) <= uVar5)
                                                          goto LAB_006debe0;
                                                          lVar11 = *(long *)(lVar11 + lVar10 * 0x50
                                                                            + 0x58);
                                                          if (lVar11 != 0) {
                                                            if (*(uint *)(lVar11 + 0x18) <= uVar2)
                                                            goto LAB_006debe0;
                                                            lVar12 = *(long *)(lVar12 + lVar10 * 
                                                  0x50 + 0x58);
                                                  if (lVar12 != 0) {
                                                    if ((((*(uint *)(lVar12 + 0x18) <= uVar2) ||
                                                         (*(undefined4 *)(lVar12 + lVar9 * 4 + 0x20)
                                                               = *(undefined4 *)
                                                                  (lVar11 + lVar9 * 4 + 0x20),
                                                         *(uint *)(lVar11 + 0x18) <= uVar1)) ||
                                                        ((*(uint *)(lVar12 + 0x18) <= uVar1 ||
                                                         ((*(undefined4 *)
                                                            (lVar12 + lVar13 * 4 + 0x20) =
                                                                *(undefined4 *)
                                                                 (lVar11 + lVar13 * 4 + 0x20),
                                                          *(uint *)(lVar11 + 0x18) <= uVar3 ||
                                                          (*(uint *)(lVar12 + 0x18) <= uVar3))))))
                                                       || ((*(undefined4 *)
                                                             (lVar12 + lVar14 * 4 + 0x20) =
                                                                 *(undefined4 *)
                                                                  (lVar11 + lVar14 * 4 + 0x20),
                                                           *(uint *)(lVar11 + 0x18) <= uVar6 ||
                                                           (*(uint *)(lVar12 + 0x18) <= uVar6))))
                                                    goto LAB_006debe0;
                                                    *(undefined4 *)(lVar12 + lVar15 * 4 + 0x20) =
                                                         *(undefined4 *)(lVar11 + lVar15 * 4 + 0x20)
                                                    ;
                                                    lVar11 = *(long *)(param_1 + 0x98);
                                                    if (lVar11 != 0) {
                                                      if (*(uint *)(lVar11 + 0x18) <= uVar5)
                                                      goto LAB_006debe0;
                                                      if (((*(long *)(param_1 + 0x30) != 0) &&
                                                          (lVar12 = *(long *)(*(long *)(param_1 +
                                                                                       0x30) + 0x360
                                                                             ), lVar12 != 0)) &&
                                                         (lVar12 = *(long *)(lVar12 + 0x60),
                                                         lVar12 != 0)) {
                                                        if (*(uint *)(lVar12 + 0x18) <= uVar5)
                                                        goto LAB_006debe0;
                                                        lVar11 = *(long *)(lVar11 + lVar10 * 0x50 +
                                                                          0x48);
                                                        if (lVar11 != 0) {
                                                          if (*(uint *)(lVar11 + 0x18) <= uVar2)
                                                          goto LAB_006debe0;
                                                          lVar12 = *(long *)(lVar12 + lVar10 * 0x50
                                                                            + 0x48);
                                                          if (lVar12 != 0) {
                                                            if (((*(uint *)(lVar12 + 0x18) <= uVar2)
                                                                || (*(undefined8 *)
                                                                     (lVar12 + lVar9 * 8 + 0x20) =
                                                                         *(undefined8 *)
                                                                          (lVar11 + lVar9 * 8 + 0x20
                                                                          ), *(uint *)(lVar11 + 0x18
                                                                                      ) <= uVar1))
                                                               || ((((*(uint *)(lVar12 + 0x18) <=
                                                                      uVar1 || ((*(undefined8 *)
                                                                                  (lVar12 + lVar13 *
                                                                                            8 + 0x20
                                                                                  ) = *(undefined8 *
                                                                                       )(lVar11 + 
                                                  lVar13 * 8 + 0x20),
                                                  *(uint *)(lVar11 + 0x18) <= uVar3 ||
                                                  (*(uint *)(lVar12 + 0x18) <= uVar3)))) ||
                                                  (*(undefined8 *)(lVar12 + lVar14 * 8 + 0x20) =
                                                        *(undefined8 *)(lVar11 + lVar14 * 8 + 0x20),
                                                  *(uint *)(lVar11 + 0x18) <= uVar6)) ||
                                                  (*(uint *)(lVar12 + 0x18) <= uVar6))))
                                                  goto LAB_006debe0;
                                                  *(undefined8 *)(lVar12 + lVar15 * 8 + 0x20) =
                                                       *(undefined8 *)(lVar11 + lVar15 * 8 + 0x20);
                                                  lVar11 = *(long *)(param_1 + 0x98);
                                                  if (lVar11 != 0) {
                                                    if (*(uint *)(lVar11 + 0x18) <= uVar5)
                                                    goto LAB_006debe0;
                                                    if (((*(long *)(param_1 + 0x30) != 0) &&
                                                        (lVar12 = *(long *)(*(long *)(param_1 + 0x30
                                                                                     ) + 0x360),
                                                        lVar12 != 0)) &&
                                                       (lVar12 = *(long *)(lVar12 + 0x60),
                                                       lVar12 != 0)) {
                                                      if (*(uint *)(lVar12 + 0x18) <= uVar5)
                                                      goto LAB_006debe0;
                                                      lVar11 = *(long *)(lVar11 + lVar10 * 0x50 +
                                                                        0x50);
                                                      if (lVar11 != 0) {
                                                        if (*(uint *)(lVar11 + 0x18) <= uVar2)
                                                        goto LAB_006debe0;
                                                        lVar12 = *(long *)(lVar12 + lVar10 * 0x50 +
                                                                          0x50);
                                                        if (lVar12 != 0) {
                                                          if (((((*(uint *)(lVar12 + 0x18) <= uVar2)
                                                                || (*(undefined8 *)
                                                                     (lVar12 + lVar9 * 8 + 0x20) =
                                                                         *(undefined8 *)
                                                                          (lVar11 + lVar9 * 8 + 0x20
                                                                          ), *(uint *)(lVar11 + 0x18
                                                                                      ) <= uVar1))
                                                               || ((*(uint *)(lVar12 + 0x18) <=
                                                                    uVar1 || ((*(undefined8 *)
                                                                                (lVar12 + lVar13 * 8
                                                                                + 0x20) = *(
                                                  undefined8 *)(lVar11 + lVar13 * 8 + 0x20),
                                                  *(uint *)(lVar11 + 0x18) <= uVar3 ||
                                                  (*(uint *)(lVar12 + 0x18) <= uVar3)))))) ||
                                                  (*(undefined8 *)(lVar12 + lVar14 * 8 + 0x20) =
                                                        *(undefined8 *)(lVar11 + lVar14 * 8 + 0x20),
                                                  *(uint *)(lVar11 + 0x18) <= uVar6)) ||
                                                  (*(uint *)(lVar12 + 0x18) <= uVar6))
                                                  goto LAB_006debe0;
                                                  *(undefined8 *)(lVar12 + lVar15 * 8 + 0x20) =
                                                       *(undefined8 *)(lVar11 + lVar15 * 8 + 0x20);
                                                  plVar7 = *(long **)(param_1 + 0x30);
                                                  if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006debdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                                    (**(code **)(*plVar7 + 0x7f8))
                                                              (plVar7,0xff,
                                                               *(undefined8 *)(*plVar7 + 0x800));
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
                                                  goto LAB_006debec;
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
LAB_006debe0:
      uVar8 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar8,0);
    }
  }
LAB_006debec:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.TMP_TextSelector_B$$.ctor @ 0x6dec0c
 * void TMPro_Examples_TMP_TextSelector_B___ctor (TMPro_Examples_TMP_TextSelector_B_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TMP_TextSelector_B$$.ctor
   void TMPro_Examples_TMP_TextSelector_B___ctor (TMPro_Examples_TMP_TextSelector_B_o* __this, const
   MethodInfo* method); */

long native_TMPro_Examples_TMP_TextSelector_B___ctor_6dec0c(long param_1)

{
  *(undefined8 *)(param_1 + 0x4c) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  if ((bRam0000000001340ae0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001340ae0 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  return param_1;
}


