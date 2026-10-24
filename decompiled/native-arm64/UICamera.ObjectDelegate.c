/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UICamera.ObjectDelegate$$.ctor @ 0x5527cc
 * void UICamera_ObjectDelegate___ctor (UICamera_ObjectDelegate_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method); */

/* UICamera.ObjectDelegate$$.ctor
   void UICamera_ObjectDelegate___ctor (UICamera_ObjectDelegate_o* __this, Il2CppObject* object,
   intptr_t method, const MethodInfo* method); */

void native_UICamera_ObjectDelegate___ctor_5527cc(long param_1,long param_2,undefined8 *param_3)

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



/* UICamera.ObjectDelegate$$Invoke @ 0x552838
 * void UICamera_ObjectDelegate__Invoke (UICamera_ObjectDelegate_o* __this, UnityEngine_GameObject_o* go, UnityEngine_GameObject_o* obj, const MethodInfo* method); */

/* UICamera.ObjectDelegate$$Invoke
   void UICamera_ObjectDelegate__Invoke (UICamera_ObjectDelegate_o* __this,
   UnityEngine_GameObject_o* go, UnityEngine_GameObject_o* obj, const MethodInfo* method); */

void native_UICamera_ObjectDelegate__Invoke_552838(long param_1,long *param_2,undefined8 param_3)

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
  int *piVar11;
  code *pcVar12;
  long lVar13;
  long *plVar14;
  long lStack_58;
  
  lStack_58 = param_1;
  lVar9 = *(long *)(param_1 + 0x68);
  if (lVar9 == 0) {
    plVar14 = &lStack_58;
    lVar13 = 1;
  }
  else {
    lVar13 = *(long *)(lVar9 + 0x18);
    if (lVar13 == 0) {
      return;
    }
    plVar14 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar10 = plVar14[lVar9];
    plVar1 = *(long **)(lVar10 + 0x20);
    lVar4 = *(long *)(lVar10 + 0x28);
    pcVar12 = *(code **)(lVar10 + 0x10);
    if (*(short *)(lVar4 + 0x48) == -1) {
      native_sub_4327f4(lVar4);
    }
    uVar7 = native_sub_432768(lVar4);
    bVar3 = *(char *)(lVar4 + 0x4a) != '\x02';
    if ((uVar7 & 1) == 0) {
      if (bVar3) {
        if ((*(short *)(lVar4 + 0x48) == -1) || (*(long *)(param_1 + 0x18) == 0)) goto LAB_00552b94;
        uVar7 = native_sub_432760(lVar4);
        uVar8 = native_sub_432b64(lVar4);
        if ((uVar7 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar8 & 1) == 0) {
            lVar4 = *param_2 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(param_2,param_3,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_00552ba4;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar10 = *param_2;
          if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
            uVar7 = 0;
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar10 + (long)(int)(*piVar11 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_005529b8;
              }
              uVar7 = uVar7 + 1;
              piVar11 = piVar11 + 4;
            } while (uVar7 < *(ushort *)(lVar10 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(param_2,lVar4,(ulong)uVar2);
LAB_005529b8:
          pcVar12 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar8 & 1) == 0) {
            uVar5 = *(undefined8 *)(*param_2 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar10 = *param_2;
            if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
              uVar7 = 0;
              piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar10 = lVar10 + (long)(int)(*piVar11 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_00552990;
                }
                uVar7 = uVar7 + 1;
                piVar11 = piVar11 + 4;
              } while (uVar7 < *(ushort *)(lVar10 + 0x12a));
            }
            lVar10 = native_sub_3c9b34(param_2);
LAB_00552990:
            uVar5 = *(undefined8 *)(lVar10 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar12 = (code *)*puVar6;
        }
        (*pcVar12)(param_2,param_3,puVar6);
      }
      else {
        if ((((plVar1 == (long *)0x0) || (*(short *)(lVar4 + 0x48) == -1)) ||
            ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(param_1 + 0x18) == 0))
        goto LAB_00552b04;
        uVar7 = native_sub_432760(lVar4);
        uVar8 = native_sub_432b64(lVar4);
        if ((uVar7 & 1) == 0) {
          uVar2 = *(ushort *)(lVar4 + 0x48);
          if ((uVar8 & 1) == 0) {
            lVar4 = *plVar1 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar4 + 0x138))(plVar1,param_2,param_3,*(undefined8 *)(lVar4 + 0x140));
            goto LAB_00552ba4;
          }
          lVar4 = native_sub_432764(lVar4);
          lVar10 = *plVar1;
          if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
            uVar7 = 0;
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar4) {
                puVar6 = (undefined8 *)(lVar10 + (long)(int)(*piVar11 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto LAB_00552a24;
              }
              uVar7 = uVar7 + 1;
              piVar11 = piVar11 + 4;
            } while (uVar7 < *(ushort *)(lVar10 + 0x12a));
          }
          puVar6 = (undefined8 *)native_sub_3c9b34(plVar1,lVar4,(ulong)uVar2);
LAB_00552a24:
          pcVar12 = (code *)*puVar6;
          puVar6 = (undefined8 *)puVar6[1];
        }
        else {
          if ((uVar8 & 1) == 0) {
            uVar5 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar4 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar10 = *plVar1;
            if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
              uVar7 = 0;
              piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)(lVar4 + 0x18)) {
                  lVar10 = lVar10 + (long)(int)(*piVar11 + (uint)*(ushort *)(lVar4 + 0x48)) * 0x10 +
                           0x138;
                  goto LAB_005529fc;
                }
                uVar7 = uVar7 + 1;
                piVar11 = piVar11 + 4;
              } while (uVar7 < *(ushort *)(lVar10 + 0x12a));
            }
            lVar10 = native_sub_3c9b34(plVar1);
LAB_005529fc:
            uVar5 = *(undefined8 *)(lVar10 + 8);
          }
          puVar6 = (undefined8 *)native_sub_4327e8(uVar5,lVar4);
          pcVar12 = (code *)*puVar6;
        }
        (*pcVar12)(plVar1,param_2,param_3,puVar6);
      }
    }
    else if (bVar3) {
LAB_00552b04:
      (*pcVar12)(plVar1,param_2,param_3,lVar4);
    }
    else {
LAB_00552b94:
      (*pcVar12)(param_2,param_3,lVar4);
    }
LAB_00552ba4:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar13) {
      return;
    }
  } while( true );
}



/* UICamera.ObjectDelegate$$BeginInvoke @ 0x552bcc
 * System_IAsyncResult_o* UICamera_ObjectDelegate__BeginInvoke (UICamera_ObjectDelegate_o* __this, UnityEngine_GameObject_o* go, UnityEngine_GameObject_o* obj, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method); */

/* UICamera.ObjectDelegate$$BeginInvoke
   System_IAsyncResult_o* UICamera_ObjectDelegate__BeginInvoke (UICamera_ObjectDelegate_o* __this,
   UnityEngine_GameObject_o* go, UnityEngine_GameObject_o* obj, System_AsyncCallback_o* callback,
   Il2CppObject* object, const MethodInfo* method); */

void native_UICamera_ObjectDelegate__BeginInvoke_552bcc
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  uStack_28 = param_2;
  uStack_20 = param_3;
  native_sub_4326e8(param_1,&uStack_28,param_4,param_5);
  return;
}



/* UICamera.ObjectDelegate$$EndInvoke @ 0x552bfc
 * void UICamera_ObjectDelegate__EndInvoke (UICamera_ObjectDelegate_o* __this, System_IAsyncResult_o* result, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x003dee34) */
/* WARNING: Removing unreachable block (ram,0x003dee44) */
/* WARNING: Removing unreachable block (ram,0x003dee58) */
/* WARNING: Removing unreachable block (ram,0x003dee68) */
/* WARNING: Removing unreachable block (ram,0x003dee84) */
/* WARNING: Removing unreachable block (ram,0x003dee74) */
/* WARNING: Removing unreachable block (ram,0x003dee9c) */
/* WARNING: Removing unreachable block (ram,0x003deea4) */
/* UICamera.ObjectDelegate$$EndInvoke
   void UICamera_ObjectDelegate__EndInvoke (UICamera_ObjectDelegate_o* __this,
   System_IAsyncResult_o* result, const MethodInfo* method); */

undefined8
native_UICamera_ObjectDelegate__EndInvoke_552bfc
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


