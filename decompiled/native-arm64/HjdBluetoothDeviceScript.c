/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* HjdBluetoothDeviceScript$$Start @ 0xdc36b8
 * void HjdBluetoothDeviceScript__Start (HjdBluetoothDeviceScript_o* __this, const MethodInfo* method); */

/* HjdBluetoothDeviceScript$$Start
   void HjdBluetoothDeviceScript__Start (HjdBluetoothDeviceScript_o* __this, const MethodInfo*
   method); */

void native_HjdBluetoothDeviceScript__Start_dc36b8(void)

{
  return;
}



/* HjdBluetoothDeviceScript$$OnInitReturn @ 0xdc36bc
 * void HjdBluetoothDeviceScript__OnInitReturn (HjdBluetoothDeviceScript_o* __this, System_String_o* msg, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HjdBluetoothDeviceScript$$OnInitReturn
   void HjdBluetoothDeviceScript__OnInitReturn (HjdBluetoothDeviceScript_o* __this, System_String_o*
   msg, const MethodInfo* method); */

void native_HjdBluetoothDeviceScript__OnInitReturn_dc36bc(long param_1,long *param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  code *pcVar13;
  long lVar14;
  long *plVar15;
  long lStack_58;
  
  if ((bRam0000000001343d23 & 1) == 0) {
    native_sub_43273c(&Method_System_Action_string__Invoke___12d7ff0);
    bRam0000000001343d23 = 1;
  }
  lVar9 = *(long *)(param_1 + 0x18);
  if (lVar9 == 0) {
    return;
  }
  lStack_58 = lVar9;
  lVar10 = *(long *)(lVar9 + 0x68);
  if (lVar10 == 0) {
    plVar15 = &lStack_58;
    lVar14 = 1;
  }
  else {
    lVar14 = *(long *)(lVar10 + 0x18);
    if (lVar14 == 0) {
      return;
    }
    plVar15 = (long *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar11 = plVar15[lVar10];
    plVar1 = *(long **)(lVar11 + 0x20);
    lVar4 = *(long *)(lVar11 + 0x28);
    pcVar13 = *(code **)(lVar11 + 0x10);
    if (*(short *)(lVar4 + 0x48) == -1) {
      native_sub_4327f4(lVar4);
    }
    uVar7 = native_sub_432768(lVar4);
    bVar3 = *(char *)(lVar4 + 0x4a) != '\x01';
    if ((uVar7 & 1) == 0) {
      if (bVar3) {
        if ((*(short *)(lVar4 + 0x48) == -1) || (*(long *)(lVar9 + 0x18) == 0))
        goto code_r0x00986b58;
        uVar7 = native_sub_432760(lVar4);
        uVar8 = native_sub_432b64(lVar4);
        if ((uVar7 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar8 & 1) == 0) {
            lVar4 = *param_2 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(param_2,*(undefined8 *)(lVar4 + 0x140));
            goto code_r0x00986b64;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *param_2;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar7 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x0098698c;
              }
              uVar7 = uVar7 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(param_2,lVar4,(ulong)uVar2);
code_r0x0098698c:
          pcVar13 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar8 & 1) == 0) {
            uVar5 = *(undefined8 *)(*param_2 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *param_2;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar7 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto code_r0x00986964;
                }
                uVar7 = uVar7 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(param_2);
code_r0x00986964:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar13 = (code *)*puVar6;
        }
        (*pcVar13)(param_2,puVar6);
      }
      else {
        if ((((plVar1 == (long *)0x0) || (*(short *)(lVar4 + 0x48) == -1)) ||
            ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar9 + 0x18) == 0))
        goto code_r0x00986acc;
        uVar7 = native_sub_432760(lVar4);
        uVar8 = native_sub_432b64(lVar4);
        if ((uVar7 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar8 & 1) == 0) {
            lVar4 = *plVar1 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar1,param_2,*(undefined8 *)(lVar4 + 0x140));
            goto code_r0x00986b64;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar1;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar7 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x009869f0;
              }
              uVar7 = uVar7 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar1,lVar4,(ulong)uVar2);
code_r0x009869f0:
          pcVar13 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar8 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar1;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar7 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto code_r0x009869c8;
                }
                uVar7 = uVar7 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar1);
code_r0x009869c8:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar13 = (code *)*puVar6;
        }
        (*pcVar13)(plVar1,param_2,puVar6);
      }
    }
    else if (bVar3) {
code_r0x00986acc:
      (*pcVar13)(plVar1,param_2,lVar4);
    }
    else {
code_r0x00986b58:
      (*pcVar13)(param_2,lVar4);
    }
code_r0x00986b64:
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar14) {
      return;
    }
  } while( true );
}



/* HjdBluetoothDeviceScript$$OnStartingAdvert @ 0xdc372c
 * void HjdBluetoothDeviceScript__OnStartingAdvert (HjdBluetoothDeviceScript_o* __this, System_String_o* msg, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HjdBluetoothDeviceScript$$OnStartingAdvert
   void HjdBluetoothDeviceScript__OnStartingAdvert (HjdBluetoothDeviceScript_o* __this,
   System_String_o* msg, const MethodInfo* method); */

void native_HjdBluetoothDeviceScript__OnStartingAdvert_dc372c(long param_1,long *param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  code *pcVar13;
  long lVar14;
  long *plVar15;
  long lStack_58;
  
  if ((bRam0000000001343d24 & 1) == 0) {
    native_sub_43273c(&Method_System_Action_string__Invoke___12d7ff0);
    bRam0000000001343d24 = 1;
  }
  lVar9 = *(long *)(param_1 + 0x28);
  if (lVar9 == 0) {
    return;
  }
  lStack_58 = lVar9;
  lVar10 = *(long *)(lVar9 + 0x68);
  if (lVar10 == 0) {
    plVar15 = &lStack_58;
    lVar14 = 1;
  }
  else {
    lVar14 = *(long *)(lVar10 + 0x18);
    if (lVar14 == 0) {
      return;
    }
    plVar15 = (long *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar11 = plVar15[lVar10];
    plVar1 = *(long **)(lVar11 + 0x20);
    lVar4 = *(long *)(lVar11 + 0x28);
    pcVar13 = *(code **)(lVar11 + 0x10);
    if (*(short *)(lVar4 + 0x48) == -1) {
      native_sub_4327f4(lVar4);
    }
    uVar7 = native_sub_432768(lVar4);
    bVar3 = *(char *)(lVar4 + 0x4a) != '\x01';
    if ((uVar7 & 1) == 0) {
      if (bVar3) {
        if ((*(short *)(lVar4 + 0x48) == -1) || (*(long *)(lVar9 + 0x18) == 0))
        goto code_r0x00986b58;
        uVar7 = native_sub_432760(lVar4);
        uVar8 = native_sub_432b64(lVar4);
        if ((uVar7 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar8 & 1) == 0) {
            lVar4 = *param_2 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(param_2,*(undefined8 *)(lVar4 + 0x140));
            goto code_r0x00986b64;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *param_2;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar7 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x0098698c;
              }
              uVar7 = uVar7 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(param_2,lVar4,(ulong)uVar2);
code_r0x0098698c:
          pcVar13 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar8 & 1) == 0) {
            uVar5 = *(undefined8 *)(*param_2 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *param_2;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar7 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto code_r0x00986964;
                }
                uVar7 = uVar7 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(param_2);
code_r0x00986964:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar13 = (code *)*puVar6;
        }
        (*pcVar13)(param_2,puVar6);
      }
      else {
        if ((((plVar1 == (long *)0x0) || (*(short *)(lVar4 + 0x48) == -1)) ||
            ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar9 + 0x18) == 0))
        goto code_r0x00986acc;
        uVar7 = native_sub_432760(lVar4);
        uVar8 = native_sub_432b64(lVar4);
        if ((uVar7 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar8 & 1) == 0) {
            lVar4 = *plVar1 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar1,param_2,*(undefined8 *)(lVar4 + 0x140));
            goto code_r0x00986b64;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar1;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar7 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x009869f0;
              }
              uVar7 = uVar7 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar1,lVar4,(ulong)uVar2);
code_r0x009869f0:
          pcVar13 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar8 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar1;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar7 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto code_r0x009869c8;
                }
                uVar7 = uVar7 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar1);
code_r0x009869c8:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar13 = (code *)*puVar6;
        }
        (*pcVar13)(plVar1,param_2,puVar6);
      }
    }
    else if (bVar3) {
code_r0x00986acc:
      (*pcVar13)(plVar1,param_2,lVar4);
    }
    else {
code_r0x00986b58:
      (*pcVar13)(param_2,lVar4);
    }
code_r0x00986b64:
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar14) {
      return;
    }
  } while( true );
}



/* HjdBluetoothDeviceScript$$OnStopAdvert @ 0xdc379c
 * void HjdBluetoothDeviceScript__OnStopAdvert (HjdBluetoothDeviceScript_o* __this, System_String_o* msg, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HjdBluetoothDeviceScript$$OnStopAdvert
   void HjdBluetoothDeviceScript__OnStopAdvert (HjdBluetoothDeviceScript_o* __this, System_String_o*
   msg, const MethodInfo* method); */

void native_HjdBluetoothDeviceScript__OnStopAdvert_dc379c(long param_1,long *param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  code *pcVar13;
  long lVar14;
  long *plVar15;
  long lStack_58;
  
  if ((bRam0000000001343d25 & 1) == 0) {
    native_sub_43273c(&Method_System_Action_string__Invoke___12d7ff0);
    bRam0000000001343d25 = 1;
  }
  lVar9 = *(long *)(param_1 + 0x30);
  if (lVar9 == 0) {
    return;
  }
  lStack_58 = lVar9;
  lVar10 = *(long *)(lVar9 + 0x68);
  if (lVar10 == 0) {
    plVar15 = &lStack_58;
    lVar14 = 1;
  }
  else {
    lVar14 = *(long *)(lVar10 + 0x18);
    if (lVar14 == 0) {
      return;
    }
    plVar15 = (long *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar11 = plVar15[lVar10];
    plVar1 = *(long **)(lVar11 + 0x20);
    lVar4 = *(long *)(lVar11 + 0x28);
    pcVar13 = *(code **)(lVar11 + 0x10);
    if (*(short *)(lVar4 + 0x48) == -1) {
      native_sub_4327f4(lVar4);
    }
    uVar7 = native_sub_432768(lVar4);
    bVar3 = *(char *)(lVar4 + 0x4a) != '\x01';
    if ((uVar7 & 1) == 0) {
      if (bVar3) {
        if ((*(short *)(lVar4 + 0x48) == -1) || (*(long *)(lVar9 + 0x18) == 0))
        goto code_r0x00986b58;
        uVar7 = native_sub_432760(lVar4);
        uVar8 = native_sub_432b64(lVar4);
        if ((uVar7 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar8 & 1) == 0) {
            lVar4 = *param_2 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(param_2,*(undefined8 *)(lVar4 + 0x140));
            goto code_r0x00986b64;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *param_2;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar7 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x0098698c;
              }
              uVar7 = uVar7 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(param_2,lVar4,(ulong)uVar2);
code_r0x0098698c:
          pcVar13 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar8 & 1) == 0) {
            uVar5 = *(undefined8 *)(*param_2 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *param_2;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar7 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto code_r0x00986964;
                }
                uVar7 = uVar7 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(param_2);
code_r0x00986964:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar13 = (code *)*puVar6;
        }
        (*pcVar13)(param_2,puVar6);
      }
      else {
        if ((((plVar1 == (long *)0x0) || (*(short *)(lVar4 + 0x48) == -1)) ||
            ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar9 + 0x18) == 0))
        goto code_r0x00986acc;
        uVar7 = native_sub_432760(lVar4);
        uVar8 = native_sub_432b64(lVar4);
        if ((uVar7 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar8 & 1) == 0) {
            lVar4 = *plVar1 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar1,param_2,*(undefined8 *)(lVar4 + 0x140));
            goto code_r0x00986b64;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar1;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar7 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x009869f0;
              }
              uVar7 = uVar7 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar1,lVar4,(ulong)uVar2);
code_r0x009869f0:
          pcVar13 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar8 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar1;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar7 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto code_r0x009869c8;
                }
                uVar7 = uVar7 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar1);
code_r0x009869c8:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar13 = (code *)*puVar6;
        }
        (*pcVar13)(plVar1,param_2,puVar6);
      }
    }
    else if (bVar3) {
code_r0x00986acc:
      (*pcVar13)(plVar1,param_2,lVar4);
    }
    else {
code_r0x00986b58:
      (*pcVar13)(param_2,lVar4);
    }
code_r0x00986b64:
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar14) {
      return;
    }
  } while( true );
}



/* HjdBluetoothDeviceScript$$OnStartingScan @ 0xdc380c
 * void HjdBluetoothDeviceScript__OnStartingScan (HjdBluetoothDeviceScript_o* __this, System_String_o* msg, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HjdBluetoothDeviceScript$$OnStartingScan
   void HjdBluetoothDeviceScript__OnStartingScan (HjdBluetoothDeviceScript_o* __this,
   System_String_o* msg, const MethodInfo* method); */

void native_HjdBluetoothDeviceScript__OnStartingScan_dc380c(long param_1,long *param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  code *pcVar13;
  long lVar14;
  long *plVar15;
  long lStack_58;
  
  if ((bRam0000000001343d26 & 1) == 0) {
    native_sub_43273c(&Method_System_Action_string__Invoke___12d7ff0);
    bRam0000000001343d26 = 1;
  }
  lVar9 = *(long *)(param_1 + 0x38);
  if (lVar9 == 0) {
    return;
  }
  lStack_58 = lVar9;
  lVar10 = *(long *)(lVar9 + 0x68);
  if (lVar10 == 0) {
    plVar15 = &lStack_58;
    lVar14 = 1;
  }
  else {
    lVar14 = *(long *)(lVar10 + 0x18);
    if (lVar14 == 0) {
      return;
    }
    plVar15 = (long *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar11 = plVar15[lVar10];
    plVar1 = *(long **)(lVar11 + 0x20);
    lVar4 = *(long *)(lVar11 + 0x28);
    pcVar13 = *(code **)(lVar11 + 0x10);
    if (*(short *)(lVar4 + 0x48) == -1) {
      native_sub_4327f4(lVar4);
    }
    uVar7 = native_sub_432768(lVar4);
    bVar3 = *(char *)(lVar4 + 0x4a) != '\x01';
    if ((uVar7 & 1) == 0) {
      if (bVar3) {
        if ((*(short *)(lVar4 + 0x48) == -1) || (*(long *)(lVar9 + 0x18) == 0))
        goto code_r0x00986b58;
        uVar7 = native_sub_432760(lVar4);
        uVar8 = native_sub_432b64(lVar4);
        if ((uVar7 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar8 & 1) == 0) {
            lVar4 = *param_2 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(param_2,*(undefined8 *)(lVar4 + 0x140));
            goto code_r0x00986b64;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *param_2;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar7 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x0098698c;
              }
              uVar7 = uVar7 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(param_2,lVar4,(ulong)uVar2);
code_r0x0098698c:
          pcVar13 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar8 & 1) == 0) {
            uVar5 = *(undefined8 *)(*param_2 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *param_2;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar7 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto code_r0x00986964;
                }
                uVar7 = uVar7 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(param_2);
code_r0x00986964:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar13 = (code *)*puVar6;
        }
        (*pcVar13)(param_2,puVar6);
      }
      else {
        if ((((plVar1 == (long *)0x0) || (*(short *)(lVar4 + 0x48) == -1)) ||
            ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar9 + 0x18) == 0))
        goto code_r0x00986acc;
        uVar7 = native_sub_432760(lVar4);
        uVar8 = native_sub_432b64(lVar4);
        if ((uVar7 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar8 & 1) == 0) {
            lVar4 = *plVar1 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar1,param_2,*(undefined8 *)(lVar4 + 0x140));
            goto code_r0x00986b64;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar1;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar7 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x009869f0;
              }
              uVar7 = uVar7 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar1,lVar4,(ulong)uVar2);
code_r0x009869f0:
          pcVar13 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar8 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar1;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar7 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto code_r0x009869c8;
                }
                uVar7 = uVar7 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar1);
code_r0x009869c8:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar13 = (code *)*puVar6;
        }
        (*pcVar13)(plVar1,param_2,puVar6);
      }
    }
    else if (bVar3) {
code_r0x00986acc:
      (*pcVar13)(plVar1,param_2,lVar4);
    }
    else {
code_r0x00986b58:
      (*pcVar13)(param_2,lVar4);
    }
code_r0x00986b64:
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar14) {
      return;
    }
  } while( true );
}



/* HjdBluetoothDeviceScript$$OnStopScan @ 0xdc387c
 * void HjdBluetoothDeviceScript__OnStopScan (HjdBluetoothDeviceScript_o* __this, System_String_o* msg, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HjdBluetoothDeviceScript$$OnStopScan
   void HjdBluetoothDeviceScript__OnStopScan (HjdBluetoothDeviceScript_o* __this, System_String_o*
   msg, const MethodInfo* method); */

void native_HjdBluetoothDeviceScript__OnStopScan_dc387c(long param_1,long *param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  code *pcVar13;
  long lVar14;
  long *plVar15;
  long lStack_58;
  
  if ((bRam0000000001343d27 & 1) == 0) {
    native_sub_43273c(&Method_System_Action_string__Invoke___12d7ff0);
    bRam0000000001343d27 = 1;
  }
  lVar9 = *(long *)(param_1 + 0x40);
  if (lVar9 == 0) {
    return;
  }
  lStack_58 = lVar9;
  lVar10 = *(long *)(lVar9 + 0x68);
  if (lVar10 == 0) {
    plVar15 = &lStack_58;
    lVar14 = 1;
  }
  else {
    lVar14 = *(long *)(lVar10 + 0x18);
    if (lVar14 == 0) {
      return;
    }
    plVar15 = (long *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar11 = plVar15[lVar10];
    plVar1 = *(long **)(lVar11 + 0x20);
    lVar4 = *(long *)(lVar11 + 0x28);
    pcVar13 = *(code **)(lVar11 + 0x10);
    if (*(short *)(lVar4 + 0x48) == -1) {
      native_sub_4327f4(lVar4);
    }
    uVar7 = native_sub_432768(lVar4);
    bVar3 = *(char *)(lVar4 + 0x4a) != '\x01';
    if ((uVar7 & 1) == 0) {
      if (bVar3) {
        if ((*(short *)(lVar4 + 0x48) == -1) || (*(long *)(lVar9 + 0x18) == 0))
        goto code_r0x00986b58;
        uVar7 = native_sub_432760(lVar4);
        uVar8 = native_sub_432b64(lVar4);
        if ((uVar7 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar8 & 1) == 0) {
            lVar4 = *param_2 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(param_2,*(undefined8 *)(lVar4 + 0x140));
            goto code_r0x00986b64;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *param_2;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar7 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x0098698c;
              }
              uVar7 = uVar7 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(param_2,lVar4,(ulong)uVar2);
code_r0x0098698c:
          pcVar13 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar8 & 1) == 0) {
            uVar5 = *(undefined8 *)(*param_2 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *param_2;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar7 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto code_r0x00986964;
                }
                uVar7 = uVar7 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(param_2);
code_r0x00986964:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar13 = (code *)*puVar6;
        }
        (*pcVar13)(param_2,puVar6);
      }
      else {
        if ((((plVar1 == (long *)0x0) || (*(short *)(lVar4 + 0x48) == -1)) ||
            ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar9 + 0x18) == 0))
        goto code_r0x00986acc;
        uVar7 = native_sub_432760(lVar4);
        uVar8 = native_sub_432b64(lVar4);
        if ((uVar7 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar8 & 1) == 0) {
            lVar4 = *plVar1 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar1,param_2,*(undefined8 *)(lVar4 + 0x140));
            goto code_r0x00986b64;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar1;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar7 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x009869f0;
              }
              uVar7 = uVar7 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar1,lVar4,(ulong)uVar2);
code_r0x009869f0:
          pcVar13 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar8 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar1;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar7 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto code_r0x009869c8;
                }
                uVar7 = uVar7 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar1);
code_r0x009869c8:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar13 = (code *)*puVar6;
        }
        (*pcVar13)(plVar1,param_2,puVar6);
      }
    }
    else if (bVar3) {
code_r0x00986acc:
      (*pcVar13)(plVar1,param_2,lVar4);
    }
    else {
code_r0x00986b58:
      (*pcVar13)(param_2,lVar4);
    }
code_r0x00986b64:
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar14) {
      return;
    }
  } while( true );
}



/* HjdBluetoothDeviceScript$$OnScanData @ 0xdc38ec
 * void HjdBluetoothDeviceScript__OnScanData (HjdBluetoothDeviceScript_o* __this, System_String_o* msg, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HjdBluetoothDeviceScript$$OnScanData
   void HjdBluetoothDeviceScript__OnScanData (HjdBluetoothDeviceScript_o* __this, System_String_o*
   msg, const MethodInfo* method); */

void native_HjdBluetoothDeviceScript__OnScanData_dc38ec(long param_1,long *param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  code *pcVar13;
  long lVar14;
  long *plVar15;
  long lStack_58;
  
  if ((bRam0000000001343d28 & 1) == 0) {
    native_sub_43273c(&Method_System_Action_string__Invoke___12d7ff0);
    bRam0000000001343d28 = 1;
  }
  lVar9 = *(long *)(param_1 + 0x48);
  if (lVar9 == 0) {
    return;
  }
  lStack_58 = lVar9;
  lVar10 = *(long *)(lVar9 + 0x68);
  if (lVar10 == 0) {
    plVar15 = &lStack_58;
    lVar14 = 1;
  }
  else {
    lVar14 = *(long *)(lVar10 + 0x18);
    if (lVar14 == 0) {
      return;
    }
    plVar15 = (long *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar11 = plVar15[lVar10];
    plVar1 = *(long **)(lVar11 + 0x20);
    lVar4 = *(long *)(lVar11 + 0x28);
    pcVar13 = *(code **)(lVar11 + 0x10);
    if (*(short *)(lVar4 + 0x48) == -1) {
      native_sub_4327f4(lVar4);
    }
    uVar7 = native_sub_432768(lVar4);
    bVar3 = *(char *)(lVar4 + 0x4a) != '\x01';
    if ((uVar7 & 1) == 0) {
      if (bVar3) {
        if ((*(short *)(lVar4 + 0x48) == -1) || (*(long *)(lVar9 + 0x18) == 0))
        goto code_r0x00986b58;
        uVar7 = native_sub_432760(lVar4);
        uVar8 = native_sub_432b64(lVar4);
        if ((uVar7 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar8 & 1) == 0) {
            lVar4 = *param_2 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(param_2,*(undefined8 *)(lVar4 + 0x140));
            goto code_r0x00986b64;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *param_2;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar7 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x0098698c;
              }
              uVar7 = uVar7 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(param_2,lVar4,(ulong)uVar2);
code_r0x0098698c:
          pcVar13 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar8 & 1) == 0) {
            uVar5 = *(undefined8 *)(*param_2 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *param_2;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar7 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto code_r0x00986964;
                }
                uVar7 = uVar7 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(param_2);
code_r0x00986964:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar13 = (code *)*puVar6;
        }
        (*pcVar13)(param_2,puVar6);
      }
      else {
        if ((((plVar1 == (long *)0x0) || (*(short *)(lVar4 + 0x48) == -1)) ||
            ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar9 + 0x18) == 0))
        goto code_r0x00986acc;
        uVar7 = native_sub_432760(lVar4);
        uVar8 = native_sub_432b64(lVar4);
        if ((uVar7 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar8 & 1) == 0) {
            lVar4 = *plVar1 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar1,param_2,*(undefined8 *)(lVar4 + 0x140));
            goto code_r0x00986b64;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar1;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar7 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x009869f0;
              }
              uVar7 = uVar7 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar1,lVar4,(ulong)uVar2);
code_r0x009869f0:
          pcVar13 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar8 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar1;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar7 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto code_r0x009869c8;
                }
                uVar7 = uVar7 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar1);
code_r0x009869c8:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar13 = (code *)*puVar6;
        }
        (*pcVar13)(plVar1,param_2,puVar6);
      }
    }
    else if (bVar3) {
code_r0x00986acc:
      (*pcVar13)(plVar1,param_2,lVar4);
    }
    else {
code_r0x00986b58:
      (*pcVar13)(param_2,lVar4);
    }
code_r0x00986b64:
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar14) {
      return;
    }
  } while( true );
}



/* HjdBluetoothDeviceScript$$OnDeInitReturn @ 0xdc395c
 * void HjdBluetoothDeviceScript__OnDeInitReturn (HjdBluetoothDeviceScript_o* __this, System_String_o* msg, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HjdBluetoothDeviceScript$$OnDeInitReturn
   void HjdBluetoothDeviceScript__OnDeInitReturn (HjdBluetoothDeviceScript_o* __this,
   System_String_o* msg, const MethodInfo* method); */

void native_HjdBluetoothDeviceScript__OnDeInitReturn_dc395c(long param_1,long *param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  code *pcVar13;
  long lVar14;
  long *plVar15;
  long lStack_58;
  
  if ((bRam0000000001343d29 & 1) == 0) {
    native_sub_43273c(&Method_System_Action_string__Invoke___12d7ff0);
    bRam0000000001343d29 = 1;
  }
  lVar9 = *(long *)(param_1 + 0x20);
  if (lVar9 == 0) {
    return;
  }
  lStack_58 = lVar9;
  lVar10 = *(long *)(lVar9 + 0x68);
  if (lVar10 == 0) {
    plVar15 = &lStack_58;
    lVar14 = 1;
  }
  else {
    lVar14 = *(long *)(lVar10 + 0x18);
    if (lVar14 == 0) {
      return;
    }
    plVar15 = (long *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar11 = plVar15[lVar10];
    plVar1 = *(long **)(lVar11 + 0x20);
    lVar4 = *(long *)(lVar11 + 0x28);
    pcVar13 = *(code **)(lVar11 + 0x10);
    if (*(short *)(lVar4 + 0x48) == -1) {
      native_sub_4327f4(lVar4);
    }
    uVar7 = native_sub_432768(lVar4);
    bVar3 = *(char *)(lVar4 + 0x4a) != '\x01';
    if ((uVar7 & 1) == 0) {
      if (bVar3) {
        if ((*(short *)(lVar4 + 0x48) == -1) || (*(long *)(lVar9 + 0x18) == 0))
        goto code_r0x00986b58;
        uVar7 = native_sub_432760(lVar4);
        uVar8 = native_sub_432b64(lVar4);
        if ((uVar7 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar8 & 1) == 0) {
            lVar4 = *param_2 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(param_2,*(undefined8 *)(lVar4 + 0x140));
            goto code_r0x00986b64;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *param_2;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar7 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x0098698c;
              }
              uVar7 = uVar7 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(param_2,lVar4,(ulong)uVar2);
code_r0x0098698c:
          pcVar13 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar8 & 1) == 0) {
            uVar5 = *(undefined8 *)(*param_2 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *param_2;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar7 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto code_r0x00986964;
                }
                uVar7 = uVar7 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(param_2);
code_r0x00986964:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar13 = (code *)*puVar6;
        }
        (*pcVar13)(param_2,puVar6);
      }
      else {
        if ((((plVar1 == (long *)0x0) || (*(short *)(lVar4 + 0x48) == -1)) ||
            ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar9 + 0x18) == 0))
        goto code_r0x00986acc;
        uVar7 = native_sub_432760(lVar4);
        uVar8 = native_sub_432b64(lVar4);
        if ((uVar7 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar8 & 1) == 0) {
            lVar4 = *plVar1 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar1,param_2,*(undefined8 *)(lVar4 + 0x140));
            goto code_r0x00986b64;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar11 = *plVar1;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar7 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x009869f0;
              }
              uVar7 = uVar7 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar1,lVar4,(ulong)uVar2);
code_r0x009869f0:
          pcVar13 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar8 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *plVar1;
            if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
              uVar7 = 0;
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto code_r0x009869c8;
                }
                uVar7 = uVar7 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
            }
            lVar11 = native_sub_3c9b34(plVar1);
code_r0x009869c8:
            uVar5 = *(undefined8 *)(lVar11 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar13 = (code *)*puVar6;
        }
        (*pcVar13)(plVar1,param_2,puVar6);
      }
    }
    else if (bVar3) {
code_r0x00986acc:
      (*pcVar13)(plVar1,param_2,lVar4);
    }
    else {
code_r0x00986b58:
      (*pcVar13)(param_2,lVar4);
    }
code_r0x00986b64:
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar14) {
      return;
    }
  } while( true );
}



/* HjdBluetoothDeviceScript$$Update @ 0xdc39cc
 * void HjdBluetoothDeviceScript__Update (HjdBluetoothDeviceScript_o* __this, const MethodInfo* method); */

/* HjdBluetoothDeviceScript$$Update
   void HjdBluetoothDeviceScript__Update (HjdBluetoothDeviceScript_o* __this, const MethodInfo*
   method); */

void native_HjdBluetoothDeviceScript__Update_dc39cc(void)

{
  return;
}



/* HjdBluetoothDeviceScript$$.ctor @ 0xdc39d0
 * void HjdBluetoothDeviceScript___ctor (HjdBluetoothDeviceScript_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HjdBluetoothDeviceScript$$.ctor
   void HjdBluetoothDeviceScript___ctor (HjdBluetoothDeviceScript_o* __this, const MethodInfo*
   method); */

undefined1  [16] native_HjdBluetoothDeviceScript___ctor_dc39d0(ulong param_1)

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


