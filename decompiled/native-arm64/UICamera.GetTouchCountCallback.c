/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UICamera.GetTouchCountCallback$$.ctor @ 0x5517dc
 * void UICamera_GetTouchCountCallback___ctor (UICamera_GetTouchCountCallback_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method); */

/* UICamera.GetTouchCountCallback$$.ctor
   void UICamera_GetTouchCountCallback___ctor (UICamera_GetTouchCountCallback_o* __this,
   Il2CppObject* object, intptr_t method, const MethodInfo* method); */

void native_UICamera_GetTouchCountCallback___ctor_5517dc
               (long param_1,long param_2,undefined8 *param_3)

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



/* UICamera.GetTouchCountCallback$$Invoke @ 0x551848
 * int32_t UICamera_GetTouchCountCallback__Invoke (UICamera_GetTouchCountCallback_o* __this, const MethodInfo* method); */

/* UICamera.GetTouchCountCallback$$Invoke
   int32_t UICamera_GetTouchCountCallback__Invoke (UICamera_GetTouchCountCallback_o* __this, const
   MethodInfo* method); */

undefined8 native_UICamera_GetTouchCountCallback__Invoke_551848(long param_1)

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
  long lStack_48;
  
  lStack_48 = param_1;
  lVar8 = *(long *)(param_1 + 0x68);
  if (lVar8 == 0) {
    plVar13 = &lStack_48;
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
      goto LAB_00551a24;
      uVar5 = native_sub_432760(lVar3);
      uVar7 = native_sub_432b64(lVar3);
      if ((uVar5 & 1) == 0) {
        uVar2 = *(ushort *)(lVar3 + 0x48);
        if ((uVar7 & 1) == 0) {
          lVar3 = *plVar1 + (ulong)uVar2 * 0x10;
          uVar6 = (**(code **)(lVar3 + 0x138))(plVar1,*(undefined8 *)(lVar3 + 0x140));
          goto LAB_00551a30;
        }
        lVar3 = native_sub_432764(lVar3);
        lVar9 = *plVar1;
        if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
          uVar5 = 0;
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar3) {
              puVar4 = (undefined8 *)(lVar9 + (long)(int)(*piVar10 + (uint)uVar2) * 0x10 + 0x138);
              goto LAB_0055194c;
            }
            uVar5 = uVar5 + 1;
            piVar10 = piVar10 + 4;
          } while (uVar5 < *(ushort *)(lVar9 + 0x12a));
        }
        puVar4 = (undefined8 *)native_sub_3c9b34(plVar1,lVar3,(ulong)uVar2);
LAB_0055194c:
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
                goto LAB_00551924;
              }
              uVar5 = uVar5 + 1;
              piVar10 = piVar10 + 4;
            } while (uVar5 < *(ushort *)(lVar9 + 0x12a));
          }
          lVar9 = native_sub_3c9b34(plVar1);
LAB_00551924:
          uVar6 = *(undefined8 *)(lVar9 + 8);
        }
        puVar4 = (undefined8 *)native_sub_4327e8(uVar6,lVar3);
        pcVar11 = (code *)*puVar4;
      }
      uVar6 = (*pcVar11)(plVar1,puVar4);
    }
    else if (*(char *)(lVar3 + 0x4a) == '\0') {
      uVar6 = (*pcVar11)(lVar3);
    }
    else {
LAB_00551a24:
      uVar6 = (*pcVar11)(plVar1,lVar3);
    }
LAB_00551a30:
    lVar8 = lVar8 + 1;
    if (lVar8 == lVar12) {
      return uVar6;
    }
  } while( true );
}



/* UICamera.GetTouchCountCallback$$BeginInvoke @ 0x551a5c
 * System_IAsyncResult_o* UICamera_GetTouchCountCallback__BeginInvoke (UICamera_GetTouchCountCallback_o* __this, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method); */

/* UICamera.GetTouchCountCallback$$BeginInvoke
   System_IAsyncResult_o* UICamera_GetTouchCountCallback__BeginInvoke
   (UICamera_GetTouchCountCallback_o* __this, System_AsyncCallback_o* callback, Il2CppObject*
   object, const MethodInfo* method); */

void native_UICamera_GetTouchCountCallback__BeginInvoke_551a5c
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = 0;
  native_sub_4326e8(param_1,&uStack_18,param_2,param_3);
  return;
}



/* UICamera.GetTouchCountCallback$$EndInvoke @ 0x551a88
 * int32_t UICamera_GetTouchCountCallback__EndInvoke (UICamera_GetTouchCountCallback_o* __this, System_IAsyncResult_o* result, const MethodInfo* method); */

/* UICamera.GetTouchCountCallback$$EndInvoke
   int32_t UICamera_GetTouchCountCallback__EndInvoke (UICamera_GetTouchCountCallback_o* __this,
   System_IAsyncResult_o* result, const MethodInfo* method); */

undefined4
native_UICamera_GetTouchCountCallback__EndInvoke_551a88(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 *puVar2;
  
  lVar1 = native_sub_4326ec(param_2,0);
  if (lVar1 != 0) {
    puVar2 = (undefined4 *)native_sub_432800();
    return *puVar2;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}


