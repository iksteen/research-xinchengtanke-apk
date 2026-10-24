/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* HjdBluetoothHardwareInterface$$Initialize @ 0xdc39d8
 * void HjdBluetoothHardwareInterface__Initialize (System_Action_string__o* action, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HjdBluetoothHardwareInterface$$Initialize
   void HjdBluetoothHardwareInterface__Initialize (System_Action_string__o* action, const
   MethodInfo* method); */

void native_HjdBluetoothHardwareInterface__Initialize_dc39d8(undefined8 param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  
  if ((bRam0000000001343d2a & 1) == 0) {
    native_sub_43273c(&UnityEngine_AndroidJavaClass_TypeInfo_12d3730);
    native_sub_43273c(&Method_UnityEngine_AndroidJavaObject_CallStatic_AndroidJavaObject____12dec78)
    ;
    native_sub_43273c(&Method_System_Array_Empty_object____12dedf0);
    native_sub_43273c(&
                      Method_UnityEngine_GameObject_AddComponent_HjdBluetoothDeviceScript____12e47f0
                     );
    native_sub_43273c(&UnityEngine_GameObject_TypeInfo_12d47d8);
    native_sub_43273c(&HjdBluetoothHardwareInterface_TypeInfo_12d4938);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_com_sthjd_mylibrary_HjdUnityBluetoothLE_12f3f28);
    native_sub_43273c(&StringLiteral_getInstance_12f4968);
    native_sub_43273c(&StringLiteral_androidBluetoothInitialize_12f3978);
    native_sub_43273c(&StringLiteral_HjdBluetoothLEReceiver_12ee3c0);
    bRam0000000001343d2a = 1;
  }
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  puVar3 = (undefined8 *)(*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) + 8);
  *puVar3 = 0;
  native_sub_4326e0(puVar3,0);
  lVar4 = native_UnityEngine_GameObject__Find_8dead0
                    (_StringLiteral_HjdBluetoothLEReceiver_12ee3c0,0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar4,0,0);
  if ((uVar5 & 1) != 0) {
    lVar4 = native_sub_432808(_UnityEngine_GameObject_TypeInfo_12d47d8);
    native_UnityEngine_GameObject___ctor_8de828
              (lVar4,_StringLiteral_HjdBluetoothLEReceiver_12ee3c0,0);
    if (lVar4 == 0) goto LAB_00dc3e50;
    uVar6 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                      (lVar4,
                       _Method_UnityEngine_GameObject_AddComponent_HjdBluetoothDeviceScript____12e47f0
                      );
    if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
      native_sub_4327ec(_HjdBluetoothHardwareInterface_TypeInfo_12d4938);
    }
    puVar3 = (undefined8 *)(*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) + 8);
    *puVar3 = uVar6;
    native_sub_4326e0(puVar3,uVar6);
    uVar6 = *(undefined8 *)(*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) + 8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
    if ((uVar5 & 1) != 0) {
      if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar7 = *(long *)(*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) + 8);
      if (lVar7 == 0) goto LAB_00dc3e50;
      puVar3 = (undefined8 *)(lVar7 + 0x18);
      *puVar3 = param_1;
      native_sub_4326e0(puVar3,param_1);
    }
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_UnityEngine_Object__DontDestroyOnLoad_8ea7a0(lVar4,0);
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (**(long **)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) == 0) {
    lVar7 = native_sub_432808(_UnityEngine_AndroidJavaClass_TypeInfo_12d3730);
    native_UnityEngine_AndroidJavaClass___ctor_d6bb40
              (lVar7,_StringLiteral_com_sthjd_mylibrary_HjdUnityBluetoothLE_12f3f28,0);
    lVar4 = _Method_System_Array_Empty_object____12dedf0;
    lVar10 = **(long **)(_Method_System_Array_Empty_object____12dedf0 + 0x30);
    uVar1 = *(ushort *)(lVar10 + 0x132);
    if ((uVar1 & 1) == 0) {
      native_sub_3c9850(lVar10);
      uVar1 = *(ushort *)(lVar10 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar10 = **(long **)(lVar4 + 0x30);
      if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
        native_sub_3c9850(lVar10);
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        lVar10 = **(long **)(lVar4 + 0x30);
        if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
          native_sub_3c9850(lVar10);
        }
        native_sub_4327ec(lVar10);
      }
    }
    lVar4 = **(long **)(lVar4 + 0x30);
    if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
      native_sub_3c9850(lVar4);
    }
    if (lVar7 == 0) goto LAB_00dc3e50;
    uVar6 = native_UnityEngine_AndroidJavaObject__CallStatic_AndroidJavaObject__8c4d20
                      (lVar7,_StringLiteral_getInstance_12f4968,**(undefined8 **)(lVar4 + 0xb8),
                       _Method_UnityEngine_AndroidJavaObject_CallStatic_AndroidJavaObject____12dec78
                      );
    if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
      native_sub_4327ec(_HjdBluetoothHardwareInterface_TypeInfo_12d4938);
    }
    puVar3 = *(undefined8 **)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8);
    *puVar3 = uVar6;
    native_sub_4326e0(puVar3,uVar6);
  }
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar4 = **(long **)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8);
  if (lVar4 == 0) {
    return;
  }
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
    lVar4 = **(long **)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8);
  }
  lVar7 = _Method_System_Array_Empty_object____12dedf0;
  lVar10 = **(long **)(_Method_System_Array_Empty_object____12dedf0 + 0x30);
  uVar1 = *(ushort *)(lVar10 + 0x132);
  if ((uVar1 & 1) == 0) {
    native_sub_3c9850(lVar10);
    uVar1 = *(ushort *)(lVar10 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar10 = **(long **)(lVar7 + 0x30);
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      native_sub_3c9850(lVar10);
    }
    if (*(int *)(lVar10 + 0xe0) == 0) {
      lVar10 = **(long **)(lVar7 + 0x30);
      if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
        native_sub_3c9850(lVar10);
      }
      native_sub_4327ec(lVar10);
    }
  }
  lVar7 = **(long **)(lVar7 + 0x30);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    native_sub_3c9850(lVar7);
  }
  uVar6 = _StringLiteral_androidBluetoothInitialize_12f3978;
  if (lVar4 != 0) {
    lVar7 = **(long **)(lVar7 + 0xb8);
    if ((bRam0000000001343116 & 1) == 0) {
      native_sub_43273c(&object___TypeInfo_12d32d8,_StringLiteral_androidBluetoothInitialize_12f3978
                        ,lVar7,0);
      bRam0000000001343116 = 1;
    }
    if (lVar7 == 0) {
      lVar7 = native_sub_432750(_object___TypeInfo_12d32d8,1);
    }
    if (*(long *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar11 = *(undefined8 *)(*(long *)(lVar4 + 0x18) + 0x18);
    uVar2 = native_UnityEngine__AndroidJNIHelper__GetSignature_d719ec(lVar7);
    uVar6 = native_UnityEngine__AndroidJNIHelper__GetMethodID_d6efec(uVar11,uVar6,uVar2,0);
    lVar10 = native_UnityEngine__AndroidJNIHelper__CreateJNIArgArray_d70340(lVar7);
    if (*(long *)(lVar4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_UnityEngine_AndroidJNISafe__CallVoidMethod_d74300
              (*(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x18),uVar6,lVar10);
    if ((bRam000000000134313b & 1) == 0) {
      native_sub_43273c(&UnityEngine_AndroidJavaProxy_TypeInfo_12d3748);
      native_sub_43273c(&UnityEngine_AndroidJavaRunnable_TypeInfo_12d3750);
      native_sub_43273c(&System_Array_TypeInfo_12d3820);
      native_sub_43273c(&string_TypeInfo_12d5f28);
      bRam000000000134313b = 1;
    }
    if (lVar7 != 0) {
      if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
        uVar5 = 0;
        uVar8 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
        do {
          if (uVar8 <= uVar5) goto code_r0x00d70a8c;
          plVar9 = *(long **)(lVar7 + 0x20 + uVar5 * 8);
          if (plVar9 != (long *)0x0) {
            lVar4 = *plVar9;
            if ((lVar4 != _string_TypeInfo_12d5f28) &&
               (lVar4 != _UnityEngine_AndroidJavaRunnable_TypeInfo_12d3750)) {
              if ((*(byte *)(lVar4 + 300) <
                   *(byte *)(_UnityEngine_AndroidJavaProxy_TypeInfo_12d3748 + 300)) ||
                 (*(long *)(*(long *)(lVar4 + 200) +
                            (ulong)*(byte *)(_UnityEngine_AndroidJavaProxy_TypeInfo_12d3748 + 300) *
                            8 + -8) != _UnityEngine_AndroidJavaProxy_TypeInfo_12d3748)) {
                if ((*(byte *)(lVar4 + 300) < *(byte *)(_System_Array_TypeInfo_12d3820 + 300)) ||
                   (*(long *)(*(long *)(lVar4 + 200) +
                              (ulong)*(byte *)(_System_Array_TypeInfo_12d3820 + 300) * 8 + -8) !=
                    _System_Array_TypeInfo_12d3820)) goto code_r0x00d70a60;
              }
            }
            if (lVar10 == 0) goto code_r0x00d70a98;
            if (*(uint *)(lVar10 + 0x18) <= uVar5) {
code_r0x00d70a8c:
              uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar6,0);
            }
            native_UnityEngine_AndroidJNISafe__DeleteLocalRef_d71e88
                      (*(undefined8 *)(lVar10 + 0x20 + uVar5 * 8));
          }
code_r0x00d70a60:
          uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
          uVar5 = uVar5 + 1;
        } while ((long)uVar5 < (long)(int)*(uint *)(lVar7 + 0x18));
      }
      return;
    }
code_r0x00d70a98:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
LAB_00dc3e50:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* HjdBluetoothHardwareInterface$$DeInitialize @ 0xdc3e54
 * void HjdBluetoothHardwareInterface__DeInitialize (System_Action_string__o* action, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HjdBluetoothHardwareInterface$$DeInitialize
   void HjdBluetoothHardwareInterface__DeInitialize (System_Action_string__o* action, const
   MethodInfo* method); */

void native_HjdBluetoothHardwareInterface__DeInitialize_dc3e54(undefined8 param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  if ((bRam0000000001343d2b & 1) == 0) {
    native_sub_43273c(&Method_System_Array_Empty_object____12dedf0);
    native_sub_43273c(&HjdBluetoothHardwareInterface_TypeInfo_12d4938);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_androidBluetoothDeInitialize_12f3970);
    bRam0000000001343d2b = 1;
  }
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar8 = *(undefined8 *)(*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) + 8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
  if ((uVar3 & 1) != 0) {
    if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar4 = *(long *)(*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) + 8);
    if (lVar4 == 0) goto LAB_00dc4050;
    puVar5 = (undefined8 *)(lVar4 + 0x20);
    *puVar5 = param_1;
    native_sub_4326e0(puVar5,param_1);
  }
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar4 = **(long **)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8);
  if (lVar4 == 0) {
    return;
  }
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
    lVar4 = **(long **)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8);
  }
  lVar10 = _Method_System_Array_Empty_object____12dedf0;
  lVar9 = **(long **)(_Method_System_Array_Empty_object____12dedf0 + 0x30);
  uVar1 = *(ushort *)(lVar9 + 0x132);
  if ((uVar1 & 1) == 0) {
    native_sub_3c9850(lVar9);
    uVar1 = *(ushort *)(lVar9 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar9 = **(long **)(lVar10 + 0x30);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      native_sub_3c9850(lVar9);
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      lVar9 = **(long **)(lVar10 + 0x30);
      if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
        native_sub_3c9850(lVar9);
      }
      native_sub_4327ec(lVar9);
    }
  }
  lVar10 = **(long **)(lVar10 + 0x30);
  if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
    native_sub_3c9850(lVar10);
  }
  uVar8 = _StringLiteral_androidBluetoothDeInitialize_12f3970;
  if (lVar4 != 0) {
    lVar10 = **(long **)(lVar10 + 0xb8);
    if ((bRam0000000001343116 & 1) == 0) {
      native_sub_43273c(&object___TypeInfo_12d32d8,
                        _StringLiteral_androidBluetoothDeInitialize_12f3970,lVar10,0);
      bRam0000000001343116 = 1;
    }
    if (lVar10 == 0) {
      lVar10 = native_sub_432750(_object___TypeInfo_12d32d8,1);
    }
    if (*(long *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar11 = *(undefined8 *)(*(long *)(lVar4 + 0x18) + 0x18);
    uVar2 = native_UnityEngine__AndroidJNIHelper__GetSignature_d719ec(lVar10);
    uVar8 = native_UnityEngine__AndroidJNIHelper__GetMethodID_d6efec(uVar11,uVar8,uVar2,0);
    lVar9 = native_UnityEngine__AndroidJNIHelper__CreateJNIArgArray_d70340(lVar10);
    if (*(long *)(lVar4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_UnityEngine_AndroidJNISafe__CallVoidMethod_d74300
              (*(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x18),uVar8,lVar9);
    if ((bRam000000000134313b & 1) == 0) {
      native_sub_43273c(&UnityEngine_AndroidJavaProxy_TypeInfo_12d3748);
      native_sub_43273c(&UnityEngine_AndroidJavaRunnable_TypeInfo_12d3750);
      native_sub_43273c(&System_Array_TypeInfo_12d3820);
      native_sub_43273c(&string_TypeInfo_12d5f28);
      bRam000000000134313b = 1;
    }
    if (lVar10 != 0) {
      if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
        uVar3 = 0;
        uVar6 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
        do {
          if (uVar6 <= uVar3) goto code_r0x00d70a8c;
          plVar7 = *(long **)(lVar10 + 0x20 + uVar3 * 8);
          if (plVar7 != (long *)0x0) {
            lVar4 = *plVar7;
            if ((lVar4 != _string_TypeInfo_12d5f28) &&
               (lVar4 != _UnityEngine_AndroidJavaRunnable_TypeInfo_12d3750)) {
              if ((*(byte *)(lVar4 + 300) <
                   *(byte *)(_UnityEngine_AndroidJavaProxy_TypeInfo_12d3748 + 300)) ||
                 (*(long *)(*(long *)(lVar4 + 200) +
                            (ulong)*(byte *)(_UnityEngine_AndroidJavaProxy_TypeInfo_12d3748 + 300) *
                            8 + -8) != _UnityEngine_AndroidJavaProxy_TypeInfo_12d3748)) {
                if ((*(byte *)(lVar4 + 300) < *(byte *)(_System_Array_TypeInfo_12d3820 + 300)) ||
                   (*(long *)(*(long *)(lVar4 + 200) +
                              (ulong)*(byte *)(_System_Array_TypeInfo_12d3820 + 300) * 8 + -8) !=
                    _System_Array_TypeInfo_12d3820)) goto code_r0x00d70a60;
              }
            }
            if (lVar9 == 0) goto code_r0x00d70a98;
            if (*(uint *)(lVar9 + 0x18) <= uVar3) {
code_r0x00d70a8c:
              uVar8 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar8,0);
            }
            native_UnityEngine_AndroidJNISafe__DeleteLocalRef_d71e88
                      (*(undefined8 *)(lVar9 + 0x20 + uVar3 * 8));
          }
code_r0x00d70a60:
          uVar6 = (ulong)*(uint *)(lVar10 + 0x18);
          uVar3 = uVar3 + 1;
        } while ((long)uVar3 < (long)(int)*(uint *)(lVar10 + 0x18));
      }
      return;
    }
code_r0x00d70a98:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
LAB_00dc4050:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* HjdBluetoothHardwareInterface$$StartAdvertising @ 0xdc4054
 * void HjdBluetoothHardwareInterface__StartAdvertising (System_Action_string__o* action, System_Byte_array* data, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HjdBluetoothHardwareInterface$$StartAdvertising
   void HjdBluetoothHardwareInterface__StartAdvertising (System_Action_string__o* action,
   System_Byte_array* data, const MethodInfo* method); */

void native_HjdBluetoothHardwareInterface__StartAdvertising_dc4054(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if ((bRam0000000001343d2c & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_AndroidJavaObject_Call_byte____12dec30);
    native_sub_43273c(&HjdBluetoothHardwareInterface_TypeInfo_12d4938);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_androidStartAdvertising_12f3990);
    bRam0000000001343d2c = 1;
  }
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar8 = *(undefined8 *)(*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) + 8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
  if ((uVar4 & 1) != 0) {
    if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar5 = *(long *)(*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) + 8);
    if (lVar5 == 0) goto LAB_00dc41d8;
    puVar6 = (undefined8 *)(lVar5 + 0x28);
    *puVar6 = param_1;
    native_sub_4326e0(puVar6,param_1);
  }
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (**(long **)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) == 0) {
    return;
  }
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_HjdBluetoothHardwareInterface__cal_AndroidBle_sumdata_dc41dc(param_2);
  uVar8 = _StringLiteral_androidStartAdvertising_12f3990;
  lVar5 = **(long **)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8);
  if (lVar5 != 0) {
    if ((bRam0000000001340858 & 1) == 0) {
      native_sub_43273c(&object___TypeInfo_12d32d8,_StringLiteral_androidStartAdvertising_12f3990,
                        param_2,_Method_UnityEngine_AndroidJavaObject_Call_byte____12dec30);
      bRam0000000001340858 = 1;
    }
    plVar1 = (long *)native_sub_432750(_object___TypeInfo_12d32d8,1);
    if (plVar1 != (long *)0x0) {
      if ((param_2 != 0) &&
         (lVar2 = native_sub_4327f8(param_2,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0)) {
        uVar8 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar8,0);
      }
      if ((int)plVar1[3] == 0) {
        uVar8 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar8,0);
      }
      plVar1[4] = param_2;
      native_sub_4326e0(plVar1 + 4,param_2);
      if (lVar5 != 0) {
        if ((bRam0000000001343116 & 1) == 0) {
          native_sub_43273c(&object___TypeInfo_12d32d8,uVar8,plVar1,0);
          bRam0000000001343116 = 1;
        }
        if (plVar1 == (long *)0x0) {
          plVar1 = (long *)native_sub_432750(_object___TypeInfo_12d32d8,1);
        }
        if (*(long *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0x18) + 0x18);
        uVar3 = native_UnityEngine__AndroidJNIHelper__GetSignature_d719ec(plVar1);
        uVar8 = native_UnityEngine__AndroidJNIHelper__GetMethodID_d6efec(uVar9,uVar8,uVar3,0);
        lVar2 = native_UnityEngine__AndroidJNIHelper__CreateJNIArgArray_d70340(plVar1);
        if (*(long *)(lVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        native_UnityEngine_AndroidJNISafe__CallVoidMethod_d74300
                  (*(undefined8 *)(*(long *)(lVar5 + 0x10) + 0x18),uVar8,lVar2);
        if ((bRam000000000134313b & 1) == 0) {
          native_sub_43273c(&UnityEngine_AndroidJavaProxy_TypeInfo_12d3748);
          native_sub_43273c(&UnityEngine_AndroidJavaRunnable_TypeInfo_12d3750);
          native_sub_43273c(&System_Array_TypeInfo_12d3820);
          native_sub_43273c(&string_TypeInfo_12d5f28);
          bRam000000000134313b = 1;
        }
        if (plVar1 != (long *)0x0) {
          if (0 < (int)plVar1[3]) {
            uVar4 = 0;
            uVar7 = plVar1[3] & 0xffffffff;
            do {
              if (uVar7 <= uVar4) goto code_r0x00d70a8c;
              if ((long *)plVar1[uVar4 + 4] != (long *)0x0) {
                lVar5 = *(long *)plVar1[uVar4 + 4];
                if ((lVar5 != _string_TypeInfo_12d5f28) &&
                   (lVar5 != _UnityEngine_AndroidJavaRunnable_TypeInfo_12d3750)) {
                  if ((*(byte *)(lVar5 + 300) <
                       *(byte *)(_UnityEngine_AndroidJavaProxy_TypeInfo_12d3748 + 300)) ||
                     (*(long *)(*(long *)(lVar5 + 200) +
                                (ulong)*(byte *)(_UnityEngine_AndroidJavaProxy_TypeInfo_12d3748 +
                                                300) * 8 + -8) !=
                      _UnityEngine_AndroidJavaProxy_TypeInfo_12d3748)) {
                    if ((*(byte *)(lVar5 + 300) < *(byte *)(_System_Array_TypeInfo_12d3820 + 300))
                       || (*(long *)(*(long *)(lVar5 + 200) +
                                     (ulong)*(byte *)(_System_Array_TypeInfo_12d3820 + 300) * 8 + -8
                                    ) != _System_Array_TypeInfo_12d3820)) goto code_r0x00d70a60;
                  }
                }
                if (lVar2 == 0) goto code_r0x00d70a98;
                if (*(uint *)(lVar2 + 0x18) <= uVar4) {
code_r0x00d70a8c:
                  uVar8 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar8,0);
                }
                native_UnityEngine_AndroidJNISafe__DeleteLocalRef_d71e88
                          (*(undefined8 *)(lVar2 + 0x20 + uVar4 * 8));
              }
code_r0x00d70a60:
              uVar7 = (ulong)*(uint *)(plVar1 + 3);
              uVar4 = uVar4 + 1;
            } while ((long)uVar4 < (long)(int)*(uint *)(plVar1 + 3));
          }
          return;
        }
code_r0x00d70a98:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
LAB_00dc41d8:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* HjdBluetoothHardwareInterface$$StopAdvertising @ 0xdc423c
 * void HjdBluetoothHardwareInterface__StopAdvertising (System_Action_string__o* action, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HjdBluetoothHardwareInterface$$StopAdvertising
   void HjdBluetoothHardwareInterface__StopAdvertising (System_Action_string__o* action, const
   MethodInfo* method); */

void native_HjdBluetoothHardwareInterface__StopAdvertising_dc423c(undefined8 param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  if ((bRam0000000001343d2d & 1) == 0) {
    native_sub_43273c(&Method_System_Array_Empty_object____12dedf0);
    native_sub_43273c(&HjdBluetoothHardwareInterface_TypeInfo_12d4938);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_androidStopAdvertising_12f3998);
    bRam0000000001343d2d = 1;
  }
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar8 = *(undefined8 *)(*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) + 8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
  if ((uVar3 & 1) != 0) {
    if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar4 = *(long *)(*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) + 8);
    if (lVar4 == 0) goto LAB_00dc4438;
    puVar5 = (undefined8 *)(lVar4 + 0x30);
    *puVar5 = param_1;
    native_sub_4326e0(puVar5,param_1);
  }
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar4 = **(long **)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8);
  if (lVar4 == 0) {
    return;
  }
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
    lVar4 = **(long **)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8);
  }
  lVar10 = _Method_System_Array_Empty_object____12dedf0;
  lVar9 = **(long **)(_Method_System_Array_Empty_object____12dedf0 + 0x30);
  uVar1 = *(ushort *)(lVar9 + 0x132);
  if ((uVar1 & 1) == 0) {
    native_sub_3c9850(lVar9);
    uVar1 = *(ushort *)(lVar9 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar9 = **(long **)(lVar10 + 0x30);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      native_sub_3c9850(lVar9);
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      lVar9 = **(long **)(lVar10 + 0x30);
      if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
        native_sub_3c9850(lVar9);
      }
      native_sub_4327ec(lVar9);
    }
  }
  lVar10 = **(long **)(lVar10 + 0x30);
  if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
    native_sub_3c9850(lVar10);
  }
  uVar8 = _StringLiteral_androidStopAdvertising_12f3998;
  if (lVar4 != 0) {
    lVar10 = **(long **)(lVar10 + 0xb8);
    if ((bRam0000000001343116 & 1) == 0) {
      native_sub_43273c(&object___TypeInfo_12d32d8,_StringLiteral_androidStopAdvertising_12f3998,
                        lVar10,0);
      bRam0000000001343116 = 1;
    }
    if (lVar10 == 0) {
      lVar10 = native_sub_432750(_object___TypeInfo_12d32d8,1);
    }
    if (*(long *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar11 = *(undefined8 *)(*(long *)(lVar4 + 0x18) + 0x18);
    uVar2 = native_UnityEngine__AndroidJNIHelper__GetSignature_d719ec(lVar10);
    uVar8 = native_UnityEngine__AndroidJNIHelper__GetMethodID_d6efec(uVar11,uVar8,uVar2,0);
    lVar9 = native_UnityEngine__AndroidJNIHelper__CreateJNIArgArray_d70340(lVar10);
    if (*(long *)(lVar4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_UnityEngine_AndroidJNISafe__CallVoidMethod_d74300
              (*(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x18),uVar8,lVar9);
    if ((bRam000000000134313b & 1) == 0) {
      native_sub_43273c(&UnityEngine_AndroidJavaProxy_TypeInfo_12d3748);
      native_sub_43273c(&UnityEngine_AndroidJavaRunnable_TypeInfo_12d3750);
      native_sub_43273c(&System_Array_TypeInfo_12d3820);
      native_sub_43273c(&string_TypeInfo_12d5f28);
      bRam000000000134313b = 1;
    }
    if (lVar10 != 0) {
      if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
        uVar3 = 0;
        uVar6 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
        do {
          if (uVar6 <= uVar3) goto code_r0x00d70a8c;
          plVar7 = *(long **)(lVar10 + 0x20 + uVar3 * 8);
          if (plVar7 != (long *)0x0) {
            lVar4 = *plVar7;
            if ((lVar4 != _string_TypeInfo_12d5f28) &&
               (lVar4 != _UnityEngine_AndroidJavaRunnable_TypeInfo_12d3750)) {
              if ((*(byte *)(lVar4 + 300) <
                   *(byte *)(_UnityEngine_AndroidJavaProxy_TypeInfo_12d3748 + 300)) ||
                 (*(long *)(*(long *)(lVar4 + 200) +
                            (ulong)*(byte *)(_UnityEngine_AndroidJavaProxy_TypeInfo_12d3748 + 300) *
                            8 + -8) != _UnityEngine_AndroidJavaProxy_TypeInfo_12d3748)) {
                if ((*(byte *)(lVar4 + 300) < *(byte *)(_System_Array_TypeInfo_12d3820 + 300)) ||
                   (*(long *)(*(long *)(lVar4 + 200) +
                              (ulong)*(byte *)(_System_Array_TypeInfo_12d3820 + 300) * 8 + -8) !=
                    _System_Array_TypeInfo_12d3820)) goto code_r0x00d70a60;
              }
            }
            if (lVar9 == 0) goto code_r0x00d70a98;
            if (*(uint *)(lVar9 + 0x18) <= uVar3) {
code_r0x00d70a8c:
              uVar8 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar8,0);
            }
            native_UnityEngine_AndroidJNISafe__DeleteLocalRef_d71e88
                      (*(undefined8 *)(lVar9 + 0x20 + uVar3 * 8));
          }
code_r0x00d70a60:
          uVar6 = (ulong)*(uint *)(lVar10 + 0x18);
          uVar3 = uVar3 + 1;
        } while ((long)uVar3 < (long)(int)*(uint *)(lVar10 + 0x18));
      }
      return;
    }
code_r0x00d70a98:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
LAB_00dc4438:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* HjdBluetoothHardwareInterface$$StartingScanToGetData @ 0xdc443c
 * void HjdBluetoothHardwareInterface__StartingScanToGetData (System_Action_string__o* action, System_Action_string__o* dataaction, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HjdBluetoothHardwareInterface$$StartingScanToGetData
   void HjdBluetoothHardwareInterface__StartingScanToGetData (System_Action_string__o* action,
   System_Action_string__o* dataaction, const MethodInfo* method); */

void native_HjdBluetoothHardwareInterface__StartingScanToGetData_dc443c
               (undefined8 param_1,undefined8 param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((bRam0000000001343d2e & 1) == 0) {
    native_sub_43273c(&Method_System_Array_Empty_object____12dedf0);
    native_sub_43273c(&HjdBluetoothHardwareInterface_TypeInfo_12d4938);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_androidBluetoothStartingScan_12f3980);
    bRam0000000001343d2e = 1;
  }
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = *(undefined8 *)(*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) + 8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
  if ((uVar3 & 1) != 0) {
    if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar4 = *(long *)(*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) + 8);
    if (lVar4 == 0) goto LAB_00dc4658;
    puVar5 = (undefined8 *)(lVar4 + 0x38);
    *puVar5 = param_1;
    native_sub_4326e0(puVar5,param_1);
    lVar4 = *(long *)(*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) + 8);
    if (lVar4 == 0) goto LAB_00dc4658;
    puVar5 = (undefined8 *)(lVar4 + 0x48);
    *puVar5 = param_2;
    native_sub_4326e0(puVar5,param_2);
  }
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar4 = **(long **)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8);
  if (lVar4 == 0) {
    return;
  }
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
    lVar4 = **(long **)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8);
  }
  lVar9 = _Method_System_Array_Empty_object____12dedf0;
  lVar8 = **(long **)(_Method_System_Array_Empty_object____12dedf0 + 0x30);
  uVar1 = *(ushort *)(lVar8 + 0x132);
  if ((uVar1 & 1) == 0) {
    native_sub_3c9850(lVar8);
    uVar1 = *(ushort *)(lVar8 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar8 = **(long **)(lVar9 + 0x30);
    if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
      native_sub_3c9850(lVar8);
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      lVar8 = **(long **)(lVar9 + 0x30);
      if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
        native_sub_3c9850(lVar8);
      }
      native_sub_4327ec(lVar8);
    }
  }
  lVar9 = **(long **)(lVar9 + 0x30);
  if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
    native_sub_3c9850(lVar9);
  }
  uVar10 = _StringLiteral_androidBluetoothStartingScan_12f3980;
  if (lVar4 != 0) {
    lVar9 = **(long **)(lVar9 + 0xb8);
    if ((bRam0000000001343116 & 1) == 0) {
      native_sub_43273c(&object___TypeInfo_12d32d8,
                        _StringLiteral_androidBluetoothStartingScan_12f3980,lVar9,0);
      bRam0000000001343116 = 1;
    }
    if (lVar9 == 0) {
      lVar9 = native_sub_432750(_object___TypeInfo_12d32d8,1);
    }
    if (*(long *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar11 = *(undefined8 *)(*(long *)(lVar4 + 0x18) + 0x18);
    uVar2 = native_UnityEngine__AndroidJNIHelper__GetSignature_d719ec(lVar9);
    uVar10 = native_UnityEngine__AndroidJNIHelper__GetMethodID_d6efec(uVar11,uVar10,uVar2,0);
    lVar8 = native_UnityEngine__AndroidJNIHelper__CreateJNIArgArray_d70340(lVar9);
    if (*(long *)(lVar4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_UnityEngine_AndroidJNISafe__CallVoidMethod_d74300
              (*(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x18),uVar10,lVar8);
    if ((bRam000000000134313b & 1) == 0) {
      native_sub_43273c(&UnityEngine_AndroidJavaProxy_TypeInfo_12d3748);
      native_sub_43273c(&UnityEngine_AndroidJavaRunnable_TypeInfo_12d3750);
      native_sub_43273c(&System_Array_TypeInfo_12d3820);
      native_sub_43273c(&string_TypeInfo_12d5f28);
      bRam000000000134313b = 1;
    }
    if (lVar9 != 0) {
      if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
        uVar3 = 0;
        uVar6 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
        do {
          if (uVar6 <= uVar3) goto code_r0x00d70a8c;
          plVar7 = *(long **)(lVar9 + 0x20 + uVar3 * 8);
          if (plVar7 != (long *)0x0) {
            lVar4 = *plVar7;
            if ((lVar4 != _string_TypeInfo_12d5f28) &&
               (lVar4 != _UnityEngine_AndroidJavaRunnable_TypeInfo_12d3750)) {
              if ((*(byte *)(lVar4 + 300) <
                   *(byte *)(_UnityEngine_AndroidJavaProxy_TypeInfo_12d3748 + 300)) ||
                 (*(long *)(*(long *)(lVar4 + 200) +
                            (ulong)*(byte *)(_UnityEngine_AndroidJavaProxy_TypeInfo_12d3748 + 300) *
                            8 + -8) != _UnityEngine_AndroidJavaProxy_TypeInfo_12d3748)) {
                if ((*(byte *)(lVar4 + 300) < *(byte *)(_System_Array_TypeInfo_12d3820 + 300)) ||
                   (*(long *)(*(long *)(lVar4 + 200) +
                              (ulong)*(byte *)(_System_Array_TypeInfo_12d3820 + 300) * 8 + -8) !=
                    _System_Array_TypeInfo_12d3820)) goto code_r0x00d70a60;
              }
            }
            if (lVar8 == 0) goto code_r0x00d70a98;
            if (*(uint *)(lVar8 + 0x18) <= uVar3) {
code_r0x00d70a8c:
              uVar10 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar10,0);
            }
            native_UnityEngine_AndroidJNISafe__DeleteLocalRef_d71e88
                      (*(undefined8 *)(lVar8 + 0x20 + uVar3 * 8));
          }
code_r0x00d70a60:
          uVar6 = (ulong)*(uint *)(lVar9 + 0x18);
          uVar3 = uVar3 + 1;
        } while ((long)uVar3 < (long)(int)*(uint *)(lVar9 + 0x18));
      }
      return;
    }
code_r0x00d70a98:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
LAB_00dc4658:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* HjdBluetoothHardwareInterface$$StopScanToGetData @ 0xdc465c
 * void HjdBluetoothHardwareInterface__StopScanToGetData (System_Action_string__o* action, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HjdBluetoothHardwareInterface$$StopScanToGetData
   void HjdBluetoothHardwareInterface__StopScanToGetData (System_Action_string__o* action, const
   MethodInfo* method); */

void native_HjdBluetoothHardwareInterface__StopScanToGetData_dc465c(undefined8 param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  if ((bRam0000000001343d2f & 1) == 0) {
    native_sub_43273c(&Method_System_Array_Empty_object____12dedf0);
    native_sub_43273c(&HjdBluetoothHardwareInterface_TypeInfo_12d4938);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_androidBluetoothStopScan_12f3988);
    bRam0000000001343d2f = 1;
  }
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar8 = *(undefined8 *)(*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) + 8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
  if ((uVar3 & 1) != 0) {
    if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar4 = *(long *)(*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) + 8);
    if (lVar4 == 0) goto LAB_00dc4858;
    puVar5 = (undefined8 *)(lVar4 + 0x40);
    *puVar5 = param_1;
    native_sub_4326e0(puVar5,param_1);
  }
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar4 = **(long **)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8);
  if (lVar4 == 0) {
    return;
  }
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
    lVar4 = **(long **)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8);
  }
  lVar10 = _Method_System_Array_Empty_object____12dedf0;
  lVar9 = **(long **)(_Method_System_Array_Empty_object____12dedf0 + 0x30);
  uVar1 = *(ushort *)(lVar9 + 0x132);
  if ((uVar1 & 1) == 0) {
    native_sub_3c9850(lVar9);
    uVar1 = *(ushort *)(lVar9 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar9 = **(long **)(lVar10 + 0x30);
    if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
      native_sub_3c9850(lVar9);
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      lVar9 = **(long **)(lVar10 + 0x30);
      if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
        native_sub_3c9850(lVar9);
      }
      native_sub_4327ec(lVar9);
    }
  }
  lVar10 = **(long **)(lVar10 + 0x30);
  if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
    native_sub_3c9850(lVar10);
  }
  uVar8 = _StringLiteral_androidBluetoothStopScan_12f3988;
  if (lVar4 != 0) {
    lVar10 = **(long **)(lVar10 + 0xb8);
    if ((bRam0000000001343116 & 1) == 0) {
      native_sub_43273c(&object___TypeInfo_12d32d8,_StringLiteral_androidBluetoothStopScan_12f3988,
                        lVar10,0);
      bRam0000000001343116 = 1;
    }
    if (lVar10 == 0) {
      lVar10 = native_sub_432750(_object___TypeInfo_12d32d8,1);
    }
    if (*(long *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar11 = *(undefined8 *)(*(long *)(lVar4 + 0x18) + 0x18);
    uVar2 = native_UnityEngine__AndroidJNIHelper__GetSignature_d719ec(lVar10);
    uVar8 = native_UnityEngine__AndroidJNIHelper__GetMethodID_d6efec(uVar11,uVar8,uVar2,0);
    lVar9 = native_UnityEngine__AndroidJNIHelper__CreateJNIArgArray_d70340(lVar10);
    if (*(long *)(lVar4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_UnityEngine_AndroidJNISafe__CallVoidMethod_d74300
              (*(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x18),uVar8,lVar9);
    if ((bRam000000000134313b & 1) == 0) {
      native_sub_43273c(&UnityEngine_AndroidJavaProxy_TypeInfo_12d3748);
      native_sub_43273c(&UnityEngine_AndroidJavaRunnable_TypeInfo_12d3750);
      native_sub_43273c(&System_Array_TypeInfo_12d3820);
      native_sub_43273c(&string_TypeInfo_12d5f28);
      bRam000000000134313b = 1;
    }
    if (lVar10 != 0) {
      if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
        uVar3 = 0;
        uVar6 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
        do {
          if (uVar6 <= uVar3) goto code_r0x00d70a8c;
          plVar7 = *(long **)(lVar10 + 0x20 + uVar3 * 8);
          if (plVar7 != (long *)0x0) {
            lVar4 = *plVar7;
            if ((lVar4 != _string_TypeInfo_12d5f28) &&
               (lVar4 != _UnityEngine_AndroidJavaRunnable_TypeInfo_12d3750)) {
              if ((*(byte *)(lVar4 + 300) <
                   *(byte *)(_UnityEngine_AndroidJavaProxy_TypeInfo_12d3748 + 300)) ||
                 (*(long *)(*(long *)(lVar4 + 200) +
                            (ulong)*(byte *)(_UnityEngine_AndroidJavaProxy_TypeInfo_12d3748 + 300) *
                            8 + -8) != _UnityEngine_AndroidJavaProxy_TypeInfo_12d3748)) {
                if ((*(byte *)(lVar4 + 300) < *(byte *)(_System_Array_TypeInfo_12d3820 + 300)) ||
                   (*(long *)(*(long *)(lVar4 + 200) +
                              (ulong)*(byte *)(_System_Array_TypeInfo_12d3820 + 300) * 8 + -8) !=
                    _System_Array_TypeInfo_12d3820)) goto code_r0x00d70a60;
              }
            }
            if (lVar9 == 0) goto code_r0x00d70a98;
            if (*(uint *)(lVar9 + 0x18) <= uVar3) {
code_r0x00d70a8c:
              uVar8 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar8,0);
            }
            native_UnityEngine_AndroidJNISafe__DeleteLocalRef_d71e88
                      (*(undefined8 *)(lVar9 + 0x20 + uVar3 * 8));
          }
code_r0x00d70a60:
          uVar6 = (ulong)*(uint *)(lVar10 + 0x18);
          uVar3 = uVar3 + 1;
        } while ((long)uVar3 < (long)(int)*(uint *)(lVar10 + 0x18));
      }
      return;
    }
code_r0x00d70a98:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
LAB_00dc4858:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* HjdBluetoothHardwareInterface$$cal_AndroidBle_sumdata @ 0xdc41dc
 * System_Byte_array* HjdBluetoothHardwareInterface__cal_AndroidBle_sumdata (System_Byte_array* bledata, const MethodInfo* method); */

/* HjdBluetoothHardwareInterface$$cal_AndroidBle_sumdata
   System_Byte_array* HjdBluetoothHardwareInterface__cal_AndroidBle_sumdata (System_Byte_array*
   bledata, const MethodInfo* method); */

void native_HjdBluetoothHardwareInterface__cal_AndroidBle_sumdata_dc41dc(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  byte bVar3;
  ulong uVar4;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  bVar3 = 0xe9;
  uVar4 = 0;
  do {
    if ((*(ulong *)(param_1 + 0x18) & 0xffffffff) <= uVar4) goto LAB_00dc422c;
    bVar3 = *(byte *)(param_1 + uVar4 + 0x20) ^ bVar3;
    bVar1 = uVar4 < 0x11;
    uVar4 = uVar4 + 1;
  } while (bVar1);
  if (0x12 < (uint)*(ulong *)(param_1 + 0x18)) {
    *(byte *)(param_1 + 0x32) = bVar3;
    return;
  }
LAB_00dc422c:
  uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar2,0);
}



/* HjdBluetoothHardwareInterface$$calDataIsTrue @ 0xdc485c
 * bool HjdBluetoothHardwareInterface__calDataIsTrue (System_Byte_array* codes, uint8_t machine_type, uint8_t revice_duima, uint8_t machine_a, uint8_t machine_b, uint8_t machine_c, System_Byte_array* resultdata, const MethodInfo* method); */

/* HjdBluetoothHardwareInterface$$calDataIsTrue
   bool HjdBluetoothHardwareInterface__calDataIsTrue (System_Byte_array* codes, uint8_t
   machine_type, uint8_t revice_duima, uint8_t machine_a, uint8_t machine_b, uint8_t machine_c,
   System_Byte_array* resultdata, const MethodInfo* method); */

undefined8
native_HjdBluetoothHardwareInterface__calDataIsTrue_dc485c
          (long param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
          long param_7)

{
  undefined8 uVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      return 0;
    }
    uVar2 = (uint)*(long *)(param_1 + 0x18);
    if (uVar2 != 0) {
      if (*(char *)(param_1 + 0x20) != '\x16') {
        return 0;
      }
      if (4 < uVar2) {
        if (*(char *)(param_1 + 0x24) != param_2) {
          return 0;
        }
        if (5 < uVar2) {
          if (*(char *)(param_1 + 0x25) != param_3) {
            return 0;
          }
          if (9 < uVar2) {
            if (*(char *)(param_1 + 0x29) != param_4) {
              return 0;
            }
            if (10 < uVar2) {
              if (*(char *)(param_1 + 0x2a) != param_5) {
                return 0;
              }
              if (0xb < uVar2) {
                if (*(char *)(param_1 + 0x2b) != param_6) {
                  return 0;
                }
                if (0xc < uVar2) {
                  if (param_7 == 0) goto LAB_00dc493c;
                  if (((*(uint *)(param_7 + 0x18) != 0) &&
                      (*(undefined1 *)(param_7 + 0x20) = *(undefined1 *)(param_1 + 0x2c),
                      0xd < *(uint *)(param_1 + 0x18))) && (1 < *(uint *)(param_7 + 0x18))) {
                    *(undefined1 *)(param_7 + 0x21) = *(undefined1 *)(param_1 + 0x2d);
                    return 1;
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar1 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar1,0);
  }
LAB_00dc493c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* HjdBluetoothHardwareInterface$$bleuseNumber @ 0xdc4940
 * int32_t HjdBluetoothHardwareInterface__bleuseNumber (const MethodInfo* method); */

/* HjdBluetoothHardwareInterface$$bleuseNumber
   int32_t HjdBluetoothHardwareInterface__bleuseNumber (const MethodInfo* method); */

undefined8 native_HjdBluetoothHardwareInterface__bleuseNumber_dc4940(void)

{
  return 6;
}



/* HjdBluetoothHardwareInterface$$.ctor @ 0xdc4948
 * void HjdBluetoothHardwareInterface___ctor (HjdBluetoothHardwareInterface_o* __this, const MethodInfo* method); */

/* HjdBluetoothHardwareInterface$$.ctor
   void HjdBluetoothHardwareInterface___ctor (HjdBluetoothHardwareInterface_o* __this, const
   MethodInfo* method); */

void native_HjdBluetoothHardwareInterface___ctor_dc4948(void)

{
  return;
}



/* HjdBluetoothHardwareInterface$$.cctor @ 0xdc4950
 * void HjdBluetoothHardwareInterface___cctor (const MethodInfo* method); */

/* HjdBluetoothHardwareInterface$$.cctor
   void HjdBluetoothHardwareInterface___cctor (const MethodInfo* method); */

void native_HjdBluetoothHardwareInterface___cctor_dc4950(void)

{
  return;
}


