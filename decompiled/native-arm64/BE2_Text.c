/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Utils.BE2_Text$$get_isNull @ 0x61a0f0
 * bool MG_BlocksEngine2_Utils_BE2_Text__get_isNull (MG_BlocksEngine2_Utils_BE2_Text_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Utils.BE2_Text$$get_isNull
   bool MG_BlocksEngine2_Utils_BE2_Text__get_isNull (MG_BlocksEngine2_Utils_BE2_Text_o* __this,
   const MethodInfo* method); */

undefined1 native_MG_BlocksEngine2_Utils_BE2_Text__get_isNull_61a0f0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



/* MG_BlocksEngine2.Utils.BE2_Text$$.ctor @ 0x61a0f8
 * void MG_BlocksEngine2_Utils_BE2_Text___ctor (MG_BlocksEngine2_Utils_BE2_Text_o* __this, UnityEngine_Transform_o* transform, const MethodInfo* method); */

/* MG_BlocksEngine2.Utils.BE2_Text$$.ctor
   void MG_BlocksEngine2_Utils_BE2_Text___ctor (MG_BlocksEngine2_Utils_BE2_Text_o* __this,
   UnityEngine_Transform_o* transform, const MethodInfo* method); */

void native_MG_BlocksEngine2_Utils_BE2_Text___ctor_61a0f8(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  native_System_Object___ctor_ad2798(param_1,0);
  puVar4 = (undefined8 *)(param_1 + 0x10);
  *puVar4 = param_2;
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



/* MG_BlocksEngine2.Utils.BE2_Text$$Init @ 0x61a12c
 * void MG_BlocksEngine2_Utils_BE2_Text__Init (MG_BlocksEngine2_Utils_BE2_Text_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_Text$$Init
   void MG_BlocksEngine2_Utils_BE2_Text__Init (MG_BlocksEngine2_Utils_BE2_Text_o* __this, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_Utils_BE2_Text__Init_61a12c(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  if ((bRam000000000133eebb & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_TMP_Text____12e2b38);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Text____12e2b40);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133eebb = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (*(long *)(param_1 + 0x10),
                       _Method_UnityEngine_Component_GetComponent_Text____12e2b40);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    native_sub_4326e0((undefined8 *)(param_1 + 0x18),uVar2);
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (*(long *)(param_1 + 0x10),
                         _Method_UnityEngine_Component_GetComponent_TMP_Text____12e2b38);
      puVar4 = (undefined8 *)(param_1 + 0x20);
      *puVar4 = uVar2;
      native_sub_4326e0(puVar4,uVar2);
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar2,0);
      if ((uVar3 & 1) == 0) {
        uVar2 = *puVar4;
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        bVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar2,0);
        bVar1 = ~bVar1 & 1;
      }
      else {
        bVar1 = 0;
      }
      *(byte *)(param_1 + 0x28) = bVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Utils.BE2_Text$$GetBE2Text @ 0x610e74
 * MG_BlocksEngine2_Utils_BE2_Text_o* MG_BlocksEngine2_Utils_BE2_Text__GetBE2Text (UnityEngine_Transform_o* transform, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_Text$$GetBE2Text
   MG_BlocksEngine2_Utils_BE2_Text_o* MG_BlocksEngine2_Utils_BE2_Text__GetBE2Text
   (UnityEngine_Transform_o* transform, const MethodInfo* method); */

long native_MG_BlocksEngine2_Utils_BE2_Text__GetBE2Text_610e74(undefined8 param_1)

{
  long lVar1;
  
  if ((bRam000000000133eebc & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Utils_BE2_Text_TypeInfo_12d3a70);
    bRam000000000133eebc = 1;
  }
  lVar1 = native_sub_432808(_MG_BlocksEngine2_Utils_BE2_Text_TypeInfo_12d3a70);
  native_System_Object___ctor_ad2798(lVar1,0);
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  native_sub_4326e0((undefined8 *)(lVar1 + 0x10),param_1);
  if (lVar1 != 0) {
    native_MG_BlocksEngine2_Utils_BE2_Text__Init_61a12c(lVar1);
    if (*(char *)(lVar1 + 0x28) != '\0') {
      lVar1 = 0;
    }
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Utils.BE2_Text$$GetBE2TextInChildren @ 0x61a254
 * MG_BlocksEngine2_Utils_BE2_Text_o* MG_BlocksEngine2_Utils_BE2_Text__GetBE2TextInChildren (UnityEngine_Transform_o* transform, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_Text$$GetBE2TextInChildren
   MG_BlocksEngine2_Utils_BE2_Text_o* MG_BlocksEngine2_Utils_BE2_Text__GetBE2TextInChildren
   (UnityEngine_Transform_o* transform, const MethodInfo* method); */

long native_MG_BlocksEngine2_Utils_BE2_Text__GetBE2TextInChildren_61a254(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133eebd & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInChildren_TMP_Text____12e2c98);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInChildren_Text____12e2ca0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133eebd = 1;
  }
  if (param_1 != 0) {
    lVar1 = native_UnityEngine_Component__GetComponentInChildren_Animation__49db98
                      (param_1,_Method_UnityEngine_Component_GetComponentInChildren_Text____12e2ca0)
    ;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar1,0,0);
    if ((uVar2 & 1) == 0) {
      lVar1 = native_UnityEngine_Component__GetComponentInChildren_Animation__49db98
                        (param_1,
                         _Method_UnityEngine_Component_GetComponentInChildren_TMP_Text____12e2c98);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar1,0,0);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      if (lVar1 == 0) goto LAB_0061a384;
      uVar3 = native_TMPro_TMP_Text__get_transform_4b926c(lVar1,0);
    }
    else {
      if (lVar1 == 0) goto LAB_0061a384;
      uVar3 = native_UnityEngine_Component__get_transform_8da62c(lVar1,0);
    }
    if ((bRam000000000133eebc & 1) == 0) {
      native_sub_43273c(&MG_BlocksEngine2_Utils_BE2_Text_TypeInfo_12d3a70);
      bRam000000000133eebc = 1;
    }
    lVar1 = native_sub_432808(_MG_BlocksEngine2_Utils_BE2_Text_TypeInfo_12d3a70);
    native_System_Object___ctor_ad2798(lVar1,0);
    *(undefined8 *)(lVar1 + 0x10) = uVar3;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x10),uVar3);
    if (lVar1 != 0) {
      native_MG_BlocksEngine2_Utils_BE2_Text__Init_61a12c(lVar1);
      if (*(char *)(lVar1 + 0x28) != '\0') {
        lVar1 = 0;
      }
      return lVar1;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
LAB_0061a384:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Utils.BE2_Text$$GetBE2TextsInChildren @ 0x61a388
 * MG_BlocksEngine2_Utils_BE2_Text_array* MG_BlocksEngine2_Utils_BE2_Text__GetBE2TextsInChildren (UnityEngine_Transform_o* transform, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0061a704) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_Text$$GetBE2TextsInChildren
   MG_BlocksEngine2_Utils_BE2_Text_array* MG_BlocksEngine2_Utils_BE2_Text__GetBE2TextsInChildren
   (UnityEngine_Transform_o* transform, const MethodInfo* method); */

void native_MG_BlocksEngine2_Utils_BE2_Text__GetBE2TextsInChildren_61a388(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  undefined1 auVar9 [16];
  
  if ((bRam000000000133eebe & 1) == 0) {
    native_sub_43273c(&System_IDisposable_TypeInfo_12d4b00);
    native_sub_43273c(&System_Collections_IEnumerator_TypeInfo_12d4b80);
    native_sub_43273c(&Method_System_Collections_Generic_List_BE2_Text__AddRange___12dc4f0);
    native_sub_43273c(&Method_System_Collections_Generic_List_BE2_Text__Add___12dc4e8);
    native_sub_43273c(&Method_System_Collections_Generic_List_BE2_Text__ToArray___12dc4f8);
    native_sub_43273c(&Method_System_Collections_Generic_List_BE2_Text___ctor___12dc4e0);
    native_sub_43273c(&System_Collections_Generic_List_BE2_Text__TypeInfo_12d29a0);
    native_sub_43273c(&UnityEngine_Transform_TypeInfo_12d6300);
    bRam000000000133eebe = 1;
  }
  lVar1 = native_sub_432808(_System_Collections_Generic_List_BE2_Text__TypeInfo_12d29a0);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (lVar1,_Method_System_Collections_Generic_List_BE2_Text___ctor___12dc4e0);
  lVar2 = native_MG_BlocksEngine2_Utils_BE2_Text__GetBE2Text_610e74(param_1);
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x28) == '\0')) {
    if (lVar1 == 0) goto LAB_0061a6fc;
    native_System_Collections_Generic_List_int_____Add_d40c00
              (lVar1,lVar2,_Method_System_Collections_Generic_List_BE2_Text__Add___12dc4e8);
    native_MG_BlocksEngine2_Utils_BE2_Text__Init_61a12c(lVar2);
  }
  if (param_1 != 0) {
    plVar3 = (long *)native_UnityEngine_Transform__GetEnumerator_772e40(param_1,0);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    do {
      lVar2 = *plVar3;
      if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar4 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0061a50c;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar2 + 0x12a));
      }
      puVar4 = (undefined8 *)
               native_sub_3c9b34(plVar3,_System_Collections_IEnumerator_TypeInfo_12d4b80,0);
LAB_0061a50c:
      uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((uVar7 & 1) == 0) {
        plVar3 = (long *)native_sub_4327f8(plVar3,_System_IDisposable_TypeInfo_12d4b00);
        if (plVar3 == (long *)0x0) goto LAB_0061a698;
        lVar2 = *plVar3;
        if ((ulong)*(ushort *)(lVar2 + 0x12a) == 0) goto LAB_0061a670;
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        goto LAB_0061a654;
      }
      lVar2 = *plVar3;
      if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar4 = (undefined8 *)(lVar2 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_0061a574;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar2 + 0x12a));
      }
      puVar4 = (undefined8 *)
               native_sub_3c9b34(plVar3,_System_Collections_IEnumerator_TypeInfo_12d4b80,1);
LAB_0061a574:
      plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
      if (plVar5 != (long *)0x0) {
        if ((*(byte *)(*plVar5 + 300) < *(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300)) ||
           (*(long *)(*(long *)(*plVar5 + 200) +
                      (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300) * 8 + -8) !=
            _UnityEngine_Transform_TypeInfo_12d6300)) {
          auVar9 = native_sub_432b04(plVar5);
LAB_0061a6f4:
                    /* WARNING: Subroutine does not return */
          native_sub_432810(auVar9._0_8_,auVar9._8_8_);
        }
      }
      lVar2 = native_MG_BlocksEngine2_Utils_BE2_Text__GetBE2Text_610e74(plVar5);
      if ((lVar2 != 0) && (*(char *)(lVar2 + 0x28) == '\0')) {
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        native_System_Collections_Generic_List_int_____Add_d40c00
                  (lVar1,lVar2,_Method_System_Collections_Generic_List_BE2_Text__Add___12dc4e8);
        native_MG_BlocksEngine2_Utils_BE2_Text__Init_61a12c(lVar2);
      }
      uVar6 = native_MG_BlocksEngine2_Utils_BE2_Text__GetBE2TextsInChildren_61a388(plVar5);
      auVar9._8_8_ = uVar6;
      auVar9._0_8_ = uVar6;
      if (lVar1 == 0) goto LAB_0061a6f4;
      native_System_Collections_Generic_List_BE2_Dropdown___AddRange_d40e50
                (lVar1,uVar6,_Method_System_Collections_Generic_List_BE2_Text__AddRange___12dc4f0);
    } while( true );
  }
  goto LAB_0061a6fc;
  while( true ) {
    uVar7 = uVar7 + 1;
    piVar8 = piVar8 + 4;
    if (*(ushort *)(lVar2 + 0x12a) <= uVar7) break;
LAB_0061a654:
    if (*(long *)(piVar8 + -2) == _System_IDisposable_TypeInfo_12d4b00) {
      puVar4 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0061a68c;
    }
  }
LAB_0061a670:
  puVar4 = (undefined8 *)native_sub_3c9b34(plVar3,_System_IDisposable_TypeInfo_12d4b00,0);
LAB_0061a68c:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
LAB_0061a698:
  if (lVar1 != 0) {
    native_System_Collections_Generic_List_AndroidAssetPackState___ToArray_d426dc
              (lVar1,_Method_System_Collections_Generic_List_BE2_Text__ToArray___12dc4f8);
    return;
  }
LAB_0061a6fc:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Utils.BE2_Text$$get_text @ 0x61a754
 * System_String_o* MG_BlocksEngine2_Utils_BE2_Text__get_text (MG_BlocksEngine2_Utils_BE2_Text_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_Text$$get_text
   System_String_o* MG_BlocksEngine2_Utils_BE2_Text__get_text (MG_BlocksEngine2_Utils_BE2_Text_o*
   __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Utils_BE2_Text__get_text_61a754(long param_1)

{
  ulong uVar1;
  long *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  
  if ((bRam000000000133eebf & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam000000000133eebf = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar3,0);
  if ((uVar1 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar3,0);
    if ((uVar1 & 1) == 0) {
      return _StringLiteral__12eaac0;
    }
    plVar2 = *(long **)(param_1 + 0x18);
    if (plVar2 == (long *)0x0) goto LAB_0061a84c;
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x5d8);
    uVar3 = *(undefined8 *)(*plVar2 + 0x5e0);
  }
  else {
    plVar2 = *(long **)(param_1 + 0x20);
    if (plVar2 == (long *)0x0) {
LAB_0061a84c:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x548);
    uVar3 = *(undefined8 *)(*plVar2 + 0x550);
  }
                    /* WARNING: Could not recover jumptable at 0x0061a82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)(plVar2,uVar3);
  return uVar3;
}



/* MG_BlocksEngine2.Utils.BE2_Text$$set_text @ 0x610ef8
 * void MG_BlocksEngine2_Utils_BE2_Text__set_text (MG_BlocksEngine2_Utils_BE2_Text_o* __this, System_String_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_Text$$set_text
   void MG_BlocksEngine2_Utils_BE2_Text__set_text (MG_BlocksEngine2_Utils_BE2_Text_o* __this,
   System_String_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Utils_BE2_Text__set_text_610ef8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  
  if ((bRam000000000133eec0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133eec0 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar3,0);
  if ((uVar1 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar3,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    plVar2 = *(long **)(param_1 + 0x18);
    if (plVar2 == (long *)0x0) goto LAB_00610fe0;
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x5e8);
    uVar3 = *(undefined8 *)(*plVar2 + 0x5f0);
  }
  else {
    plVar2 = *(long **)(param_1 + 0x20);
    if (plVar2 == (long *)0x0) {
LAB_00610fe0:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x558);
    uVar3 = *(undefined8 *)(*plVar2 + 0x560);
  }
                    /* WARNING: Could not recover jumptable at 0x00610fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar2,param_2,uVar3);
  return;
}



/* MG_BlocksEngine2.Utils.BE2_Text$$get_raycastTarget @ 0x61a850
 * bool MG_BlocksEngine2_Utils_BE2_Text__get_raycastTarget (MG_BlocksEngine2_Utils_BE2_Text_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_Text$$get_raycastTarget
   bool MG_BlocksEngine2_Utils_BE2_Text__get_raycastTarget (MG_BlocksEngine2_Utils_BE2_Text_o*
   __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Utils_BE2_Text__get_raycastTarget_61a850(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133eec1 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133eec1 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar3,0);
  if ((uVar1 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar3,0);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    plVar2 = *(long **)(param_1 + 0x18);
  }
  else {
    plVar2 = *(long **)(param_1 + 0x20);
  }
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0061a8d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar2 + 0x2b8))(plVar2,*(undefined8 *)(*plVar2 + 0x2c0));
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Utils.BE2_Text$$set_raycastTarget @ 0x61a928
 * void MG_BlocksEngine2_Utils_BE2_Text__set_raycastTarget (MG_BlocksEngine2_Utils_BE2_Text_o* __this, bool value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_Text$$set_raycastTarget
   void MG_BlocksEngine2_Utils_BE2_Text__set_raycastTarget (MG_BlocksEngine2_Utils_BE2_Text_o*
   __this, bool value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Utils_BE2_Text__set_raycastTarget_61a928(long param_1,uint param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133eec2 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133eec2 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar3,0);
  if ((uVar1 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar3,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    plVar2 = *(long **)(param_1 + 0x18);
  }
  else {
    plVar2 = *(long **)(param_1 + 0x20);
  }
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0061a9b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x2c8))(plVar2,param_2 & 1,*(undefined8 *)(*plVar2 + 0x2d0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}


