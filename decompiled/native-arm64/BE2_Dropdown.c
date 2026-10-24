/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Utils.BE2_Dropdown$$get_isNull @ 0x57fe3c
 * bool MG_BlocksEngine2_Utils_BE2_Dropdown__get_isNull (MG_BlocksEngine2_Utils_BE2_Dropdown_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Utils.BE2_Dropdown$$get_isNull
   bool MG_BlocksEngine2_Utils_BE2_Dropdown__get_isNull (MG_BlocksEngine2_Utils_BE2_Dropdown_o*
   __this, const MethodInfo* method); */

undefined1 native_MG_BlocksEngine2_Utils_BE2_Dropdown__get_isNull_57fe3c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



/* MG_BlocksEngine2.Utils.BE2_Dropdown$$.ctor @ 0x57fe44
 * void MG_BlocksEngine2_Utils_BE2_Dropdown___ctor (MG_BlocksEngine2_Utils_BE2_Dropdown_o* __this, UnityEngine_Transform_o* transform, const MethodInfo* method); */

/* MG_BlocksEngine2.Utils.BE2_Dropdown$$.ctor
   void MG_BlocksEngine2_Utils_BE2_Dropdown___ctor (MG_BlocksEngine2_Utils_BE2_Dropdown_o* __this,
   UnityEngine_Transform_o* transform, const MethodInfo* method); */

void native_MG_BlocksEngine2_Utils_BE2_Dropdown___ctor_57fe44(long param_1,undefined8 param_2)

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



/* MG_BlocksEngine2.Utils.BE2_Dropdown$$Init @ 0x57fe78
 * void MG_BlocksEngine2_Utils_BE2_Dropdown__Init (MG_BlocksEngine2_Utils_BE2_Dropdown_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_Dropdown$$Init
   void MG_BlocksEngine2_Utils_BE2_Dropdown__Init (MG_BlocksEngine2_Utils_BE2_Dropdown_o* __this,
   const MethodInfo* method); */

void native_MG_BlocksEngine2_Utils_BE2_Dropdown__Init_57fe78(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  if ((bRam000000000133eadd & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Dropdown____12e29d8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_TMP_Dropdown____12e2b20);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133eadd = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (*(long *)(param_1 + 0x10),
                       _Method_UnityEngine_Component_GetComponent_Dropdown____12e29d8);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    native_sub_4326e0((undefined8 *)(param_1 + 0x18),uVar2);
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (*(long *)(param_1 + 0x10),
                         _Method_UnityEngine_Component_GetComponent_TMP_Dropdown____12e2b20);
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



/* MG_BlocksEngine2.Utils.BE2_Dropdown$$GetBE2Component @ 0x566f34
 * MG_BlocksEngine2_Utils_BE2_Dropdown_o* MG_BlocksEngine2_Utils_BE2_Dropdown__GetBE2Component (UnityEngine_Transform_o* transform, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_Dropdown$$GetBE2Component
   MG_BlocksEngine2_Utils_BE2_Dropdown_o* MG_BlocksEngine2_Utils_BE2_Dropdown__GetBE2Component
   (UnityEngine_Transform_o* transform, const MethodInfo* method); */

long native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetBE2Component_566f34(undefined8 param_1)

{
  long lVar1;
  
  if ((bRam000000000133eade & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Utils_BE2_Dropdown_TypeInfo_12d39a8);
    bRam000000000133eade = 1;
  }
  lVar1 = native_sub_432808(_MG_BlocksEngine2_Utils_BE2_Dropdown_TypeInfo_12d39a8);
  native_System_Object___ctor_ad2798(lVar1,0);
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  native_sub_4326e0((undefined8 *)(lVar1 + 0x10),param_1);
  if (lVar1 != 0) {
    native_MG_BlocksEngine2_Utils_BE2_Dropdown__Init_57fe78(lVar1);
    if (*(char *)(lVar1 + 0x28) != '\0') {
      lVar1 = 0;
    }
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Utils.BE2_Dropdown$$GetBE2ComponentInChildren @ 0x57ffa0
 * MG_BlocksEngine2_Utils_BE2_Dropdown_o* MG_BlocksEngine2_Utils_BE2_Dropdown__GetBE2ComponentInChildren (UnityEngine_Transform_o* transform, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_Dropdown$$GetBE2ComponentInChildren
   MG_BlocksEngine2_Utils_BE2_Dropdown_o*
   MG_BlocksEngine2_Utils_BE2_Dropdown__GetBE2ComponentInChildren (UnityEngine_Transform_o*
   transform, const MethodInfo* method); */

long native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetBE2ComponentInChildren_57ffa0(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133eadf & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInChildren_Dropdown____12e2c78);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInChildren_TMP_Dropdown____12e2c88);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133eadf = 1;
  }
  if (param_1 != 0) {
    lVar1 = native_UnityEngine_Component__GetComponentInChildren_Animation__49db98
                      (param_1,
                       _Method_UnityEngine_Component_GetComponentInChildren_Dropdown____12e2c78);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar1,0,0);
    if ((uVar2 & 1) == 0) {
      lVar1 = native_UnityEngine_Component__GetComponentInChildren_Animation__49db98
                        (param_1,
                         _Method_UnityEngine_Component_GetComponentInChildren_TMP_Dropdown____12e2c88
                        );
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar1,0,0);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
    }
    if (lVar1 != 0) {
      uVar3 = native_UnityEngine_Component__get_transform_8da62c(lVar1,0);
      if ((bRam000000000133eade & 1) == 0) {
        native_sub_43273c(&MG_BlocksEngine2_Utils_BE2_Dropdown_TypeInfo_12d39a8);
        bRam000000000133eade = 1;
      }
      lVar1 = native_sub_432808(_MG_BlocksEngine2_Utils_BE2_Dropdown_TypeInfo_12d39a8);
      native_System_Object___ctor_ad2798(lVar1,0);
      *(undefined8 *)(lVar1 + 0x10) = uVar3;
      native_sub_4326e0((undefined8 *)(lVar1 + 0x10),uVar3);
      if (lVar1 != 0) {
        native_MG_BlocksEngine2_Utils_BE2_Dropdown__Init_57fe78(lVar1);
        if (*(char *)(lVar1 + 0x28) != '\0') {
          lVar1 = 0;
        }
        return lVar1;
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Utils.BE2_Dropdown$$GetBE2ComponentsInChildren @ 0x5800c4
 * MG_BlocksEngine2_Utils_BE2_Dropdown_array* MG_BlocksEngine2_Utils_BE2_Dropdown__GetBE2ComponentsInChildren (UnityEngine_Transform_o* transform, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00580440) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_Dropdown$$GetBE2ComponentsInChildren
   MG_BlocksEngine2_Utils_BE2_Dropdown_array*
   MG_BlocksEngine2_Utils_BE2_Dropdown__GetBE2ComponentsInChildren (UnityEngine_Transform_o*
   transform, const MethodInfo* method); */

void native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetBE2ComponentsInChildren_5800c4(long param_1)

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
  
  if ((bRam000000000133eae0 & 1) == 0) {
    native_sub_43273c(&System_IDisposable_TypeInfo_12d4b00);
    native_sub_43273c(&System_Collections_IEnumerator_TypeInfo_12d4b80);
    native_sub_43273c(&Method_System_Collections_Generic_List_BE2_Dropdown__AddRange___12dc420);
    native_sub_43273c(&Method_System_Collections_Generic_List_BE2_Dropdown__Add___12dc418);
    native_sub_43273c(&Method_System_Collections_Generic_List_BE2_Dropdown__ToArray___12dc428);
    native_sub_43273c(&Method_System_Collections_Generic_List_BE2_Dropdown___ctor___12dc410);
    native_sub_43273c(&System_Collections_Generic_List_BE2_Dropdown__TypeInfo_12d2968);
    native_sub_43273c(&UnityEngine_Transform_TypeInfo_12d6300);
    bRam000000000133eae0 = 1;
  }
  lVar1 = native_sub_432808(_System_Collections_Generic_List_BE2_Dropdown__TypeInfo_12d2968);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (lVar1,_Method_System_Collections_Generic_List_BE2_Dropdown___ctor___12dc410);
  lVar2 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetBE2Component_566f34(param_1);
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x28) == '\0')) {
    if (lVar1 == 0) goto LAB_00580438;
    native_System_Collections_Generic_List_int_____Add_d40c00
              (lVar1,lVar2,_Method_System_Collections_Generic_List_BE2_Dropdown__Add___12dc418);
    native_MG_BlocksEngine2_Utils_BE2_Dropdown__Init_57fe78(lVar2);
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
            goto LAB_00580248;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar2 + 0x12a));
      }
      puVar4 = (undefined8 *)
               native_sub_3c9b34(plVar3,_System_Collections_IEnumerator_TypeInfo_12d4b80,0);
LAB_00580248:
      uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((uVar7 & 1) == 0) {
        plVar3 = (long *)native_sub_4327f8(plVar3,_System_IDisposable_TypeInfo_12d4b00);
        if (plVar3 == (long *)0x0) goto LAB_005803d4;
        lVar2 = *plVar3;
        if ((ulong)*(ushort *)(lVar2 + 0x12a) == 0) goto LAB_005803ac;
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        goto LAB_00580390;
      }
      lVar2 = *plVar3;
      if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar4 = (undefined8 *)(lVar2 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_005802b0;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar2 + 0x12a));
      }
      puVar4 = (undefined8 *)
               native_sub_3c9b34(plVar3,_System_Collections_IEnumerator_TypeInfo_12d4b80,1);
LAB_005802b0:
      plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
      if (plVar5 != (long *)0x0) {
        if ((*(byte *)(*plVar5 + 300) < *(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300)) ||
           (*(long *)(*(long *)(*plVar5 + 200) +
                      (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300) * 8 + -8) !=
            _UnityEngine_Transform_TypeInfo_12d6300)) {
          auVar9 = native_sub_432b04(plVar5);
LAB_00580430:
                    /* WARNING: Subroutine does not return */
          native_sub_432810(auVar9._0_8_,auVar9._8_8_);
        }
      }
      lVar2 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetBE2Component_566f34(plVar5);
      if ((lVar2 != 0) && (*(char *)(lVar2 + 0x28) == '\0')) {
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        native_System_Collections_Generic_List_int_____Add_d40c00
                  (lVar1,lVar2,_Method_System_Collections_Generic_List_BE2_Dropdown__Add___12dc418);
        native_MG_BlocksEngine2_Utils_BE2_Dropdown__Init_57fe78(lVar2);
      }
      uVar6 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetBE2ComponentsInChildren_5800c4(plVar5);
      auVar9._8_8_ = uVar6;
      auVar9._0_8_ = uVar6;
      if (lVar1 == 0) goto LAB_00580430;
      native_System_Collections_Generic_List_BE2_Dropdown___AddRange_d40e50
                (lVar1,uVar6,
                 _Method_System_Collections_Generic_List_BE2_Dropdown__AddRange___12dc420);
    } while( true );
  }
  goto LAB_00580438;
  while( true ) {
    uVar7 = uVar7 + 1;
    piVar8 = piVar8 + 4;
    if (*(ushort *)(lVar2 + 0x12a) <= uVar7) break;
LAB_00580390:
    if (*(long *)(piVar8 + -2) == _System_IDisposable_TypeInfo_12d4b00) {
      puVar4 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_005803c8;
    }
  }
LAB_005803ac:
  puVar4 = (undefined8 *)native_sub_3c9b34(plVar3,_System_IDisposable_TypeInfo_12d4b00,0);
LAB_005803c8:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
LAB_005803d4:
  if (lVar1 != 0) {
    native_System_Collections_Generic_List_AndroidAssetPackState___ToArray_d426dc
              (lVar1,_Method_System_Collections_Generic_List_BE2_Dropdown__ToArray___12dc428);
    return;
  }
LAB_00580438:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Utils.BE2_Dropdown$$ClearOptions @ 0x580490
 * void MG_BlocksEngine2_Utils_BE2_Dropdown__ClearOptions (MG_BlocksEngine2_Utils_BE2_Dropdown_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_Dropdown$$ClearOptions
   void MG_BlocksEngine2_Utils_BE2_Dropdown__ClearOptions (MG_BlocksEngine2_Utils_BE2_Dropdown_o*
   __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Utils_BE2_Dropdown__ClearOptions_580490(long param_1)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  if ((bRam000000000133eae1 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133eae1 = 1;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar9,0);
  if ((uVar4 & 1) != 0) {
    lVar5 = *(long *)(param_1 + 0x20);
    if (lVar5 == 0) {
LAB_0058056c:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    if ((bRam000000000133efed & 1) == 0) {
      native_sub_43273c(&
                        Method_System_Collections_Generic_List_TMP_Dropdown_OptionData__Clear___12dd868
                        ,0);
      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
      bRam000000000133efed = 1;
    }
    if ((*(long *)(lVar5 + 0x130) == 0) ||
       (lVar7 = *(long *)(*(long *)(lVar5 + 0x130) + 0x10), lVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_System_Collections_Generic_List_Action___Clear_d40e80
              (lVar7,
               _Method_System_Collections_Generic_List_TMP_Dropdown_OptionData__Clear___12dd868);
    uVar9 = *(undefined8 *)(lVar5 + 0x110);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar9,0);
    *(uint *)(lVar5 + 0x128) = -(uVar3 & 1);
    if ((bRam000000000133efe9 & 1) == 0) {
      native_sub_43273c(&
                        Method_System_Collections_Generic_List_TMP_Dropdown_OptionData__get_Count___12dd878
                       );
      native_sub_43273c(&
                        Method_System_Collections_Generic_List_TMP_Dropdown_OptionData__get_Item___12dd880
                       );
      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
      native_sub_43273c(&TMPro_TMP_Dropdown_TypeInfo_12d6000);
      native_sub_43273c(&StringLiteral__12eaac0);
      bRam000000000133efe9 = 1;
    }
    if (((*(byte *)(_TMPro_TMP_Dropdown_TypeInfo_12d6000 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_TMPro_TMP_Dropdown_TypeInfo_12d6000 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if ((*(long *)(lVar5 + 0x130) == 0) ||
       (lVar7 = *(long *)(*(long *)(lVar5 + 0x130) + 0x10), lVar7 == 0)) goto code_r0x00662128;
    lVar10 = **(long **)(_TMPro_TMP_Dropdown_TypeInfo_12d6000 + 0xb8);
    if ((0 < *(int *)(lVar7 + 0x18)) && (-1 < *(int *)(lVar5 + 0x128))) {
      uVar3 = native_UnityEngine_Mathf__Clamp_8e5208
                        (*(int *)(lVar5 + 0x128),0,*(int *)(lVar7 + 0x18) + -1,0);
      if (*(uint *)(lVar7 + 0x18) <= uVar3) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      lVar10 = *(long *)(*(long *)(lVar7 + 0x10) + (long)(int)uVar3 * 8 + 0x20);
    }
    uVar9 = *(undefined8 *)(lVar5 + 0x100);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar9,0);
    if ((uVar4 & 1) != 0) {
      if ((lVar10 == 0) || (*(long *)(lVar10 + 0x10) == 0)) {
        plVar6 = *(long **)(lVar5 + 0x100);
        if (plVar6 == (long *)0x0) goto code_r0x00662128;
        lVar8 = *plVar6;
        lVar7 = _StringLiteral__12eaac0;
      }
      else {
        plVar6 = *(long **)(lVar5 + 0x100);
        if (plVar6 == (long *)0x0) goto code_r0x00662128;
        lVar8 = *plVar6;
        lVar7 = *(long *)(lVar10 + 0x10);
      }
      (**(code **)(lVar8 + 0x558))(plVar6,lVar7,*(undefined8 *)(lVar8 + 0x560));
    }
    uVar9 = *(undefined8 *)(lVar5 + 0x108);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar9,0);
    if ((uVar4 & 1) != 0) {
      lVar7 = *(long *)(lVar5 + 0x108);
      if (lVar10 == 0) {
        if (lVar7 == 0) goto code_r0x00662128;
        uVar9 = 0;
      }
      else {
        if (lVar7 == 0) goto code_r0x00662128;
        uVar9 = *(undefined8 *)(lVar10 + 0x18);
      }
      native_UnityEngine_UI_Image__set_sprite_cb7458(lVar7,uVar9,0);
      lVar7 = *(long *)(lVar5 + 0x108);
      if (lVar7 == 0) goto code_r0x00662128;
      uVar9 = *(undefined8 *)(lVar7 + 0xd0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar7,uVar3 & 1,0);
    }
    uVar9 = *(undefined8 *)(lVar5 + 0x110);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar9,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    if ((*(long *)(lVar5 + 0x130) != 0) &&
       (lVar10 = *(long *)(*(long *)(lVar5 + 0x130) + 0x10), lVar10 != 0)) {
      lVar7 = *(long *)(lVar5 + 0x110);
      if (*(int *)(lVar10 + 0x18) == 0) {
        bVar1 = true;
      }
      else {
        bVar1 = *(int *)(lVar5 + 0x128) == -1;
      }
      if (lVar7 != 0) goto code_r0x008d7b0c;
    }
code_r0x00662128:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar9,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  lVar7 = *(long *)(param_1 + 0x18);
  if (lVar7 == 0) goto LAB_0058056c;
  if ((bRam0000000001340343 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Dropdown_OptionData__Clear___12dd700,0
                     );
    bRam0000000001340343 = 1;
  }
  if ((*(long *)(lVar7 + 0x128) == 0) ||
     (lVar5 = *(long *)(*(long *)(lVar7 + 0x128) + 0x10), lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  native_System_Collections_Generic_List_Action___Clear_d40e80
            (lVar5,_Method_System_Collections_Generic_List_Dropdown_OptionData__Clear___12dd700);
  *(undefined4 *)(lVar7 + 0x120) = 0;
  if ((bRam000000000134033f & 1) == 0) {
    native_sub_43273c(&UnityEngine_UI_Dropdown_TypeInfo_12d4498);
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Dropdown_OptionData__get_Count___12dd710
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Dropdown_OptionData__get_Item___12dd718
                     );
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam000000000134033f = 1;
  }
  if (((*(byte *)(_UnityEngine_UI_Dropdown_TypeInfo_12d4498 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_UI_Dropdown_TypeInfo_12d4498 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((*(long *)(lVar7 + 0x128) == 0) ||
     (lVar5 = *(long *)(*(long *)(lVar7 + 0x128) + 0x10), lVar5 == 0)) goto code_r0x007d92f0;
  if (*(int *)(lVar5 + 0x18) < 1) {
    lVar5 = **(long **)(_UnityEngine_UI_Dropdown_TypeInfo_12d4498 + 0xb8);
  }
  else {
    uVar3 = native_UnityEngine_Mathf__Clamp_8e5208
                      (*(undefined4 *)(lVar7 + 0x120),0,*(int *)(lVar5 + 0x18) + -1,0);
    if (*(uint *)(lVar5 + 0x18) <= uVar3) {
      native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + (long)(int)uVar3 * 8 + 0x20);
  }
  uVar9 = *(undefined8 *)(lVar7 + 0x100);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar9,0);
  if ((uVar4 & 1) != 0) {
    if ((lVar5 == 0) || (*(long *)(lVar5 + 0x10) == 0)) {
      plVar6 = *(long **)(lVar7 + 0x100);
      if (plVar6 == (long *)0x0) goto code_r0x007d92f0;
      lVar8 = *plVar6;
      lVar10 = _StringLiteral__12eaac0;
    }
    else {
      plVar6 = *(long **)(lVar7 + 0x100);
      if (plVar6 == (long *)0x0) goto code_r0x007d92f0;
      lVar8 = *plVar6;
      lVar10 = *(long *)(lVar5 + 0x10);
    }
    (**(code **)(lVar8 + 0x5e8))(plVar6,lVar10,*(undefined8 *)(lVar8 + 0x5f0));
  }
  uVar9 = *(undefined8 *)(lVar7 + 0x108);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar9,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  lVar10 = *(long *)(lVar7 + 0x108);
  if (lVar5 == 0) {
    if (lVar10 == 0) goto code_r0x007d92f0;
    uVar9 = 0;
  }
  else {
    if (lVar10 == 0) goto code_r0x007d92f0;
    uVar9 = *(undefined8 *)(lVar5 + 0x18);
  }
  native_UnityEngine_UI_Image__set_sprite_cb7458(lVar10,uVar9,0);
  lVar7 = *(long *)(lVar7 + 0x108);
  if (lVar7 == 0) {
code_r0x007d92f0:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar9 = *(undefined8 *)(lVar7 + 0xd0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  bVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
  bVar1 = (bool)(bVar2 & 1);
code_r0x008d7b0c:
  if (pcRam0000000001340948 == (code *)0x0) {
    pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
  }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000001340948)(lVar7,bVar1);
  return;
}



/* MG_BlocksEngine2.Utils.BE2_Dropdown$$AddOption @ 0x580570
 * void MG_BlocksEngine2_Utils_BE2_Dropdown__AddOption (MG_BlocksEngine2_Utils_BE2_Dropdown_o* __this, System_String_o* option, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_Dropdown$$AddOption
   void MG_BlocksEngine2_Utils_BE2_Dropdown__AddOption (MG_BlocksEngine2_Utils_BE2_Dropdown_o*
   __this, System_String_o* option, const MethodInfo* method); */

void native_MG_BlocksEngine2_Utils_BE2_Dropdown__AddOption_580570(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((bRam000000000133eae2 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_TMP_Dropdown_OptionData__Add___12dd858
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_Dropdown_OptionData__Add___12dd6f0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_UI_Dropdown_OptionData_TypeInfo_12d7280);
    native_sub_43273c(&TMPro_TMP_Dropdown_OptionData_TypeInfo_12d7770);
    bRam000000000133eae2 = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar7,0);
  if ((uVar1 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar7,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_005806f0;
    lVar2 = native_UnityEngine_UI_Dropdown__get_options_7d90cc(*(long *)(param_1 + 0x18),0);
    uVar7 = native_sub_432808(_UnityEngine_UI_Dropdown_OptionData_TypeInfo_12d7280);
    native_UnityEngine_UI_Dropdown_OptionData___ctor_c6c63c(uVar7,param_2,0);
    if (lVar2 == 0) goto LAB_005806f0;
    plVar5 = (long *)&Method_System_Collections_Generic_List_Dropdown_OptionData__Add___12dd6f0;
  }
  else {
    if (*(long *)(param_1 + 0x20) == 0) {
LAB_005806f0:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    lVar2 = native_TMPro_TMP_Dropdown__get_options_661e9c(*(long *)(param_1 + 0x20),0);
    uVar7 = native_sub_432808(_TMPro_TMP_Dropdown_OptionData_TypeInfo_12d7770);
    native_TMPro_TMP_Dropdown_OptionData___ctor_d50688(uVar7,param_2,0);
    if (lVar2 == 0) goto LAB_005806f0;
    plVar5 = (long *)&Method_System_Collections_Generic_List_TMP_Dropdown_OptionData__Add___12dd858;
  }
  lVar6 = *(long *)(lVar2 + 0x10);
  if (lVar6 != 0) {
    uVar4 = *(uint *)(lVar2 + 0x18);
    if (uVar4 == *(uint *)(lVar6 + 0x18)) {
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(*plVar5 + 0x18) + 0xc0) + 0x60))
                (lVar2,uVar4 + 1);
      uVar4 = *(uint *)(lVar2 + 0x18);
      lVar6 = *(long *)(lVar2 + 0x10);
      *(uint *)(lVar2 + 0x18) = uVar4 + 1;
      if (lVar6 == 0) goto code_r0x00d40c5c;
    }
    else {
      *(uint *)(lVar2 + 0x18) = uVar4 + 1;
    }
    if (uVar4 < *(uint *)(lVar6 + 0x18)) {
      puVar3 = (undefined8 *)(lVar6 + (long)(int)uVar4 * 8 + 0x20);
      *puVar3 = uVar7;
      native_sub_4326e0(puVar3,uVar7);
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
      return;
    }
    uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar7,0);
  }
code_r0x00d40c5c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Utils.BE2_Dropdown$$GetOptionTextAtIndex @ 0x5806f4
 * System_String_o* MG_BlocksEngine2_Utils_BE2_Dropdown__GetOptionTextAtIndex (MG_BlocksEngine2_Utils_BE2_Dropdown_o* __this, int32_t index, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_Dropdown$$GetOptionTextAtIndex
   System_String_o* MG_BlocksEngine2_Utils_BE2_Dropdown__GetOptionTextAtIndex
   (MG_BlocksEngine2_Utils_BE2_Dropdown_o* __this, int32_t index, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetOptionTextAtIndex_5806f4(long param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133eae3 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_TMP_Dropdown_OptionData__get_Item___12dd880
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Dropdown_OptionData__get_Item___12dd718
                     );
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam000000000133eae3 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar4,0);
  if ((uVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar4,0);
    if ((uVar1 & 1) == 0) {
      puVar3 = (undefined8 *)&StringLiteral__12eaac0;
      goto LAB_00580814;
    }
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_00580828;
    lVar2 = native_UnityEngine_UI_Dropdown__get_options_7d90cc(*(long *)(param_1 + 0x18),0);
  }
  else {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_00580828;
    lVar2 = native_TMPro_TMP_Dropdown__get_options_661e9c(*(long *)(param_1 + 0x20),0);
  }
  if (lVar2 != 0) {
    if (*(uint *)(lVar2 + 0x18) <= param_2) {
      native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0x10) + (long)(int)param_2 * 8 + 0x20);
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)(lVar2 + 0x10);
LAB_00580814:
      return *puVar3;
    }
  }
LAB_00580828:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Utils.BE2_Dropdown$$GetSelectedOptionText @ 0x567528
 * System_String_o* MG_BlocksEngine2_Utils_BE2_Dropdown__GetSelectedOptionText (MG_BlocksEngine2_Utils_BE2_Dropdown_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_Dropdown$$GetSelectedOptionText
   System_String_o* MG_BlocksEngine2_Utils_BE2_Dropdown__GetSelectedOptionText
   (MG_BlocksEngine2_Utils_BE2_Dropdown_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetSelectedOptionText_567528(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if ((bRam000000000133eae4 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_TMP_Dropdown_OptionData__get_Item___12dd880
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Dropdown_OptionData__get_Item___12dd718
                     );
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam000000000133eae4 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
  if ((uVar2 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
    if ((uVar2 & 1) == 0) {
      puVar4 = (undefined8 *)&StringLiteral__12eaac0;
      goto LAB_00567660;
    }
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_00567674;
    lVar3 = native_UnityEngine_UI_Dropdown__get_options_7d90cc(*(long *)(param_1 + 0x18),0);
    if ((*(long *)(param_1 + 0x18) == 0) || (lVar3 == 0)) goto LAB_00567674;
    uVar1 = *(uint *)(*(long *)(param_1 + 0x18) + 0x120);
  }
  else {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_00567674;
    lVar3 = native_TMPro_TMP_Dropdown__get_options_661e9c(*(long *)(param_1 + 0x20),0);
    if ((*(long *)(param_1 + 0x20) == 0) || (lVar3 == 0)) goto LAB_00567674;
    uVar1 = *(uint *)(*(long *)(param_1 + 0x20) + 0x128);
  }
  if (*(uint *)(lVar3 + 0x18) <= uVar1) {
    native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + (long)(int)uVar1 * 8 + 0x20);
  if (lVar3 == 0) {
LAB_00567674:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  puVar4 = (undefined8 *)(lVar3 + 0x10);
LAB_00567660:
  return *puVar4;
}



/* MG_BlocksEngine2.Utils.BE2_Dropdown$$GetOptionsCount @ 0x56742c
 * int32_t MG_BlocksEngine2_Utils_BE2_Dropdown__GetOptionsCount (MG_BlocksEngine2_Utils_BE2_Dropdown_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_Dropdown$$GetOptionsCount
   int32_t MG_BlocksEngine2_Utils_BE2_Dropdown__GetOptionsCount
   (MG_BlocksEngine2_Utils_BE2_Dropdown_o* __this, const MethodInfo* method); */

undefined4 native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetOptionsCount_56742c(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133eae5 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_TMP_Dropdown_OptionData__get_Count___12dd878
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Dropdown_OptionData__get_Count___12dd710
                     );
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133eae5 = 1;
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
      return 0xffffffff;
    }
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_00567524;
    lVar2 = native_UnityEngine_UI_Dropdown__get_options_7d90cc(*(long *)(param_1 + 0x18),0);
  }
  else {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_00567524;
    lVar2 = native_TMPro_TMP_Dropdown__get_options_661e9c(*(long *)(param_1 + 0x20),0);
  }
  if (lVar2 != 0) {
    return *(undefined4 *)(lVar2 + 0x18);
  }
LAB_00567524:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Utils.BE2_Dropdown$$GetIndexOf @ 0x58082c
 * int32_t MG_BlocksEngine2_Utils_BE2_Dropdown__GetIndexOf (MG_BlocksEngine2_Utils_BE2_Dropdown_o* __this, System_String_o* text, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_Dropdown$$GetIndexOf
   int32_t MG_BlocksEngine2_Utils_BE2_Dropdown__GetIndexOf (MG_BlocksEngine2_Utils_BE2_Dropdown_o*
   __this, System_String_o* text, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetIndexOf_58082c(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if ((bRam000000000133eae6 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_TMP_Dropdown_OptionData__FindIndex___12dd870
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Dropdown_OptionData__FindIndex___12dd708
                     );
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&Method_System_Predicate_Dropdown_OptionData___ctor___12ddb28);
    native_sub_43273c(&Method_System_Predicate_TMP_Dropdown_OptionData___ctor___12ddb30);
    native_sub_43273c(&System_Predicate_TMP_Dropdown_OptionData__TypeInfo_12d2dd8);
    native_sub_43273c(&System_Predicate_Dropdown_OptionData__TypeInfo_12d2dd0);
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Utils_BE2_Dropdown___c__DisplayClass16_0__GetIndexOf_b__0___12e9638
                     );
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Utils_BE2_Dropdown___c__DisplayClass16_0__GetIndexOf_b__1___12e9640
                     );
    native_sub_43273c(&MG_BlocksEngine2_Utils_BE2_Dropdown___c__DisplayClass16_0_TypeInfo_12d7010);
    bRam000000000133eae6 = 1;
  }
  lVar1 = native_sub_432808(
                           _MG_BlocksEngine2_Utils_BE2_Dropdown___c__DisplayClass16_0_TypeInfo_12d7010
                           );
  native_MG_BlocksEngine2_Utils_BE2_Dropdown___c__DisplayClass16_0___ctor_547994(lVar1,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = param_2;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x10),param_2);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
    if ((uVar2 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
      if ((uVar2 & 1) == 0) {
        return 0xffffffff;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        lVar3 = native_UnityEngine_UI_Dropdown__get_options_7d90cc(*(long *)(param_1 + 0x18),0);
        uVar5 = native_sub_432808(_System_Predicate_Dropdown_OptionData__TypeInfo_12d2dd0);
        native_System_Predicate_BaseInvokableCall____ctor_ac31d4
                  (uVar5,lVar1,
                   _Method_MG_BlocksEngine2_Utils_BE2_Dropdown___c__DisplayClass16_0__GetIndexOf_b__1___12e9640
                   ,_Method_System_Predicate_Dropdown_OptionData___ctor___12ddb28);
        if (lVar3 != 0) {
          plVar4 = (long *)&
                           Method_System_Collections_Generic_List_Dropdown_OptionData__FindIndex___12dd708
          ;
          goto LAB_00580a14;
        }
      }
    }
    else if (*(long *)(param_1 + 0x20) != 0) {
      lVar3 = native_TMPro_TMP_Dropdown__get_options_661e9c(*(long *)(param_1 + 0x20),0);
      uVar5 = native_sub_432808(_System_Predicate_TMP_Dropdown_OptionData__TypeInfo_12d2dd8);
      native_System_Predicate_BaseInvokableCall____ctor_ac31d4
                (uVar5,lVar1,
                 _Method_MG_BlocksEngine2_Utils_BE2_Dropdown___c__DisplayClass16_0__GetIndexOf_b__0___12e9638
                 ,_Method_System_Predicate_TMP_Dropdown_OptionData___ctor___12ddb30);
      if (lVar3 != 0) {
        plVar4 = (long *)&
                         Method_System_Collections_Generic_List_TMP_Dropdown_OptionData__FindIndex___12dd870
        ;
LAB_00580a14:
        if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00d413ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(*plVar4 + 0x18) + 0xc0) + 0xb8))
                            (lVar3,0,*(undefined4 *)(lVar3 + 0x18),uVar5);
          return uVar5;
        }
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Utils.BE2_Dropdown$$get_value @ 0x567678
 * int32_t MG_BlocksEngine2_Utils_BE2_Dropdown__get_value (MG_BlocksEngine2_Utils_BE2_Dropdown_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_Dropdown$$get_value
   int32_t MG_BlocksEngine2_Utils_BE2_Dropdown__get_value (MG_BlocksEngine2_Utils_BE2_Dropdown_o*
   __this, const MethodInfo* method); */

undefined4 native_MG_BlocksEngine2_Utils_BE2_Dropdown__get_value_567678(long param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133eae7 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133eae7 = 1;
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
      return 0xffffffff;
    }
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_00567744;
    puVar2 = (undefined4 *)(*(long *)(param_1 + 0x18) + 0x120);
  }
  else {
    if (*(long *)(param_1 + 0x20) == 0) {
LAB_00567744:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    puVar2 = (undefined4 *)(*(long *)(param_1 + 0x20) + 0x128);
  }
  return *puVar2;
}



/* MG_BlocksEngine2.Utils.BE2_Dropdown$$set_value @ 0x580a48
 * void MG_BlocksEngine2_Utils_BE2_Dropdown__set_value (MG_BlocksEngine2_Utils_BE2_Dropdown_o* __this, int32_t value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_Dropdown$$set_value
   void MG_BlocksEngine2_Utils_BE2_Dropdown__set_value (MG_BlocksEngine2_Utils_BE2_Dropdown_o*
   __this, int32_t value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Utils_BE2_Dropdown__set_value_580a48(long param_1,int param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined4 uStack_64;
  
  if ((bRam000000000133eae8 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133eae8 = 1;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar10,0);
  if ((uVar4 & 1) != 0) {
    lVar5 = *(long *)(param_1 + 0x20);
    if (lVar5 == 0) {
LAB_00580b30:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    if ((bRam000000000133efe3 & 1) == 0) {
      native_sub_43273c(&
                        Method_System_Collections_Generic_List_TMP_Dropdown_OptionData__get_Count___12dd878
                       );
      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
      native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_int__Invoke___12de490);
      native_sub_43273c(&StringLiteral_Dropdown_value_12ed888);
      bRam000000000133efe3 = 1;
    }
    uVar4 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(lVar5 + 0x128) == param_2) {
        return;
      }
      if ((*(long *)(lVar5 + 0x130) == 0) ||
         (lVar9 = *(long *)(*(long *)(lVar5 + 0x130) + 0x10), lVar9 == 0)) goto code_r0x00662484;
      if (*(int *)(lVar9 + 0x18) == 0) {
        return;
      }
    }
    uVar10 = *(undefined8 *)(lVar5 + 0x110);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar10,0);
    if ((*(long *)(lVar5 + 0x130) != 0) &&
       (lVar9 = *(long *)(*(long *)(lVar5 + 0x130) + 0x10), lVar9 != 0)) {
      uVar3 = native_UnityEngine_Mathf__Clamp_8e5208
                        (param_2,-(uVar2 & 1),*(int *)(lVar9 + 0x18) + -1,0);
      *(undefined4 *)(lVar5 + 0x128) = uVar3;
      native_TMPro_TMP_Dropdown__RefreshShownValue_661eb8(lVar5);
      native_UnityEngine_UISystemProfilerApi__AddMarker_db8894
                (_StringLiteral_Dropdown_value_12ed888,lVar5,0);
      lVar9 = *(long *)(lVar5 + 0x138);
      if (lVar9 != 0) {
        uVar3 = *(undefined4 *)(lVar5 + 0x128);
        goto native_UnityEngine_Events_UnityEvent_int___Invoke_89f660;
      }
    }
code_r0x00662484:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar10,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 == 0) goto LAB_00580b30;
  if ((bRam000000000134033a & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Dropdown_OptionData__get_Count___12dd710
                     );
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_int__Invoke___12de490);
    native_sub_43273c(&StringLiteral_Dropdown_value_12ed888);
    bRam000000000134033a = 1;
  }
  uVar4 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
  if ((uVar4 & 1) == 0) {
    lVar9 = *(long *)(lVar5 + 0x128);
    if (lVar9 == 0) goto code_r0x007d9dd8;
  }
  else {
    if (*(int *)(lVar5 + 0x120) == param_2) {
      return;
    }
    lVar9 = *(long *)(lVar5 + 0x128);
    if ((lVar9 == 0) || (*(long *)(lVar9 + 0x10) == 0)) goto code_r0x007d9dd8;
    if (*(int *)(*(long *)(lVar9 + 0x10) + 0x18) == 0) {
      return;
    }
  }
  if (*(long *)(lVar9 + 0x10) == 0) {
code_r0x007d9dd8:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar3 = native_UnityEngine_Mathf__Clamp_8e5208
                    (param_2,0,*(int *)(*(long *)(lVar9 + 0x10) + 0x18) + -1,0);
  *(undefined4 *)(lVar5 + 0x120) = uVar3;
  native_UnityEngine_UI_Dropdown__RefreshShownValue_7d90e8(lVar5);
  native_UnityEngine_UISystemProfilerApi__AddMarker_db8894
            (_StringLiteral_Dropdown_value_12ed888,lVar5,0);
  lVar9 = *(long *)(lVar5 + 0x130);
  if (lVar9 == 0) goto code_r0x007d9dd8;
  uVar3 = *(undefined4 *)(lVar5 + 0x120);
native_UnityEngine_Events_UnityEvent_int___Invoke_89f660:
  lVar5 = _Method_UnityEngine_Events_UnityEvent_int__Invoke___12de490;
  if ((bRam00000000013407ad & 1) == 0) {
    native_sub_43273c(&UnityEngine_Events_InvokableCall_TypeInfo_12d4f78);
    native_sub_43273c(&Method_System_Collections_Generic_List_BaseInvokableCall__get_Count___12dc5d0
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_BaseInvokableCall__get_Item___12dc5d8)
    ;
    native_sub_43273c(&object___TypeInfo_12d32d8);
    bRam00000000013407ad = 1;
  }
  if ((lVar9 != 0) &&
     (lVar6 = native_UnityEngine_Events_UnityEventBase__PrepareInvoke_773a28(lVar9,0), lVar6 != 0))
  {
    uVar4 = (ulong)*(uint *)(lVar6 + 0x18);
    if (0 < (int)*(uint *)(lVar6 + 0x18)) {
      puVar1 = (undefined8 *)(lVar9 + 0x28);
      lVar9 = 4;
      do {
        uVar13 = lVar9 - 4;
        if ((uVar4 & 0xffffffff) <= uVar13) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar11 = *(long *)(*(long *)(*(long *)(lVar5 + 0x18) + 0xc0) + 0x18);
        uVar10 = *(undefined8 *)(*(long *)(lVar6 + 0x10) + lVar9 * 8);
        if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
          native_sub_3c9850(lVar11);
        }
        plVar7 = (long *)native_sub_4327f8(uVar10,lVar11);
        if (plVar7 == (long *)0x0) {
          if (*(uint *)(lVar6 + 0x18) <= uVar13) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          lVar11 = native_sub_4327f8(*(undefined8 *)(*(long *)(lVar6 + 0x10) + lVar9 * 8),
                                     _UnityEngine_Events_InvokableCall_TypeInfo_12d4f78);
          if (lVar11 == 0) {
            if (*(uint *)(lVar6 + 0x18) <= uVar13) {
              native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            }
            plVar12 = (long *)*puVar1;
            plVar7 = *(long **)(*(long *)(lVar6 + 0x10) + lVar9 * 8);
            if (plVar12 == (long *)0x0) {
              uVar10 = native_sub_432750(_object___TypeInfo_12d32d8,1);
              *puVar1 = uVar10;
              native_sub_4326e0(puVar1,uVar10);
              plVar12 = (long *)*puVar1;
            }
            lVar11 = *(long *)(*(long *)(*(long *)(lVar5 + 0x18) + 0xc0) + 0x38);
            uStack_64 = uVar3;
            if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
              native_sub_3c9850(lVar11);
            }
            lVar11 = native_sub_4327fc(lVar11,&uStack_64);
            if (plVar12 == (long *)0x0) goto code_r0x0089f890;
            if ((lVar11 != 0) &&
               (lVar8 = native_sub_4327f8(lVar11,*(undefined8 *)(*plVar12 + 0x40)), lVar8 == 0)) {
              uVar10 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar10,0);
            }
            if ((int)plVar12[3] == 0) {
              uVar10 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar10,0);
            }
            plVar12[4] = lVar11;
            native_sub_4326e0(plVar12 + 4,lVar11);
            if (plVar7 == (long *)0x0) goto code_r0x0089f890;
            (**(code **)(*plVar7 + 0x178))(plVar7,*puVar1,*(undefined8 *)(*plVar7 + 0x180));
          }
          else {
            native_UnityEngine_Events_InvokableCall__Invoke_8df658(lVar11,0);
          }
        }
        else {
          (**(code **)(*plVar7 + 0x198))(plVar7,uVar3,*(undefined8 *)(*plVar7 + 0x1a0));
        }
        uVar4 = (ulong)*(int *)(lVar6 + 0x18);
        lVar11 = lVar9 + -3;
        lVar9 = lVar9 + 1;
      } while (lVar11 < (long)uVar4);
    }
    return;
  }
code_r0x0089f890:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Utils.BE2_Dropdown$$RefreshShownValue @ 0x580b34
 * void MG_BlocksEngine2_Utils_BE2_Dropdown__RefreshShownValue (MG_BlocksEngine2_Utils_BE2_Dropdown_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_Dropdown$$RefreshShownValue
   void MG_BlocksEngine2_Utils_BE2_Dropdown__RefreshShownValue
   (MG_BlocksEngine2_Utils_BE2_Dropdown_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Utils_BE2_Dropdown__RefreshShownValue_580b34(long param_1)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  if ((bRam000000000133eae9 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133eae9 = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
  if ((uVar4 & 1) != 0) {
    lVar5 = *(long *)(param_1 + 0x20);
    if (lVar5 == 0) {
LAB_00580c10:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    if ((bRam000000000133efe9 & 1) == 0) {
      native_sub_43273c(&
                        Method_System_Collections_Generic_List_TMP_Dropdown_OptionData__get_Count___12dd878
                        ,0);
      native_sub_43273c(&
                        Method_System_Collections_Generic_List_TMP_Dropdown_OptionData__get_Item___12dd880
                       );
      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
      native_sub_43273c(&TMPro_TMP_Dropdown_TypeInfo_12d6000);
      native_sub_43273c(&StringLiteral__12eaac0);
      bRam000000000133efe9 = 1;
    }
    if (((*(byte *)(_TMPro_TMP_Dropdown_TypeInfo_12d6000 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_TMPro_TMP_Dropdown_TypeInfo_12d6000 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if ((*(long *)(lVar5 + 0x130) == 0) ||
       (lVar10 = *(long *)(*(long *)(lVar5 + 0x130) + 0x10), lVar10 == 0)) goto code_r0x00662128;
    lVar9 = **(long **)(_TMPro_TMP_Dropdown_TypeInfo_12d6000 + 0xb8);
    if ((0 < *(int *)(lVar10 + 0x18)) && (-1 < *(int *)(lVar5 + 0x128))) {
      uVar3 = native_UnityEngine_Mathf__Clamp_8e5208
                        (*(int *)(lVar5 + 0x128),0,*(int *)(lVar10 + 0x18) + -1,0);
      if (*(uint *)(lVar10 + 0x18) <= uVar3) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      lVar9 = *(long *)(*(long *)(lVar10 + 0x10) + (long)(int)uVar3 * 8 + 0x20);
    }
    uVar8 = *(undefined8 *)(lVar5 + 0x100);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
    if ((uVar4 & 1) != 0) {
      if ((lVar9 == 0) || (*(long *)(lVar9 + 0x10) == 0)) {
        plVar6 = *(long **)(lVar5 + 0x100);
        if (plVar6 == (long *)0x0) goto code_r0x00662128;
        lVar7 = *plVar6;
        lVar10 = _StringLiteral__12eaac0;
      }
      else {
        plVar6 = *(long **)(lVar5 + 0x100);
        if (plVar6 == (long *)0x0) goto code_r0x00662128;
        lVar7 = *plVar6;
        lVar10 = *(long *)(lVar9 + 0x10);
      }
      (**(code **)(lVar7 + 0x558))(plVar6,lVar10,*(undefined8 *)(lVar7 + 0x560));
    }
    uVar8 = *(undefined8 *)(lVar5 + 0x108);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
    if ((uVar4 & 1) != 0) {
      lVar10 = *(long *)(lVar5 + 0x108);
      if (lVar9 == 0) {
        if (lVar10 == 0) goto code_r0x00662128;
        uVar8 = 0;
      }
      else {
        if (lVar10 == 0) goto code_r0x00662128;
        uVar8 = *(undefined8 *)(lVar9 + 0x18);
      }
      native_UnityEngine_UI_Image__set_sprite_cb7458(lVar10,uVar8,0);
      lVar10 = *(long *)(lVar5 + 0x108);
      if (lVar10 == 0) goto code_r0x00662128;
      uVar8 = *(undefined8 *)(lVar10 + 0xd0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar10,uVar3 & 1,0);
    }
    uVar8 = *(undefined8 *)(lVar5 + 0x110);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    if ((*(long *)(lVar5 + 0x130) != 0) &&
       (lVar9 = *(long *)(*(long *)(lVar5 + 0x130) + 0x10), lVar9 != 0)) {
      lVar10 = *(long *)(lVar5 + 0x110);
      if (*(int *)(lVar9 + 0x18) == 0) {
        bVar1 = true;
      }
      else {
        bVar1 = *(int *)(lVar5 + 0x128) == -1;
      }
      if (lVar10 != 0) goto code_r0x008d7b0c;
    }
code_r0x00662128:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  lVar10 = *(long *)(param_1 + 0x18);
  if (lVar10 == 0) goto LAB_00580c10;
  if ((bRam000000000134033f & 1) == 0) {
    native_sub_43273c(&UnityEngine_UI_Dropdown_TypeInfo_12d4498,0);
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Dropdown_OptionData__get_Count___12dd710
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Dropdown_OptionData__get_Item___12dd718
                     );
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam000000000134033f = 1;
  }
  if (((*(byte *)(_UnityEngine_UI_Dropdown_TypeInfo_12d4498 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_UI_Dropdown_TypeInfo_12d4498 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((*(long *)(lVar10 + 0x128) == 0) ||
     (lVar5 = *(long *)(*(long *)(lVar10 + 0x128) + 0x10), lVar5 == 0)) goto code_r0x007d92f0;
  if (*(int *)(lVar5 + 0x18) < 1) {
    lVar5 = **(long **)(_UnityEngine_UI_Dropdown_TypeInfo_12d4498 + 0xb8);
  }
  else {
    uVar3 = native_UnityEngine_Mathf__Clamp_8e5208
                      (*(undefined4 *)(lVar10 + 0x120),0,*(int *)(lVar5 + 0x18) + -1,0);
    if (*(uint *)(lVar5 + 0x18) <= uVar3) {
      native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + (long)(int)uVar3 * 8 + 0x20);
  }
  uVar8 = *(undefined8 *)(lVar10 + 0x100);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
  if ((uVar4 & 1) != 0) {
    if ((lVar5 == 0) || (*(long *)(lVar5 + 0x10) == 0)) {
      plVar6 = *(long **)(lVar10 + 0x100);
      if (plVar6 == (long *)0x0) goto code_r0x007d92f0;
      lVar7 = *plVar6;
      lVar9 = _StringLiteral__12eaac0;
    }
    else {
      plVar6 = *(long **)(lVar10 + 0x100);
      if (plVar6 == (long *)0x0) goto code_r0x007d92f0;
      lVar7 = *plVar6;
      lVar9 = *(long *)(lVar5 + 0x10);
    }
    (**(code **)(lVar7 + 0x5e8))(plVar6,lVar9,*(undefined8 *)(lVar7 + 0x5f0));
  }
  uVar8 = *(undefined8 *)(lVar10 + 0x108);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  lVar9 = *(long *)(lVar10 + 0x108);
  if (lVar5 == 0) {
    if (lVar9 == 0) goto code_r0x007d92f0;
    uVar8 = 0;
  }
  else {
    if (lVar9 == 0) goto code_r0x007d92f0;
    uVar8 = *(undefined8 *)(lVar5 + 0x18);
  }
  native_UnityEngine_UI_Image__set_sprite_cb7458(lVar9,uVar8,0);
  lVar10 = *(long *)(lVar10 + 0x108);
  if (lVar10 == 0) {
code_r0x007d92f0:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar8 = *(undefined8 *)(lVar10 + 0xd0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  bVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
  bVar1 = (bool)(bVar2 & 1);
code_r0x008d7b0c:
  if (pcRam0000000001340948 == (code *)0x0) {
    pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
  }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000001340948)(lVar10,bVar1);
  return;
}



/* MG_BlocksEngine2.Utils.BE2_Dropdown$$get_captionTextpreferredWidth @ 0x57551c
 * float MG_BlocksEngine2_Utils_BE2_Dropdown__get_captionTextpreferredWidth (MG_BlocksEngine2_Utils_BE2_Dropdown_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_Dropdown$$get_captionTextpreferredWidth
   float MG_BlocksEngine2_Utils_BE2_Dropdown__get_captionTextpreferredWidth
   (MG_BlocksEngine2_Utils_BE2_Dropdown_o* __this, const MethodInfo* method); */

undefined1  [16]
native_MG_BlocksEngine2_Utils_BE2_Dropdown__get_captionTextpreferredWidth_57551c(long param_1)

{
  ulong uVar1;
  long *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar4 [16];
  
  if ((bRam000000000133eaea & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133eaea = 1;
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
      return ZEXT816(0xbf800000);
    }
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (plVar2 = *(long **)(*(long *)(param_1 + 0x18) + 0x100), plVar2 == (long *)0x0))
    goto LAB_00575610;
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x628);
    uVar3 = *(undefined8 *)(*plVar2 + 0x630);
  }
  else {
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (plVar2 = *(long **)(*(long *)(param_1 + 0x20) + 0x100), plVar2 == (long *)0x0)) {
LAB_00575610:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x678);
    uVar3 = *(undefined8 *)(*plVar2 + 0x680);
  }
                    /* WARNING: Could not recover jumptable at 0x005755f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar2,uVar3);
  auVar4._4_4_ = extraout_var;
  auVar4._0_4_ = extraout_s0;
  auVar4._8_8_ = extraout_var_00;
  return auVar4;
}



/* MG_BlocksEngine2.Utils.BE2_Dropdown$$get_onValueChanged @ 0x567184
 * UnityEngine_Events_UnityEvent_int__o* MG_BlocksEngine2_Utils_BE2_Dropdown__get_onValueChanged (MG_BlocksEngine2_Utils_BE2_Dropdown_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_Dropdown$$get_onValueChanged
   UnityEngine_Events_UnityEvent_int__o* MG_BlocksEngine2_Utils_BE2_Dropdown__get_onValueChanged
   (MG_BlocksEngine2_Utils_BE2_Dropdown_o* __this, const MethodInfo* method); */

ulong native_MG_BlocksEngine2_Utils_BE2_Dropdown__get_onValueChanged_567184(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133eaeb & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133eaeb = 1;
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
    uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar3,0);
    uVar1 = 0;
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_0056724c;
      uVar1 = *(ulong *)(*(long *)(param_1 + 0x18) + 0x130);
    }
  }
  else {
    if (*(long *)(param_1 + 0x20) == 0) {
LAB_0056724c:
                    /* WARNING: Subroutine does not return */
      native_sub_432810(uVar1);
    }
    uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x138);
  }
  return uVar1;
}



/* MG_BlocksEngine2.Utils.BE2_Dropdown$$get_enabled @ 0x580c14
 * bool MG_BlocksEngine2_Utils_BE2_Dropdown__get_enabled (MG_BlocksEngine2_Utils_BE2_Dropdown_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_Dropdown$$get_enabled
   bool MG_BlocksEngine2_Utils_BE2_Dropdown__get_enabled (MG_BlocksEngine2_Utils_BE2_Dropdown_o*
   __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Utils_BE2_Dropdown__get_enabled_580c14(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133eaec & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133eaec = 1;
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
    lVar2 = *(long *)(param_1 + 0x18);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
  }
  if (lVar2 != 0) {
    if (pcRam0000000001340940 == (code *)0x0) {
      pcRam0000000001340940 = (code *)native_sub_4326f0(&UNK_00e2c6dd);
    }
                    /* WARNING: Could not recover jumptable at 0x008d7b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*pcRam0000000001340940)(lVar2);
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Utils.BE2_Dropdown$$set_enabled @ 0x580ce4
 * void MG_BlocksEngine2_Utils_BE2_Dropdown__set_enabled (MG_BlocksEngine2_Utils_BE2_Dropdown_o* __this, bool value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_Dropdown$$set_enabled
   void MG_BlocksEngine2_Utils_BE2_Dropdown__set_enabled (MG_BlocksEngine2_Utils_BE2_Dropdown_o*
   __this, bool value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Utils_BE2_Dropdown__set_enabled_580ce4(long param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133eaed & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133eaed = 1;
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
    lVar2 = *(long *)(param_1 + 0x18);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
  }
  if (lVar2 != 0) {
    if (pcRam0000000001340948 == (code *)0x0) {
      pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
    }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000001340948)(lVar2,param_2 & 1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}


