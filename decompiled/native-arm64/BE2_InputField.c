/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Utils.BE2_InputField$$get_isNull @ 0x601ab4
 * bool MG_BlocksEngine2_Utils_BE2_InputField__get_isNull (MG_BlocksEngine2_Utils_BE2_InputField_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Utils.BE2_InputField$$get_isNull
   bool MG_BlocksEngine2_Utils_BE2_InputField__get_isNull (MG_BlocksEngine2_Utils_BE2_InputField_o*
   __this, const MethodInfo* method); */

undefined1 native_MG_BlocksEngine2_Utils_BE2_InputField__get_isNull_601ab4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



/* MG_BlocksEngine2.Utils.BE2_InputField$$.ctor @ 0x601abc
 * void MG_BlocksEngine2_Utils_BE2_InputField___ctor (MG_BlocksEngine2_Utils_BE2_InputField_o* __this, UnityEngine_Transform_o* transform, const MethodInfo* method); */

/* MG_BlocksEngine2.Utils.BE2_InputField$$.ctor
   void MG_BlocksEngine2_Utils_BE2_InputField___ctor (MG_BlocksEngine2_Utils_BE2_InputField_o*
   __this, UnityEngine_Transform_o* transform, const MethodInfo* method); */

void native_MG_BlocksEngine2_Utils_BE2_InputField___ctor_601abc(long param_1,undefined8 param_2)

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



/* MG_BlocksEngine2.Utils.BE2_InputField$$Init @ 0x601af0
 * void MG_BlocksEngine2_Utils_BE2_InputField__Init (MG_BlocksEngine2_Utils_BE2_InputField_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_InputField$$Init
   void MG_BlocksEngine2_Utils_BE2_InputField__Init (MG_BlocksEngine2_Utils_BE2_InputField_o*
   __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Utils_BE2_InputField__Init_601af0(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  if ((bRam000000000133ede4 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_InputField____12e2a80);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_TMP_InputField____12e2b28);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ede4 = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (*(long *)(param_1 + 0x10),
                       _Method_UnityEngine_Component_GetComponent_InputField____12e2a80);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    native_sub_4326e0((undefined8 *)(param_1 + 0x18),uVar2);
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (*(long *)(param_1 + 0x10),
                         _Method_UnityEngine_Component_GetComponent_TMP_InputField____12e2b28);
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



/* MG_BlocksEngine2.Utils.BE2_InputField$$GetBE2Component @ 0x601c18
 * MG_BlocksEngine2_Utils_BE2_InputField_o* MG_BlocksEngine2_Utils_BE2_InputField__GetBE2Component (UnityEngine_Transform_o* transform, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_InputField$$GetBE2Component
   MG_BlocksEngine2_Utils_BE2_InputField_o* MG_BlocksEngine2_Utils_BE2_InputField__GetBE2Component
   (UnityEngine_Transform_o* transform, const MethodInfo* method); */

long native_MG_BlocksEngine2_Utils_BE2_InputField__GetBE2Component_601c18(undefined8 param_1)

{
  long lVar1;
  
  if ((bRam000000000133ede5 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Utils_BE2_InputField_TypeInfo_12d39e0);
    bRam000000000133ede5 = 1;
  }
  lVar1 = native_sub_432808(_MG_BlocksEngine2_Utils_BE2_InputField_TypeInfo_12d39e0);
  native_System_Object___ctor_ad2798(lVar1,0);
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  native_sub_4326e0((undefined8 *)(lVar1 + 0x10),param_1);
  if (lVar1 != 0) {
    native_MG_BlocksEngine2_Utils_BE2_InputField__Init_601af0(lVar1);
    if (*(char *)(lVar1 + 0x28) != '\0') {
      lVar1 = 0;
    }
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Utils.BE2_InputField$$GetBE2ComponentInChildren @ 0x601c9c
 * MG_BlocksEngine2_Utils_BE2_InputField_o* MG_BlocksEngine2_Utils_BE2_InputField__GetBE2ComponentInChildren (UnityEngine_Transform_o* transform, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_InputField$$GetBE2ComponentInChildren
   MG_BlocksEngine2_Utils_BE2_InputField_o*
   MG_BlocksEngine2_Utils_BE2_InputField__GetBE2ComponentInChildren (UnityEngine_Transform_o*
   transform, const MethodInfo* method); */

long native_MG_BlocksEngine2_Utils_BE2_InputField__GetBE2ComponentInChildren_601c9c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133ede6 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInChildren_InputField____12e2c80);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInChildren_TMP_InputField____12e2c90
                     );
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ede6 = 1;
  }
  if (param_1 != 0) {
    lVar1 = native_UnityEngine_Component__GetComponentInChildren_Animation__49db98
                      (param_1,
                       _Method_UnityEngine_Component_GetComponentInChildren_InputField____12e2c80);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar1,0,0);
    if ((uVar2 & 1) == 0) {
      lVar1 = native_UnityEngine_Component__GetComponentInChildren_Animation__49db98
                        (param_1,
                         _Method_UnityEngine_Component_GetComponentInChildren_TMP_InputField____12e2c90
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
      if ((bRam000000000133ede5 & 1) == 0) {
        native_sub_43273c(&MG_BlocksEngine2_Utils_BE2_InputField_TypeInfo_12d39e0);
        bRam000000000133ede5 = 1;
      }
      lVar1 = native_sub_432808(_MG_BlocksEngine2_Utils_BE2_InputField_TypeInfo_12d39e0);
      native_System_Object___ctor_ad2798(lVar1,0);
      *(undefined8 *)(lVar1 + 0x10) = uVar3;
      native_sub_4326e0((undefined8 *)(lVar1 + 0x10),uVar3);
      if (lVar1 != 0) {
        native_MG_BlocksEngine2_Utils_BE2_InputField__Init_601af0(lVar1);
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



/* MG_BlocksEngine2.Utils.BE2_InputField$$GetBE2ComponentsInChildren @ 0x601dc0
 * MG_BlocksEngine2_Utils_BE2_InputField_array* MG_BlocksEngine2_Utils_BE2_InputField__GetBE2ComponentsInChildren (UnityEngine_Transform_o* transform, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0060213c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_InputField$$GetBE2ComponentsInChildren
   MG_BlocksEngine2_Utils_BE2_InputField_array*
   MG_BlocksEngine2_Utils_BE2_InputField__GetBE2ComponentsInChildren (UnityEngine_Transform_o*
   transform, const MethodInfo* method); */

void native_MG_BlocksEngine2_Utils_BE2_InputField__GetBE2ComponentsInChildren_601dc0(long param_1)

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
  
  if ((bRam000000000133ede7 & 1) == 0) {
    native_sub_43273c(&System_IDisposable_TypeInfo_12d4b00);
    native_sub_43273c(&System_Collections_IEnumerator_TypeInfo_12d4b80);
    native_sub_43273c(&Method_System_Collections_Generic_List_BE2_InputField__AddRange___12dc440);
    native_sub_43273c(&Method_System_Collections_Generic_List_BE2_InputField__Add___12dc438);
    native_sub_43273c(&Method_System_Collections_Generic_List_BE2_InputField__ToArray___12dc448);
    native_sub_43273c(&Method_System_Collections_Generic_List_BE2_InputField___ctor___12dc430);
    native_sub_43273c(&System_Collections_Generic_List_BE2_InputField__TypeInfo_12d2970);
    native_sub_43273c(&UnityEngine_Transform_TypeInfo_12d6300);
    bRam000000000133ede7 = 1;
  }
  lVar1 = native_sub_432808(_System_Collections_Generic_List_BE2_InputField__TypeInfo_12d2970);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (lVar1,_Method_System_Collections_Generic_List_BE2_InputField___ctor___12dc430);
  lVar2 = native_MG_BlocksEngine2_Utils_BE2_InputField__GetBE2Component_601c18(param_1);
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x28) == '\0')) {
    if (lVar1 == 0) goto LAB_00602134;
    native_System_Collections_Generic_List_int_____Add_d40c00
              (lVar1,lVar2,_Method_System_Collections_Generic_List_BE2_InputField__Add___12dc438);
    native_MG_BlocksEngine2_Utils_BE2_InputField__Init_601af0(lVar2);
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
            goto LAB_00601f44;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar2 + 0x12a));
      }
      puVar4 = (undefined8 *)
               native_sub_3c9b34(plVar3,_System_Collections_IEnumerator_TypeInfo_12d4b80,0);
LAB_00601f44:
      uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((uVar7 & 1) == 0) {
        plVar3 = (long *)native_sub_4327f8(plVar3,_System_IDisposable_TypeInfo_12d4b00);
        if (plVar3 == (long *)0x0) goto LAB_006020d0;
        lVar2 = *plVar3;
        if ((ulong)*(ushort *)(lVar2 + 0x12a) == 0) goto LAB_006020a8;
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        goto LAB_0060208c;
      }
      lVar2 = *plVar3;
      if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar4 = (undefined8 *)(lVar2 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_00601fac;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar2 + 0x12a));
      }
      puVar4 = (undefined8 *)
               native_sub_3c9b34(plVar3,_System_Collections_IEnumerator_TypeInfo_12d4b80,1);
LAB_00601fac:
      plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
      if (plVar5 != (long *)0x0) {
        if ((*(byte *)(*plVar5 + 300) < *(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300)) ||
           (*(long *)(*(long *)(*plVar5 + 200) +
                      (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300) * 8 + -8) !=
            _UnityEngine_Transform_TypeInfo_12d6300)) {
          auVar9 = native_sub_432b04(plVar5);
LAB_0060212c:
                    /* WARNING: Subroutine does not return */
          native_sub_432810(auVar9._0_8_,auVar9._8_8_);
        }
      }
      lVar2 = native_MG_BlocksEngine2_Utils_BE2_InputField__GetBE2Component_601c18(plVar5);
      if ((lVar2 != 0) && (*(char *)(lVar2 + 0x28) == '\0')) {
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        native_System_Collections_Generic_List_int_____Add_d40c00
                  (lVar1,lVar2,_Method_System_Collections_Generic_List_BE2_InputField__Add___12dc438
                  );
        native_MG_BlocksEngine2_Utils_BE2_InputField__Init_601af0(lVar2);
      }
      uVar6 = native_MG_BlocksEngine2_Utils_BE2_InputField__GetBE2ComponentsInChildren_601dc0
                        (plVar5);
      auVar9._8_8_ = uVar6;
      auVar9._0_8_ = uVar6;
      if (lVar1 == 0) goto LAB_0060212c;
      native_System_Collections_Generic_List_BE2_Dropdown___AddRange_d40e50
                (lVar1,uVar6,
                 _Method_System_Collections_Generic_List_BE2_InputField__AddRange___12dc440);
    } while( true );
  }
  goto LAB_00602134;
  while( true ) {
    uVar7 = uVar7 + 1;
    piVar8 = piVar8 + 4;
    if (*(ushort *)(lVar2 + 0x12a) <= uVar7) break;
LAB_0060208c:
    if (*(long *)(piVar8 + -2) == _System_IDisposable_TypeInfo_12d4b00) {
      puVar4 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_006020c4;
    }
  }
LAB_006020a8:
  puVar4 = (undefined8 *)native_sub_3c9b34(plVar3,_System_IDisposable_TypeInfo_12d4b00,0);
LAB_006020c4:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
LAB_006020d0:
  if (lVar1 != 0) {
    native_System_Collections_Generic_List_AndroidAssetPackState___ToArray_d426dc
              (lVar1,_Method_System_Collections_Generic_List_BE2_InputField__ToArray___12dc448);
    return;
  }
LAB_00602134:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Utils.BE2_InputField$$get_onEndEdit @ 0x60218c
 * UnityEngine_Events_UnityEvent_string__o* MG_BlocksEngine2_Utils_BE2_InputField__get_onEndEdit (MG_BlocksEngine2_Utils_BE2_InputField_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_InputField$$get_onEndEdit
   UnityEngine_Events_UnityEvent_string__o* MG_BlocksEngine2_Utils_BE2_InputField__get_onEndEdit
   (MG_BlocksEngine2_Utils_BE2_InputField_o* __this, const MethodInfo* method); */

ulong native_MG_BlocksEngine2_Utils_BE2_InputField__get_onEndEdit_60218c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133ede8 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ede8 = 1;
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
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_00602254;
      uVar1 = *(ulong *)(*(long *)(param_1 + 0x18) + 0x130);
    }
  }
  else {
    if (*(long *)(param_1 + 0x20) == 0) {
LAB_00602254:
                    /* WARNING: Subroutine does not return */
      native_sub_432810(uVar1);
    }
    uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x1a8);
  }
  return uVar1;
}



/* MG_BlocksEngine2.Utils.BE2_InputField$$get_onValueChanged @ 0x602258
 * UnityEngine_Events_UnityEvent_string__o* MG_BlocksEngine2_Utils_BE2_InputField__get_onValueChanged (MG_BlocksEngine2_Utils_BE2_InputField_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_InputField$$get_onValueChanged
   UnityEngine_Events_UnityEvent_string__o*
   MG_BlocksEngine2_Utils_BE2_InputField__get_onValueChanged
   (MG_BlocksEngine2_Utils_BE2_InputField_o* __this, const MethodInfo* method); */

ulong native_MG_BlocksEngine2_Utils_BE2_InputField__get_onValueChanged_602258(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133ede9 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ede9 = 1;
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
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_00602320;
      uVar1 = *(ulong *)(*(long *)(param_1 + 0x18) + 0x138);
    }
  }
  else {
    if (*(long *)(param_1 + 0x20) == 0) {
LAB_00602320:
                    /* WARNING: Subroutine does not return */
      native_sub_432810(uVar1);
    }
    uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x1d8);
  }
  return uVar1;
}



/* MG_BlocksEngine2.Utils.BE2_InputField$$get_preferredWidth @ 0x602324
 * float MG_BlocksEngine2_Utils_BE2_InputField__get_preferredWidth (MG_BlocksEngine2_Utils_BE2_InputField_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_InputField$$get_preferredWidth
   float MG_BlocksEngine2_Utils_BE2_InputField__get_preferredWidth
   (MG_BlocksEngine2_Utils_BE2_InputField_o* __this, const MethodInfo* method); */

undefined1  [16]
native_MG_BlocksEngine2_Utils_BE2_InputField__get_preferredWidth_602324(long param_1)

{
  ulong uVar1;
  long *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar4 [16];
  
  if ((bRam000000000133edea & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133edea = 1;
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
      return ZEXT816(0);
    }
    plVar2 = *(long **)(param_1 + 0x18);
    if (plVar2 == (long *)0x0) goto LAB_00602408;
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x5f8);
    uVar3 = *(undefined8 *)(*plVar2 + 0x600);
  }
  else {
    plVar2 = *(long **)(param_1 + 0x20);
    if (plVar2 == (long *)0x0) {
LAB_00602408:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x608);
    uVar3 = *(undefined8 *)(*plVar2 + 0x610);
  }
                    /* WARNING: Could not recover jumptable at 0x006023f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar2,uVar3);
  auVar4._4_4_ = extraout_var;
  auVar4._0_4_ = extraout_s0;
  auVar4._8_8_ = extraout_var_00;
  return auVar4;
}



/* MG_BlocksEngine2.Utils.BE2_InputField$$get_text @ 0x60240c
 * System_String_o* MG_BlocksEngine2_Utils_BE2_InputField__get_text (MG_BlocksEngine2_Utils_BE2_InputField_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_InputField$$get_text
   System_String_o* MG_BlocksEngine2_Utils_BE2_InputField__get_text
   (MG_BlocksEngine2_Utils_BE2_InputField_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Utils_BE2_InputField__get_text_60240c(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133edeb & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam000000000133edeb = 1;
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
      puVar2 = (undefined8 *)&StringLiteral__12eaac0;
    }
    else {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_006024e8;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x170);
    }
  }
  else {
    if (*(long *)(param_1 + 0x20) == 0) {
LAB_006024e8:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x20) + 0x218);
  }
  return *puVar2;
}



/* MG_BlocksEngine2.Utils.BE2_InputField$$set_text @ 0x6024ec
 * void MG_BlocksEngine2_Utils_BE2_InputField__set_text (MG_BlocksEngine2_Utils_BE2_InputField_o* __this, System_String_o* value, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00cbdbd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_InputField$$set_text
   void MG_BlocksEngine2_Utils_BE2_InputField__set_text (MG_BlocksEngine2_Utils_BE2_InputField_o*
   __this, System_String_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Utils_BE2_InputField__set_text_6024ec(long param_1,long param_2)

{
  long *plVar1;
  undefined4 uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  code *pcVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  int iVar16;
  ulong uVar17;
  
  if ((bRam000000000133edec & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133edec = 1;
  }
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar13,0);
  if ((uVar6 & 1) == 0) {
    uVar13 = *(undefined8 *)(param_1 + 0x18);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar13,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    lVar7 = *(long *)(param_1 + 0x18);
    if (lVar7 != 0) {
      if ((bRam00000000013429be & 1) == 0) {
        native_sub_43273c(&Method_UnityEngine_UI_InputField_Validate___12e5020);
        native_sub_43273c(&System_Math_TypeInfo_12d51c0);
        native_sub_43273c(&UnityEngine_UI_InputField_OnValidateInput_TypeInfo_12d73a8);
        native_sub_43273c(&string_TypeInfo_12d5f28);
        native_sub_43273c(&StringLiteral___12eab80);
        native_sub_43273c(&StringLiteral___12eaac8);
        native_sub_43273c(&StringLiteral___12eab58);
        native_sub_43273c(&StringLiteral__12eaac0);
        bRam00000000013429be = 1;
      }
      uVar6 = native_System_String__op_Equality_afc18c(*(undefined8 *)(lVar7 + 0x170),param_2,0);
      if ((uVar6 & 1) != 0) {
        return;
      }
      lVar11 = _StringLiteral__12eaac0;
      if (param_2 != 0) {
        lVar11 = param_2;
      }
      if (lVar11 != 0) {
        lVar11 = native_System_String__Replace_afd9ac
                           (lVar11,_StringLiteral___12eaac8,
                            **(undefined8 **)(_string_TypeInfo_12d5f28 + 0xb8),0);
        if (*(int *)(lVar7 + 0x120) == 0) {
          if ((lVar11 == 0) ||
             (lVar11 = native_System_String__Replace_afd9ac
                                 (lVar11,_StringLiteral___12eab80,_StringLiteral__12eaac0,0),
             lVar11 == 0)) goto code_r0x00cbdc18;
          lVar11 = native_System_String__Replace_afd9ac
                             (lVar11,_StringLiteral___12eab58,_StringLiteral__12eaac0,0);
        }
        plVar1 = (long *)(lVar7 + 0x170);
        if ((*(long *)(lVar7 + 0x140) == 0) && (*(int *)(lVar7 + 0x128) == 0)) {
          iVar16 = *(int *)(lVar7 + 300);
          if (0 < iVar16) {
            if (lVar11 == 0) goto code_r0x00cbdc18;
            if (iVar16 < *(int *)(lVar11 + 0x10)) {
              lVar11 = native_System_String__Substring_b09fac(lVar11,0,iVar16,0);
            }
          }
          *plVar1 = lVar11;
          native_sub_4326e0(plVar1,lVar11);
        }
        else {
          *(long *)(lVar7 + 0x170) = _StringLiteral__12eaac0;
          native_sub_4326e0(plVar1);
          lVar8 = *(long *)(lVar7 + 0x140);
          if (lVar8 == 0) {
            lVar8 = native_sub_432808(_UnityEngine_UI_InputField_OnValidateInput_TypeInfo_12d73a8);
            native_UnityEngine_UI_InputField_OnValidateInput___ctor_c6cf5c
                      (lVar8,lVar7,_Method_UnityEngine_UI_InputField_Validate___12e5020,0);
          }
          if (lVar11 == 0) goto code_r0x00cbdc18;
          uVar2 = *(undefined4 *)(lVar11 + 0x10);
          iVar16 = *(int *)(lVar7 + 300);
          *(undefined4 *)(lVar7 + 0x188) = uVar2;
          *(undefined4 *)(lVar7 + 0x184) = uVar2;
          iVar4 = *(int *)(lVar11 + 0x10);
          if (0 < iVar16) {
            if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            iVar4 = native_System_Math__Min_90f70c(iVar16,iVar4,0);
          }
          if (0 < iVar4) {
            iVar16 = 0;
            do {
              lVar9 = *plVar1;
              if (lVar9 == 0) goto code_r0x00cbdc18;
              uVar2 = *(undefined4 *)(lVar9 + 0x10);
              uVar5 = native_System_String__get_Chars_b03810(lVar11,iVar16,0);
              if (lVar8 == 0) goto code_r0x00cbdc18;
              sVar3 = native_UnityEngine_UI_InputField_OnValidateInput__Invoke_c6cfc8
                                (lVar8,lVar9,uVar2,uVar5,0);
              if (sVar3 != 0) {
                lVar9 = *plVar1;
                uVar13 = native_System_Char__ToString_793ee0(&stack0xffffffffffffffac,0);
                lVar9 = native_System_String__Concat_afbd68(lVar9,uVar13,0);
                *plVar1 = lVar9;
                native_sub_4326e0(plVar1,lVar9);
              }
              iVar16 = iVar16 + 1;
            } while (iVar16 < iVar4);
          }
        }
        if (*(long *)(lVar7 + 0xf8) != 0) {
          native_UnityEngine_TouchScreenKeyboard__set_text_77103c(*(long *)(lVar7 + 0xf8),*plVar1,0)
          ;
        }
        if (*(long *)(lVar7 + 0x170) != 0) {
          iVar16 = *(int *)(*(long *)(lVar7 + 0x170) + 0x10);
          if (iVar16 < *(int *)(lVar7 + 0x184)) {
            *(int *)(lVar7 + 0x188) = iVar16;
            *(int *)(lVar7 + 0x184) = iVar16;
          }
          else if (iVar16 < *(int *)(lVar7 + 0x188)) {
            *(int *)(lVar7 + 0x188) = iVar16;
          }
          native_UnityEngine_UI_InputField__SendOnValueChanged_cbdc24(lVar7);
          native_UnityEngine_UI_InputField__UpdateLabel_cbdca8(lVar7);
          return;
        }
      }
code_r0x00cbdc18:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  else {
    lVar7 = *(long *)(param_1 + 0x20);
    if (lVar7 != 0) {
      if ((bRam0000000001340727 & 1) == 0) {
        native_sub_43273c(&string_TypeInfo_12d5f28);
        native_sub_43273c(&StringLiteral___12eaac8);
        native_sub_43273c(&StringLiteral__12eaac0);
        bRam0000000001340727 = 1;
      }
      uVar6 = native_System_String__op_Equality_afc18c(*(undefined8 *)(lVar7 + 0x218),param_2,0);
      if ((uVar6 & 1) != 0) {
        return;
      }
      lVar11 = _StringLiteral__12eaac0;
      if (param_2 != 0) {
        lVar11 = param_2;
      }
      if (lVar11 != 0) {
        uVar13 = native_System_String__Replace_afd9ac
                           (lVar11,_StringLiteral___12eaac8,
                            **(undefined8 **)(_string_TypeInfo_12d5f28 + 0xb8),0);
        *(undefined8 *)(lVar7 + 0x218) = uVar13;
        native_sub_4326e0((undefined8 *)(lVar7 + 0x218),uVar13);
        if (*(long *)(lVar7 + 0xf8) != 0) {
          native_UnityEngine_TouchScreenKeyboard__set_text_77103c
                    (*(long *)(lVar7 + 0xf8),*(undefined8 *)(lVar7 + 0x218),0);
        }
        if (*(long *)(lVar7 + 0x218) != 0) {
          iVar16 = *(int *)(*(long *)(lVar7 + 0x218) + 0x10);
          if (iVar16 < *(int *)(lVar7 + 0x22c)) {
            *(int *)(lVar7 + 0x230) = iVar16;
            *(int *)(lVar7 + 0x22c) = iVar16;
          }
          else if (iVar16 < *(int *)(lVar7 + 0x230)) {
            *(int *)(lVar7 + 0x230) = iVar16;
          }
          *(undefined1 *)(lVar7 + 0x2e3) = 1;
          *(undefined1 *)(lVar7 + 0x2a2) = 1;
          native_TMPro_TMP_InputField__UpdateLabel_88ae40(lVar7);
          if ((bRam0000000001340759 & 1) == 0) {
            native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_string__Invoke___12de4f0);
            bRam0000000001340759 = 1;
          }
          lVar11 = _Method_UnityEngine_Events_UnityEvent_string__Invoke___12de4f0;
          lVar8 = *(long *)(lVar7 + 0x1d8);
          if (lVar8 == 0) {
            return;
          }
          lVar7 = *(long *)(lVar7 + 0x218);
          if ((bRam00000000013407b1 & 1) == 0) {
            native_sub_43273c(&UnityEngine_Events_InvokableCall_TypeInfo_12d4f78);
            native_sub_43273c(&
                              Method_System_Collections_Generic_List_BaseInvokableCall__get_Count___12dc5d0
                             );
            native_sub_43273c(&
                              Method_System_Collections_Generic_List_BaseInvokableCall__get_Item___12dc5d8
                             );
            native_sub_43273c(&object___TypeInfo_12d32d8);
            bRam00000000013407b1 = 1;
          }
          if ((lVar8 != 0) &&
             (lVar9 = native_UnityEngine_Events_UnityEventBase__PrepareInvoke_773a28(lVar8,0),
             lVar9 != 0)) {
            uVar6 = (ulong)*(uint *)(lVar9 + 0x18);
            if (0 < (int)*(uint *)(lVar9 + 0x18)) {
              plVar1 = (long *)(lVar8 + 0x28);
              lVar8 = 4;
              do {
                uVar17 = lVar8 - 4;
                if ((uVar6 & 0xffffffff) <= uVar17) {
                  native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
                }
                lVar14 = *(long *)(*(long *)(*(long *)(lVar11 + 0x18) + 0xc0) + 0x18);
                uVar13 = *(undefined8 *)(*(long *)(lVar9 + 0x10) + lVar8 * 8);
                if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
                  native_sub_3c9850(lVar14);
                }
                plVar10 = (long *)native_sub_4327f8(uVar13,lVar14);
                if (plVar10 == (long *)0x0) {
                  if (*(uint *)(lVar9 + 0x18) <= uVar17) {
                    native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
                  }
                  lVar14 = native_sub_4327f8(*(undefined8 *)(*(long *)(lVar9 + 0x10) + lVar8 * 8),
                                             _UnityEngine_Events_InvokableCall_TypeInfo_12d4f78);
                  if (lVar14 == 0) {
                    if (*(uint *)(lVar9 + 0x18) <= uVar17) {
                      native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
                    }
                    plVar15 = (long *)*plVar1;
                    plVar10 = *(long **)(*(long *)(lVar9 + 0x10) + lVar8 * 8);
                    if (plVar15 == (long *)0x0) {
                      lVar14 = native_sub_432750(_object___TypeInfo_12d32d8,1);
                      *plVar1 = lVar14;
                      native_sub_4326e0(plVar1,lVar14);
                      plVar15 = (long *)*plVar1;
                      if (plVar15 == (long *)0x0) goto code_r0x008a0300;
                    }
                    if ((lVar7 != 0) &&
                       (lVar14 = native_sub_4327f8(lVar7,*(undefined8 *)(*plVar15 + 0x40)),
                       lVar14 == 0)) {
                      uVar13 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
                      native_sub_4327dc(uVar13,0);
                    }
                    if ((int)plVar15[3] == 0) {
                      uVar13 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                      native_sub_4327dc(uVar13,0);
                    }
                    plVar15[4] = lVar7;
                    native_sub_4326e0(plVar15 + 4,lVar7);
                    if (plVar10 != (long *)0x0) {
                      lVar14 = *plVar1;
                      pcVar12 = *(code **)(*plVar10 + 0x178);
                      uVar13 = *(undefined8 *)(*plVar10 + 0x180);
                      goto code_r0x008a0298;
                    }
                    goto code_r0x008a0300;
                  }
                  native_UnityEngine_Events_InvokableCall__Invoke_8df658(lVar14,0);
                }
                else {
                  pcVar12 = *(code **)(*plVar10 + 0x198);
                  uVar13 = *(undefined8 *)(*plVar10 + 0x1a0);
                  lVar14 = lVar7;
code_r0x008a0298:
                  (*pcVar12)(plVar10,lVar14,uVar13);
                }
                uVar6 = (ulong)*(int *)(lVar9 + 0x18);
                lVar14 = lVar8 + -3;
                lVar8 = lVar8 + 1;
              } while (lVar14 < (long)uVar6);
            }
            return;
          }
code_r0x008a0300:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Utils.BE2_InputField$$get_enabled @ 0x6025d8
 * bool MG_BlocksEngine2_Utils_BE2_InputField__get_enabled (MG_BlocksEngine2_Utils_BE2_InputField_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_InputField$$get_enabled
   bool MG_BlocksEngine2_Utils_BE2_InputField__get_enabled (MG_BlocksEngine2_Utils_BE2_InputField_o*
   __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Utils_BE2_InputField__get_enabled_6025d8(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133eded & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133eded = 1;
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



/* MG_BlocksEngine2.Utils.BE2_InputField$$set_enabled @ 0x6026a8
 * void MG_BlocksEngine2_Utils_BE2_InputField__set_enabled (MG_BlocksEngine2_Utils_BE2_InputField_o* __this, bool value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_InputField$$set_enabled
   void MG_BlocksEngine2_Utils_BE2_InputField__set_enabled (MG_BlocksEngine2_Utils_BE2_InputField_o*
   __this, bool value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Utils_BE2_InputField__set_enabled_6026a8(long param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133edee & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133edee = 1;
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


