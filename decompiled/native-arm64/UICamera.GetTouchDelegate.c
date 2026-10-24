/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UICamera.GetTouchDelegate$$.ctor @ 0x551ab4
 * void UICamera_GetTouchDelegate___ctor (UICamera_GetTouchDelegate_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method); */

/* UICamera.GetTouchDelegate$$.ctor
   void UICamera_GetTouchDelegate___ctor (UICamera_GetTouchDelegate_o* __this, Il2CppObject* object,
   intptr_t method, const MethodInfo* method); */

void native_UICamera_GetTouchDelegate___ctor_551ab4(long param_1,long param_2,undefined8 *param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  
  if ((param_2 == 0) && (uVar4 = native_sub_432768(param_3), (uVar4 & 1) == 0)) {
    uVar5 = native_sub_43281c(0,&UNK_00e1991c);
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar5,0);
  }
  uVar5 = *param_3;
  plVar6 = (long *)(param_1 + 0x20);
  *plVar6 = param_2;
  *(undefined8 **)(param_1 + 0x28) = param_3;
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)plVar6 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar6 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* UICamera.GetTouchDelegate$$Invoke @ 0x551b20
 * UICamera_MouseOrTouch_o* UICamera_GetTouchDelegate__Invoke (UICamera_GetTouchDelegate_o* __this, int32_t id, bool createIfMissing, const MethodInfo* method); */

/* UICamera.GetTouchDelegate$$Invoke
   UICamera_MouseOrTouch_o* UICamera_GetTouchDelegate__Invoke (UICamera_GetTouchDelegate_o* __this,
   int32_t id, bool createIfMissing, const MethodInfo* method); */

undefined8
native_UICamera_GetTouchDelegate__Invoke_551b20(long param_1,undefined4 param_2,uint param_3)

{
  long *plVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  code *pcVar11;
  long lVar12;
  long *plVar13;
  long lStack_58;
  
  lStack_58 = param_1;
  lVar8 = *(long *)(param_1 + 0x68);
  if (lVar8 == 0) {
    plVar13 = &lStack_58;
    lVar12 = 1;
  }
  else {
    lVar12 = *(long *)(lVar8 + 0x18);
    if (lVar12 == 0) {
      return 0;
    }
    plVar13 = (long *)(lVar8 + 0x20);
  }
  lVar8 = 0;
  do {
    lVar9 = plVar13[lVar8];
    plVar1 = *(long **)(lVar9 + 0x20);
    lVar3 = *(long *)(lVar9 + 0x28);
    pcVar11 = *(code **)(lVar9 + 0x10);
    if (*(short *)(lVar3 + 0x48) == -1) {
      native_sub_4327f4(lVar3);
    }
    uVar5 = native_sub_432768(lVar3);
    if ((uVar5 & 1) == 0) {
      if ((((plVar1 == (long *)0x0) || (*(short *)(lVar3 + 0x48) == -1)) ||
          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(param_1 + 0x18) == 0))
      goto LAB_00551d24;
      uVar5 = native_sub_432760(lVar3);
      uVar7 = native_sub_432b64(lVar3);
      if ((uVar5 & 1) == 0) {
        uVar2 = *(ushort *)(lVar3 + 0x48);
        if ((uVar7 & 1) == 0) {
          lVar3 = *plVar1 + (ulong)uVar2 * 0x10;
          uVar6 = (**(code **)(lVar3 + 0x138))
                            (plVar1,param_2,param_3 & 1,*(undefined8 *)(lVar3 + 0x140));
          goto LAB_00551d38;
        }
        lVar3 = native_sub_432764(lVar3);
        lVar9 = *plVar1;
        if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
          uVar5 = 0;
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar3) {
              puVar4 = (undefined8 *)(lVar9 + (long)(int)(*piVar10 + (uint)uVar2) * 0x10 + 0x138);
              goto LAB_00551c38;
            }
            uVar5 = uVar5 + 1;
            piVar10 = piVar10 + 4;
          } while (uVar5 < *(ushort *)(lVar9 + 0x12a));
        }
        puVar4 = (undefined8 *)native_sub_3c9b34(plVar1,lVar3,(ulong)uVar2);
LAB_00551c38:
        pcVar11 = (code *)*puVar4;
        puVar4 = (undefined8 *)puVar4[1];
      }
      else {
        if ((uVar7 & 1) == 0) {
          uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar3 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar9 = *plVar1;
          if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
            uVar5 = 0;
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)(lVar3 + 0x18)) {
                lVar9 = lVar9 + (long)(int)(*piVar10 + (uint)*(ushort *)(lVar3 + 0x48)) * 0x10 +
                        0x138;
                goto LAB_00551c10;
              }
              uVar5 = uVar5 + 1;
              piVar10 = piVar10 + 4;
            } while (uVar5 < *(ushort *)(lVar9 + 0x12a));
          }
          lVar9 = native_sub_3c9b34(plVar1);
LAB_00551c10:
          uVar6 = *(undefined8 *)(lVar9 + 8);
        }
        puVar4 = (undefined8 *)native_sub_4327e8(uVar6,lVar3);
        pcVar11 = (code *)*puVar4;
      }
      uVar6 = (*pcVar11)(plVar1,param_2,param_3 & 1,puVar4);
    }
    else if (*(char *)(lVar3 + 0x4a) == '\x02') {
      uVar6 = (*pcVar11)(param_2,param_3 & 1,lVar3);
    }
    else {
LAB_00551d24:
      uVar6 = (*pcVar11)(plVar1,param_2,param_3 & 1,lVar3);
    }
LAB_00551d38:
    lVar8 = lVar8 + 1;
    if (lVar8 == lVar12) {
      return uVar6;
    }
  } while( true );
}



/* UICamera.GetTouchDelegate$$BeginInvoke @ 0x551d68
 * System_IAsyncResult_o* UICamera_GetTouchDelegate__BeginInvoke (UICamera_GetTouchDelegate_o* __this, int32_t id, bool createIfMissing, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera.GetTouchDelegate$$BeginInvoke
   System_IAsyncResult_o* UICamera_GetTouchDelegate__BeginInvoke (UICamera_GetTouchDelegate_o*
   __this, int32_t id, bool createIfMissing, System_AsyncCallback_o* callback, Il2CppObject* object,
   const MethodInfo* method); */

void native_UICamera_GetTouchDelegate__BeginInvoke_551d68
               (undefined8 param_1,undefined4 param_2,byte param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  byte abStack_38 [4];
  undefined4 uStack_34;
  
  abStack_38[0] = param_3 & 1;
  uStack_34 = param_2;
  if ((bRam000000000133e9f6 & 1) == 0) {
    native_sub_43273c(&bool_TypeInfo_12d3bd0);
    native_sub_43273c(&int_TypeInfo_12d4ec0);
    bRam000000000133e9f6 = 1;
  }
  uStack_40 = 0;
  uStack_50 = native_sub_4327fc(_int_TypeInfo_12d4ec0,&uStack_34);
  uStack_48 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,abStack_38);
  native_sub_4326e8(param_1,&uStack_50,param_4,param_5);
  return;
}



/* UICamera.GetTouchDelegate$$EndInvoke @ 0x551e20
 * UICamera_MouseOrTouch_o* UICamera_GetTouchDelegate__EndInvoke (UICamera_GetTouchDelegate_o* __this, System_IAsyncResult_o* result, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x003dee34) */
/* WARNING: Removing unreachable block (ram,0x003dee44) */
/* WARNING: Removing unreachable block (ram,0x003dee58) */
/* WARNING: Removing unreachable block (ram,0x003dee68) */
/* WARNING: Removing unreachable block (ram,0x003dee84) */
/* WARNING: Removing unreachable block (ram,0x003dee74) */
/* WARNING: Removing unreachable block (ram,0x003dee9c) */
/* WARNING: Removing unreachable block (ram,0x003deea4) */
/* UICamera.GetTouchDelegate$$EndInvoke
   UICamera_MouseOrTouch_o* UICamera_GetTouchDelegate__EndInvoke (UICamera_GetTouchDelegate_o*
   __this, System_IAsyncResult_o* result, const MethodInfo* method); */

undefined8
native_UICamera_GetTouchDelegate__EndInvoke_551e20
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  long lStack_58;
  undefined1 auStack_48 [8];
  
  plVar4 = &lStack_58;
  uVar1 = native_sub_42a148(param_2,auStack_48,plVar4);
  if (lStack_58 != 0) {
    auVar11 = func_0x002c9ce0(lStack_58);
    lVar3 = auVar11._8_8_;
    uVar1 = auVar11._0_8_;
    lVar9 = *(long *)(*(long *)(lVar3 + 0x10) + 0x10);
    if ((ulong)*(byte *)(lVar9 + 0x4a) == 0) {
      lVar10 = 0;
    }
    else {
      uVar7 = 0;
      iVar6 = 0;
      plVar8 = (long *)(*(long *)(lVar9 + 0x28) + 0x10);
      do {
        uVar7 = uVar7 + 1;
        iVar6 = (*(uint *)(*plVar8 + 8) >> 0x1e & 1) + iVar6;
        plVar8 = plVar8 + 3;
      } while (uVar7 < *(byte *)(lVar9 + 0x4a));
      lVar10 = (long)iVar6;
    }
    if (lRam0000000001345298 == 0) {
      lRam0000000001345298 = func_0x002ca490(uRam00000000013443f8,1);
      DataMemoryBarrier(2,3);
    }
    uVar2 = func_0x002c9550(lRam0000000001345298,lVar10);
    native_sub_42faf8(param_4,uVar2);
    native_sub_42faf8(plVar4,0);
    if ((*(byte *)(*(long *)(lVar9 + 0x18) + 0x132) >> 1 & 1) != 0) {
      uVar1 = func_0x002ca1b0(uVar1);
    }
    if (*(char *)(lVar9 + 0x4a) == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(lVar3 + 0x18);
    }
    uVar1 = native_sub_3dbf64(lVar9,uVar1,uVar2,plVar4);
    bVar5 = *(byte *)(lVar9 + 0x4a);
    if (bVar5 != 0) {
      uVar7 = 0;
      iVar6 = 0;
      lVar10 = 0x10;
      do {
        if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0x28) + lVar10) + 0xb) >> 6 & 1) != 0) {
          *(undefined8 *)(*param_4 + (long)iVar6 * 8 + 0x20) =
               *(undefined8 *)(*(long *)(lVar3 + 0x18) + uVar7 * 8 + 0x20);
          func_0x002c8640(*param_4);
          bVar5 = *(byte *)(lVar9 + 0x4a);
          iVar6 = iVar6 + 1;
        }
        uVar7 = uVar7 + 1;
        lVar10 = lVar10 + 0x18;
      } while (uVar7 < bVar5);
    }
    return uVar1;
  }
  return uVar1;
}


